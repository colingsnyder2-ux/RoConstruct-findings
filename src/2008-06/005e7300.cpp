// roc 2008-06 005e7300  unit: RBX::ModelInstance  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e7300
//
// 005e7300  ba01000000           mov edx, 1
// 005e7305  8415d0ab9700         test byte ptr [0x97abd0], dl
// 005e730b  7528                 jne 0x5e7335
// 005e730d  d905dc828200         fld dword ptr [0x8282dc]
// 005e7313  0915d0ab9700         or dword ptr [0x97abd0], edx
// 005e7319  d91dc8ab9700         fstp dword ptr [0x97abc8]
// 005e731f  c705c4ab970000000000 mov dword ptr [0x97abc4], 0
// 005e7329  d905ac9b8100         fld dword ptr [0x819bac]
// 005e732f  d91dccab9700         fstp dword ptr [0x97abcc]
// 005e7335  a1c4ab9700           mov eax, dword ptr [0x97abc4]
// 005e733a  3901                 cmp dword ptr [ecx], eax
// 005e733c  7523                 jne 0x5e7361
// 005e733e  d905c8ab9700         fld dword ptr [0x97abc8]
// 005e7344  d85904               fcomp dword ptr [ecx + 4]
// 005e7347  dfe0                 fnstsw ax
// 005e7349  f6c444               test ah, 0x44
// 005e734c  7a13                 jp 0x5e7361
// 005e734e  d905ccab9700         fld dword ptr [0x97abcc]
// 005e7354  d85908               fcomp dword ptr [ecx + 8]
// 005e7357  dfe0                 fnstsw ax
// 005e7359  f6c444               test ah, 0x44
// 005e735c  7a03                 jp 0x5e7361
// 005e735e  8bc2                 mov eax, edx
// 005e7360  c3                   ret 
// 005e7361  33c0                 xor eax, eax
// 005e7363  c3                   ret 
// library rbxgs-dll/v8world\Primitive.cpp (function ?isEmpty@SurfaceData@RBX@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll v8world/Primitive.cpp
