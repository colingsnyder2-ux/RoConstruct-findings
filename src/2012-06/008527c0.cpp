// from server: 100% by auto
// roc 2012-06 008527c0  unit: RBX::CoreScript  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008527c0
//
// 008527c0  51                   push ecx
// 008527c1  8b542410             mov edx, dword ptr [esp + 0x10]
// 008527c5  c6042400             mov byte ptr [esp], 0
// 008527c9  8b0424               mov eax, dword ptr [esp]
// 008527cc  50                   push eax
// 008527cd  8b442414             mov eax, dword ptr [esp + 0x14]
// 008527d1  52                   push edx
// 008527d2  8b542410             mov edx, dword ptr [esp + 0x10]
// 008527d6  51                   push ecx
// 008527d7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008527db  50                   push eax
// 008527dc  51                   push ecx
// 008527dd  52                   push edx
// 008527de  e8fdfdffff           call 0x8525e0
// 008527e3  83c41c               add esp, 0x1c
// 008527e6  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
