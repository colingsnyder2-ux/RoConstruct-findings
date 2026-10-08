// roc 2007-08 00605300  unit: RBX::SleepStage  size: 273 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00605300
//
// 00605300  83ec0c               sub esp, 0xc
// 00605303  53                   push ebx
// 00605304  55                   push ebp
// 00605305  8bd9                 mov ebx, ecx
// 00605307  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0060530a  8b4104               mov eax, dword ptr [ecx + 4]
// 0060530d  80781500             cmp byte ptr [eax + 0x15], 0
// 00605311  56                   push esi
// 00605312  57                   push edi
// 00605313  8bf9                 mov edi, ecx
// 00605315  b101                 mov cl, 1
// 00605317  884c2410             mov byte ptr [esp + 0x10], cl
// 0060531b  751e                 jne 0x60533b
// 0060531d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00605321  8b29                 mov ebp, dword ptr [ecx]
// 00605323  8b700c               mov esi, dword ptr [eax + 0xc]
// 00605326  3bee                 cmp ebp, esi
// 00605328  8bf8                 mov edi, eax
// 0060532a  7556                 jne 0x605382
// 0060532c  32c9                 xor cl, cl
// 0060532e  884c2410             mov byte ptr [esp + 0x10], cl
// 00605332  8b4008               mov eax, dword ptr [eax + 8]
// 00605335  80781500             cmp byte ptr [eax + 0x15], 0
// 00605339  74e8                 je 0x605323
// 0060533b  84c9                 test cl, cl
// 0060533d  8bd7                 mov edx, edi
// 0060533f  89542418             mov dword ptr [esp + 0x18], edx
// 00605343  895c2414             mov dword ptr [esp + 0x14], ebx
// 00605347  746a                 je 0x6053b3
// 00605349  8b4304               mov eax, dword ptr [ebx + 4]
// 0060534c  3b38                 cmp edi, dword ptr [eax]
// 0060534e  7556                 jne 0x6053a6
// 00605350  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00605354  51                   push ecx
// 00605355  57                   push edi
// 00605356  6a01                 push 1
// 00605358  8d542420             lea edx, [esp + 0x20]
// 0060535c  52                   push edx
// 0060535d  8bcb                 mov ecx, ebx
// 0060535f  e8cce6f7ff           call 0x583a30
// 00605364  5f                   pop edi
// 00605365  8bc8                 mov ecx, eax
// 00605367  8b11                 mov edx, dword ptr [ecx]
// 00605369  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0060536d  8b4904               mov ecx, dword ptr [ecx + 4]
// 00605370  5e                   pop esi
// 00605371  5d                   pop ebp
// 00605372  8910                 mov dword ptr [eax], edx
// 00605374  894804               mov dword ptr [eax + 4], ecx
// 00605377  c6400801             mov byte ptr [eax + 8], 1
// 0060537b  5b                   pop ebx
// 0060537c  83c40c               add esp, 0xc
// 0060537f  c20800               ret 8
// 00605382  8b542424             mov edx, dword ptr [esp + 0x24]
// 00605386  8b4a04               mov ecx, dword ptr [edx + 4]
// 00605389  8b5010               mov edx, dword ptr [eax + 0x10]
// 0060538c  3bca                 cmp ecx, edx
// 0060538e  7507                 jne 0x605397
// 00605390  3bee                 cmp ebp, esi
// 00605392  0f92c1               setb cl
// 00605395  eb03                 jmp 0x60539a
// 00605397  0f9cc1               setl cl
// 0060539a  84c9                 test cl, cl
// 0060539c  884c2410             mov byte ptr [esp + 0x10], cl
// 006053a0  7490                 je 0x605332
// 006053a2  8b00                 mov eax, dword ptr [eax]
// 006053a4  eb8f                 jmp 0x605335
// 006053a6  8d4c2414             lea ecx, [esp + 0x14]
// 006053aa  e8819eeeff           call 0x4ef230
// 006053af  8b542418             mov edx, dword ptr [esp + 0x18]
// 006053b3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006053b7  8b420c               mov eax, dword ptr [edx + 0xc]
// 006053ba  8b29                 mov ebp, dword ptr [ecx]
// 006053bc  3bc5                 cmp eax, ebp
// 006053be  7436                 je 0x6053f6
// 006053c0  8b742424             mov esi, dword ptr [esp + 0x24]
// 006053c4  8b4a10               mov ecx, dword ptr [edx + 0x10]
// 006053c7  8b7604               mov esi, dword ptr [esi + 4]
// 006053ca  3bce                 cmp ecx, esi
// 006053cc  7508                 jne 0x6053d6
// 006053ce  3bc5                 cmp eax, ebp
// 006053d0  1bc0                 sbb eax, eax
// 006053d2  f7d8                 neg eax
// 006053d4  eb07                 jmp 0x6053dd
// 006053d6  33c0                 xor eax, eax
// 006053d8  3bce                 cmp ecx, esi
// 006053da  0f9cc0               setl al
// 006053dd  84c0                 test al, al
// 006053df  7415                 je 0x6053f6
// 006053e1  8b542424             mov edx, dword ptr [esp + 0x24]
// 006053e5  8b442410             mov eax, dword ptr [esp + 0x10]
// 006053e9  52                   push edx
// 006053ea  57                   push edi
// 006053eb  50                   push eax
// 006053ec  8d4c2420             lea ecx, [esp + 0x20]
// 006053f0  51                   push ecx
// 006053f1  e967ffffff           jmp 0x60535d
// 006053f6  8b442420             mov eax, dword ptr [esp + 0x20]
// 006053fa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006053fe  5f                   pop edi
// 006053ff  5e                   pop esi
// 00605400  5d                   pop ebp
// 00605401  8908                 mov dword ptr [eax], ecx
// 00605403  895004               mov dword ptr [eax + 4], edx
// 00605406  c6400800             mov byte ptr [eax + 8], 0
// 0060540a  5b                   pop ebx
// 0060540b  83c40c               add esp, 0xc
// 0060540e  c20800               ret 8
// library rbxgs/v8world\ClumpStage.cpp (function ?insert@?$_Tree@V?$_Tset_traits@VAnchorEntry@RBX@@VAnchorSortCriterion@2@V?$allocator@VAnchorEntry@RBX@@@std@@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@VAnchorEntry@RBX@@VAnchorSortCriterion@2@V?$allocator@VAnchorEntry@RBX@@@std@@$0A@@std@@@std@@_N@2@ABVAnchorEntry@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ClumpStage.cpp
