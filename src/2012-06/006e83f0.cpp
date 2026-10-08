// from server: 100% by auto
// roc 2012-06 006e83f0  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006e83f0
//
// 006e83f0  51                   push ecx
// 006e83f1  8b542410             mov edx, dword ptr [esp + 0x10]
// 006e83f5  c6042400             mov byte ptr [esp], 0
// 006e83f9  8b0424               mov eax, dword ptr [esp]
// 006e83fc  50                   push eax
// 006e83fd  8b442414             mov eax, dword ptr [esp + 0x14]
// 006e8401  52                   push edx
// 006e8402  8b542410             mov edx, dword ptr [esp + 0x10]
// 006e8406  51                   push ecx
// 006e8407  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006e840b  50                   push eax
// 006e840c  51                   push ecx
// 006e840d  52                   push edx
// 006e840e  e83d73ffff           call 0x6df750
// 006e8413  83c41c               add esp, 0x1c
// 006e8416  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
