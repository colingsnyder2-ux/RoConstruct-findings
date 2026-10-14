// roc 2009-06 0057a360  unit: G3D::LineSegment  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057a360
//
// 0057a360  51                   push ecx
// 0057a361  56                   push esi
// 0057a362  ff15dce88900         call dword ptr [0x89e8dc]
// 0057a368  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057a36c  89442404             mov dword ptr [esp + 4], eax
// 0057a370  db442404             fild dword ptr [esp + 4]
// 0057a374  8bc6                 mov eax, esi
// 0057a376  2b44240c             sub eax, dword ptr [esp + 0xc]
// 0057a37a  83ec08               sub esp, 8
// 0057a37d  40                   inc eax
// 0057a37e  89442418             mov dword ptr [esp + 0x18], eax
// 0057a382  db442418             fild dword ptr [esp + 0x18]
// 0057a386  dec9                 fmulp st(1)
// 0057a388  dc0d30b88c00         fmul qword ptr [0x8cb830]
// 0057a38e  da442414             fiadd dword ptr [esp + 0x14]
// 0057a392  dd1c24               fstp qword ptr [esp]
// 0057a395  e8e6fe1900           call 0x71a280
// 0057a39a  83c408               add esp, 8
// 0057a39d  e81efb1900           call 0x719ec0
// 0057a3a2  3bc6                 cmp eax, esi
// 0057a3a4  7e02                 jle 0x57a3a8
// 0057a3a6  8bc6                 mov eax, esi
// 0057a3a8  5e                   pop esi
// 0057a3a9  59                   pop ecx
// 0057a3aa  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\g3dmath.cpp (function ?iRandom@G3D@@YAHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/g3dmath.cpp
