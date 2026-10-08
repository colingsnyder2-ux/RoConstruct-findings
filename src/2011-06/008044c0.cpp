// from server: 100% by auto
// roc 2011-06 008044c0  unit: W4_D3DFORMAT::?$EnumDesc  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008044c0
//
// 008044c0  51                   push ecx
// 008044c1  8b542410             mov edx, dword ptr [esp + 0x10]
// 008044c5  c6042400             mov byte ptr [esp], 0
// 008044c9  8b0424               mov eax, dword ptr [esp]
// 008044cc  50                   push eax
// 008044cd  8b442414             mov eax, dword ptr [esp + 0x14]
// 008044d1  52                   push edx
// 008044d2  8b542410             mov edx, dword ptr [esp + 0x10]
// 008044d6  51                   push ecx
// 008044d7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008044db  50                   push eax
// 008044dc  51                   push ecx
// 008044dd  52                   push edx
// 008044de  e84d43f4ff           call 0x748830
// 008044e3  83c41c               add esp, 0x1c
// 008044e6  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
