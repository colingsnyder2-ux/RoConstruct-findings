// from server: 100% by auto
// roc 2012-06 007a7990  unit: RBX::VKeyframeSequence::?$FactoryProduct  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007a7990
//
// 007a7990  51                   push ecx
// 007a7991  8b542410             mov edx, dword ptr [esp + 0x10]
// 007a7995  c6042400             mov byte ptr [esp], 0
// 007a7999  8b0424               mov eax, dword ptr [esp]
// 007a799c  50                   push eax
// 007a799d  8b442414             mov eax, dword ptr [esp + 0x14]
// 007a79a1  52                   push edx
// 007a79a2  8b542410             mov edx, dword ptr [esp + 0x10]
// 007a79a6  51                   push ecx
// 007a79a7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007a79ab  50                   push eax
// 007a79ac  51                   push ecx
// 007a79ad  52                   push edx
// 007a79ae  e8cd1c0800           call 0x829680
// 007a79b3  83c41c               add esp, 0x1c
// 007a79b6  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
