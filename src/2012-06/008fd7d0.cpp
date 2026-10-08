// from server: 100% by auto
// roc 2012-06 008fd7d0  unit: RBX::VAnimationTrackState::?$EventDesc  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008fd7d0
//
// 008fd7d0  51                   push ecx
// 008fd7d1  8b542410             mov edx, dword ptr [esp + 0x10]
// 008fd7d5  c6042400             mov byte ptr [esp], 0
// 008fd7d9  8b0424               mov eax, dword ptr [esp]
// 008fd7dc  50                   push eax
// 008fd7dd  8b442414             mov eax, dword ptr [esp + 0x14]
// 008fd7e1  52                   push edx
// 008fd7e2  8b542410             mov edx, dword ptr [esp + 0x10]
// 008fd7e6  51                   push ecx
// 008fd7e7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008fd7eb  50                   push eax
// 008fd7ec  51                   push ecx
// 008fd7ed  52                   push edx
// 008fd7ee  e8cd4debff           call 0x7b25c0
// 008fd7f3  83c41c               add esp, 0x1c
// 008fd7f6  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
