// from server: 100% by auto
// roc 2010-06 00790a70  unit: RBX::GroupDragTool  size: 576 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00790a70
//
// 00790a70  8b442408             mov eax, dword ptr [esp + 8]
// 00790a74  83f80e               cmp eax, 0xe
// 00790a77  0f87f5010000         ja 0x790c72
// 00790a7d  53                   push ebx
// 00790a7e  56                   push esi
// 00790a7f  57                   push edi
// 00790a80  ff2485740c7900       jmp dword ptr [eax*4 + 0x790c74]
// 00790a87  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00790a8b  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00790a8f  56                   push esi
// 00790a90  53                   push ebx
// 00790a91  e84af3ffff           call 0x78fde0
// 00790a96  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00790a9a  8b4714               mov eax, dword ptr [edi + 0x14]
// 00790a9d  50                   push eax
// 00790a9e  8d4e14               lea ecx, [esi + 0x14]
// 00790aa1  51                   push ecx
// 00790aa2  53                   push ebx
// 00790aa3  e888ebffff           call 0x78f630
// 00790aa8  8b16                 mov edx, dword ptr [esi]
// 00790aaa  8917                 mov dword ptr [edi], edx
// 00790aac  8b4604               mov eax, dword ptr [esi + 4]
// 00790aaf  894704               mov dword ptr [edi + 4], eax
// 00790ab2  8b4e08               mov ecx, dword ptr [esi + 8]
// 00790ab5  894f08               mov dword ptr [edi + 8], ecx
// 00790ab8  8b560c               mov edx, dword ptr [esi + 0xc]
// 00790abb  89570c               mov dword ptr [edi + 0xc], edx
// 00790abe  8b4610               mov eax, dword ptr [esi + 0x10]
// 00790ac1  894710               mov dword ptr [edi + 0x10], eax
// 00790ac4  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00790ac7  83c414               add esp, 0x14
// 00790aca  894f14               mov dword ptr [edi + 0x14], ecx
// 00790acd  5f                   pop edi
// 00790ace  5e                   pop esi
// 00790acf  5b                   pop ebx
// 00790ad0  c3                   ret 
// 00790ad1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00790ad5  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00790ad9  56                   push esi
// 00790ada  53                   push ebx
// 00790adb  e800f3ffff           call 0x78fde0
// 00790ae0  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00790ae4  8b5710               mov edx, dword ptr [edi + 0x10]
// 00790ae7  52                   push edx
// 00790ae8  8d4610               lea eax, [esi + 0x10]
// 00790aeb  50                   push eax
// 00790aec  53                   push ebx
// 00790aed  e83eebffff           call 0x78f630
// 00790af2  8b0e                 mov ecx, dword ptr [esi]
// 00790af4  890f                 mov dword ptr [edi], ecx
// 00790af6  8b5604               mov edx, dword ptr [esi + 4]
// 00790af9  895704               mov dword ptr [edi + 4], edx
// 00790afc  8b4608               mov eax, dword ptr [esi + 8]
// 00790aff  894708               mov dword ptr [edi + 8], eax
// 00790b02  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00790b05  894f0c               mov dword ptr [edi + 0xc], ecx
// 00790b08  8b5610               mov edx, dword ptr [esi + 0x10]
// 00790b0b  895710               mov dword ptr [edi + 0x10], edx
// 00790b0e  8b4614               mov eax, dword ptr [esi + 0x14]
// 00790b11  83c414               add esp, 0x14
// 00790b14  894714               mov dword ptr [edi + 0x14], eax
// 00790b17  5f                   pop edi
// 00790b18  5e                   pop esi
// 00790b19  5b                   pop ebx
// 00790b1a  c3                   ret 
// 00790b1b  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00790b1f  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00790b23  56                   push esi
// 00790b24  57                   push edi
// 00790b25  e816f7ffff           call 0x790240
// 00790b2a  83c408               add esp, 8
// 00790b2d  833e0b               cmp dword ptr [esi], 0xb
// 00790b30  754d                 jne 0x790b7f
// 00790b32  8b0f                 mov ecx, dword ptr [edi]
// 00790b34  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00790b37  8b5608               mov edx, dword ptr [esi + 8]
// 00790b3a  8b0c90               mov ecx, dword ptr [eax + edx*4]
// 00790b3d  83e13f               and ecx, 0x3f
// 00790b40  80f915               cmp cl, 0x15
// 00790b43  753a                 jne 0x790b7f
// 00790b45  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00790b49  8bc3                 mov eax, ebx
// 00790b4b  8bcf                 mov ecx, edi
// 00790b4d  e8aeebffff           call 0x78f700
// 00790b52  8b17                 mov edx, dword ptr [edi]
// 00790b54  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 00790b57  8b4608               mov eax, dword ptr [esi + 8]
// 00790b5a  8b5308               mov edx, dword ptr [ebx + 8]
// 00790b5d  8d0481               lea eax, [ecx + eax*4]
// 00790b60  8b08                 mov ecx, dword ptr [eax]
// 00790b62  c1e217               shl edx, 0x17
// 00790b65  81e1ffff7f00         and ecx, 0x7fffff
// 00790b6b  0bd1                 or edx, ecx
// 00790b6d  8910                 mov dword ptr [eax], edx
// 00790b6f  c7030b000000         mov dword ptr [ebx], 0xb
// 00790b75  8b5608               mov edx, dword ptr [esi + 8]
// 00790b78  5f                   pop edi
// 00790b79  5e                   pop esi
// 00790b7a  895308               mov dword ptr [ebx + 8], edx
// 00790b7d  5b                   pop ebx
// 00790b7e  c3                   ret 
// 00790b7f  56                   push esi
// 00790b80  57                   push edi
// 00790b81  e8eaf5ffff           call 0x790170
// 00790b86  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00790b8a  56                   push esi
// 00790b8b  6a15                 push 0x15
// 00790b8d  e80efcffff           call 0x7907a0
// 00790b92  83c410               add esp, 0x10
// 00790b95  5f                   pop edi
// 00790b96  5e                   pop esi
// 00790b97  5b                   pop ebx
// 00790b98  c3                   ret 
// 00790b99  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00790b9d  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00790ba1  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00790ba5  50                   push eax
// 00790ba6  6a0c                 push 0xc
// 00790ba8  e8f3fbffff           call 0x7907a0
// 00790bad  83c408               add esp, 8
// 00790bb0  5f                   pop edi
// 00790bb1  5e                   pop esi
// 00790bb2  5b                   pop ebx
// 00790bb3  c3                   ret 
// 00790bb4  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00790bb8  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00790bbc  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00790bc0  51                   push ecx
// 00790bc1  6a0d                 push 0xd
// 00790bc3  e8d8fbffff           call 0x7907a0
// 00790bc8  83c408               add esp, 8
// 00790bcb  5f                   pop edi
// 00790bcc  5e                   pop esi
// 00790bcd  5b                   pop ebx
// 00790bce  c3                   ret 
// 00790bcf  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00790bd3  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00790bd7  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00790bdb  52                   push edx
// 00790bdc  6a0e                 push 0xe
// 00790bde  e8bdfbffff           call 0x7907a0
// 00790be3  83c408               add esp, 8
// 00790be6  5f                   pop edi
// 00790be7  5e                   pop esi
// 00790be8  5b                   pop ebx
// 00790be9  c3                   ret 
// 00790bea  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00790bee  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00790bf2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00790bf6  50                   push eax
// 00790bf7  6a0f                 push 0xf
// 00790bf9  e8a2fbffff           call 0x7907a0
// 00790bfe  83c408               add esp, 8
// 00790c01  5f                   pop edi
// 00790c02  5e                   pop esi
// 00790c03  5b                   pop ebx
// 00790c04  c3                   ret 
// 00790c05  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00790c09  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00790c0d  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00790c11  51                   push ecx
// 00790c12  6a10                 push 0x10
// 00790c14  e887fbffff           call 0x7907a0
// 00790c19  83c408               add esp, 8
// 00790c1c  5f                   pop edi
// 00790c1d  5e                   pop esi
// 00790c1e  5b                   pop ebx
// 00790c1f  c3                   ret 
// 00790c20  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00790c24  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00790c28  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00790c2c  52                   push edx
// 00790c2d  6a11                 push 0x11
// 00790c2f  e86cfbffff           call 0x7907a0
// 00790c34  83c408               add esp, 8
// 00790c37  5f                   pop edi
// 00790c38  5e                   pop esi
// 00790c39  5b                   pop ebx
// 00790c3a  c3                   ret 
// 00790c3b  6a01                 push 1
// 00790c3d  6a17                 push 0x17
// 00790c3f  eb1a                 jmp 0x790c5b
// 00790c41  6a00                 push 0
// 00790c43  6a17                 push 0x17
// 00790c45  eb14                 jmp 0x790c5b
// 00790c47  6a01                 push 1
// 00790c49  6a18                 push 0x18
// 00790c4b  eb0e                 jmp 0x790c5b
// 00790c4d  6a01                 push 1
// 00790c4f  eb08                 jmp 0x790c59
// 00790c51  6a00                 push 0
// 00790c53  6a18                 push 0x18
// 00790c55  eb04                 jmp 0x790c5b
// 00790c57  6a00                 push 0
// 00790c59  6a19                 push 0x19
// 00790c5b  8b442424             mov eax, dword ptr [esp + 0x24]
// 00790c5f  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00790c63  8b742418             mov esi, dword ptr [esp + 0x18]
// 00790c67  e824fcffff           call 0x790890
// 00790c6c  83c408               add esp, 8
// 00790c6f  5f                   pop edi
// 00790c70  5e                   pop esi
// 00790c71  5b                   pop ebx
// 00790c72  c3                   ret 
// 00790c73  90                   nop 
// 00790c74  99                   cdq 
// 00790c75  0b7900               or edi, dword ptr [ecx]
// 00790c78  b40b                 mov ah, 0xb
// 00790c7a  7900                 jns 0x790c7c
// 00790c7c  cf                   iretd 
// 00790c7d  0b7900               or edi, dword ptr [ecx]
// 00790c80  ea0b7900050c79       ljmp 0x790c:0x500790b
// 00790c87  0020                 add byte ptr [eax], ah
// 00790c89  0c79                 or al, 0x79
// 00790c8b  001b                 add byte ptr [ebx], bl
// 00790c8d  0b7900               or edi, dword ptr [ecx]
// 00790c90  41                   inc ecx
// 00790c91  0c79                 or al, 0x79
// 00790c93  003b                 add byte ptr [ebx], bh
// 00790c95  0c79                 or al, 0x79
// 00790c97  00470c               add byte ptr [edi + 0xc], al
// 00790c9a  7900                 jns 0x790c9c
// 00790c9c  4d                   dec ebp
// 00790c9d  0c79                 or al, 0x79
// 00790c9f  00510c               add byte ptr [ecx + 0xc], dl
// 00790ca2  7900                 jns 0x790ca4
// 00790ca4  57                   push edi
// 00790ca5  0c79                 or al, 0x79
// 00790ca7  00870a7900d1         add byte ptr [edi - 0x2eff86f6], al
// 00790cad  0a7900               or bh, byte ptr [ecx]
// library lua-5.1.4/lcode.c (function _luaK_posfix)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
