// roc 2011-06 0061e0c0  unit: boost::Vbad_lexical_cast::U?$error_info_injector::?$clone_impl  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0061e0c0
//
// 0061e0c0  53                   push ebx
// 0061e0c1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0061e0c5  56                   push esi
// 0061e0c6  57                   push edi
// 0061e0c7  8bf9                 mov edi, ecx
// 0061e0c9  8b37                 mov esi, dword ptr [edi]
// 0061e0cb  3bde                 cmp ebx, esi
// 0061e0cd  7441                 je 0x61e110
// 0061e0cf  85f6                 test esi, esi
// 0061e0d1  743d                 je 0x61e110
// 0061e0d3  8b4604               mov eax, dword ptr [esi + 4]
// 0061e0d6  85c0                 test eax, eax
// 0061e0d8  7418                 je 0x61e0f2
// 0061e0da  8b4e08               mov ecx, dword ptr [esi + 8]
// 0061e0dd  51                   push ecx
// 0061e0de  50                   push eax
// 0061e0df  8bce                 mov ecx, esi
// 0061e0e1  e8baa9dfff           call 0x418aa0
// 0061e0e6  8b5604               mov edx, dword ptr [esi + 4]
// 0061e0e9  52                   push edx
// 0061e0ea  e869bf1e00           call 0x80a058
// 0061e0ef  83c404               add esp, 4
// 0061e0f2  56                   push esi
// 0061e0f3  c7460400000000       mov dword ptr [esi + 4], 0
// 0061e0fa  c7460800000000       mov dword ptr [esi + 8], 0
// 0061e101  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0061e108  e84bbf1e00           call 0x80a058
// 0061e10d  83c404               add esp, 4
// 0061e110  891f                 mov dword ptr [edi], ebx
// 0061e112  5f                   pop edi
// 0061e113  5e                   pop esi
// 0061e114  5b                   pop ebx
// 0061e115  c20400               ret 4
// library rbxgs/script\ScriptContext.cpp (function ?reset@?$auto_ptr@V?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@@std@@QAEXPAV?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
