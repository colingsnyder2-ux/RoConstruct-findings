// from server: 100% by auto
// roc 2008-06 006c4b60  unit: CXTPToolBar  size: 305 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c4b60
//
// 006c4b60  55                   push ebp
// 006c4b61  8bec                 mov ebp, esp
// 006c4b63  6aff                 push -1
// 006c4b65  68f80a7e00           push 0x7e0af8
// 006c4b6a  64a100000000         mov eax, dword ptr fs:[0]
// 006c4b70  50                   push eax
// 006c4b71  83ec34               sub esp, 0x34
// 006c4b74  53                   push ebx
// 006c4b75  56                   push esi
// 006c4b76  57                   push edi
// 006c4b77  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 006c4b7c  33c5                 xor eax, ebp
// 006c4b7e  50                   push eax
// 006c4b7f  8d45f4               lea eax, [ebp - 0xc]
// 006c4b82  64a300000000         mov dword ptr fs:[0], eax
// 006c4b88  8965f0               mov dword ptr [ebp - 0x10], esp
// 006c4b8b  8b5d14               mov ebx, dword ptr [ebp + 0x14]
// 006c4b8e  33ff                 xor edi, edi
// 006c4b90  3bdf                 cmp ebx, edi
// 006c4b92  7509                 jne 0x6c4b9d
// 006c4b94  397d0c               cmp dword ptr [ebp + 0xc], edi
// 006c4b97  0f84de000000         je 0x6c4c7b
// 006c4b9d  397d1c               cmp dword ptr [ebp + 0x1c], edi
// 006c4ba0  7506                 jne 0x6c4ba8
// 006c4ba2  8b4508               mov eax, dword ptr [ebp + 8]
// 006c4ba5  89451c               mov dword ptr [ebp + 0x1c], eax
// 006c4ba8  33c0                 xor eax, eax
// 006c4baa  8945c0               mov dword ptr [ebp - 0x40], eax
// 006c4bad  8945c4               mov dword ptr [ebp - 0x3c], eax
// 006c4bb0  8945c8               mov dword ptr [ebp - 0x38], eax
// 006c4bb3  8945cc               mov dword ptr [ebp - 0x34], eax
// 006c4bb6  8945d0               mov dword ptr [ebp - 0x30], eax
// 006c4bb9  3bdf                 cmp ebx, edi
// 006c4bbb  7522                 jne 0x6c4bdf
// 006c4bbd  8b4510               mov eax, dword ptr [ebp + 0x10]
// 006c4bc0  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 006c4bc3  897dcc               mov dword ptr [ebp - 0x34], edi
// 006c4bc6  897dd0               mov dword ptr [ebp - 0x30], edi
// 006c4bc9  897dc8               mov dword ptr [ebp - 0x38], edi
// 006c4bcc  8945c4               mov dword ptr [ebp - 0x3c], eax
// 006c4bcf  894dc0               mov dword ptr [ebp - 0x40], ecx
// 006c4bd2  3bc7                 cmp eax, edi
// 006c4bd4  7406                 je 0x6c4bdc
// 006c4bd6  8b5028               mov edx, dword ptr [eax + 0x28]
// 006c4bd9  8955c8               mov dword ptr [ebp - 0x38], edx
// 006c4bdc  8d5dc0               lea ebx, [ebp - 0x40]
// 006c4bdf  393b                 cmp dword ptr [ebx], edi
// 006c4be1  0f8494000000         je 0x6c4c7b
// 006c4be7  8d4de4               lea ecx, [ebp - 0x1c]
// 006c4bea  e823750f00           call 0x7bc112
// 006c4bef  8b0b                 mov ecx, dword ptr [ebx]
// 006c4bf1  897dfc               mov dword ptr [ebp - 4], edi
// 006c4bf4  c645fc01             mov byte ptr [ebp - 4], 1
// 006c4bf8  e8c5c3fdff           call 0x6a0fc2
// 006c4bfd  8bf0                 mov esi, eax
// 006c4bff  3bf7                 cmp esi, edi
// 006c4c01  7505                 jne 0x6c4c08
// 006c4c03  e87ebafdff           call 0x6a0686
// 006c4c08  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 006c4c0f  e8ec740f00           call 0x7bc100
// 006c4c14  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 006c4c17  8b5508               mov edx, dword ptr [ebp + 8]
// 006c4c1a  53                   push ebx
// 006c4c1b  51                   push ecx
// 006c4c1c  52                   push edx
// 006c4c1d  8b5518               mov edx, dword ptr [ebp + 0x18]
// 006c4c20  8d4dd4               lea ecx, [ebp - 0x2c]
// 006c4c23  51                   push ecx
// 006c4c24  52                   push edx
// 006c4c25  897dd4               mov dword ptr [ebp - 0x2c], edi
// 006c4c28  897dd8               mov dword ptr [ebp - 0x28], edi
// 006c4c2b  897ddc               mov dword ptr [ebp - 0x24], edi
// 006c4c2e  897de0               mov dword ptr [ebp - 0x20], edi
// 006c4c31  8b06                 mov eax, dword ptr [esi]
// 006c4c33  8b405c               mov eax, dword ptr [eax + 0x5c]
// 006c4c36  57                   push edi
// 006c4c37  57                   push edi
// 006c4c38  8bce                 mov ecx, esi
// 006c4c3a  ffd0                 call eax
// 006c4c3c  85c0                 test eax, eax
// 006c4c3e  743b                 je 0x6c4c7b
// 006c4c40  8b451c               mov eax, dword ptr [ebp + 0x1c]
// 006c4c43  3bc7                 cmp eax, edi
// 006c4c45  7403                 je 0x6c4c4a
// 006c4c47  8b7820               mov edi, dword ptr [eax + 0x20]
// 006c4c4a  897e38               mov dword ptr [esi + 0x38], edi
// 006c4c4d  8bc6                 mov eax, esi
// 006c4c4f  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006c4c52  64890d00000000       mov dword ptr fs:[0], ecx
// 006c4c59  59                   pop ecx
// 006c4c5a  5f                   pop edi
// 006c4c5b  5e                   pop esi
// 006c4c5c  5b                   pop ebx
// 006c4c5d  8be5                 mov esp, ebp
// 006c4c5f  5d                   pop ebp
// 006c4c60  c21c00               ret 0x1c
// 006c4c63  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 006c4c66  894de8               mov dword ptr [ebp - 0x18], ecx
// 006c4c69  b86f4c6c00           mov eax, 0x6c4c6f
// 006c4c6e  c3                   ret 
// 006c4c6f  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 006c4c76  e885740f00           call 0x7bc100
// 006c4c7b  33c0                 xor eax, eax
// 006c4c7d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006c4c80  64890d00000000       mov dword ptr fs:[0], ecx
// 006c4c87  59                   pop ecx
// 006c4c88  5f                   pop edi
// 006c4c89  5e                   pop esi
// 006c4c8a  5b                   pop ebx
// 006c4c8b  8be5                 mov esp, ebp
// 006c4c8d  5d                   pop ebp
// 006c4c8e  c21c00               ret 0x1c

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Controls\XTFunctions.cpp
