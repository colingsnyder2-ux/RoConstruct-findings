// from server: 100% by auto
// roc 2012-06 008b0090  unit: RBX::GuiLayerCollector  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008b0090
//
// 008b0090  51                   push ecx
// 008b0091  8b542410             mov edx, dword ptr [esp + 0x10]
// 008b0095  c6042400             mov byte ptr [esp], 0
// 008b0099  8b0424               mov eax, dword ptr [esp]
// 008b009c  50                   push eax
// 008b009d  8b442414             mov eax, dword ptr [esp + 0x14]
// 008b00a1  52                   push edx
// 008b00a2  8b542410             mov edx, dword ptr [esp + 0x10]
// 008b00a6  51                   push ecx
// 008b00a7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008b00ab  50                   push eax
// 008b00ac  51                   push ecx
// 008b00ad  52                   push edx
// 008b00ae  e82dfdffff           call 0x8afde0
// 008b00b3  83c41c               add esp, 0x1c
// 008b00b6  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
