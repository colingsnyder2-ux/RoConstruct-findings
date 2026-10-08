// roc 2007-03 00503d70  unit: seg_00500000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00503d70
//
// 00503d70  51                   push ecx
// 00503d71  56                   push esi
// 00503d72  ff1518e97700         call dword ptr [0x77e918]
// 00503d78  8b742410             mov esi, dword ptr [esp + 0x10]
// 00503d7c  89442404             mov dword ptr [esp + 4], eax
// 00503d80  db442404             fild dword ptr [esp + 4]
// 00503d84  8bc6                 mov eax, esi
// 00503d86  2b44240c             sub eax, dword ptr [esp + 0xc]
// 00503d8a  83ec08               sub esp, 8
// 00503d8d  83c001               add eax, 1
// 00503d90  89442418             mov dword ptr [esp + 0x18], eax
// 00503d94  db442418             fild dword ptr [esp + 0x18]
// 00503d98  dec9                 fmulp st(1)
// 00503d9a  dc3508e97900         fdiv qword ptr [0x79e908]
// 00503da0  da442414             fiadd dword ptr [esp + 0x14]
// 00503da4  dd1c24               fstp qword ptr [esp]
// 00503da7  e81cb81100           call 0x61f5c8
// 00503dac  83c408               add esp, 8
// 00503daf  e84cb41100           call 0x61f200
// 00503db4  3bc6                 cmp eax, esi
// 00503db6  7e02                 jle 0x503dba
// 00503db8  8bc6                 mov eax, esi
// 00503dba  5e                   pop esi
// 00503dbb  59                   pop ecx
// 00503dbc  c3                   ret 
// library rbxgs-g3d/G3Dcpp\g3dmath.cpp (function ?iRandom@G3D@@YAHHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/g3dmath.cpp
