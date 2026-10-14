// roc 2010-06 0055ffd0  unit: G3D::VMeshDirectedEdgeKey::?$Table  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055ffd0
//
// 0055ffd0  51                   push ecx
// 0055ffd1  56                   push esi
// 0055ffd2  ff1568a79e00         call dword ptr [0x9ea768]
// 0055ffd8  8b742410             mov esi, dword ptr [esp + 0x10]
// 0055ffdc  89442404             mov dword ptr [esp + 4], eax
// 0055ffe0  db442404             fild dword ptr [esp + 4]
// 0055ffe4  8bc6                 mov eax, esi
// 0055ffe6  2b44240c             sub eax, dword ptr [esp + 0xc]
// 0055ffea  83ec08               sub esp, 8
// 0055ffed  40                   inc eax
// 0055ffee  89442418             mov dword ptr [esp + 0x18], eax
// 0055fff2  db442418             fild dword ptr [esp + 0x18]
// 0055fff6  dec9                 fmulp st(1)
// 0055fff8  dc0dd80ba200         fmul qword ptr [0xa20bd8]
// 0055fffe  da442414             fiadd dword ptr [esp + 0x14]
// 00560002  dd1c24               fstp qword ptr [esp]
// 00560005  e8e6912400           call 0x7a91f0
// 0056000a  83c408               add esp, 8
// 0056000d  e81e8e2400           call 0x7a8e30
// 00560012  3bc6                 cmp eax, esi
// 00560014  7e02                 jle 0x560018
// 00560016  8bc6                 mov eax, esi
// 00560018  5e                   pop esi
// 00560019  59                   pop ecx
// 0056001a  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\g3dmath.cpp (function ?iRandom@G3D@@YAHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/g3dmath.cpp
