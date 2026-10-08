// roc 2007-03 00570670  unit: seg_00570000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00570670
//
// 00570670  83ec08               sub esp, 8
// 00570673  56                   push esi
// 00570674  8b7104               mov esi, dword ptr [ecx + 4]
// 00570677  85f6                 test esi, esi
// 00570679  c7410400000000       mov dword ptr [ecx + 4], 0
// 00570680  7435                 je 0x5706b7
// 00570682  8b4604               mov eax, dword ptr [esi + 4]
// 00570685  8b08                 mov ecx, dword ptr [eax]
// 00570687  50                   push eax
// 00570688  56                   push esi
// 00570689  51                   push ecx
// 0057068a  56                   push esi
// 0057068b  8d442414             lea eax, [esp + 0x14]
// 0057068f  50                   push eax
// 00570690  8bce                 mov ecx, esi
// 00570692  e80939f3ff           call 0x4a3fa0
// 00570697  8b4e04               mov ecx, dword ptr [esi + 4]
// 0057069a  51                   push ecx
// 0057069b  e850da0a00           call 0x61e0f0
// 005706a0  56                   push esi
// 005706a1  c7460400000000       mov dword ptr [esi + 4], 0
// 005706a8  c7460800000000       mov dword ptr [esi + 8], 0
// 005706af  e83cda0a00           call 0x61e0f0
// 005706b4  83c408               add esp, 8
// 005706b7  5e                   pop esi
// 005706b8  83c408               add esp, 8
// 005706bb  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ?disconnect_all_slots@SignalSource@Reflection@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
