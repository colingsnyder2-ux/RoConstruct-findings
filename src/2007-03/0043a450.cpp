// roc 2007-03 0043a450  unit: seg_00430000  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0043a450
//
// 0043a450  53                   push ebx
// 0043a451  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0043a455  8b4304               mov eax, dword ptr [ebx + 4]
// 0043a458  56                   push esi
// 0043a459  57                   push edi
// 0043a45a  8bf1                 mov esi, ecx
// 0043a45c  8b7e04               mov edi, dword ptr [esi + 4]
// 0043a45f  83c004               add eax, 4
// 0043a462  8b00                 mov eax, dword ptr [eax]
// 0043a464  57                   push edi
// 0043a465  50                   push eax
// 0043a466  e8b5f8ffff           call 0x439d20
// 0043a46b  894704               mov dword ptr [edi + 4], eax
// 0043a46e  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0043a471  8b5604               mov edx, dword ptr [esi + 4]
// 0043a474  894e08               mov dword ptr [esi + 8], ecx
// 0043a477  8b4204               mov eax, dword ptr [edx + 4]
// 0043a47a  80781100             cmp byte ptr [eax + 0x11], 0
// 0043a47e  7537                 jne 0x43a4b7
// 0043a480  8b08                 mov ecx, dword ptr [eax]
// 0043a482  80791100             cmp byte ptr [ecx + 0x11], 0
// 0043a486  750a                 jne 0x43a492
// 0043a488  8bc1                 mov eax, ecx
// 0043a48a  8b08                 mov ecx, dword ptr [eax]
// 0043a48c  80791100             cmp byte ptr [ecx + 0x11], 0
// 0043a490  74f6                 je 0x43a488
// 0043a492  8902                 mov dword ptr [edx], eax
// 0043a494  8b7604               mov esi, dword ptr [esi + 4]
// 0043a497  8b4e04               mov ecx, dword ptr [esi + 4]
// 0043a49a  8b4108               mov eax, dword ptr [ecx + 8]
// 0043a49d  80781100             cmp byte ptr [eax + 0x11], 0
// 0043a4a1  750b                 jne 0x43a4ae
// 0043a4a3  8bc8                 mov ecx, eax
// 0043a4a5  8b4108               mov eax, dword ptr [ecx + 8]
// 0043a4a8  80781100             cmp byte ptr [eax + 0x11], 0
// 0043a4ac  74f5                 je 0x43a4a3
// 0043a4ae  5f                   pop edi
// 0043a4af  894e08               mov dword ptr [esi + 8], ecx
// 0043a4b2  5e                   pop esi
// 0043a4b3  5b                   pop ebx
// 0043a4b4  c20400               ret 4
// 0043a4b7  8912                 mov dword ptr [edx], edx
// 0043a4b9  8b7604               mov esi, dword ptr [esi + 4]
// 0043a4bc  5f                   pop edi
// 0043a4bd  897608               mov dword ptr [esi + 8], esi
// 0043a4c0  5e                   pop esi
// 0043a4c1  5b                   pop ebx
// 0043a4c2  c20400               ret 4
// library rbxgs/script\ScriptContext.cpp (function ?_Copy@?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@std@@IAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
