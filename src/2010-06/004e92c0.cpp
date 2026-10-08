// roc 2010-06 004e92c0  unit: G3D::VRay::?$holder  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e92c0
//
// 004e92c0  51                   push ecx
// 004e92c1  53                   push ebx
// 004e92c2  55                   push ebp
// 004e92c3  56                   push esi
// 004e92c4  57                   push edi
// 004e92c5  8bf9                 mov edi, ecx
// 004e92c7  8b4718               mov eax, dword ptr [edi + 0x18]
// 004e92ca  8b7004               mov esi, dword ptr [eax + 4]
// 004e92cd  807e1900             cmp byte ptr [esi + 0x19], 0
// 004e92d1  897c2410             mov dword ptr [esp + 0x10], edi
// 004e92d5  8be8                 mov ebp, eax
// 004e92d7  8bd8                 mov ebx, eax
// 004e92d9  7541                 jne 0x4e931c
// 004e92db  eb03                 jmp 0x4e92e0
// 004e92dd  8d4900               lea ecx, [ecx]
// 004e92e0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004e92e4  8d7e0c               lea edi, [esi + 0xc]
// 004e92e7  50                   push eax
// 004e92e8  8bcf                 mov ecx, edi
// 004e92ea  e8c1480100           call 0x4fdbb0
// 004e92ef  84c0                 test al, al
// 004e92f1  7405                 je 0x4e92f8
// 004e92f3  8b7608               mov esi, dword ptr [esi + 8]
// 004e92f6  eb1a                 jmp 0x4e9312
// 004e92f8  807b1900             cmp byte ptr [ebx + 0x19], 0
// 004e92fc  7410                 je 0x4e930e
// 004e92fe  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004e9302  57                   push edi
// 004e9303  e8a8480100           call 0x4fdbb0
// 004e9308  84c0                 test al, al
// 004e930a  7402                 je 0x4e930e
// 004e930c  8bde                 mov ebx, esi
// 004e930e  8bee                 mov ebp, esi
// 004e9310  8b36                 mov esi, dword ptr [esi]
// 004e9312  807e1900             cmp byte ptr [esi + 0x19], 0
// 004e9316  74c8                 je 0x4e92e0
// 004e9318  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004e931c  807b1900             cmp byte ptr [ebx + 0x19], 0
// 004e9320  7408                 je 0x4e932a
// 004e9322  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 004e9325  8b7104               mov esi, dword ptr [ecx + 4]
// 004e9328  eb02                 jmp 0x4e932c
// 004e932a  8b33                 mov esi, dword ptr [ebx]
// 004e932c  807e1900             cmp byte ptr [esi + 0x19], 0
// 004e9330  7520                 jne 0x4e9352
// 004e9332  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004e9336  8d560c               lea edx, [esi + 0xc]
// 004e9339  52                   push edx
// 004e933a  e871480100           call 0x4fdbb0
// 004e933f  84c0                 test al, al
// 004e9341  7406                 je 0x4e9349
// 004e9343  8bde                 mov ebx, esi
// 004e9345  8b36                 mov esi, dword ptr [esi]
// 004e9347  eb03                 jmp 0x4e934c
// 004e9349  8b7608               mov esi, dword ptr [esi + 8]
// 004e934c  807e1900             cmp byte ptr [esi + 0x19], 0
// 004e9350  74e0                 je 0x4e9332
// 004e9352  8b0f                 mov ecx, dword ptr [edi]
// 004e9354  8b442418             mov eax, dword ptr [esp + 0x18]
// 004e9358  5f                   pop edi
// 004e9359  5e                   pop esi
// 004e935a  896804               mov dword ptr [eax + 4], ebp
// 004e935d  5d                   pop ebp
// 004e935e  89580c               mov dword ptr [eax + 0xc], ebx
// 004e9361  8908                 mov dword ptr [eax], ecx
// 004e9363  894808               mov dword ptr [eax + 8], ecx
// 004e9366  5b                   pop ebx
// 004e9367  59                   pop ecx
// 004e9368  c20800               ret 8
// library rbxgs-net/IdManager.cpp (function ?_Eqrange@?$_Tree@V?$_Tmap_traits@UData@Guid@RBX@@PAVInstance@3@U?$less@UData@Guid@RBX@@@std@@V?$allocator@U?$pair@$$CBUData@Guid@RBX@@PAVInstance@3@@std@@@6@$0A@@std@@@std@@IAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@UData@Guid@RBX@@PAVInstance@3@U?$less@UData@Guid@RBX@@@std@@V?$allocator@U?$pair@$$CBUData@Guid@RBX@@PAVInstance@3@@std@@@6@$0A@@std@@@std@@V123@@2@ABUData@Guid@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net IdManager.cpp
