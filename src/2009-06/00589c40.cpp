// roc 2009-06 00589c40  unit: seg_00580000  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00589c40
//
// 00589c40  d9ee                 fldz 
// 00589c42  8bc1                 mov eax, ecx
// 00589c44  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00589c48  c70014b78c00         mov dword ptr [eax], 0x8cb714
// 00589c4e  d95004               fst dword ptr [eax + 4]
// 00589c51  d95008               fst dword ptr [eax + 8]
// 00589c54  d9580c               fstp dword ptr [eax + 0xc]
// 00589c57  d94108               fld dword ptr [ecx + 8]
// 00589c5a  d94104               fld dword ptr [ecx + 4]
// 00589c5d  d901                 fld dword ptr [ecx]
// 00589c5f  dcc8                 fmul st(0), st(0)
// 00589c61  d9c1                 fld st(1)
// 00589c63  deca                 fmulp st(2)
// 00589c65  dec1                 faddp st(1)
// 00589c67  d9c1                 fld st(1)
// 00589c69  deca                 fmulp st(2)
// 00589c6b  dec1                 faddp st(1)
// 00589c6d  d9fa                 fsqrt 
// 00589c6f  d9e8                 fld1 
// 00589c71  def1                 fdivrp st(1)
// 00589c73  d901                 fld dword ptr [ecx]
// 00589c75  d8c9                 fmul st(1)
// 00589c77  d94104               fld dword ptr [ecx + 4]
// 00589c7a  d8ca                 fmul st(2)
// 00589c7c  d94108               fld dword ptr [ecx + 8]
// 00589c7f  decb                 fmulp st(3)
// 00589c81  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00589c85  d9c9                 fxch st(1)
// 00589c87  d95804               fstp dword ptr [eax + 4]
// 00589c8a  d95808               fstp dword ptr [eax + 8]
// 00589c8d  d9580c               fstp dword ptr [eax + 0xc]
// 00589c90  d9400c               fld dword ptr [eax + 0xc]
// 00589c93  d84908               fmul dword ptr [ecx + 8]
// 00589c96  d94008               fld dword ptr [eax + 8]
// 00589c99  d84904               fmul dword ptr [ecx + 4]
// 00589c9c  dec1                 faddp st(1)
// 00589c9e  d94004               fld dword ptr [eax + 4]
// 00589ca1  d809                 fmul dword ptr [ecx]
// 00589ca3  dec1                 faddp st(1)
// 00589ca5  d95810               fstp dword ptr [eax + 0x10]
// 00589ca8  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\Plane.cpp (function ??0Plane@G3D@@QAE@ABVVector3@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Plane.cpp
