// from server: 100% by auto
// roc 2012-06 005b3dc0  unit: RBX::Network::ErrorCompPhysicsSender2  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005b3dc0
//
// 005b3dc0  51                   push ecx
// 005b3dc1  56                   push esi
// 005b3dc2  8bf1                 mov esi, ecx
// 005b3dc4  8b4604               mov eax, dword ptr [esi + 4]
// 005b3dc7  85c0                 test eax, eax
// 005b3dc9  741c                 je 0x5b3de7
// 005b3dcb  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b3dcf  8b5608               mov edx, dword ptr [esi + 8]
// 005b3dd2  51                   push ecx
// 005b3dd3  56                   push esi
// 005b3dd4  52                   push edx
// 005b3dd5  50                   push eax
// 005b3dd6  e855fcffff           call 0x5b3a30
// 005b3ddb  8b4604               mov eax, dword ptr [esi + 4]
// 005b3dde  50                   push eax
// 005b3ddf  e830e33c00           call 0x982114
// 005b3de4  83c414               add esp, 0x14
// 005b3de7  c7460400000000       mov dword ptr [esi + 4], 0
// 005b3dee  c7460800000000       mov dword ptr [esi + 8], 0
// 005b3df5  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 005b3dfc  5e                   pop esi
// 005b3dfd  59                   pop ecx
// 005b3dfe  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
