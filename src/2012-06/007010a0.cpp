// from server: 100% by auto
// roc 2012-06 007010a0  unit: RBX::VDebugSettings::?$BoundFuncDesc  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007010a0
//
// 007010a0  51                   push ecx
// 007010a1  8b542410             mov edx, dword ptr [esp + 0x10]
// 007010a5  c6042400             mov byte ptr [esp], 0
// 007010a9  8b0424               mov eax, dword ptr [esp]
// 007010ac  50                   push eax
// 007010ad  8b442414             mov eax, dword ptr [esp + 0x14]
// 007010b1  52                   push edx
// 007010b2  8b542410             mov edx, dword ptr [esp + 0x10]
// 007010b6  51                   push ecx
// 007010b7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007010bb  50                   push eax
// 007010bc  51                   push ecx
// 007010bd  52                   push edx
// 007010be  e8adf2ffff           call 0x700370
// 007010c3  83c41c               add esp, 0x1c
// 007010c6  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
