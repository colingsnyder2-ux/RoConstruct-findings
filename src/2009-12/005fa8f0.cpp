// roc 2009-12 005fa8f0  unit: G3D::LineSegment  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fa8f0
//
// 005fa8f0  51                   push ecx
// 005fa8f1  56                   push esi
// 005fa8f2  ff153cb89800         call dword ptr [0x98b83c]
// 005fa8f8  8b742410             mov esi, dword ptr [esp + 0x10]
// 005fa8fc  89442404             mov dword ptr [esp + 4], eax
// 005fa900  db442404             fild dword ptr [esp + 4]
// 005fa904  8bc6                 mov eax, esi
// 005fa906  2b44240c             sub eax, dword ptr [esp + 0xc]
// 005fa90a  83ec08               sub esp, 8
// 005fa90d  40                   inc eax
// 005fa90e  89442418             mov dword ptr [esp + 0x18], eax
// 005fa912  db442418             fild dword ptr [esp + 0x18]
// 005fa916  dec9                 fmulp st(1)
// 005fa918  dc0df8259c00         fmul qword ptr [0x9c25f8]
// 005fa91e  da442414             fiadd dword ptr [esp + 0x14]
// 005fa922  dd1c24               fstp qword ptr [esp]
// 005fa925  e88ca71f00           call 0x7f50b6
// 005fa92a  83c408               add esp, 8
// 005fa92d  e8bea31f00           call 0x7f4cf0
// 005fa932  3bc6                 cmp eax, esi
// 005fa934  7e02                 jle 0x5fa938
// 005fa936  8bc6                 mov eax, esi
// 005fa938  5e                   pop esi
// 005fa939  59                   pop ecx
// 005fa93a  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\g3dmath.cpp (function ?iRandom@G3D@@YAHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/g3dmath.cpp
