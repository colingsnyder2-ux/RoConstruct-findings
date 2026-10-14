// roc 2007-03 005e9160  unit: seg_005e0000  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e9160
//
// 005e9160  d94108               fld dword ptr [ecx + 8]
// 005e9163  83ec08               sub esp, 8
// 005e9166  d94104               fld dword ptr [ecx + 4]
// 005e9169  d901                 fld dword ptr [ecx]
// 005e916b  dcc8                 fmul st(0), st(0)
// 005e916d  d9c1                 fld st(1)
// 005e916f  deca                 fmulp st(2)
// 005e9171  dec1                 faddp st(1)
// 005e9173  d9c1                 fld st(1)
// 005e9175  deca                 fmulp st(2)
// 005e9177  dec1                 faddp st(1)
// 005e9179  d9ee                 fldz 
// 005e917b  d9c0                 fld st(0)
// 005e917d  ddea                 fucomp st(2)
// 005e917f  dfe0                 fnstsw ax
// 005e9181  f6c444               test ah, 0x44
// 005e9184  7b2b                 jnp 0x5e91b1
// 005e9186  d9c1                 fld st(1)
// 005e9188  83ec10               sub esp, 0x10
// 005e918b  d9e1                 fabs 
// 005e918d  dd5c2410             fstp qword ptr [esp + 0x10]
// 005e9191  dd5c2408             fstp qword ptr [esp + 8]
// 005e9195  dd1c24               fstp qword ptr [esp]
// 005e9198  e87356f1ff           call 0x4fe810
// 005e919d  dc5c2410             fcomp qword ptr [esp + 0x10]
// 005e91a1  83c410               add esp, 0x10
// 005e91a4  dfe0                 fnstsw ax
// 005e91a6  f6c401               test ah, 1
// 005e91a9  740a                 je 0x5e91b5
// 005e91ab  33c0                 xor eax, eax
// 005e91ad  83c408               add esp, 8
// 005e91b0  c3                   ret 
// 005e91b1  ddd9                 fstp st(1)
// 005e91b3  ddd8                 fstp st(0)
// 005e91b5  b801000000           mov eax, 1
// 005e91ba  83c408               add esp, 8
// 005e91bd  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\roc_export_2e510945f61df65f.cpp (function ?isZero@Vector3@G3D@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/roc_export_2e510945f61df65f.cpp
