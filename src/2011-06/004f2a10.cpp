// roc 2011-06 004f2a10  unit: RBX::Network::IdSerializer  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f2a10
//
// 004f2a10  51                   push ecx
// 004f2a11  8b542410             mov edx, dword ptr [esp + 0x10]
// 004f2a15  c6042400             mov byte ptr [esp], 0
// 004f2a19  8b0424               mov eax, dword ptr [esp]
// 004f2a1c  50                   push eax
// 004f2a1d  8b442414             mov eax, dword ptr [esp + 0x14]
// 004f2a21  52                   push edx
// 004f2a22  8b542410             mov edx, dword ptr [esp + 0x10]
// 004f2a26  51                   push ecx
// 004f2a27  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004f2a2b  50                   push eax
// 004f2a2c  51                   push ecx
// 004f2a2d  52                   push edx
// 004f2a2e  e84df8ffff           call 0x4f2280
// 004f2a33  83c41c               add esp, 0x1c
// 004f2a36  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
