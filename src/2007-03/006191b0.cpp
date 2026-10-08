// roc 2007-03 006191b0  unit: seg_00610000  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006191b0
//
// 006191b0  83ec0c               sub esp, 0xc
// 006191b3  55                   push ebp
// 006191b4  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 006191b8  56                   push esi
// 006191b9  57                   push edi
// 006191ba  8bf9                 mov edi, ecx
// 006191bc  8b7704               mov esi, dword ptr [edi + 4]
// 006191bf  8b4604               mov eax, dword ptr [esi + 4]
// 006191c2  80780e00             cmp byte ptr [eax + 0xe], 0
// 006191c6  b101                 mov cl, 1
// 006191c8  884c240c             mov byte ptr [esp + 0xc], cl
// 006191cc  7520                 jne 0x6191ee
// 006191ce  8a5500               mov dl, byte ptr [ebp]
// 006191d1  3a500c               cmp dl, byte ptr [eax + 0xc]
// 006191d4  8bf0                 mov esi, eax
// 006191d6  0f9cc1               setl cl
// 006191d9  84c9                 test cl, cl
// 006191db  884c240c             mov byte ptr [esp + 0xc], cl
// 006191df  7404                 je 0x6191e5
// 006191e1  8b00                 mov eax, dword ptr [eax]
// 006191e3  eb03                 jmp 0x6191e8
// 006191e5  8b4008               mov eax, dword ptr [eax + 8]
// 006191e8  80780e00             cmp byte ptr [eax + 0xe], 0
// 006191ec  74e3                 je 0x6191d1
// 006191ee  84c9                 test cl, cl
// 006191f0  8bd6                 mov edx, esi
// 006191f2  89542414             mov dword ptr [esp + 0x14], edx
// 006191f6  897c2410             mov dword ptr [esp + 0x10], edi
// 006191fa  743d                 je 0x619239
// 006191fc  8b4704               mov eax, dword ptr [edi + 4]
// 006191ff  3b30                 cmp esi, dword ptr [eax]
// 00619201  8d4c2410             lea ecx, [esp + 0x10]
// 00619205  7529                 jne 0x619230
// 00619207  55                   push ebp
// 00619208  56                   push esi
// 00619209  6a01                 push 1
// 0061920b  51                   push ecx
// 0061920c  8bcf                 mov ecx, edi
// 0061920e  e81df7ffff           call 0x618930
// 00619213  8bc8                 mov ecx, eax
// 00619215  8b11                 mov edx, dword ptr [ecx]
// 00619217  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0061921b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0061921e  5f                   pop edi
// 0061921f  5e                   pop esi
// 00619220  8910                 mov dword ptr [eax], edx
// 00619222  894804               mov dword ptr [eax + 4], ecx
// 00619225  c6400801             mov byte ptr [eax + 8], 1
// 00619229  5d                   pop ebp
// 0061922a  83c40c               add esp, 0xc
// 0061922d  c20800               ret 8
// 00619230  e86bf4ffff           call 0x6186a0
// 00619235  8b542414             mov edx, dword ptr [esp + 0x14]
// 00619239  8a420c               mov al, byte ptr [edx + 0xc]
// 0061923c  3a4500               cmp al, byte ptr [ebp]
// 0061923f  7d0e                 jge 0x61924f
// 00619241  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00619245  55                   push ebp
// 00619246  56                   push esi
// 00619247  51                   push ecx
// 00619248  8d54241c             lea edx, [esp + 0x1c]
// 0061924c  52                   push edx
// 0061924d  ebbd                 jmp 0x61920c
// 0061924f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00619253  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00619257  5f                   pop edi
// 00619258  5e                   pop esi
// 00619259  8908                 mov dword ptr [eax], ecx
// 0061925b  895004               mov dword ptr [eax + 4], edx
// 0061925e  c6400800             mov byte ptr [eax + 8], 0
// 00619262  5d                   pop ebp
// 00619263  83c40c               add esp, 0xc
// 00619266  c20800               ret 8
// library rbxgs-net/Player.cpp (function ?insert@?$_Tree@V?$_Tset_traits@DU?$less@D@std@@V?$allocator@D@2@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@DU?$less@D@std@@V?$allocator@D@2@$0A@@std@@@std@@_N@2@ABD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
