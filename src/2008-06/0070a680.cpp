// roc 2008-06 0070a680  unit: CXTPToolTipContextToolTip  size: 516 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070a680
//
// 0070a680  83ec18               sub esp, 0x18
// 0070a683  53                   push ebx
// 0070a684  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0070a688  56                   push esi
// 0070a689  8bf1                 mov esi, ecx
// 0070a68b  85db                 test ebx, ebx
// 0070a68d  7416                 je 0x70a6a5
// 0070a68f  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 0070a695  3b4320               cmp eax, dword ptr [ebx + 0x20]
// 0070a698  7518                 jne 0x70a6b2
// 0070a69a  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 0070a6a0  3b4b24               cmp ecx, dword ptr [ebx + 0x24]
// 0070a6a3  eb07                 jmp 0x70a6ac
// 0070a6a5  83be9000000000       cmp dword ptr [esi + 0x90], 0
// 0070a6ac  0f84ca010000         je 0x70a87c
// 0070a6b2  55                   push ebp
// 0070a6b3  57                   push edi
// 0070a6b4  33ff                 xor edi, edi
// 0070a6b6  33ed                 xor ebp, ebp
// 0070a6b8  85db                 test ebx, ebx
// 0070a6ba  7421                 je 0x70a6dd
// 0070a6bc  8b16                 mov edx, dword ptr [esi]
// 0070a6be  8b9244010000         mov edx, dword ptr [edx + 0x144]
// 0070a6c4  53                   push ebx
// 0070a6c5  8d442414             lea eax, [esp + 0x14]
// 0070a6c9  50                   push eax
// 0070a6ca  8bce                 mov ecx, esi
// 0070a6cc  ffd2                 call edx
// 0070a6ce  8b38                 mov edi, dword ptr [eax]
// 0070a6d0  8b6804               mov ebp, dword ptr [eax + 4]
// 0070a6d3  85ff                 test edi, edi
// 0070a6d5  7506                 jne 0x70a6dd
// 0070a6d7  85ed                 test ebp, ebp
// 0070a6d9  7502                 jne 0x70a6dd
// 0070a6db  33db                 xor ebx, ebx
// 0070a6dd  837e2000             cmp dword ptr [esi + 0x20], 0
// 0070a6e1  7416                 je 0x70a6f9
// 0070a6e3  6897020000           push 0x297
// 0070a6e8  6a00                 push 0
// 0070a6ea  6a00                 push 0
// 0070a6ec  6a00                 push 0
// 0070a6ee  6a00                 push 0
// 0070a6f0  6a00                 push 0
// 0070a6f2  8bce                 mov ecx, esi
// 0070a6f4  e84d63f9ff           call 0x6a0a46
// 0070a6f9  33c0                 xor eax, eax
// 0070a6fb  3bd8                 cmp ebx, eax
// 0070a6fd  0f8414010000         je 0x70a817
// 0070a703  89442418             mov dword ptr [esp + 0x18], eax
// 0070a707  8944241c             mov dword ptr [esp + 0x1c], eax
// 0070a70b  89442420             mov dword ptr [esp + 0x20], eax
// 0070a70f  89442424             mov dword ptr [esp + 0x24], eax
// 0070a713  8d4328               lea eax, [ebx + 0x28]
// 0070a716  50                   push eax
// 0070a717  ff156c2d8000         call dword ptr [0x802d6c]
// 0070a71d  85c0                 test eax, eax
// 0070a71f  7538                 jne 0x70a759
// 0070a721  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 0070a724  51                   push ecx
// 0070a725  e8b464f9ff           call 0x6a0bde
// 0070a72a  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 0070a72d  8944242c             mov dword ptr [esp + 0x2c], eax
// 0070a731  8b4334               mov eax, dword ptr [ebx + 0x34]
// 0070a734  8d1428               lea edx, [eax + ebp]
// 0070a737  52                   push edx
// 0070a738  8d1439               lea edx, [ecx + edi]
// 0070a73b  52                   push edx
// 0070a73c  50                   push eax
// 0070a73d  51                   push ecx
// 0070a73e  8d442428             lea eax, [esp + 0x28]
// 0070a742  50                   push eax
// 0070a743  ff15102d8000         call dword ptr [0x802d10]
// 0070a749  8d4c2418             lea ecx, [esp + 0x18]
// 0070a74d  51                   push ecx
// 0070a74e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0070a752  e8db64f9ff           call 0x6a0c32
// 0070a757  eb54                 jmp 0x70a7ad
// 0070a759  8d542410             lea edx, [esp + 0x10]
// 0070a75d  52                   push edx
// 0070a75e  ff159c2d8000         call dword ptr [0x802d9c]
// 0070a764  8bce                 mov ecx, esi
// 0070a766  e885f5ffff           call 0x709cf0
// 0070a76b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0070a76f  03c1                 add eax, ecx
// 0070a771  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0070a775  8d1428               lea edx, [eax + ebp]
// 0070a778  52                   push edx
// 0070a779  8d1439               lea edx, [ecx + edi]
// 0070a77c  52                   push edx
// 0070a77d  50                   push eax
// 0070a77e  51                   push ecx
// 0070a77f  8d442428             lea eax, [esp + 0x28]
// 0070a783  50                   push eax
// 0070a784  ff15102d8000         call dword ptr [0x802d10]
// 0070a78a  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 0070a78d  6aec                 push -0x14
// 0070a78f  51                   push ecx
// 0070a790  ff15bc2d8000         call dword ptr [0x802dbc]
// 0070a796  a900004000           test eax, 0x400000
// 0070a79b  7410                 je 0x70a7ad
// 0070a79d  6a00                 push 0
// 0070a79f  f7df                 neg edi
// 0070a7a1  57                   push edi
// 0070a7a2  8d542420             lea edx, [esp + 0x20]
// 0070a7a6  52                   push edx
// 0070a7a7  ff15682d8000         call dword ptr [0x802d68]
// 0070a7ad  8d442418             lea eax, [esp + 0x18]
// 0070a7b1  50                   push eax
// 0070a7b2  8bce                 mov ecx, esi
// 0070a7b4  e847feffff           call 0x70a600
// 0070a7b9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0070a7bd  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0070a7c1  8b542420             mov edx, dword ptr [esp + 0x20]
// 0070a7c5  6850020000           push 0x250
// 0070a7ca  2bc8                 sub ecx, eax
// 0070a7cc  51                   push ecx
// 0070a7cd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0070a7d1  2bd1                 sub edx, ecx
// 0070a7d3  52                   push edx
// 0070a7d4  50                   push eax
// 0070a7d5  a1443e8000           mov eax, dword ptr [0x803e44]
// 0070a7da  51                   push ecx
// 0070a7db  50                   push eax
// 0070a7dc  8bce                 mov ecx, esi
// 0070a7de  e86362f9ff           call 0x6a0a46
// 0070a7e3  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0070a7e6  33ed                 xor ebp, ebp
// 0070a7e8  55                   push ebp
// 0070a7e9  55                   push ebp
// 0070a7ea  51                   push ecx
// 0070a7eb  ff15182e8000         call dword ptr [0x802e18]
// 0070a7f1  6a01                 push 1
// 0070a7f3  8bce                 mov ecx, esi
// 0070a7f5  e816240000           call 0x70cc10
// 0070a7fa  8dbea8000000         lea edi, [esi + 0xa8]
// 0070a800  8bcf                 mov ecx, edi
// 0070a802  ff15843e8000         call dword ptr [0x803e84]
// 0070a808  8d570c               lea edx, [edi + 0xc]
// 0070a80b  896f08               mov dword ptr [edi + 8], ebp
// 0070a80e  896f20               mov dword ptr [edi + 0x20], ebp
// 0070a811  896f1c               mov dword ptr [edi + 0x1c], ebp
// 0070a814  52                   push edx
// 0070a815  eb25                 jmp 0x70a83c
// 0070a817  50                   push eax
// 0070a818  8bce                 mov ecx, esi
// 0070a81a  e8f1230000           call 0x70cc10
// 0070a81f  8dbee0000000         lea edi, [esi + 0xe0]
// 0070a825  8bcf                 mov ecx, edi
// 0070a827  ff15843e8000         call dword ptr [0x803e84]
// 0070a82d  33c0                 xor eax, eax
// 0070a82f  894708               mov dword ptr [edi + 8], eax
// 0070a832  894720               mov dword ptr [edi + 0x20], eax
// 0070a835  89471c               mov dword ptr [edi + 0x1c], eax
// 0070a838  8d470c               lea eax, [edi + 0xc]
// 0070a83b  50                   push eax
// 0070a83c  8b2d7c2c8000         mov ebp, dword ptr [0x802c7c]
// 0070a842  c74724ffffffff       mov dword ptr [edi + 0x24], 0xffffffff
// 0070a849  ffd5                 call ebp
// 0070a84b  83c728               add edi, 0x28
// 0070a84e  57                   push edi
// 0070a84f  ffd5                 call ebp
// 0070a851  53                   push ebx
// 0070a852  8d4e70               lea ecx, [esi + 0x70]
// 0070a855  e886f9ffff           call 0x70a1e0
// 0070a85a  ff15e8218000         call dword ptr [0x8021e8]
// 0070a860  8b16                 mov edx, dword ptr [esi]
// 0070a862  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 0070a868  89861c010000         mov dword ptr [esi + 0x11c], eax
// 0070a86e  33c0                 xor eax, eax
// 0070a870  85db                 test ebx, ebx
// 0070a872  0f95c0               setne al
// 0070a875  8bce                 mov ecx, esi
// 0070a877  50                   push eax
// 0070a878  ffd2                 call edx
// 0070a87a  5f                   pop edi
// 0070a87b  5d                   pop ebp
// 0070a87c  5e                   pop esi
// 0070a87d  5b                   pop ebx
// 0070a87e  83c418               add esp, 0x18
// 0070a881  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Common\XTPToolTipContext.cpp (function ?SetVisibleTool@CXTPToolTipContextToolTip@@IAEXPAUTOOLITEM@1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPToolTipContext.cpp
