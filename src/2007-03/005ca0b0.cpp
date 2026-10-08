// roc 2007-03 005ca0b0  unit: seg_005c0000  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ca0b0
//
// 005ca0b0  53                   push ebx
// 005ca0b1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005ca0b5  8b4304               mov eax, dword ptr [ebx + 4]
// 005ca0b8  56                   push esi
// 005ca0b9  57                   push edi
// 005ca0ba  8bf1                 mov esi, ecx
// 005ca0bc  8b7e04               mov edi, dword ptr [esi + 4]
// 005ca0bf  83c004               add eax, 4
// 005ca0c2  8b00                 mov eax, dword ptr [eax]
// 005ca0c4  57                   push edi
// 005ca0c5  50                   push eax
// 005ca0c6  e845fbffff           call 0x5c9c10
// 005ca0cb  894704               mov dword ptr [edi + 4], eax
// 005ca0ce  8b4b08               mov ecx, dword ptr [ebx + 8]
// 005ca0d1  8b5604               mov edx, dword ptr [esi + 4]
// 005ca0d4  894e08               mov dword ptr [esi + 8], ecx
// 005ca0d7  8b4204               mov eax, dword ptr [edx + 4]
// 005ca0da  80781100             cmp byte ptr [eax + 0x11], 0
// 005ca0de  7537                 jne 0x5ca117
// 005ca0e0  8b08                 mov ecx, dword ptr [eax]
// 005ca0e2  80791100             cmp byte ptr [ecx + 0x11], 0
// 005ca0e6  750a                 jne 0x5ca0f2
// 005ca0e8  8bc1                 mov eax, ecx
// 005ca0ea  8b08                 mov ecx, dword ptr [eax]
// 005ca0ec  80791100             cmp byte ptr [ecx + 0x11], 0
// 005ca0f0  74f6                 je 0x5ca0e8
// 005ca0f2  8902                 mov dword ptr [edx], eax
// 005ca0f4  8b7604               mov esi, dword ptr [esi + 4]
// 005ca0f7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ca0fa  8b4108               mov eax, dword ptr [ecx + 8]
// 005ca0fd  80781100             cmp byte ptr [eax + 0x11], 0
// 005ca101  750b                 jne 0x5ca10e
// 005ca103  8bc8                 mov ecx, eax
// 005ca105  8b4108               mov eax, dword ptr [ecx + 8]
// 005ca108  80781100             cmp byte ptr [eax + 0x11], 0
// 005ca10c  74f5                 je 0x5ca103
// 005ca10e  5f                   pop edi
// 005ca10f  894e08               mov dword ptr [esi + 8], ecx
// 005ca112  5e                   pop esi
// 005ca113  5b                   pop ebx
// 005ca114  c20400               ret 4
// 005ca117  8912                 mov dword ptr [edx], edx
// 005ca119  8b7604               mov esi, dword ptr [esi + 4]
// 005ca11c  5f                   pop edi
// 005ca11d  897608               mov dword ptr [esi + 8], esi
// 005ca120  5e                   pop esi
// 005ca121  5b                   pop ebx
// 005ca122  c20400               ret 4
// library rbxgs/script\ScriptContext.cpp (function ?_Copy@?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@std@@IAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
