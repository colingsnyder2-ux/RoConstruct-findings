// roc 2009-06 00577950  unit: G3D::LineSegment  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00577950
//
// 00577950  d944240c             fld dword ptr [esp + 0xc]
// 00577954  8b442404             mov eax, dword ptr [esp + 4]
// 00577958  d9c0                 fld st(0)
// 0057795a  d9442408             fld dword ptr [esp + 8]
// 0057795e  dce9                 fsub st(1), st(0)
// 00577960  d90544d08b00         fld dword ptr [0x8bd044]
// 00577966  d9c0                 fld st(0)
// 00577968  d8f3                 fdiv st(3)
// 0057796a  d918                 fstp dword ptr [eax]
// 0057796c  d9ee                 fldz 
// 0057796e  d95004               fst dword ptr [eax + 4]
// 00577971  d95008               fst dword ptr [eax + 8]
// 00577974  d9ca                 fxch st(2)
// 00577976  dec4                 faddp st(4)
// 00577978  d9cb                 fxch st(3)
// 0057797a  def2                 fdivrp st(2)
// 0057797c  d9c9                 fxch st(1)
// 0057797e  d9e0                 fchs 
// 00577980  d9580c               fstp dword ptr [eax + 0xc]
// 00577983  d95010               fst dword ptr [eax + 0x10]
// 00577986  d9442414             fld dword ptr [esp + 0x14]
// 0057798a  d9c0                 fld st(0)
// 0057798c  d9442410             fld dword ptr [esp + 0x10]
// 00577990  dce9                 fsub st(1), st(0)
// 00577992  d9cc                 fxch st(4)
// 00577994  d8f1                 fdiv st(1)
// 00577996  d95814               fstp dword ptr [eax + 0x14]
// 00577999  d9ca                 fxch st(2)
// 0057799b  d95018               fst dword ptr [eax + 0x18]
// 0057799e  d9cb                 fxch st(3)
// 005779a0  dec1                 faddp st(1)
// 005779a2  def1                 fdivrp st(1)
// 005779a4  d9e0                 fchs 
// 005779a6  d9581c               fstp dword ptr [eax + 0x1c]
// 005779a9  d95020               fst dword ptr [eax + 0x20]
// 005779ac  d95024               fst dword ptr [eax + 0x24]
// 005779af  d944241c             fld dword ptr [esp + 0x1c]
// 005779b3  d9c0                 fld st(0)
// 005779b5  d9442418             fld dword ptr [esp + 0x18]
// 005779b9  dce9                 fsub st(1), st(0)
// 005779bb  d905d0018c00         fld dword ptr [0x8c01d0]
// 005779c1  d8f2                 fdiv st(2)
// 005779c3  d95828               fstp dword ptr [eax + 0x28]
// 005779c6  dec2                 faddp st(2)
// 005779c8  def9                 fdivp st(1)
// 005779ca  d9e0                 fchs 
// 005779cc  d9582c               fstp dword ptr [eax + 0x2c]
// 005779cf  d95030               fst dword ptr [eax + 0x30]
// 005779d2  d95034               fst dword ptr [eax + 0x34]
// 005779d5  d95838               fstp dword ptr [eax + 0x38]
// 005779d8  d9e8                 fld1 
// 005779da  d9583c               fstp dword ptr [eax + 0x3c]
// 005779dd  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\Matrix4.cpp (function ?orthogonalProjection@Matrix4@G3D@@SA?AV12@MMMMMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Matrix4.cpp
