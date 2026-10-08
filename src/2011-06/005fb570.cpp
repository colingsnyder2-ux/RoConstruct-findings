// from server: 100% by auto
// roc 2011-06 005fb570  unit: RBX::VDataModel::?$BoundYieldFuncDesc  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005fb570
//
// 005fb570  51                   push ecx
// 005fb571  56                   push esi
// 005fb572  8bf1                 mov esi, ecx
// 005fb574  8b4604               mov eax, dword ptr [esi + 4]
// 005fb577  85c0                 test eax, eax
// 005fb579  741c                 je 0x5fb597
// 005fb57b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005fb57f  8b5608               mov edx, dword ptr [esi + 8]
// 005fb582  51                   push ecx
// 005fb583  56                   push esi
// 005fb584  52                   push edx
// 005fb585  50                   push eax
// 005fb586  e8b578ffff           call 0x5f2e40
// 005fb58b  8b4604               mov eax, dword ptr [esi + 4]
// 005fb58e  50                   push eax
// 005fb58f  e8c4ea2000           call 0x80a058
// 005fb594  83c414               add esp, 0x14
// 005fb597  c7460400000000       mov dword ptr [esi + 4], 0
// 005fb59e  c7460800000000       mov dword ptr [esi + 8], 0
// 005fb5a5  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 005fb5ac  5e                   pop esi
// 005fb5ad  59                   pop ecx
// 005fb5ae  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
