// roc 2011-06 00418b70  unit: VCRbxObject::?$CComObjectNoLock  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00418b70
//
// 00418b70  51                   push ecx
// 00418b71  8b542410             mov edx, dword ptr [esp + 0x10]
// 00418b75  c6042400             mov byte ptr [esp], 0
// 00418b79  8b0424               mov eax, dword ptr [esp]
// 00418b7c  50                   push eax
// 00418b7d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00418b81  52                   push edx
// 00418b82  8b542410             mov edx, dword ptr [esp + 0x10]
// 00418b86  51                   push ecx
// 00418b87  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00418b8b  50                   push eax
// 00418b8c  51                   push ecx
// 00418b8d  52                   push edx
// 00418b8e  e8ddf8ffff           call 0x418470
// 00418b93  83c41c               add esp, 0x1c
// 00418b96  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
