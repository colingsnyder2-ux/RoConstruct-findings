// roc 2012-06 00a3c580  unit: CXTPDockingPaneTabbedContainer  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3c580
//
// 00a3c580  83ec18               sub esp, 0x18
// 00a3c583  53                   push ebx
// 00a3c584  57                   push edi
// 00a3c585  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00a3c589  8bd9                 mov ebx, ecx
// 00a3c58b  85ff                 test edi, edi
// 00a3c58d  750d                 jne 0xa3c59c
// 00a3c58f  5f                   pop edi
// 00a3c590  b857000780           mov eax, 0x80070057
// 00a3c595  5b                   pop ebx
// 00a3c596  83c418               add esp, 0x18
// 00a3c599  c20c00               ret 0xc
// 00a3c59c  56                   push esi
// 00a3c59d  33c0                 xor eax, eax
// 00a3c59f  8db3c8feffff         lea esi, [ebx - 0x138]
// 00a3c5a5  668907               mov word ptr [edi], ax
// 00a3c5a8  85f6                 test esi, esi
// 00a3c5aa  7405                 je 0xa3c5b1
// 00a3c5ac  394620               cmp dword ptr [esi + 0x20], eax
// 00a3c5af  750e                 jne 0xa3c5bf
// 00a3c5b1  5e                   pop esi
// 00a3c5b2  5f                   pop edi
// 00a3c5b3  b801000000           mov eax, 1
// 00a3c5b8  5b                   pop ebx
// 00a3c5b9  83c418               add esp, 0x18
// 00a3c5bc  c20c00               ret 0xc
// 00a3c5bf  55                   push ebp
// 00a3c5c0  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00a3c5c4  56                   push esi
// 00a3c5c5  8d4c241c             lea ecx, [esp + 0x1c]
// 00a3c5c9  e8728bf9ff           call 0x9d5140
// 00a3c5ce  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a3c5d2  51                   push ecx
// 00a3c5d3  55                   push ebp
// 00a3c5d4  50                   push eax
// 00a3c5d5  ff15483bb200         call dword ptr [0xb23b48]
// 00a3c5db  85c0                 test eax, eax
// 00a3c5dd  0f8486000000         je 0xa3c669
// 00a3c5e3  8b8be8feffff         mov ecx, dword ptr [ebx - 0x118]
// 00a3c5e9  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a3c5ed  8d442410             lea eax, [esp + 0x10]
// 00a3c5f1  50                   push eax
// 00a3c5f2  51                   push ecx
// 00a3c5f3  896c2418             mov dword ptr [esp + 0x18], ebp
// 00a3c5f7  8954241c             mov dword ptr [esp + 0x1c], edx
// 00a3c5fb  ff15883ab200         call dword ptr [0xb23a88]
// 00a3c601  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a3c605  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a3c609  52                   push edx
// 00a3c60a  50                   push eax
// 00a3c60b  8bce                 mov ecx, esi
// 00a3c60d  e82eecffff           call 0xa3b240
// 00a3c612  83f8fe               cmp eax, -2
// 00a3c615  751b                 jne 0xa3c632
// 00a3c617  5d                   pop ebp
// 00a3c618  b903000000           mov ecx, 3
// 00a3c61d  5e                   pop esi
// 00a3c61e  66890f               mov word ptr [edi], cx
// 00a3c621  c7470800000000       mov dword ptr [edi + 8], 0
// 00a3c628  5f                   pop edi
// 00a3c629  33c0                 xor eax, eax
// 00a3c62b  5b                   pop ebx
// 00a3c62c  83c418               add esp, 0x18
// 00a3c62f  c20c00               ret 0xc
// 00a3c632  83f8ff               cmp eax, -1
// 00a3c635  7541                 jne 0xa3c678
// 00a3c637  ba09000000           mov edx, 9
// 00a3c63c  668917               mov word ptr [edi], dx
// 00a3c63f  8b436c               mov eax, dword ptr [ebx + 0x6c]
// 00a3c642  85c0                 test eax, eax
// 00a3c644  7423                 je 0xa3c669
// 00a3c646  8b80b4000000         mov eax, dword ptr [eax + 0xb4]
// 00a3c64c  83c708               add edi, 8
// 00a3c64f  57                   push edi
// 00a3c650  68b4fcc300           push 0xc3fcb4
// 00a3c655  6a00                 push 0
// 00a3c657  50                   push eax
// 00a3c658  8bcb                 mov ecx, ebx
// 00a3c65a  e861dcf8ff           call 0x9ca2c0
// 00a3c65f  5d                   pop ebp
// 00a3c660  5e                   pop esi
// 00a3c661  5f                   pop edi
// 00a3c662  5b                   pop ebx
// 00a3c663  83c418               add esp, 0x18
// 00a3c666  c20c00               ret 0xc
// 00a3c669  5d                   pop ebp
// 00a3c66a  5e                   pop esi
// 00a3c66b  5f                   pop edi
// 00a3c66c  b801000000           mov eax, 1
// 00a3c671  5b                   pop ebx
// 00a3c672  83c418               add esp, 0x18
// 00a3c675  c20c00               ret 0xc
// 00a3c678  b909000000           mov ecx, 9
// 00a3c67d  6a01                 push 1
// 00a3c67f  66890f               mov word ptr [edi], cx
// 00a3c682  50                   push eax
// 00a3c683  8bce                 mov ecx, esi
// 00a3c685  e8c6f6ffff           call 0xa3bd50
// 00a3c68a  8bc8                 mov ecx, eax
// 00a3c68c  e8e7ce0500           call 0xa99578
// 00a3c691  5d                   pop ebp
// 00a3c692  5e                   pop esi
// 00a3c693  894708               mov dword ptr [edi + 8], eax
// 00a3c696  5f                   pop edi
// 00a3c697  33c0                 xor eax, eax
// 00a3c699  5b                   pop ebx
// 00a3c69a  83c418               add esp, 0x18
// 00a3c69d  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?AccessibleHitTest@CXTPDockingPaneTabbedContainer@@MAEJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
