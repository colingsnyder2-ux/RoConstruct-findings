// from server: 100% by auto
// roc 2012-06 0081a0f0  unit: RBX::VTouchTransmitter::?$FactoryProduct  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0081a0f0
//
// 0081a0f0  51                   push ecx
// 0081a0f1  8b542410             mov edx, dword ptr [esp + 0x10]
// 0081a0f5  c6042400             mov byte ptr [esp], 0
// 0081a0f9  8b0424               mov eax, dword ptr [esp]
// 0081a0fc  50                   push eax
// 0081a0fd  8b442414             mov eax, dword ptr [esp + 0x14]
// 0081a101  52                   push edx
// 0081a102  8b542410             mov edx, dword ptr [esp + 0x10]
// 0081a106  51                   push ecx
// 0081a107  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0081a10b  50                   push eax
// 0081a10c  51                   push ecx
// 0081a10d  52                   push edx
// 0081a10e  e8fdfdffff           call 0x819f10
// 0081a113  83c41c               add esp, 0x1c
// 0081a116  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
