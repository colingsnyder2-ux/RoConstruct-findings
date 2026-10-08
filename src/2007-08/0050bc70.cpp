// from server: 100% by auto
// roc 2007-08 0050bc70  unit: seg_00500000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050bc70
//
// 0050bc70  51                   push ecx
// 0050bc71  56                   push esi
// 0050bc72  ff15f4e87700         call dword ptr [0x77e8f4]
// 0050bc78  8b742410             mov esi, dword ptr [esp + 0x10]
// 0050bc7c  89442404             mov dword ptr [esp + 4], eax
// 0050bc80  db442404             fild dword ptr [esp + 4]
// 0050bc84  8bc6                 mov eax, esi
// 0050bc86  2b44240c             sub eax, dword ptr [esp + 0xc]
// 0050bc8a  83ec08               sub esp, 8
// 0050bc8d  83c001               add eax, 1
// 0050bc90  89442418             mov dword ptr [esp + 0x18], eax
// 0050bc94  db442418             fild dword ptr [esp + 0x18]
// 0050bc98  dec9                 fmulp st(1)
// 0050bc9a  dc35c8f27900         fdiv qword ptr [0x79f2c8]
// 0050bca0  da442414             fiadd dword ptr [esp + 0x14]
// 0050bca4  dd1c24               fstp qword ptr [esp]
// 0050bca7  e87c541200           call 0x631128
// 0050bcac  83c408               add esp, 8
// 0050bcaf  e8ac501200           call 0x630d60
// 0050bcb4  3bc6                 cmp eax, esi
// 0050bcb6  7e02                 jle 0x50bcba
// 0050bcb8  8bc6                 mov eax, esi
// 0050bcba  5e                   pop esi
// 0050bcbb  59                   pop ecx
// 0050bcbc  c3                   ret 
// library g3d-6.09/G3Dcpp\g3dmath.cpp (function ?iRandom@G3D@@YAHHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/g3dmath.cpp
