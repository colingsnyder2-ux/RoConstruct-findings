// roc 2011-06 00542e50  unit: G3D::Sphere  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00542e50
//
// 00542e50  51                   push ecx
// 00542e51  56                   push esi
// 00542e52  ff159409a400         call dword ptr [0xa40994]
// 00542e58  8b742410             mov esi, dword ptr [esp + 0x10]
// 00542e5c  89442404             mov dword ptr [esp + 4], eax
// 00542e60  db442404             fild dword ptr [esp + 4]
// 00542e64  8bc6                 mov eax, esi
// 00542e66  2b44240c             sub eax, dword ptr [esp + 0xc]
// 00542e6a  83ec08               sub esp, 8
// 00542e6d  40                   inc eax
// 00542e6e  89442418             mov dword ptr [esp + 0x18], eax
// 00542e72  db442418             fild dword ptr [esp + 0x18]
// 00542e76  dec9                 fmulp st(1)
// 00542e78  dc0de8fba700         fmul qword ptr [0xa7fbe8]
// 00542e7e  da442414             fiadd dword ptr [esp + 0x14]
// 00542e82  dd1c24               fstp qword ptr [esp]
// 00542e85  e87c8a2c00           call 0x80b906
// 00542e8a  83c408               add esp, 8
// 00542e8d  e89e862c00           call 0x80b530
// 00542e92  3bc6                 cmp eax, esi
// 00542e94  7e02                 jle 0x542e98
// 00542e96  8bc6                 mov eax, esi
// 00542e98  5e                   pop esi
// 00542e99  59                   pop ecx
// 00542e9a  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\g3dmath.cpp (function ?iRandom@G3D@@YAHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/g3dmath.cpp
