// roc 2007-03 0042ea50  unit: seg_00420000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042ea50
//
// 0042ea50  53                   push ebx
// 0042ea51  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0042ea55  56                   push esi
// 0042ea56  57                   push edi
// 0042ea57  8bf9                 mov edi, ecx
// 0042ea59  8b37                 mov esi, dword ptr [edi]
// 0042ea5b  3bde                 cmp ebx, esi
// 0042ea5d  7441                 je 0x42eaa0
// 0042ea5f  85f6                 test esi, esi
// 0042ea61  743d                 je 0x42eaa0
// 0042ea63  8b4604               mov eax, dword ptr [esi + 4]
// 0042ea66  85c0                 test eax, eax
// 0042ea68  7418                 je 0x42ea82
// 0042ea6a  8b4e08               mov ecx, dword ptr [esi + 8]
// 0042ea6d  51                   push ecx
// 0042ea6e  50                   push eax
// 0042ea6f  8bce                 mov ecx, esi
// 0042ea71  e87affffff           call 0x42e9f0
// 0042ea76  8b5604               mov edx, dword ptr [esi + 4]
// 0042ea79  52                   push edx
// 0042ea7a  e871f61e00           call 0x61e0f0
// 0042ea7f  83c404               add esp, 4
// 0042ea82  56                   push esi
// 0042ea83  c7460400000000       mov dword ptr [esi + 4], 0
// 0042ea8a  c7460800000000       mov dword ptr [esi + 8], 0
// 0042ea91  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0042ea98  e853f61e00           call 0x61e0f0
// 0042ea9d  83c404               add esp, 4
// 0042eaa0  891f                 mov dword ptr [edi], ebx
// 0042eaa2  5f                   pop edi
// 0042eaa3  5e                   pop esi
// 0042eaa4  5b                   pop ebx
// 0042eaa5  c20400               ret 4
// library rbxgs/script\ScriptContext.cpp (function ?reset@?$auto_ptr@V?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@@std@@QAEXPAV?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
