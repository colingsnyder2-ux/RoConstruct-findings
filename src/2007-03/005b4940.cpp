// roc 2007-03 005b4940  unit: seg_005b0000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b4940
//
// 005b4940  d9e8                 fld1 
// 005b4942  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b4946  d9c0                 fld st(0)
// 005b4948  d819                 fcomp dword ptr [ecx]
// 005b494a  dfe0                 fnstsw ax
// 005b494c  f6c444               test ah, 0x44
// 005b494f  7a05                 jp 0x5b4956
// 005b4951  ddd8                 fstp st(0)
// 005b4953  33c0                 xor eax, eax
// 005b4955  c3                   ret 
// 005b4956  d85104               fcom dword ptr [ecx + 4]
// 005b4959  dfe0                 fnstsw ax
// 005b495b  f6c444               test ah, 0x44
// 005b495e  7a08                 jp 0x5b4968
// 005b4960  ddd8                 fstp st(0)
// 005b4962  b801000000           mov eax, 1
// 005b4967  c3                   ret 
// 005b4968  d85908               fcomp dword ptr [ecx + 8]
// 005b496b  dfe0                 fnstsw ax
// 005b496d  f6c444               test ah, 0x44
// 005b4970  7a06                 jp 0x5b4978
// 005b4972  b802000000           mov eax, 2
// 005b4977  c3                   ret 
// 005b4978  d90578587900         fld dword ptr [0x795878]
// 005b497e  d811                 fcom dword ptr [ecx]
// 005b4980  dfe0                 fnstsw ax
// 005b4982  f6c444               test ah, 0x44
// 005b4985  7a08                 jp 0x5b498f
// 005b4987  ddd8                 fstp st(0)
// 005b4989  b803000000           mov eax, 3
// 005b498e  c3                   ret 
// 005b498f  d85104               fcom dword ptr [ecx + 4]
// 005b4992  dfe0                 fnstsw ax
// 005b4994  f6c444               test ah, 0x44
// 005b4997  7a08                 jp 0x5b49a1
// 005b4999  ddd8                 fstp st(0)
// 005b499b  b804000000           mov eax, 4
// 005b49a0  c3                   ret 
// 005b49a1  d85908               fcomp dword ptr [ecx + 8]
// 005b49a4  dfe0                 fnstsw ax
// 005b49a6  f6c444               test ah, 0x44
// 005b49a9  b805000000           mov eax, 5
// 005b49ae  7b05                 jnp 0x5b49b5
// 005b49b0  b806000000           mov eax, 6
// 005b49b5  c3                   ret 
// library openrbx-client/App\util\NormalId.cpp (function ?Vector3ToNormalId@RBX@@YA?AW4NormalId@1@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/NormalId.cpp
