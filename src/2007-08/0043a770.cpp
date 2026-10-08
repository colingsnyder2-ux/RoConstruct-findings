// roc 2007-08 0043a770  unit: IIHAAH::?$CMap  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0043a770
//
// 0043a770  53                   push ebx
// 0043a771  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0043a775  8b4304               mov eax, dword ptr [ebx + 4]
// 0043a778  56                   push esi
// 0043a779  57                   push edi
// 0043a77a  8bf1                 mov esi, ecx
// 0043a77c  8b7e04               mov edi, dword ptr [esi + 4]
// 0043a77f  83c004               add eax, 4
// 0043a782  8b00                 mov eax, dword ptr [eax]
// 0043a784  57                   push edi
// 0043a785  50                   push eax
// 0043a786  e805f7ffff           call 0x439e90
// 0043a78b  894704               mov dword ptr [edi + 4], eax
// 0043a78e  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0043a791  8b5604               mov edx, dword ptr [esi + 4]
// 0043a794  894e08               mov dword ptr [esi + 8], ecx
// 0043a797  8b4204               mov eax, dword ptr [edx + 4]
// 0043a79a  80781100             cmp byte ptr [eax + 0x11], 0
// 0043a79e  7537                 jne 0x43a7d7
// 0043a7a0  8b08                 mov ecx, dword ptr [eax]
// 0043a7a2  80791100             cmp byte ptr [ecx + 0x11], 0
// 0043a7a6  750a                 jne 0x43a7b2
// 0043a7a8  8bc1                 mov eax, ecx
// 0043a7aa  8b08                 mov ecx, dword ptr [eax]
// 0043a7ac  80791100             cmp byte ptr [ecx + 0x11], 0
// 0043a7b0  74f6                 je 0x43a7a8
// 0043a7b2  8902                 mov dword ptr [edx], eax
// 0043a7b4  8b7604               mov esi, dword ptr [esi + 4]
// 0043a7b7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0043a7ba  8b4108               mov eax, dword ptr [ecx + 8]
// 0043a7bd  80781100             cmp byte ptr [eax + 0x11], 0
// 0043a7c1  750b                 jne 0x43a7ce
// 0043a7c3  8bc8                 mov ecx, eax
// 0043a7c5  8b4108               mov eax, dword ptr [ecx + 8]
// 0043a7c8  80781100             cmp byte ptr [eax + 0x11], 0
// 0043a7cc  74f5                 je 0x43a7c3
// 0043a7ce  5f                   pop edi
// 0043a7cf  894e08               mov dword ptr [esi + 8], ecx
// 0043a7d2  5e                   pop esi
// 0043a7d3  5b                   pop ebx
// 0043a7d4  c20400               ret 4
// 0043a7d7  8912                 mov dword ptr [edx], edx
// 0043a7d9  8b7604               mov esi, dword ptr [esi + 4]
// 0043a7dc  5f                   pop edi
// 0043a7dd  897608               mov dword ptr [esi + 8], esi
// 0043a7e0  5e                   pop esi
// 0043a7e1  5b                   pop ebx
// 0043a7e2  c20400               ret 4
// library rbxgs/script\ScriptContext.cpp (function ?_Copy@?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@std@@IAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
