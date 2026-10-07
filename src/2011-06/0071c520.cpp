// roc 2011-06 0071c520  unit: RBX::VLuaDragger::?$FactoryProduct  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0071c520
//
// 0071c520  51                   push ecx
// 0071c521  8b542410             mov edx, dword ptr [esp + 0x10]
// 0071c525  c6042400             mov byte ptr [esp], 0
// 0071c529  8b0424               mov eax, dword ptr [esp]
// 0071c52c  50                   push eax
// 0071c52d  8b442414             mov eax, dword ptr [esp + 0x14]
// 0071c531  52                   push edx
// 0071c532  8b542410             mov edx, dword ptr [esp + 0x10]
// 0071c536  51                   push ecx
// 0071c537  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0071c53b  50                   push eax
// 0071c53c  51                   push ecx
// 0071c53d  52                   push edx
// 0071c53e  e8ad18f5ff           call 0x66ddf0
// 0071c543  83c41c               add esp, 0x1c
// 0071c546  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
