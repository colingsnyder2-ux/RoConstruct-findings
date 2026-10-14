// roc 2009-06 00579530  unit: G3D::LineSegment  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00579530
//
// 00579530  56                   push esi
// 00579531  8b742408             mov esi, dword ptr [esp + 8]
// 00579535  8bce                 mov ecx, esi
// 00579537  e874feffff           call 0x5793b0
// 0057953c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00579540  d94008               fld dword ptr [eax + 8]
// 00579543  8a4c2418             mov cl, byte ptr [esp + 0x18]
// 00579547  d94004               fld dword ptr [eax + 4]
// 0057954a  d900                 fld dword ptr [eax]
// 0057954c  dcc8                 fmul st(0), st(0)
// 0057954e  d9c1                 fld st(1)
// 00579550  deca                 fmulp st(2)
// 00579552  dec1                 faddp st(1)
// 00579554  d9c1                 fld st(1)
// 00579556  deca                 fmulp st(2)
// 00579558  dec1                 faddp st(1)
// 0057955a  d9fa                 fsqrt 
// 0057955c  d9e8                 fld1 
// 0057955e  def1                 fdivrp st(1)
// 00579560  d900                 fld dword ptr [eax]
// 00579562  d8c9                 fmul st(1)
// 00579564  d9c1                 fld st(1)
// 00579566  d84804               fmul dword ptr [eax + 4]
// 00579569  d9ca                 fxch st(2)
// 0057956b  d84808               fmul dword ptr [eax + 8]
// 0057956e  d9c9                 fxch st(1)
// 00579570  8b442410             mov eax, dword ptr [esp + 0x10]
// 00579574  d91e                 fstp dword ptr [esi]
// 00579576  d9c9                 fxch st(1)
// 00579578  d95e04               fstp dword ptr [esi + 4]
// 0057957b  d95e08               fstp dword ptr [esi + 8]
// 0057957e  d9ee                 fldz 
// 00579580  d95e0c               fstp dword ptr [esi + 0xc]
// 00579583  d900                 fld dword ptr [eax]
// 00579585  d95e40               fstp dword ptr [esi + 0x40]
// 00579588  d94004               fld dword ptr [eax + 4]
// 0057958b  d95e44               fstp dword ptr [esi + 0x44]
// 0057958e  d94008               fld dword ptr [eax + 8]
// 00579591  8a442414             mov al, byte ptr [esp + 0x14]
// 00579595  d95e48               fstp dword ptr [esi + 0x48]
// 00579598  88464d               mov byte ptr [esi + 0x4d], al
// 0057959b  884e4e               mov byte ptr [esi + 0x4e], cl
// 0057959e  8bc6                 mov eax, esi
// 005795a0  5e                   pop esi
// 005795a1  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\GLight.cpp (function ?directional@GLight@G3D@@SA?AV12@ABVVector3@2@ABVColor3@2@_N2@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GLight.cpp
