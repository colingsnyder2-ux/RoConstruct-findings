// from server: 100% by auto
// roc 2011-06 007b7b30  unit: RBX::GuiLayerCollector  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007b7b30
//
// 007b7b30  51                   push ecx
// 007b7b31  8b542410             mov edx, dword ptr [esp + 0x10]
// 007b7b35  c6042400             mov byte ptr [esp], 0
// 007b7b39  8b0424               mov eax, dword ptr [esp]
// 007b7b3c  50                   push eax
// 007b7b3d  8b442414             mov eax, dword ptr [esp + 0x14]
// 007b7b41  52                   push edx
// 007b7b42  8b542410             mov edx, dword ptr [esp + 0x10]
// 007b7b46  51                   push ecx
// 007b7b47  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007b7b4b  50                   push eax
// 007b7b4c  51                   push ecx
// 007b7b4d  52                   push edx
// 007b7b4e  e86df8ffff           call 0x7b73c0
// 007b7b53  83c41c               add esp, 0x1c
// 007b7b56  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
