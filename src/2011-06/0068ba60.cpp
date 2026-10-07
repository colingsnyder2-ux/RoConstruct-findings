// roc 2011-06 0068ba60  unit: RBX::VKeyframeSequence::?$BoundFuncDesc  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0068ba60
//
// 0068ba60  51                   push ecx
// 0068ba61  8b542410             mov edx, dword ptr [esp + 0x10]
// 0068ba65  c6042400             mov byte ptr [esp], 0
// 0068ba69  8b0424               mov eax, dword ptr [esp]
// 0068ba6c  50                   push eax
// 0068ba6d  8b442414             mov eax, dword ptr [esp + 0x14]
// 0068ba71  52                   push edx
// 0068ba72  8b542410             mov edx, dword ptr [esp + 0x10]
// 0068ba76  51                   push ecx
// 0068ba77  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0068ba7b  50                   push eax
// 0068ba7c  51                   push ecx
// 0068ba7d  52                   push edx
// 0068ba7e  e8cdeeffff           call 0x68a950
// 0068ba83  83c41c               add esp, 0x1c
// 0068ba86  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
