// from server: 100% by auto
// roc 2011-06 007b5810  unit: RBX::TreeStage  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007b5810
//
// 007b5810  51                   push ecx
// 007b5811  8b542410             mov edx, dword ptr [esp + 0x10]
// 007b5815  c6042400             mov byte ptr [esp], 0
// 007b5819  8b0424               mov eax, dword ptr [esp]
// 007b581c  50                   push eax
// 007b581d  8b442414             mov eax, dword ptr [esp + 0x14]
// 007b5821  52                   push edx
// 007b5822  8b542410             mov edx, dword ptr [esp + 0x10]
// 007b5826  51                   push ecx
// 007b5827  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007b582b  50                   push eax
// 007b582c  51                   push ecx
// 007b582d  52                   push edx
// 007b582e  e88dfdffff           call 0x7b55c0
// 007b5833  83c41c               add esp, 0x1c
// 007b5836  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
