// roc 2008-06 004ad940  unit: RBX::Network::Replicator::ChangePropertyItem  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ad940
//
// 004ad940  51                   push ecx
// 004ad941  53                   push ebx
// 004ad942  55                   push ebp
// 004ad943  56                   push esi
// 004ad944  57                   push edi
// 004ad945  8bf9                 mov edi, ecx
// 004ad947  8b4718               mov eax, dword ptr [edi + 0x18]
// 004ad94a  8b7004               mov esi, dword ptr [eax + 4]
// 004ad94d  807e1900             cmp byte ptr [esi + 0x19], 0
// 004ad951  897c2410             mov dword ptr [esp + 0x10], edi
// 004ad955  8be8                 mov ebp, eax
// 004ad957  8bd8                 mov ebx, eax
// 004ad959  7541                 jne 0x4ad99c
// 004ad95b  eb03                 jmp 0x4ad960
// 004ad95d  8d4900               lea ecx, [ecx]
// 004ad960  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004ad964  8d7e0c               lea edi, [esi + 0xc]
// 004ad967  50                   push eax
// 004ad968  8bcf                 mov ecx, edi
// 004ad96a  e8a1a80f00           call 0x5a8210
// 004ad96f  84c0                 test al, al
// 004ad971  7405                 je 0x4ad978
// 004ad973  8b7608               mov esi, dword ptr [esi + 8]
// 004ad976  eb1a                 jmp 0x4ad992
// 004ad978  807b1900             cmp byte ptr [ebx + 0x19], 0
// 004ad97c  7410                 je 0x4ad98e
// 004ad97e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004ad982  57                   push edi
// 004ad983  e888a80f00           call 0x5a8210
// 004ad988  84c0                 test al, al
// 004ad98a  7402                 je 0x4ad98e
// 004ad98c  8bde                 mov ebx, esi
// 004ad98e  8bee                 mov ebp, esi
// 004ad990  8b36                 mov esi, dword ptr [esi]
// 004ad992  807e1900             cmp byte ptr [esi + 0x19], 0
// 004ad996  74c8                 je 0x4ad960
// 004ad998  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004ad99c  807b1900             cmp byte ptr [ebx + 0x19], 0
// 004ad9a0  7408                 je 0x4ad9aa
// 004ad9a2  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 004ad9a5  8b7104               mov esi, dword ptr [ecx + 4]
// 004ad9a8  eb02                 jmp 0x4ad9ac
// 004ad9aa  8b33                 mov esi, dword ptr [ebx]
// 004ad9ac  807e1900             cmp byte ptr [esi + 0x19], 0
// 004ad9b0  7520                 jne 0x4ad9d2
// 004ad9b2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004ad9b6  8d560c               lea edx, [esi + 0xc]
// 004ad9b9  52                   push edx
// 004ad9ba  e851a80f00           call 0x5a8210
// 004ad9bf  84c0                 test al, al
// 004ad9c1  7406                 je 0x4ad9c9
// 004ad9c3  8bde                 mov ebx, esi
// 004ad9c5  8b36                 mov esi, dword ptr [esi]
// 004ad9c7  eb03                 jmp 0x4ad9cc
// 004ad9c9  8b7608               mov esi, dword ptr [esi + 8]
// 004ad9cc  807e1900             cmp byte ptr [esi + 0x19], 0
// 004ad9d0  74e0                 je 0x4ad9b2
// 004ad9d2  8b0f                 mov ecx, dword ptr [edi]
// 004ad9d4  8b442418             mov eax, dword ptr [esp + 0x18]
// 004ad9d8  5f                   pop edi
// 004ad9d9  5e                   pop esi
// 004ad9da  896804               mov dword ptr [eax + 4], ebp
// 004ad9dd  5d                   pop ebp
// 004ad9de  89580c               mov dword ptr [eax + 0xc], ebx
// 004ad9e1  8908                 mov dword ptr [eax], ecx
// 004ad9e3  894808               mov dword ptr [eax + 8], ecx
// 004ad9e6  5b                   pop ebx
// 004ad9e7  59                   pop ecx
// 004ad9e8  c20800               ret 8
// library rbxgs-net/IdManager.cpp (function ?_Eqrange@?$_Tree@V?$_Tmap_traits@UData@Guid@RBX@@PAVInstance@3@U?$less@UData@Guid@RBX@@@std@@V?$allocator@U?$pair@$$CBUData@Guid@RBX@@PAVInstance@3@@std@@@6@$0A@@std@@@std@@IAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@UData@Guid@RBX@@PAVInstance@3@U?$less@UData@Guid@RBX@@@std@@V?$allocator@U?$pair@$$CBUData@Guid@RBX@@PAVInstance@3@@std@@@6@$0A@@std@@@std@@V123@@2@ABUData@Guid@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net IdManager.cpp
