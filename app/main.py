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

    
if __name__ == "__main__":
    print("Hello les 3A IABD1  ! :)")
    test_dll(Path_dll)
    #test_dll("F:/_2022_3A_IABD1_Demo_RustLib_Interop/target/debug/_2022_3A_IABD1_Demo_RustLib_Interop.dll")
