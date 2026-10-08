// from server: 100% by auto
// roc 2007-08 00539270  unit: RBX::VScriptContext::?$FactoryProduct  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00539270
//
// 00539270  51                   push ecx
// 00539271  56                   push esi
// 00539272  8bf1                 mov esi, ecx
// 00539274  8b4604               mov eax, dword ptr [esi + 4]
// 00539277  85c0                 test eax, eax
// 00539279  741c                 je 0x539297
// 0053927b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0053927f  8b5608               mov edx, dword ptr [esi + 8]
// 00539282  51                   push ecx
// 00539283  56                   push esi
// 00539284  52                   push edx
// 00539285  50                   push eax
// 00539286  e8c548edff           call 0x40db50
// 0053928b  8b4604               mov eax, dword ptr [esi + 4]
// 0053928e  50                   push eax
// 0053928f  e8ce690f00           call 0x62fc62
// 00539294  83c414               add esp, 0x14
// 00539297  c7460400000000       mov dword ptr [esi + 4], 0
// 0053929e  c7460800000000       mov dword ptr [esi + 8], 0
// 005392a5  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 005392ac  5e                   pop esi
// 005392ad  59                   pop ecx
// 005392ae  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
