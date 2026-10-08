// roc 2007-08 00538410  unit: RBX::VScriptContext::?$FactoryProduct  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00538410
//
// 00538410  53                   push ebx
// 00538411  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00538415  8b4304               mov eax, dword ptr [ebx + 4]
// 00538418  56                   push esi
// 00538419  57                   push edi
// 0053841a  8bf1                 mov esi, ecx
// 0053841c  8b7e04               mov edi, dword ptr [esi + 4]
// 0053841f  83c004               add eax, 4
// 00538422  8b00                 mov eax, dword ptr [eax]
// 00538424  57                   push edi
// 00538425  50                   push eax
// 00538426  e865f5ffff           call 0x537990
// 0053842b  894704               mov dword ptr [edi + 4], eax
// 0053842e  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00538431  8b5604               mov edx, dword ptr [esi + 4]
// 00538434  894e08               mov dword ptr [esi + 8], ecx
// 00538437  8b4204               mov eax, dword ptr [edx + 4]
// 0053843a  80781100             cmp byte ptr [eax + 0x11], 0
// 0053843e  7537                 jne 0x538477
// 00538440  8b08                 mov ecx, dword ptr [eax]
// 00538442  80791100             cmp byte ptr [ecx + 0x11], 0
// 00538446  750a                 jne 0x538452
// 00538448  8bc1                 mov eax, ecx
// 0053844a  8b08                 mov ecx, dword ptr [eax]
// 0053844c  80791100             cmp byte ptr [ecx + 0x11], 0
// 00538450  74f6                 je 0x538448
// 00538452  8902                 mov dword ptr [edx], eax
// 00538454  8b7604               mov esi, dword ptr [esi + 4]
// 00538457  8b4e04               mov ecx, dword ptr [esi + 4]
// 0053845a  8b4108               mov eax, dword ptr [ecx + 8]
// 0053845d  80781100             cmp byte ptr [eax + 0x11], 0
// 00538461  750b                 jne 0x53846e
// 00538463  8bc8                 mov ecx, eax
// 00538465  8b4108               mov eax, dword ptr [ecx + 8]
// 00538468  80781100             cmp byte ptr [eax + 0x11], 0
// 0053846c  74f5                 je 0x538463
// 0053846e  5f                   pop edi
// 0053846f  894e08               mov dword ptr [esi + 8], ecx
// 00538472  5e                   pop esi
// 00538473  5b                   pop ebx
// 00538474  c20400               ret 4
// 00538477  8912                 mov dword ptr [edx], edx
// 00538479  8b7604               mov esi, dword ptr [esi + 4]
// 0053847c  5f                   pop edi
// 0053847d  897608               mov dword ptr [esi + 8], esi
// 00538480  5e                   pop esi
// 00538481  5b                   pop ebx
// 00538482  c20400               ret 4
// library rbxgs/script\ScriptContext.cpp (function ?_Copy@?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@std@@IAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
