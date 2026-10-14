// roc 2009-06 006f3420  unit: RBX::HUMAN::Running  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f3420
//
// 006f3420  d94108               fld dword ptr [ecx + 8]
// 006f3423  83ec08               sub esp, 8
// 006f3426  d94104               fld dword ptr [ecx + 4]
// 006f3429  d901                 fld dword ptr [ecx]
// 006f342b  dcc8                 fmul st(0), st(0)
// 006f342d  d9c1                 fld st(1)
// 006f342f  deca                 fmulp st(2)
// 006f3431  dec1                 faddp st(1)
// 006f3433  d9c1                 fld st(1)
// 006f3435  deca                 fmulp st(2)
// 006f3437  dec1                 faddp st(1)
// 006f3439  d9ee                 fldz 
// 006f343b  d9c0                 fld st(0)
// 006f343d  ddea                 fucomp st(2)
// 006f343f  dfe0                 fnstsw ax
// 006f3441  f6c444               test ah, 0x44
// 006f3444  7b2b                 jnp 0x6f3471
// 006f3446  d9c1                 fld st(1)
// 006f3448  83ec10               sub esp, 0x10
// 006f344b  d9e1                 fabs 
// 006f344d  dd5c2410             fstp qword ptr [esp + 0x10]
// 006f3451  dd5c2408             fstp qword ptr [esp + 8]
// 006f3455  dd1c24               fstp qword ptr [esp]
// 006f3458  e8d32ee8ff           call 0x576330
// 006f345d  dc5c2410             fcomp qword ptr [esp + 0x10]
// 006f3461  83c410               add esp, 0x10
// 006f3464  dfe0                 fnstsw ax
// 006f3466  f6c401               test ah, 1
// 006f3469  740a                 je 0x6f3475
// 006f346b  33c0                 xor eax, eax
// 006f346d  83c408               add esp, 8
// 006f3470  c3                   ret 
// 006f3471  ddd9                 fstp st(1)
// 006f3473  ddd8                 fstp st(0)
// 006f3475  b801000000           mov eax, 1
// 006f347a  83c408               add esp, 8
// 006f347d  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\roc_export_2e510945f61df65f.cpp (function ?isZero@Vector3@G3D@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/roc_export_2e510945f61df65f.cpp
