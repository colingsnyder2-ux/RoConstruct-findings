// roc 2012-06 007962d0  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$callable  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007962d0
//
// 007962d0  51                   push ecx
// 007962d1  8b542410             mov edx, dword ptr [esp + 0x10]
// 007962d5  c6042400             mov byte ptr [esp], 0
// 007962d9  8b0424               mov eax, dword ptr [esp]
// 007962dc  50                   push eax
// 007962dd  8b442414             mov eax, dword ptr [esp + 0x14]
// 007962e1  52                   push edx
// 007962e2  8b542410             mov edx, dword ptr [esp + 0x10]
// 007962e6  51                   push ecx
// 007962e7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007962eb  50                   push eax
// 007962ec  51                   push ecx
// 007962ed  52                   push edx
// 007962ee  e89d92faff           call 0x73f590
// 007962f3  83c41c               add esp, 0x1c
// 007962f6  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
