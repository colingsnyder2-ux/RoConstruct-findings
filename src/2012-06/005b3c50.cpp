// roc 2012-06 005b3c50  unit: RBX::Network::ErrorCompPhysicsSender2  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005b3c50
//
// 005b3c50  51                   push ecx
// 005b3c51  8b542410             mov edx, dword ptr [esp + 0x10]
// 005b3c55  c6042400             mov byte ptr [esp], 0
// 005b3c59  8b0424               mov eax, dword ptr [esp]
// 005b3c5c  50                   push eax
// 005b3c5d  8b442414             mov eax, dword ptr [esp + 0x14]
// 005b3c61  52                   push edx
// 005b3c62  8b542410             mov edx, dword ptr [esp + 0x10]
// 005b3c66  51                   push ecx
// 005b3c67  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005b3c6b  50                   push eax
// 005b3c6c  51                   push ecx
// 005b3c6d  52                   push edx
// 005b3c6e  e80df8ffff           call 0x5b3480
// 005b3c73  83c41c               add esp, 0x1c
// 005b3c76  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
