// roc 2007-03 0043a120  unit: seg_00430000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0043a120
//
// 0043a120  56                   push esi
// 0043a121  8bf1                 mov esi, ecx
// 0043a123  8b4608               mov eax, dword ptr [esi + 8]
// 0043a126  85c0                 test eax, eax
// 0043a128  7409                 je 0x43a133
// 0043a12a  50                   push eax
// 0043a12b  e8c03f1e00           call 0x61e0f0
// 0043a130  83c404               add esp, 4
// 0043a133  c7460800000000       mov dword ptr [esi + 8], 0
// 0043a13a  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0043a141  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0043a148  5e                   pop esi
// 0043a149  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ??1?$Notifier@VRunService@RBX@@VHeartbeat@2@@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
