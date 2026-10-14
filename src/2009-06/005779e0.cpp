// roc 2009-06 005779e0  unit: G3D::LineSegment  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005779e0
//
// 005779e0  d9442418             fld dword ptr [esp + 0x18]
// 005779e4  b801000000           mov eax, 1
// 005779e9  d9c0                 fld st(0)
// 005779eb  d8c1                 fadd st(1)
// 005779ed  d944240c             fld dword ptr [esp + 0xc]
// 005779f1  d9c0                 fld st(0)
// 005779f3  d9442408             fld dword ptr [esp + 8]
// 005779f7  dce9                 fsub st(1), st(0)
// 005779f9  d9c3                 fld st(3)
// 005779fb  d8f2                 fdiv st(2)
// 005779fd  d95c2418             fstp dword ptr [esp + 0x18]
// 00577a01  d9442414             fld dword ptr [esp + 0x14]
// 00577a05  d9c0                 fld st(0)
// 00577a07  d9442410             fld dword ptr [esp + 0x10]
// 00577a0b  dce9                 fsub st(1), st(0)
// 00577a0d  d9ce                 fxch st(6)
// 00577a0f  d8f1                 fdiv st(1)
// 00577a11  d95c240c             fstp dword ptr [esp + 0xc]
// 00577a15  d9ca                 fxch st(2)
// 00577a17  dec4                 faddp st(4)
// 00577a19  d9cb                 fxch st(3)
// 00577a1b  def2                 fdivrp st(2)
// 00577a1d  d9cb                 fxch st(3)
// 00577a1f  dec2                 faddp st(2)
// 00577a21  d9c9                 fxch st(1)
// 00577a23  def2                 fdivrp st(2)
// 00577a25  8405b8c8a300         test byte ptr [0xa3c8b8], al
// 00577a2b  7513                 jne 0x577a40
// 00577a2d  0905b8c8a300         or dword ptr [0xa3c8b8], eax
// 00577a33  a144e58900           mov eax, dword ptr [0x89e544]
// 00577a38  dd00                 fld qword ptr [eax]
// 00577a3a  dd1db0c8a300         fstp qword ptr [0xa3c8b0]
// 00577a40  dd05b0c8a300         fld qword ptr [0xa3c8b0]
// 00577a46  d944241c             fld dword ptr [esp + 0x1c]
// 00577a4a  d8d1                 fcom st(1)
// 00577a4c  dfe0                 fnstsw ax
// 00577a4e  ddd9                 fstp st(1)
// 00577a50  d90594758b00         fld dword ptr [0x8b7594]
// 00577a56  f6c401               test ah, 1
// 00577a59  750e                 jne 0x577a69
// 00577a5b  ddd9                 fstp st(1)
// 00577a5d  d9c0                 fld st(0)
// 00577a5f  d9cc                 fxch st(4)
// 00577a61  d80dd0018c00         fmul dword ptr [0x8c01d0]
// 00577a67  eb1a                 jmp 0x577a83
// 00577a69  d9c1                 fld st(1)
// 00577a6b  d8e5                 fsub st(5)
// 00577a6d  d9c5                 fld st(5)
// 00577a6f  d8c3                 fadd st(3)
// 00577a71  d8f1                 fdiv st(1)
// 00577a73  d9e0                 fchs 
// 00577a75  d9ce                 fxch st(6)
// 00577a77  decb                 fmulp st(3)
// 00577a79  d9ca                 fxch st(2)
// 00577a7b  dcc0                 fadd st(0), st(0)
// 00577a7d  def2                 fdivrp st(2)
// 00577a7f  d9c9                 fxch st(1)
// 00577a81  d9e0                 fchs 
// 00577a83  8b442404             mov eax, dword ptr [esp + 4]
// 00577a87  d9442418             fld dword ptr [esp + 0x18]
// 00577a8b  d918                 fstp dword ptr [eax]
// 00577a8d  d9ee                 fldz 
// 00577a8f  d95004               fst dword ptr [eax + 4]
// 00577a92  d9500c               fst dword ptr [eax + 0xc]
// 00577a95  d95010               fst dword ptr [eax + 0x10]
// 00577a98  d9cb                 fxch st(3)
// 00577a9a  d95808               fstp dword ptr [eax + 8]
// 00577a9d  d944240c             fld dword ptr [esp + 0xc]
// 00577aa1  d95814               fstp dword ptr [eax + 0x14]
// 00577aa4  d9cb                 fxch st(3)
// 00577aa6  d95818               fstp dword ptr [eax + 0x18]
// 00577aa9  d9c9                 fxch st(1)
// 00577aab  d9501c               fst dword ptr [eax + 0x1c]
// 00577aae  d95020               fst dword ptr [eax + 0x20]
// 00577ab1  d95024               fst dword ptr [eax + 0x24]
// 00577ab4  d95030               fst dword ptr [eax + 0x30]
// 00577ab7  d95034               fst dword ptr [eax + 0x34]
// 00577aba  d9583c               fstp dword ptr [eax + 0x3c]
// 00577abd  d9ca                 fxch st(2)
// 00577abf  d95828               fstp dword ptr [eax + 0x28]
// 00577ac2  d9582c               fstp dword ptr [eax + 0x2c]
// 00577ac5  d95838               fstp dword ptr [eax + 0x38]
// 00577ac8  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\Matrix4.cpp (function ?perspectiveProjection@Matrix4@G3D@@SA?AV12@MMMMMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Matrix4.cpp
