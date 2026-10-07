// roc 2011-06 0068a090  unit: RBX::VKeyframeSequence::?$FactoryProduct  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0068a090
//
// 0068a090  51                   push ecx
// 0068a091  8b542410             mov edx, dword ptr [esp + 0x10]
// 0068a095  c6042400             mov byte ptr [esp], 0
// 0068a099  8b0424               mov eax, dword ptr [esp]
// 0068a09c  50                   push eax
// 0068a09d  8b442414             mov eax, dword ptr [esp + 0x14]
// 0068a0a1  52                   push edx
// 0068a0a2  8b542410             mov edx, dword ptr [esp + 0x10]
// 0068a0a6  51                   push ecx
// 0068a0a7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0068a0ab  50                   push eax
// 0068a0ac  51                   push ecx
// 0068a0ad  52                   push edx
// 0068a0ae  e8bdfaffff           call 0x689b70
// 0068a0b3  83c41c               add esp, 0x1c
// 0068a0b6  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
