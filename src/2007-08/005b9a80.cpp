// roc 2007-08 005b9a80  unit: RBX::VFaceInstance::?$EnumPropDescriptor  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b9a80
//
// 005b9a80  d9e8                 fld1 
// 005b9a82  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b9a86  d9c0                 fld st(0)
// 005b9a88  d819                 fcomp dword ptr [ecx]
// 005b9a8a  dfe0                 fnstsw ax
// 005b9a8c  f6c444               test ah, 0x44
// 005b9a8f  7a05                 jp 0x5b9a96
// 005b9a91  ddd8                 fstp st(0)
// 005b9a93  33c0                 xor eax, eax
// 005b9a95  c3                   ret 
// 005b9a96  d85104               fcom dword ptr [ecx + 4]
// 005b9a99  dfe0                 fnstsw ax
// 005b9a9b  f6c444               test ah, 0x44
// 005b9a9e  7a08                 jp 0x5b9aa8
// 005b9aa0  ddd8                 fstp st(0)
// 005b9aa2  b801000000           mov eax, 1
// 005b9aa7  c3                   ret 
// 005b9aa8  d85908               fcomp dword ptr [ecx + 8]
// 005b9aab  dfe0                 fnstsw ax
// 005b9aad  f6c444               test ah, 0x44
// 005b9ab0  7a06                 jp 0x5b9ab8
// 005b9ab2  b802000000           mov eax, 2
// 005b9ab7  c3                   ret 
// 005b9ab8  d9056c647900         fld dword ptr [0x79646c]
// 005b9abe  d811                 fcom dword ptr [ecx]
// 005b9ac0  dfe0                 fnstsw ax
// 005b9ac2  f6c444               test ah, 0x44
// 005b9ac5  7a08                 jp 0x5b9acf
// 005b9ac7  ddd8                 fstp st(0)
// 005b9ac9  b803000000           mov eax, 3
// 005b9ace  c3                   ret 
// 005b9acf  d85104               fcom dword ptr [ecx + 4]
// 005b9ad2  dfe0                 fnstsw ax
// 005b9ad4  f6c444               test ah, 0x44
// 005b9ad7  7a08                 jp 0x5b9ae1
// 005b9ad9  ddd8                 fstp st(0)
// 005b9adb  b804000000           mov eax, 4
// 005b9ae0  c3                   ret 
// 005b9ae1  d85908               fcomp dword ptr [ecx + 8]
// 005b9ae4  dfe0                 fnstsw ax
// 005b9ae6  f6c444               test ah, 0x44
// 005b9ae9  b805000000           mov eax, 5
// 005b9aee  7b05                 jnp 0x5b9af5
// 005b9af0  b806000000           mov eax, 6
// 005b9af5  c3                   ret 
// library openrbx-client/App\util\NormalId.cpp (function ?Vector3ToNormalId@RBX@@YA?AW4NormalId@1@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/NormalId.cpp
