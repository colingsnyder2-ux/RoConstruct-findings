// roc 2009-06 005778a0  unit: G3D::LineSegment  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005778a0
//
// 005778a0  d9ee                 fldz 
// 005778a2  8b442404             mov eax, dword ptr [esp + 4]
// 005778a6  d910                 fst dword ptr [eax]
// 005778a8  56                   push esi
// 005778a9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005778ad  d95004               fst dword ptr [eax + 4]
// 005778b0  d95008               fst dword ptr [eax + 8]
// 005778b3  33d2                 xor edx, edx
// 005778b5  d9580c               fstp dword ptr [eax + 0xc]
// 005778b8  83c108               add ecx, 8
// 005778bb  eb03                 jmp 0x5778c0
// 005778bd  8d4900               lea ecx, [ecx]
// 005778c0  d941f8               fld dword ptr [ecx - 8]
// 005778c3  42                   inc edx
// 005778c4  d80e                 fmul dword ptr [esi]
// 005778c6  83c110               add ecx, 0x10
// 005778c9  83fa04               cmp edx, 4
// 005778cc  d84490fc             fadd dword ptr [eax + edx*4 - 4]
// 005778d0  d95490fc             fst dword ptr [eax + edx*4 - 4]
// 005778d4  d941ec               fld dword ptr [ecx - 0x14]
// 005778d7  d84e04               fmul dword ptr [esi + 4]
// 005778da  dec1                 faddp st(1)
// 005778dc  d95490fc             fst dword ptr [eax + edx*4 - 4]
// 005778e0  d941f0               fld dword ptr [ecx - 0x10]
// 005778e3  d84e08               fmul dword ptr [esi + 8]
// 005778e6  dec1                 faddp st(1)
// 005778e8  d95490fc             fst dword ptr [eax + edx*4 - 4]
// 005778ec  d941f4               fld dword ptr [ecx - 0xc]
// 005778ef  d84e0c               fmul dword ptr [esi + 0xc]
// 005778f2  dec1                 faddp st(1)
// 005778f4  d95c90fc             fstp dword ptr [eax + edx*4 - 4]
// 005778f8  7cc6                 jl 0x5778c0
// 005778fa  5e                   pop esi
// 005778fb  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\Matrix4.cpp (function ??DMatrix4@G3D@@QBE?AVVector4@1@ABV21@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Matrix4.cpp
