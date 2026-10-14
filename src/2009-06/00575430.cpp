// roc 2009-06 00575430  unit: G3D::BinaryInput  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00575430
//
// 00575430  d94108               fld dword ptr [ecx + 8]
// 00575433  d94104               fld dword ptr [ecx + 4]
// 00575436  d901                 fld dword ptr [ecx]
// 00575438  dcc8                 fmul st(0), st(0)
// 0057543a  d9c1                 fld st(1)
// 0057543c  deca                 fmulp st(2)
// 0057543e  dec1                 faddp st(1)
// 00575440  d9c1                 fld st(1)
// 00575442  deca                 fmulp st(2)
// 00575444  dec1                 faddp st(1)
// 00575446  d9fa                 fsqrt 
// 00575448  d9442404             fld dword ptr [esp + 4]
// 0057544c  d8d9                 fcomp st(1)
// 0057544e  dfe0                 fnstsw ax
// 00575450  f6c405               test ah, 5
// 00575453  7a1b                 jp 0x575470
// 00575455  d9e8                 fld1 
// 00575457  d8f1                 fdiv st(1)
// 00575459  d901                 fld dword ptr [ecx]
// 0057545b  d8c9                 fmul st(1)
// 0057545d  d919                 fstp dword ptr [ecx]
// 0057545f  d9c0                 fld st(0)
// 00575461  d84904               fmul dword ptr [ecx + 4]
// 00575464  d95904               fstp dword ptr [ecx + 4]
// 00575467  d84908               fmul dword ptr [ecx + 8]
// 0057546a  d95908               fstp dword ptr [ecx + 8]
// 0057546d  c20400               ret 4
// 00575470  ddd8                 fstp st(0)
// 00575472  d9ee                 fldz 
// 00575474  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\Color3.cpp (function ?unitize@Color3@G3D@@QAEMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Color3.cpp
