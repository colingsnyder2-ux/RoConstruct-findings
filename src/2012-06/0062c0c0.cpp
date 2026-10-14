// roc 2012-06 0062c0c0  unit: G3D::Sphere  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0062c0c0
//
// 0062c0c0  51                   push ecx
// 0062c0c1  56                   push esi
// 0062c0c2  ff15b029b200         call dword ptr [0xb229b0]
// 0062c0c8  8b742410             mov esi, dword ptr [esp + 0x10]
// 0062c0cc  89442404             mov dword ptr [esp + 4], eax
// 0062c0d0  db442404             fild dword ptr [esp + 4]
// 0062c0d4  8bc6                 mov eax, esi
// 0062c0d6  2b44240c             sub eax, dword ptr [esp + 0xc]
// 0062c0da  83ec08               sub esp, 8
// 0062c0dd  40                   inc eax
// 0062c0de  89442418             mov dword ptr [esp + 0x18], eax
// 0062c0e2  db442418             fild dword ptr [esp + 0x18]
// 0062c0e6  dec9                 fmulp st(1)
// 0062c0e8  dc0d6039b800         fmul qword ptr [0xb83960]
// 0062c0ee  da442414             fiadd dword ptr [esp + 0x14]
// 0062c0f2  dd1c24               fstp qword ptr [esp]
// 0062c0f5  e83c7a3500           call 0x983b36
// 0062c0fa  83c408               add esp, 8
// 0062c0fd  e8ae743500           call 0x9835b0
// 0062c102  3bc6                 cmp eax, esi
// 0062c104  7e02                 jle 0x62c108
// 0062c106  8bc6                 mov eax, esi
// 0062c108  5e                   pop esi
// 0062c109  59                   pop ecx
// 0062c10a  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\g3dmath.cpp (function ?iRandom@G3D@@YAHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/g3dmath.cpp
