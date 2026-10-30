// roc 2009-06 0071df60  unit: CPatchedControlComboBox  size: 411 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071df60
//
// 0071df60  6aff                 push -1
// 0071df62  68c2478700           push 0x8747c2
// 0071df67  64a100000000         mov eax, dword ptr fs:[0]
// 0071df6d  50                   push eax
// 0071df6e  83ec14               sub esp, 0x14
// 0071df71  53                   push ebx
// 0071df72  55                   push ebp
// 0071df73  56                   push esi
// 0071df74  57                   push edi
// 0071df75  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0071df7a  33c4                 xor eax, esp
// 0071df7c  50                   push eax
// 0071df7d  8d442428             lea eax, [esp + 0x28]
// 0071df81  64a300000000         mov dword ptr fs:[0], eax
// 0071df87  8bf1                 mov esi, ecx
// 0071df89  8bae84010000         mov ebp, dword ptr [esi + 0x184]
// 0071df8f  e8bce8ffff           call 0x71c850
// 0071df94  83bedc01000000       cmp dword ptr [esi + 0x1dc], 0
// 0071df9b  8bf8                 mov edi, eax
// 0071df9d  0f8534010000         jne 0x71e0d7
// 0071dfa3  83beac01000000       cmp dword ptr [esi + 0x1ac], 0
// 0071dfaa  0f8427010000         je 0x71e0d7
// 0071dfb0  83beb001000000       cmp dword ptr [esi + 0x1b0], 0
// 0071dfb7  0f851a010000         jne 0x71e0d7
// 0071dfbd  85ed                 test ebp, ebp
// 0071dfbf  0f8412010000         je 0x71e0d7
// 0071dfc5  837d2000             cmp dword ptr [ebp + 0x20], 0
// 0071dfc9  0f8408010000         je 0x71e0d7
// 0071dfcf  85ff                 test edi, edi
// 0071dfd1  0f8400010000         je 0x71e0d7
// 0071dfd7  8d442418             lea eax, [esp + 0x18]
// 0071dfdb  50                   push eax
// 0071dfdc  8bce                 mov ecx, esi
// 0071dfde  e86de1ffff           call 0x71c150
// 0071dfe3  8d4c2418             lea ecx, [esp + 0x18]
// 0071dfe7  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0071dfef  ff1554fb8900         call dword ptr [0x89fb54]
// 0071dff5  8bd8                 mov ebx, eax
// 0071dff7  33c0                 xor eax, eax
// 0071dff9  3bd8                 cmp ebx, eax
// 0071dffb  895c2424             mov dword ptr [esp + 0x24], ebx
// 0071dfff  0f8eb6000000         jle 0x71e0bb
// 0071e005  8d4c241c             lea ecx, [esp + 0x1c]
// 0071e009  51                   push ecx
// 0071e00a  8d542424             lea edx, [esp + 0x24]
// 0071e00e  52                   push edx
// 0071e00f  8bcd                 mov ecx, ebp
// 0071e011  89442428             mov dword ptr [esp + 0x28], eax
// 0071e015  89442424             mov dword ptr [esp + 0x24], eax
// 0071e019  e8d2d9ffff           call 0x71b9f0
// 0071e01e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0071e022  39442420             cmp dword ptr [esp + 0x20], eax
// 0071e026  0f858f000000         jne 0x71e0bb
// 0071e02c  3bd8                 cmp ebx, eax
// 0071e02e  0f8587000000         jne 0x71e0bb
// 0071e034  8b1f                 mov ebx, dword ptr [edi]
// 0071e036  8d4c2418             lea ecx, [esp + 0x18]
// 0071e03a  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0071e040  50                   push eax
// 0071e041  8b8314020000         mov eax, dword ptr [ebx + 0x214]
// 0071e047  6a00                 push 0
// 0071e049  8bcf                 mov ecx, edi
// 0071e04b  ffd0                 call eax
// 0071e04d  8bd8                 mov ebx, eax
// 0071e04f  83fbff               cmp ebx, -1
// 0071e052  7467                 je 0x71e0bb
// 0071e054  8d4c2414             lea ecx, [esp + 0x14]
// 0071e058  ff15bcfc8900         call dword ptr [0x89fcbc]
// 0071e05e  8b17                 mov edx, dword ptr [edi]
// 0071e060  8b9224020000         mov edx, dword ptr [edx + 0x224]
// 0071e066  8d442414             lea eax, [esp + 0x14]
// 0071e06a  50                   push eax
// 0071e06b  53                   push ebx
// 0071e06c  8bcf                 mov ecx, edi
// 0071e06e  c644243801           mov byte ptr [esp + 0x38], 1
// 0071e073  ffd2                 call edx
// 0071e075  8d442414             lea eax, [esp + 0x14]
// 0071e079  50                   push eax
// 0071e07a  8bce                 mov ecx, esi
// 0071e07c  e82fe1ffff           call 0x71c1b0
// 0071e081  8d4c2414             lea ecx, [esp + 0x14]
// 0071e085  ff1554fb8900         call dword ptr [0x89fb54]
// 0071e08b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0071e08f  8b5520               mov edx, dword ptr [ebp + 0x20]
// 0071e092  8b3d90ee8900         mov edi, dword ptr [0x89ee90]
// 0071e098  51                   push ecx
// 0071e099  50                   push eax
// 0071e09a  68b1000000           push 0xb1
// 0071e09f  52                   push edx
// 0071e0a0  ffd7                 call edi
// 0071e0a2  8b4520               mov eax, dword ptr [ebp + 0x20]
// 0071e0a5  6a00                 push 0
// 0071e0a7  6a00                 push 0
// 0071e0a9  68b7000000           push 0xb7
// 0071e0ae  50                   push eax
// 0071e0af  ffd7                 call edi
// 0071e0b1  8d4c2414             lea ecx, [esp + 0x14]
// 0071e0b5  ff1510fd8900         call dword ptr [0x89fd10]
// 0071e0bb  8d4c2418             lea ecx, [esp + 0x18]
// 0071e0bf  c786b001000001000000 mov dword ptr [esi + 0x1b0], 1
// 0071e0c9  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 0071e0d1  ff1510fd8900         call dword ptr [0x89fd10]
// 0071e0d7  8bce                 mov ecx, esi
// 0071e0d9  e882fdffff           call 0x71de60
// 0071e0de  6a05                 push 5
// 0071e0e0  8bce                 mov ecx, esi
// 0071e0e2  e8693d0000           call 0x721e50
// 0071e0e7  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0071e0eb  64890d00000000       mov dword ptr fs:[0], ecx
// 0071e0f2  59                   pop ecx
// 0071e0f3  5f                   pop edi
// 0071e0f4  5e                   pop esi
// 0071e0f5  5d                   pop ebp
// 0071e0f6  5b                   pop ebx
// 0071e0f7  83c420               add esp, 0x20
// 0071e0fa  c3                   ret 
// copied from an identical function in another client (function ?OnEditChanged@CXTPControlComboBox@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControlComboBox.cpp