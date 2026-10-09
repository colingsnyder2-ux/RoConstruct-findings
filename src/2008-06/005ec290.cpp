// roc 2008-06 005ec290  unit: RBX::Sky  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ec290
//
// 005ec290  d9e8                 fld1 
// 005ec292  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005ec296  d9c0                 fld st(0)
// 005ec298  d819                 fcomp dword ptr [ecx]
// 005ec29a  dfe0                 fnstsw ax
// 005ec29c  f6c444               test ah, 0x44
// 005ec29f  7a05                 jp 0x5ec2a6
// 005ec2a1  ddd8                 fstp st(0)
// 005ec2a3  33c0                 xor eax, eax
// 005ec2a5  c3                   ret 
// 005ec2a6  d85104               fcom dword ptr [ecx + 4]
// 005ec2a9  dfe0                 fnstsw ax
// 005ec2ab  f6c444               test ah, 0x44
// 005ec2ae  7a08                 jp 0x5ec2b8
// 005ec2b0  ddd8                 fstp st(0)
// 005ec2b2  b801000000           mov eax, 1
// 005ec2b7  c3                   ret 
// 005ec2b8  d85908               fcomp dword ptr [ecx + 8]
// 005ec2bb  dfe0                 fnstsw ax
// 005ec2bd  f6c444               test ah, 0x44
// 005ec2c0  7a06                 jp 0x5ec2c8
// 005ec2c2  b802000000           mov eax, 2
// 005ec2c7  c3                   ret 
// 005ec2c8  d905b8c38100         fld dword ptr [0x81c3b8]
// 005ec2ce  d811                 fcom dword ptr [ecx]
// 005ec2d0  dfe0                 fnstsw ax
// 005ec2d2  f6c444               test ah, 0x44
// 005ec2d5  7a08                 jp 0x5ec2df
// 005ec2d7  ddd8                 fstp st(0)
// 005ec2d9  b803000000           mov eax, 3
// 005ec2de  c3                   ret 
// 005ec2df  d85104               fcom dword ptr [ecx + 4]
// 005ec2e2  dfe0                 fnstsw ax
// 005ec2e4  f6c444               test ah, 0x44
// 005ec2e7  7a08                 jp 0x5ec2f1
// 005ec2e9  ddd8                 fstp st(0)
// 005ec2eb  b804000000           mov eax, 4
// 005ec2f0  c3                   ret 
// 005ec2f1  d85908               fcomp dword ptr [ecx + 8]
// 005ec2f4  dfe0                 fnstsw ax
// 005ec2f6  f6c444               test ah, 0x44
// 005ec2f9  b805000000           mov eax, 5
// 005ec2fe  7b05                 jnp 0x5ec305
// 005ec300  b806000000           mov eax, 6
// 005ec305  c3                   ret 
// library openrbx-client/App\util\NormalId.cpp (function ?Vector3ToNormalId@RBX@@YA?AW4NormalId@1@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/NormalId.cpp
