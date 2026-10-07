// roc 2012-06 005855e0  unit: RBX::Network::Replicator  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005855e0
//
// 005855e0  51                   push ecx
// 005855e1  56                   push esi
// 005855e2  8bf1                 mov esi, ecx
// 005855e4  8b4604               mov eax, dword ptr [esi + 4]
// 005855e7  85c0                 test eax, eax
// 005855e9  741c                 je 0x585607
// 005855eb  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005855ef  8b5608               mov edx, dword ptr [esi + 8]
// 005855f2  51                   push ecx
// 005855f3  56                   push esi
// 005855f4  52                   push edx
// 005855f5  50                   push eax
// 005855f6  e825cbffff           call 0x582120
// 005855fb  8b4604               mov eax, dword ptr [esi + 4]
// 005855fe  50                   push eax
// 005855ff  e810cb3f00           call 0x982114
// 00585604  83c414               add esp, 0x14
// 00585607  c7460400000000       mov dword ptr [esi + 4], 0
// 0058560e  c7460800000000       mov dword ptr [esi + 8], 0
// 00585615  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0058561c  5e                   pop esi
// 0058561d  59                   pop ecx
// 0058561e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
