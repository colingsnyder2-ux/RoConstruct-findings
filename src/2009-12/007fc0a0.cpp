// roc 2009-12 007fc0a0  unit: CPatchedControlComboBox  size: 411 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fc0a0
//
// 007fc0a0  6aff                 push -1
// 007fc0a2  68828e9500           push 0x958e82
// 007fc0a7  64a100000000         mov eax, dword ptr fs:[0]
// 007fc0ad  50                   push eax
// 007fc0ae  83ec14               sub esp, 0x14
// 007fc0b1  53                   push ebx
// 007fc0b2  55                   push ebp
// 007fc0b3  56                   push esi
// 007fc0b4  57                   push edi
// 007fc0b5  a10052b600           mov eax, dword ptr [0xb65200]
// 007fc0ba  33c4                 xor eax, esp
// 007fc0bc  50                   push eax
// 007fc0bd  8d442428             lea eax, [esp + 0x28]
// 007fc0c1  64a300000000         mov dword ptr fs:[0], eax
// 007fc0c7  8bf1                 mov esi, ecx
// 007fc0c9  8bae84010000         mov ebp, dword ptr [esi + 0x184]
// 007fc0cf  e82ce9ffff           call 0x7faa00
// 007fc0d4  83bedc01000000       cmp dword ptr [esi + 0x1dc], 0
// 007fc0db  8bf8                 mov edi, eax
// 007fc0dd  0f8534010000         jne 0x7fc217
// 007fc0e3  83beac01000000       cmp dword ptr [esi + 0x1ac], 0
// 007fc0ea  0f8427010000         je 0x7fc217
// 007fc0f0  83beb001000000       cmp dword ptr [esi + 0x1b0], 0
// 007fc0f7  0f851a010000         jne 0x7fc217
// 007fc0fd  85ed                 test ebp, ebp
// 007fc0ff  0f8412010000         je 0x7fc217
// 007fc105  837d2000             cmp dword ptr [ebp + 0x20], 0
// 007fc109  0f8408010000         je 0x7fc217
// 007fc10f  85ff                 test edi, edi
// 007fc111  0f8400010000         je 0x7fc217
// 007fc117  8d442418             lea eax, [esp + 0x18]
// 007fc11b  50                   push eax
// 007fc11c  8bce                 mov ecx, esi
// 007fc11e  e8dde1ffff           call 0x7fa300
// 007fc123  8d4c2418             lea ecx, [esp + 0x18]
// 007fc127  c744243000000000     mov dword ptr [esp + 0x30], 0
// 007fc12f  ff15b4dd9800         call dword ptr [0x98ddb4]
// 007fc135  8bd8                 mov ebx, eax
// 007fc137  33c0                 xor eax, eax
// 007fc139  3bd8                 cmp ebx, eax
// 007fc13b  895c2424             mov dword ptr [esp + 0x24], ebx
// 007fc13f  0f8eb6000000         jle 0x7fc1fb
// 007fc145  8d4c241c             lea ecx, [esp + 0x1c]
// 007fc149  51                   push ecx
// 007fc14a  8d542424             lea edx, [esp + 0x24]
// 007fc14e  52                   push edx
// 007fc14f  8bcd                 mov ecx, ebp
// 007fc151  89442428             mov dword ptr [esp + 0x28], eax
// 007fc155  89442424             mov dword ptr [esp + 0x24], eax
// 007fc159  e822daffff           call 0x7f9b80
// 007fc15e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007fc162  39442420             cmp dword ptr [esp + 0x20], eax
// 007fc166  0f858f000000         jne 0x7fc1fb
// 007fc16c  3bd8                 cmp ebx, eax
// 007fc16e  0f8587000000         jne 0x7fc1fb
// 007fc174  8b1f                 mov ebx, dword ptr [edi]
// 007fc176  8d4c2418             lea ecx, [esp + 0x18]
// 007fc17a  ff1580de9800         call dword ptr [0x98de80]
// 007fc180  50                   push eax
// 007fc181  8b8314020000         mov eax, dword ptr [ebx + 0x214]
// 007fc187  6a00                 push 0
// 007fc189  8bcf                 mov ecx, edi
// 007fc18b  ffd0                 call eax
// 007fc18d  8bd8                 mov ebx, eax
// 007fc18f  83fbff               cmp ebx, -1
// 007fc192  7467                 je 0x7fc1fb
// 007fc194  8d4c2414             lea ecx, [esp + 0x14]
// 007fc198  ff1574de9800         call dword ptr [0x98de74]
// 007fc19e  8b17                 mov edx, dword ptr [edi]
// 007fc1a0  8b9224020000         mov edx, dword ptr [edx + 0x224]
// 007fc1a6  8d442414             lea eax, [esp + 0x14]
// 007fc1aa  50                   push eax
// 007fc1ab  53                   push ebx
// 007fc1ac  8bcf                 mov ecx, edi
// 007fc1ae  c644243801           mov byte ptr [esp + 0x38], 1
// 007fc1b3  ffd2                 call edx
// 007fc1b5  8d442414             lea eax, [esp + 0x14]
// 007fc1b9  50                   push eax
// 007fc1ba  8bce                 mov ecx, esi
// 007fc1bc  e89fe1ffff           call 0x7fa360
// 007fc1c1  8d4c2414             lea ecx, [esp + 0x14]
// 007fc1c5  ff15b4dd9800         call dword ptr [0x98ddb4]
// 007fc1cb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007fc1cf  8b5520               mov edx, dword ptr [ebp + 0x20]
// 007fc1d2  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 007fc1d8  51                   push ecx
// 007fc1d9  50                   push eax
// 007fc1da  68b1000000           push 0xb1
// 007fc1df  52                   push edx
// 007fc1e0  ffd7                 call edi
// 007fc1e2  8b4520               mov eax, dword ptr [ebp + 0x20]
// 007fc1e5  6a00                 push 0
// 007fc1e7  6a00                 push 0
// 007fc1e9  68b7000000           push 0xb7
// 007fc1ee  50                   push eax
// 007fc1ef  ffd7                 call edi
// 007fc1f1  8d4c2414             lea ecx, [esp + 0x14]
// 007fc1f5  ff15c0de9800         call dword ptr [0x98dec0]
// 007fc1fb  8d4c2418             lea ecx, [esp + 0x18]
// 007fc1ff  c786b001000001000000 mov dword ptr [esi + 0x1b0], 1
// 007fc209  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 007fc211  ff15c0de9800         call dword ptr [0x98dec0]
// 007fc217  8bce                 mov ecx, esi
// 007fc219  e882fdffff           call 0x7fbfa0
// 007fc21e  6a05                 push 5
// 007fc220  8bce                 mov ecx, esi
// 007fc222  e869c3ffff           call 0x7f8590
// 007fc227  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007fc22b  64890d00000000       mov dword ptr fs:[0], ecx
// 007fc232  59                   pop ecx
// 007fc233  5f                   pop edi
// 007fc234  5e                   pop esi
// 007fc235  5d                   pop ebp
// 007fc236  5b                   pop ebx
// 007fc237  83c420               add esp, 0x20
// 007fc23a  c3                   ret 
// copied from an identical function in another client (function ?OnEditChanged@CXTPControlComboBox@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControlComboBox.cpp