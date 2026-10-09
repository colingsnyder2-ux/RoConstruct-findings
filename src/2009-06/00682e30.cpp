// roc 2009-06 00682e30  unit: RBX::Sky  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00682e30
//
// 00682e30  d9e8                 fld1 
// 00682e32  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00682e36  d9c0                 fld st(0)
// 00682e38  d819                 fcomp dword ptr [ecx]
// 00682e3a  dfe0                 fnstsw ax
// 00682e3c  f6c444               test ah, 0x44
// 00682e3f  7a05                 jp 0x682e46
// 00682e41  ddd8                 fstp st(0)
// 00682e43  33c0                 xor eax, eax
// 00682e45  c3                   ret 
// 00682e46  d85104               fcom dword ptr [ecx + 4]
// 00682e49  dfe0                 fnstsw ax
// 00682e4b  f6c444               test ah, 0x44
// 00682e4e  7a08                 jp 0x682e58
// 00682e50  ddd8                 fstp st(0)
// 00682e52  b801000000           mov eax, 1
// 00682e57  c3                   ret 
// 00682e58  d85908               fcomp dword ptr [ecx + 8]
// 00682e5b  dfe0                 fnstsw ax
// 00682e5d  f6c444               test ah, 0x44
// 00682e60  7a06                 jp 0x682e68
// 00682e62  b802000000           mov eax, 2
// 00682e67  c3                   ret 
// 00682e68  d90594758b00         fld dword ptr [0x8b7594]
// 00682e6e  d811                 fcom dword ptr [ecx]
// 00682e70  dfe0                 fnstsw ax
// 00682e72  f6c444               test ah, 0x44
// 00682e75  7a08                 jp 0x682e7f
// 00682e77  ddd8                 fstp st(0)
// 00682e79  b803000000           mov eax, 3
// 00682e7e  c3                   ret 
// 00682e7f  d85104               fcom dword ptr [ecx + 4]
// 00682e82  dfe0                 fnstsw ax
// 00682e84  f6c444               test ah, 0x44
// 00682e87  7a08                 jp 0x682e91
// 00682e89  ddd8                 fstp st(0)
// 00682e8b  b804000000           mov eax, 4
// 00682e90  c3                   ret 
// 00682e91  d85908               fcomp dword ptr [ecx + 8]
// 00682e94  dfe0                 fnstsw ax
// 00682e96  f6c444               test ah, 0x44
// 00682e99  b805000000           mov eax, 5
// 00682e9e  7b05                 jnp 0x682ea5
// 00682ea0  b806000000           mov eax, 6
// 00682ea5  c3                   ret 
// library openrbx-client/App\util\NormalId.cpp (function ?Vector3ToNormalId@RBX@@YA?AW4NormalId@1@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/NormalId.cpp
