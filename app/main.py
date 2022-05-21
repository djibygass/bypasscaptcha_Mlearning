import ctypes
import itertools

import numpy as np

Path_dll = "/Users/Gassama/pper/bypass_captcha/libs/MLP/cmake-build-debug/libMLP.dylib"

def test_dll(dll_path: str):
    my_dll = ctypes.CDLL(dll_path)

    npl = [2, 3, 1]

    npl_type = ctypes.c_int32 * len(npl)
    native_npl_array = npl_type(*npl)

    my_dll.create_mlp_model.argtypes = [npl_type, ctypes.c_int32]
    my_dll.create_mlp_model.restype = ctypes.c_void_p

    X = [[1.0, 2, 3], [4, 5, 6]]
    Y = [[1], [-1]]
    flattened_X = list(itertools.chain(*X))
    flattened_Y = list(itertools.chain(*Y))

    flattened_X_type = ctypes.c_float * len(flattened_X)
    native_flattened_X_array = flattened_X_type(*flattened_X)

    flattened_Y_type = ctypes.c_float * len(flattened_Y)
    native_flattened_Y_array = flattened_Y_type(*flattened_Y)

    my_dll.train_mlp_model.argtypes = [ctypes.c_void_p, flattened_X_type, ctypes.c_int32,
                                       ctypes.c_int32, flattened_Y_type, ctypes.c_int32,
                                       ctypes.c_int32, ctypes.c_float, ctypes.c_int32]
    my_dll.train_mlp_model.restype = ctypes.c_void_p

    predict_X_type = ctypes.c_float * len(X[0])
    native_predict_X = predict_X_type(*X[0])

    my_dll.predict_mlp_model.argtypes = [ctypes.c_void_p, predict_X_type, ctypes.c_int32, ctypes.c_int32]
    my_dll.predict_mlp_model.restype = ctypes.POINTER(ctypes.c_float)

    my_dll.destroy_mlp_model.argtypes = [ctypes.c_void_p]
    my_dll.destroy_mlp_model.restype = None

    model = my_dll.create_mlp_model(native_npl_array, len(npl))
    my_dll.train_mlp_model(model, native_flattened_X_array, len(X), len(X[0]),
                           native_flattened_Y_array, len(Y[0]), 1, 0.01, 1000)
    rslt = my_dll.predict_mlp_model(model, native_predict_X, len(X[0]), 1)
    # Todo : destroy float array when obsolete
    my_dll.destroy_mlp_model(model)

    my_dll.add.argtypes = [ctypes.c_int32, ctypes.c_int32]
    my_dll.add.restype = ctypes.c_int32

    print(my_dll.add(3, 4))

    arr = [1, 2, 3]

    arr_type = ctypes.c_int32 * len(arr)
    native_array = arr_type(*arr)

    my_dll.sum_array_elements.argtypes = [arr_type, ctypes.c_int32]
    my_dll.sum_array_elements.restype = ctypes.c_int32

    print(my_dll.sum_array_elements(native_array, len(arr)))

    my_dll.create_some_array.argtypes = []
    my_dll.create_some_array.restype = ctypes.POINTER(ctypes.c_int32)

    my_dll.destroy_some_array.argtypes = [ctypes.POINTER(ctypes.c_int32), ctypes.c_int32]
    my_dll.destroy_some_array.restype = None

    native_arr = my_dll.create_some_array()

    np_arr = np.ctypeslib.as_array(native_arr, (5,))
    print(np_arr)

    my_dll.destroy_some_array(native_arr, 5)


if __name__ == "__main__":
    print("Hello les 3A IABD1  ! :)")
    test_dll(Path_dll)
    #test_dll("F:/_2022_3A_IABD1_Demo_RustLib_Interop/target/debug/_2022_3A_IABD1_Demo_RustLib_Interop.dll")
