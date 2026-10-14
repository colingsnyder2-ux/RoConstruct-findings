// roc 2009-06 0056cc70  unit: G3D::Shader  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056cc70
//
// 0056cc70  d94104               fld dword ptr [ecx + 4]
// 0056cc73  d901                 fld dword ptr [ecx]
// 0056cc75  dcc8                 fmul st(0), st(0)
// 0056cc77  d9c1                 fld st(1)
// 0056cc79  deca                 fmulp st(2)
// 0056cc7b  dec1                 faddp st(1)
// 0056cc7d  d9fa                 fsqrt 
// 0056cc7f  d9442404             fld dword ptr [esp + 4]
// 0056cc83  d8d9                 fcomp st(1)
// 0056cc85  dfe0                 fnstsw ax
// 0056cc87  f6c405               test ah, 5
// 0056cc8a  7a13                 jp 0x56cc9f
// 0056cc8c  d9e8                 fld1 
// 0056cc8e  d8f1                 fdiv st(1)
// 0056cc90  d901                 fld dword ptr [ecx]
// 0056cc92  d8c9                 fmul st(1)
// 0056cc94  d919                 fstp dword ptr [ecx]
// 0056cc96  d84904               fmul dword ptr [ecx + 4]
// 0056cc99  d95904               fstp dword ptr [ecx + 4]
// 0056cc9c  c20400               ret 4
// 0056cc9f  ddd8                 fstp st(0)
// 0056cca1  d9ee                 fldz 
// 0056cca3  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\Vector2.cpp (function ?unitize@Vector2@G3D@@QAEMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Vector2.cpp
