// from server: 100% by auto
// roc 2011-06 009c04d0  unit: RBX::WedgeBuilder  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009c04d0
//
// 009c04d0  51                   push ecx
// 009c04d1  8b542410             mov edx, dword ptr [esp + 0x10]
// 009c04d5  c6042400             mov byte ptr [esp], 0
// 009c04d9  8b0424               mov eax, dword ptr [esp]
// 009c04dc  50                   push eax
// 009c04dd  8b442414             mov eax, dword ptr [esp + 0x14]
// 009c04e1  52                   push edx
// 009c04e2  8b542410             mov edx, dword ptr [esp + 0x10]
// 009c04e6  51                   push ecx
// 009c04e7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009c04eb  50                   push eax
// 009c04ec  51                   push ecx
// 009c04ed  52                   push edx
// 009c04ee  e8edfeffff           call 0x9c03e0
// 009c04f3  83c41c               add esp, 0x1c
// 009c04f6  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
