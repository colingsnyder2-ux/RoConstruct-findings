// roc 2007-08 0050bd70  unit: seg_00500000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050bd70
//
// 0050bd70  e83b46ffff           call 0x5003b0
// 0050bd75  33c9                 xor ecx, ecx
// 0050bd77  39442404             cmp dword ptr [esp + 4], eax
// 0050bd7b  0f95c1               setne cl
// 0050bd7e  8ac1                 mov al, cl
// 0050bd80  c3                   ret 
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?needSwapBytes@G3D@@YA_NW4G3DEndian@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
