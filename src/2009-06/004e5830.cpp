// roc 2009-06 004e5830  unit: CRobloxWnd::UserInputJob  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e5830
//
// 004e5830  51                   push ecx
// 004e5831  53                   push ebx
// 004e5832  55                   push ebp
// 004e5833  56                   push esi
// 004e5834  57                   push edi
// 004e5835  8bf9                 mov edi, ecx
// 004e5837  8b4718               mov eax, dword ptr [edi + 0x18]
// 004e583a  8b7004               mov esi, dword ptr [eax + 4]
// 004e583d  807e1900             cmp byte ptr [esi + 0x19], 0
// 004e5841  897c2410             mov dword ptr [esp + 0x10], edi
// 004e5845  8be8                 mov ebp, eax
// 004e5847  8bd8                 mov ebx, eax
// 004e5849  7541                 jne 0x4e588c
// 004e584b  eb03                 jmp 0x4e5850
// 004e584d  8d4900               lea ecx, [ecx]
// 004e5850  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004e5854  8d7e0c               lea edi, [esi + 0xc]
// 004e5857  50                   push eax
// 004e5858  8bcf                 mov ecx, edi
// 004e585a  e8d1d31400           call 0x632c30
// 004e585f  84c0                 test al, al
// 004e5861  7405                 je 0x4e5868
// 004e5863  8b7608               mov esi, dword ptr [esi + 8]
// 004e5866  eb1a                 jmp 0x4e5882
// 004e5868  807b1900             cmp byte ptr [ebx + 0x19], 0
// 004e586c  7410                 je 0x4e587e
// 004e586e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004e5872  57                   push edi
// 004e5873  e8b8d31400           call 0x632c30
// 004e5878  84c0                 test al, al
// 004e587a  7402                 je 0x4e587e
// 004e587c  8bde                 mov ebx, esi
// 004e587e  8bee                 mov ebp, esi
// 004e5880  8b36                 mov esi, dword ptr [esi]
// 004e5882  807e1900             cmp byte ptr [esi + 0x19], 0
// 004e5886  74c8                 je 0x4e5850
// 004e5888  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004e588c  807b1900             cmp byte ptr [ebx + 0x19], 0
// 004e5890  7408                 je 0x4e589a
// 004e5892  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 004e5895  8b7104               mov esi, dword ptr [ecx + 4]
// 004e5898  eb02                 jmp 0x4e589c
// 004e589a  8b33                 mov esi, dword ptr [ebx]
// 004e589c  807e1900             cmp byte ptr [esi + 0x19], 0
// 004e58a0  7520                 jne 0x4e58c2
// 004e58a2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004e58a6  8d560c               lea edx, [esi + 0xc]
// 004e58a9  52                   push edx
// 004e58aa  e881d31400           call 0x632c30
// 004e58af  84c0                 test al, al
// 004e58b1  7406                 je 0x4e58b9
// 004e58b3  8bde                 mov ebx, esi
// 004e58b5  8b36                 mov esi, dword ptr [esi]
// 004e58b7  eb03                 jmp 0x4e58bc
// 004e58b9  8b7608               mov esi, dword ptr [esi + 8]
// 004e58bc  807e1900             cmp byte ptr [esi + 0x19], 0
// 004e58c0  74e0                 je 0x4e58a2
// 004e58c2  8b0f                 mov ecx, dword ptr [edi]
// 004e58c4  8b442418             mov eax, dword ptr [esp + 0x18]
// 004e58c8  5f                   pop edi
// 004e58c9  5e                   pop esi
// 004e58ca  896804               mov dword ptr [eax + 4], ebp
// 004e58cd  5d                   pop ebp
// 004e58ce  89580c               mov dword ptr [eax + 0xc], ebx
// 004e58d1  8908                 mov dword ptr [eax], ecx
// 004e58d3  894808               mov dword ptr [eax + 8], ecx
// 004e58d6  5b                   pop ebx
// 004e58d7  59                   pop ecx
// 004e58d8  c20800               ret 8
// library rbxgs-net/IdManager.cpp (function ?_Eqrange@?$_Tree@V?$_Tmap_traits@UData@Guid@RBX@@PAVInstance@3@U?$less@UData@Guid@RBX@@@std@@V?$allocator@U?$pair@$$CBUData@Guid@RBX@@PAVInstance@3@@std@@@6@$0A@@std@@@std@@IAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@UData@Guid@RBX@@PAVInstance@3@U?$less@UData@Guid@RBX@@@std@@V?$allocator@U?$pair@$$CBUData@Guid@RBX@@PAVInstance@3@@std@@@6@$0A@@std@@@std@@V123@@2@ABUData@Guid@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net IdManager.cpp
