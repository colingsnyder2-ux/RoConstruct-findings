// roc 2007-08 0062f280  unit: RBX::AdornG3D  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062f280
//
// 0062f280  83ec2c               sub esp, 0x2c
// 0062f283  f60508d18b0001       test byte ptr [0x8bd108], 1
// 0062f28a  8b442430             mov eax, dword ptr [esp + 0x30]
// 0062f28e  d9400c               fld dword ptr [eax + 0xc]
// 0062f291  d944243c             fld dword ptr [esp + 0x3c]
// 0062f295  d9c0                 fld st(0)
// 0062f297  deca                 fmulp st(2)
// 0062f299  dd05485b7900         fld qword ptr [0x795b48]
// 0062f29f  dcca                 fmul st(2), st(0)
// 0062f2a1  d9ca                 fxch st(2)
// 0062f2a3  d95c2430             fstp dword ptr [esp + 0x30]
// 0062f2a7  d84804               fmul dword ptr [eax + 4]
// 0062f2aa  dec9                 fmulp st(1)
// 0062f2ac  d91c24               fstp dword ptr [esp]
// 0062f2af  d9ee                 fldz 
// 0062f2b1  d9542404             fst dword ptr [esp + 4]
// 0062f2b5  d95c2408             fstp dword ptr [esp + 8]
// 0062f2b9  7514                 jne 0x62f2cf
// 0062f2bb  a164e57700           mov eax, dword ptr [0x77e564]
// 0062f2c0  830d08d18b0001       or dword ptr [0x8bd108], 1
// 0062f2c7  dd00                 fld qword ptr [eax]
// 0062f2c9  dd1d00d18b00         fstp qword ptr [0x8bd100]
// 0062f2cf  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0062f2d3  d9442430             fld dword ptr [esp + 0x30]
// 0062f2d7  68cc9b8c00           push 0x8c9bcc
// 0062f2dc  51                   push ecx
// 0062f2dd  83ec08               sub esp, 8
// 0062f2e0  dd1c24               fstp qword ptr [esp]
// 0062f2e3  8d542410             lea edx, [esp + 0x10]
// 0062f2e7  52                   push edx
// 0062f2e8  68040c8c00           push 0x8c0c04
// 0062f2ed  8d4c2424             lea ecx, [esp + 0x24]
// 0062f2f1  e85a4cefff           call 0x523f50
// 0062f2f6  50                   push eax
// 0062f2f7  8b442440             mov eax, dword ptr [esp + 0x40]
// 0062f2fb  8d4810               lea ecx, [eax + 0x10]
// 0062f2fe  51                   push ecx
// 0062f2ff  83c004               add eax, 4
// 0062f302  50                   push eax
// 0062f303  e8488a1000           call 0x737d50
// 0062f308  dc1d00d18b00         fcomp qword ptr [0x8bd100]
// 0062f30e  83c414               add esp, 0x14
// 0062f311  dfe0                 fnstsw ax
// 0062f313  f6c444               test ah, 0x44
// 0062f316  7b09                 jnp 0x62f321
// 0062f318  b801000000           mov eax, 1
// 0062f31d  83c42c               add esp, 0x2c
// 0062f320  c3                   ret 
// 0062f321  33c0                 xor eax, eax
// 0062f323  83c42c               add esp, 0x2c
// 0062f326  c3                   ret 
// library rbxgs-appdraw/HitTest.cpp (function ?hitTestCylinder@HitTest@RBX@@CA_NABVPart@2@AAVRay@G3D@@AAVVector3@5@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw HitTest.cpp
