// roc 2009-12 00860790  unit: CXTPToolTipContextToolTip  size: 516 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00860790
//
// 00860790  83ec18               sub esp, 0x18
// 00860793  53                   push ebx
// 00860794  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00860798  56                   push esi
// 00860799  8bf1                 mov esi, ecx
// 0086079b  85db                 test ebx, ebx
// 0086079d  7416                 je 0x8607b5
// 0086079f  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 008607a5  3b4320               cmp eax, dword ptr [ebx + 0x20]
// 008607a8  7518                 jne 0x8607c2
// 008607aa  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 008607b0  3b4b24               cmp ecx, dword ptr [ebx + 0x24]
// 008607b3  eb07                 jmp 0x8607bc
// 008607b5  83be9000000000       cmp dword ptr [esi + 0x90], 0
// 008607bc  0f84ca010000         je 0x86098c
// 008607c2  55                   push ebp
// 008607c3  57                   push edi
// 008607c4  33ff                 xor edi, edi
// 008607c6  33ed                 xor ebp, ebp
// 008607c8  85db                 test ebx, ebx
// 008607ca  7421                 je 0x8607ed
// 008607cc  8b16                 mov edx, dword ptr [esi]
// 008607ce  8b9244010000         mov edx, dword ptr [edx + 0x144]
// 008607d4  53                   push ebx
// 008607d5  8d442414             lea eax, [esp + 0x14]
// 008607d9  50                   push eax
// 008607da  8bce                 mov ecx, esi
// 008607dc  ffd2                 call edx
// 008607de  8b38                 mov edi, dword ptr [eax]
// 008607e0  8b6804               mov ebp, dword ptr [eax + 4]
// 008607e3  85ff                 test edi, edi
// 008607e5  7506                 jne 0x8607ed
// 008607e7  85ed                 test ebp, ebp
// 008607e9  7502                 jne 0x8607ed
// 008607eb  33db                 xor ebx, ebx
// 008607ed  837e2000             cmp dword ptr [esi + 0x20], 0
// 008607f1  7416                 je 0x860809
// 008607f3  6897020000           push 0x297
// 008607f8  6a00                 push 0
// 008607fa  6a00                 push 0
// 008607fc  6a00                 push 0
// 008607fe  6a00                 push 0
// 00860800  6a00                 push 0
// 00860802  8bce                 mov ecx, esi
// 00860804  e82334f9ff           call 0x7f3c2c
// 00860809  33c0                 xor eax, eax
// 0086080b  3bd8                 cmp ebx, eax
// 0086080d  0f8414010000         je 0x860927
// 00860813  89442418             mov dword ptr [esp + 0x18], eax
// 00860817  8944241c             mov dword ptr [esp + 0x1c], eax
// 0086081b  89442420             mov dword ptr [esp + 0x20], eax
// 0086081f  89442424             mov dword ptr [esp + 0x24], eax
// 00860823  8d4328               lea eax, [ebx + 0x28]
// 00860826  50                   push eax
// 00860827  ff1568cc9800         call dword ptr [0x98cc68]
// 0086082d  85c0                 test eax, eax
// 0086082f  7538                 jne 0x860869
// 00860831  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00860834  51                   push ecx
// 00860835  e8f032f9ff           call 0x7f3b2a
// 0086083a  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 0086083d  8944242c             mov dword ptr [esp + 0x2c], eax
// 00860841  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00860844  8d1428               lea edx, [eax + ebp]
// 00860847  52                   push edx
// 00860848  8d1439               lea edx, [ecx + edi]
// 0086084b  52                   push edx
// 0086084c  50                   push eax
// 0086084d  51                   push ecx
// 0086084e  8d442428             lea eax, [esp + 0x28]
// 00860852  50                   push eax
// 00860853  ff1538ca9800         call dword ptr [0x98ca38]
// 00860859  8d4c2418             lea ecx, [esp + 0x18]
// 0086085d  51                   push ecx
// 0086085e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00860862  e89335f9ff           call 0x7f3dfa
// 00860867  eb54                 jmp 0x8608bd
// 00860869  8d542410             lea edx, [esp + 0x10]
// 0086086d  52                   push edx
// 0086086e  ff1538cc9800         call dword ptr [0x98cc38]
// 00860874  8bce                 mov ecx, esi
// 00860876  e895f5ffff           call 0x85fe10
// 0086087b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0086087f  03c1                 add eax, ecx
// 00860881  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00860885  8d1428               lea edx, [eax + ebp]
// 00860888  52                   push edx
// 00860889  8d1439               lea edx, [ecx + edi]
// 0086088c  52                   push edx
// 0086088d  50                   push eax
// 0086088e  51                   push ecx
// 0086088f  8d442428             lea eax, [esp + 0x28]
// 00860893  50                   push eax
// 00860894  ff1538ca9800         call dword ptr [0x98ca38]
// 0086089a  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 0086089d  6aec                 push -0x14
// 0086089f  51                   push ecx
// 008608a0  ff15d8c99800         call dword ptr [0x98c9d8]
// 008608a6  a900004000           test eax, 0x400000
// 008608ab  7410                 je 0x8608bd
// 008608ad  6a00                 push 0
// 008608af  f7df                 neg edi
// 008608b1  57                   push edi
// 008608b2  8d542420             lea edx, [esp + 0x20]
// 008608b6  52                   push edx
// 008608b7  ff156ccc9800         call dword ptr [0x98cc6c]
// 008608bd  8d442418             lea eax, [esp + 0x18]
// 008608c1  50                   push eax
// 008608c2  8bce                 mov ecx, esi
// 008608c4  e847feffff           call 0x860710
// 008608c9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008608cd  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008608d1  8b542420             mov edx, dword ptr [esp + 0x20]
// 008608d5  6850020000           push 0x250
// 008608da  2bc8                 sub ecx, eax
// 008608dc  51                   push ecx
// 008608dd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008608e1  2bd1                 sub edx, ecx
// 008608e3  52                   push edx
// 008608e4  50                   push eax
// 008608e5  a180d79800           mov eax, dword ptr [0x98d780]
// 008608ea  51                   push ecx
// 008608eb  50                   push eax
// 008608ec  8bce                 mov ecx, esi
// 008608ee  e83933f9ff           call 0x7f3c2c
// 008608f3  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008608f6  33ed                 xor ebp, ebp
// 008608f8  55                   push ebp
// 008608f9  55                   push ebp
// 008608fa  51                   push ecx
// 008608fb  ff15e8cb9800         call dword ptr [0x98cbe8]
// 00860901  6a01                 push 1
// 00860903  8bce                 mov ecx, esi
// 00860905  e826240000           call 0x862d30
// 0086090a  8dbea8000000         lea edi, [esi + 0xa8]
// 00860910  8bcf                 mov ecx, edi
// 00860912  ff1590d69800         call dword ptr [0x98d690]
// 00860918  8d570c               lea edx, [edi + 0xc]
// 0086091b  896f08               mov dword ptr [edi + 8], ebp
// 0086091e  896f20               mov dword ptr [edi + 0x20], ebp
// 00860921  896f1c               mov dword ptr [edi + 0x1c], ebp
// 00860924  52                   push edx
// 00860925  eb25                 jmp 0x86094c
// 00860927  50                   push eax
// 00860928  8bce                 mov ecx, esi
// 0086092a  e801240000           call 0x862d30
// 0086092f  8dbee0000000         lea edi, [esi + 0xe0]
// 00860935  8bcf                 mov ecx, edi
// 00860937  ff1590d69800         call dword ptr [0x98d690]
// 0086093d  33c0                 xor eax, eax
// 0086093f  894708               mov dword ptr [edi + 8], eax
// 00860942  894720               mov dword ptr [edi + 0x20], eax
// 00860945  89471c               mov dword ptr [edi + 0x1c], eax
// 00860948  8d470c               lea eax, [edi + 0xc]
// 0086094b  50                   push eax
// 0086094c  8b2d9cca9800         mov ebp, dword ptr [0x98ca9c]
// 00860952  c74724ffffffff       mov dword ptr [edi + 0x24], 0xffffffff
// 00860959  ffd5                 call ebp
// 0086095b  83c728               add edi, 0x28
// 0086095e  57                   push edi
// 0086095f  ffd5                 call ebp
// 00860961  53                   push ebx
// 00860962  8d4e70               lea ecx, [esi + 0x70]
// 00860965  e886f9ffff           call 0x8602f0
// 0086096a  ff15fcb29800         call dword ptr [0x98b2fc]
// 00860970  8b16                 mov edx, dword ptr [esi]
// 00860972  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 00860978  89861c010000         mov dword ptr [esi + 0x11c], eax
// 0086097e  33c0                 xor eax, eax
// 00860980  85db                 test ebx, ebx
// 00860982  0f95c0               setne al
// 00860985  8bce                 mov ecx, esi
// 00860987  50                   push eax
// 00860988  ffd2                 call edx
// 0086098a  5f                   pop edi
// 0086098b  5d                   pop ebp
// 0086098c  5e                   pop esi
// 0086098d  5b                   pop ebx
// 0086098e  83c418               add esp, 0x18
// 00860991  c20400               ret 4
// copied from an identical function in another client (function ?SetVisibleTool@CXTPToolTipContextToolTip@@IAEXPAUTOOLITEM@1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPToolTipContext.cpp