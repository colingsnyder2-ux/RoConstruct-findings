// roc 2009-06 0080b550  unit: CXTCaptionButton  size: 354 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080b550
//
// 0080b550  6aff                 push -1
// 0080b552  68081f8800           push 0x881f08
// 0080b557  64a100000000         mov eax, dword ptr fs:[0]
// 0080b55d  50                   push eax
// 0080b55e  83ec34               sub esp, 0x34
// 0080b561  53                   push ebx
// 0080b562  56                   push esi
// 0080b563  57                   push edi
// 0080b564  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0080b569  33c4                 xor eax, esp
// 0080b56b  50                   push eax
// 0080b56c  8d442444             lea eax, [esp + 0x44]
// 0080b570  64a300000000         mov dword ptr fs:[0], eax
// 0080b576  8bf9                 mov edi, ecx
// 0080b578  8d4c2420             lea ecx, [esp + 0x20]
// 0080b57c  e80f82f2ff           call 0x733790
// 0080b581  0fb74c245c           movzx ecx, word ptr [esp + 0x5c]
// 0080b586  8d442410             lea eax, [esp + 0x10]
// 0080b58a  50                   push eax
// 0080b58b  33db                 xor ebx, ebx
// 0080b58d  51                   push ecx
// 0080b58e  895c2454             mov dword ptr [esp + 0x54], ebx
// 0080b592  895c2418             mov dword ptr [esp + 0x18], ebx
// 0080b596  e85594f2ff           call 0x7349f0
// 0080b59b  83c408               add esp, 8
// 0080b59e  3bc3                 cmp eax, ebx
// 0080b5a0  7528                 jne 0x80b5ca
// 0080b5a2  8d4c2420             lea ecx, [esp + 0x20]
// 0080b5a6  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 0080b5ae  e87da7f2ff           call 0x735d30
// 0080b5b3  33c0                 xor eax, eax
// 0080b5b5  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0080b5b9  64890d00000000       mov dword ptr fs:[0], ecx
// 0080b5c0  59                   pop ecx
// 0080b5c1  5f                   pop edi
// 0080b5c2  5e                   pop esi
// 0080b5c3  5b                   pop ebx
// 0080b5c4  83c440               add esp, 0x40
// 0080b5c7  c21000               ret 0x10
// 0080b5ca  395c2410             cmp dword ptr [esp + 0x10], ebx
// 0080b5ce  740c                 je 0x80b5dc
// 0080b5d0  50                   push eax
// 0080b5d1  8d4c2424             lea ecx, [esp + 0x24]
// 0080b5d5  e816a7f2ff           call 0x735cf0
// 0080b5da  eb4c                 jmp 0x80b628
// 0080b5dc  be64f68a00           mov esi, 0x8af664
// 0080b5e1  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0080b5e5  89742418             mov dword ptr [esp + 0x18], esi
// 0080b5e9  50                   push eax
// 0080b5ea  8d4c241c             lea ecx, [esp + 0x1c]
// 0080b5ee  c644245001           mov byte ptr [esp + 0x50], 1
// 0080b5f3  e80adaf0ff           call 0x719002
// 0080b5f8  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0080b5fc  52                   push edx
// 0080b5fd  8d4c2460             lea ecx, [esp + 0x60]
// 0080b601  e87aedc4ff           call 0x45a380
// 0080b606  8bc8                 mov ecx, eax
// 0080b608  e8c36df6ff           call 0x7723d0
// 0080b60d  50                   push eax
// 0080b60e  8d4c2424             lea ecx, [esp + 0x24]
// 0080b612  e899a6f2ff           call 0x735cb0
// 0080b617  8d4c2418             lea ecx, [esp + 0x18]
// 0080b61b  885c244c             mov byte ptr [esp + 0x4c], bl
// 0080b61f  89742418             mov dword ptr [esp + 0x18], esi
// 0080b623  e8a83ec0ff           call 0x40f4d0
// 0080b628  8d4c2420             lea ecx, [esp + 0x20]
// 0080b62c  e8cf81f2ff           call 0x733800
// 0080b631  85c0                 test eax, eax
// 0080b633  0f8569ffffff         jne 0x80b5a2
// 0080b639  8b442460             mov eax, dword ptr [esp + 0x60]
// 0080b63d  50                   push eax
// 0080b63e  83ec24               sub esp, 0x24
// 0080b641  8bcc                 mov ecx, esp
// 0080b643  89a42488000000       mov dword ptr [esp + 0x88], esp
// 0080b64a  e84181f2ff           call 0x733790
// 0080b64f  83ec24               sub esp, 0x24
// 0080b652  8d54246c             lea edx, [esp + 0x6c]
// 0080b656  8bcc                 mov ecx, esp
// 0080b658  89642460             mov dword ptr [esp + 0x60], esp
// 0080b65c  52                   push edx
// 0080b65d  c684249c00000002     mov byte ptr [esp + 0x9c], 2
// 0080b665  e83681f2ff           call 0x7337a0
// 0080b66a  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 0080b671  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 0080b678  50                   push eax
// 0080b679  51                   push ecx
// 0080b67a  8bcf                 mov ecx, edi
// 0080b67c  889c24a0000000       mov byte ptr [esp + 0xa0], bl
// 0080b683  e898fdffff           call 0x80b420
// 0080b688  8d4c2420             lea ecx, [esp + 0x20]
// 0080b68c  8bf0                 mov esi, eax
// 0080b68e  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 0080b696  e895a6f2ff           call 0x735d30
// 0080b69b  8bc6                 mov eax, esi
// 0080b69d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0080b6a1  64890d00000000       mov dword ptr fs:[0], ecx
// 0080b6a8  59                   pop ecx
// 0080b6a9  5f                   pop edi
// 0080b6aa  5e                   pop esi
// 0080b6ab  5b                   pop ebx
// 0080b6ac  83c440               add esp, 0x40
// 0080b6af  c21000               ret 0x10
// copied from an identical function in another client (function ?SetBitmap@CXTButton@@UAEHVCSize@@IH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp