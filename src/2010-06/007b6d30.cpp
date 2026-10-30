// roc 2010-06 007b6d30  unit: CPatchedControlComboBox  size: 411 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b6d30
//
// 007b6d30  6aff                 push -1
// 007b6d32  68f2f29a00           push 0x9af2f2
// 007b6d37  64a100000000         mov eax, dword ptr fs:[0]
// 007b6d3d  50                   push eax
// 007b6d3e  83ec14               sub esp, 0x14
// 007b6d41  53                   push ebx
// 007b6d42  55                   push ebp
// 007b6d43  56                   push esi
// 007b6d44  57                   push edi
// 007b6d45  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007b6d4a  33c4                 xor eax, esp
// 007b6d4c  50                   push eax
// 007b6d4d  8d442428             lea eax, [esp + 0x28]
// 007b6d51  64a300000000         mov dword ptr fs:[0], eax
// 007b6d57  8bf1                 mov esi, ecx
// 007b6d59  8bae84010000         mov ebp, dword ptr [esi + 0x184]
// 007b6d5f  e87ce9ffff           call 0x7b56e0
// 007b6d64  83bedc01000000       cmp dword ptr [esi + 0x1dc], 0
// 007b6d6b  8bf8                 mov edi, eax
// 007b6d6d  0f8534010000         jne 0x7b6ea7
// 007b6d73  83beac01000000       cmp dword ptr [esi + 0x1ac], 0
// 007b6d7a  0f8427010000         je 0x7b6ea7
// 007b6d80  83beb001000000       cmp dword ptr [esi + 0x1b0], 0
// 007b6d87  0f851a010000         jne 0x7b6ea7
// 007b6d8d  85ed                 test ebp, ebp
// 007b6d8f  0f8412010000         je 0x7b6ea7
// 007b6d95  837d2000             cmp dword ptr [ebp + 0x20], 0
// 007b6d99  0f8408010000         je 0x7b6ea7
// 007b6d9f  85ff                 test edi, edi
// 007b6da1  0f8400010000         je 0x7b6ea7
// 007b6da7  8d442418             lea eax, [esp + 0x18]
// 007b6dab  50                   push eax
// 007b6dac  8bce                 mov ecx, esi
// 007b6dae  e82de2ffff           call 0x7b4fe0
// 007b6db3  8d4c2418             lea ecx, [esp + 0x18]
// 007b6db7  c744243000000000     mov dword ptr [esp + 0x30], 0
// 007b6dbf  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007b6dc5  8bd8                 mov ebx, eax
// 007b6dc7  33c0                 xor eax, eax
// 007b6dc9  3bd8                 cmp ebx, eax
// 007b6dcb  895c2424             mov dword ptr [esp + 0x24], ebx
// 007b6dcf  0f8eb6000000         jle 0x7b6e8b
// 007b6dd5  8d4c241c             lea ecx, [esp + 0x1c]
// 007b6dd9  51                   push ecx
// 007b6dda  8d542424             lea edx, [esp + 0x24]
// 007b6dde  52                   push edx
// 007b6ddf  8bcd                 mov ecx, ebp
// 007b6de1  89442428             mov dword ptr [esp + 0x28], eax
// 007b6de5  89442424             mov dword ptr [esp + 0x24], eax
// 007b6de9  e8b2daffff           call 0x7b48a0
// 007b6dee  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007b6df2  39442420             cmp dword ptr [esp + 0x20], eax
// 007b6df6  0f858f000000         jne 0x7b6e8b
// 007b6dfc  3bd8                 cmp ebx, eax
// 007b6dfe  0f8587000000         jne 0x7b6e8b
// 007b6e04  8b1f                 mov ebx, dword ptr [edi]
// 007b6e06  8d4c2418             lea ecx, [esp + 0x18]
// 007b6e0a  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007b6e10  50                   push eax
// 007b6e11  8b8314020000         mov eax, dword ptr [ebx + 0x214]
// 007b6e17  6a00                 push 0
// 007b6e19  8bcf                 mov ecx, edi
// 007b6e1b  ffd0                 call eax
// 007b6e1d  8bd8                 mov ebx, eax
// 007b6e1f  83fbff               cmp ebx, -1
// 007b6e22  7467                 je 0x7b6e8b
// 007b6e24  8d4c2414             lea ecx, [esp + 0x14]
// 007b6e28  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 007b6e2e  8b17                 mov edx, dword ptr [edi]
// 007b6e30  8b9224020000         mov edx, dword ptr [edx + 0x224]
// 007b6e36  8d442414             lea eax, [esp + 0x14]
// 007b6e3a  50                   push eax
// 007b6e3b  53                   push ebx
// 007b6e3c  8bcf                 mov ecx, edi
// 007b6e3e  c644243801           mov byte ptr [esp + 0x38], 1
// 007b6e43  ffd2                 call edx
// 007b6e45  8d442414             lea eax, [esp + 0x14]
// 007b6e49  50                   push eax
// 007b6e4a  8bce                 mov ecx, esi
// 007b6e4c  e8efe1ffff           call 0x7b5040
// 007b6e51  8d4c2414             lea ecx, [esp + 0x14]
// 007b6e55  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007b6e5b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007b6e5f  8b5520               mov edx, dword ptr [ebp + 0x20]
// 007b6e62  8b3d54ba9e00         mov edi, dword ptr [0x9eba54]
// 007b6e68  51                   push ecx
// 007b6e69  50                   push eax
// 007b6e6a  68b1000000           push 0xb1
// 007b6e6f  52                   push edx
// 007b6e70  ffd7                 call edi
// 007b6e72  8b4520               mov eax, dword ptr [ebp + 0x20]
// 007b6e75  6a00                 push 0
// 007b6e77  6a00                 push 0
// 007b6e79  68b7000000           push 0xb7
// 007b6e7e  50                   push eax
// 007b6e7f  ffd7                 call edi
// 007b6e81  8d4c2414             lea ecx, [esp + 0x14]
// 007b6e85  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007b6e8b  8d4c2418             lea ecx, [esp + 0x18]
// 007b6e8f  c786b001000001000000 mov dword ptr [esi + 0x1b0], 1
// 007b6e99  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 007b6ea1  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007b6ea7  8bce                 mov ecx, esi
// 007b6ea9  e882fdffff           call 0x7b6c30
// 007b6eae  6a05                 push 5
// 007b6eb0  8bce                 mov ecx, esi
// 007b6eb2  e8b958ffff           call 0x7ac770
// 007b6eb7  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007b6ebb  64890d00000000       mov dword ptr fs:[0], ecx
// 007b6ec2  59                   pop ecx
// 007b6ec3  5f                   pop edi
// 007b6ec4  5e                   pop esi
// 007b6ec5  5d                   pop ebp
// 007b6ec6  5b                   pop ebx
// 007b6ec7  83c420               add esp, 0x20
// 007b6eca  c3                   ret 
// copied from an identical function in another client (function ?OnEditChanged@CXTPControlComboBox@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControlComboBox.cpp