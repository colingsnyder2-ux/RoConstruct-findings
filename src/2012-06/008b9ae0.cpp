// roc 2012-06 008b9ae0  unit: seg_008b0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008b9ae0
//
// 008b9ae0  51                   push ecx
// 008b9ae1  8b542410             mov edx, dword ptr [esp + 0x10]
// 008b9ae5  c6042400             mov byte ptr [esp], 0
// 008b9ae9  8b0424               mov eax, dword ptr [esp]
// 008b9aec  50                   push eax
// 008b9aed  8b442414             mov eax, dword ptr [esp + 0x14]
// 008b9af1  52                   push edx
// 008b9af2  8b542410             mov edx, dword ptr [esp + 0x10]
// 008b9af6  51                   push ecx
// 008b9af7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008b9afb  50                   push eax
// 008b9afc  51                   push ecx
// 008b9afd  52                   push edx
// 008b9afe  e80df3ffff           call 0x8b8e10
// 008b9b03  83c41c               add esp, 0x1c
// 008b9b06  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
