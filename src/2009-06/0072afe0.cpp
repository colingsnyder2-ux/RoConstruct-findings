// roc 2009-06 0072afe0  unit: CXTPCommandBar  size: 592 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0072afe0
//
// 0072afe0  6aff                 push -1
// 0072afe2  68fd548700           push 0x8754fd
// 0072afe7  64a100000000         mov eax, dword ptr fs:[0]
// 0072afed  50                   push eax
// 0072afee  83ec20               sub esp, 0x20
// 0072aff1  53                   push ebx
// 0072aff2  55                   push ebp
// 0072aff3  56                   push esi
// 0072aff4  57                   push edi
// 0072aff5  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0072affa  33c4                 xor eax, esp
// 0072affc  50                   push eax
// 0072affd  8d442434             lea eax, [esp + 0x34]
// 0072b001  64a300000000         mov dword ptr fs:[0], eax
// 0072b007  894c2424             mov dword ptr [esp + 0x24], ecx
// 0072b00b  33db                 xor ebx, ebx
// 0072b00d  895c2414             mov dword ptr [esp + 0x14], ebx
// 0072b011  8b442444             mov eax, dword ptr [esp + 0x44]
// 0072b015  8b90fc000000         mov edx, dword ptr [eax + 0xfc]
// 0072b01b  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 0072b021  89542420             mov dword ptr [esp + 0x20], edx
// 0072b025  50                   push eax
// 0072b026  8d542424             lea edx, [esp + 0x24]
// 0072b02a  52                   push edx
// 0072b02b  33ed                 xor ebp, ebp
// 0072b02d  e8defeffff           call 0x72af10
// 0072b032  8bf0                 mov esi, eax
// 0072b034  3bf5                 cmp esi, ebp
// 0072b036  7507                 jne 0x72b03f
// 0072b038  33c0                 xor eax, eax
// 0072b03a  e9db010000           jmp 0x72b21a
// 0072b03f  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0072b043  8928                 mov dword ptr [eax], ebp
// 0072b045  89742430             mov dword ptr [esp + 0x30], esi
// 0072b049  896c2418             mov dword ptr [esp + 0x18], ebp
// 0072b04d  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0072b051  8b16                 mov edx, dword ptr [esi]
// 0072b053  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 0072b059  8bce                 mov ecx, esi
// 0072b05b  ffd0                 call eax
// 0072b05d  85c0                 test eax, eax
// 0072b05f  7417                 je 0x72b078
// 0072b061  8b16                 mov edx, dword ptr [esi]
// 0072b063  8b5258               mov edx, dword ptr [edx + 0x58]
// 0072b066  8d44242c             lea eax, [esp + 0x2c]
// 0072b06a  50                   push eax
// 0072b06b  8bce                 mov ecx, esi
// 0072b06d  ffd2                 call edx
// 0072b06f  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0072b073  83cb01               or ebx, 1
// 0072b076  eb1a                 jmp 0x72b092
// 0072b078  6816d28a00           push 0x8ad216
// 0072b07d  8d4c242c             lea ecx, [esp + 0x2c]
// 0072b081  ff1508fd8900         call dword ptr [0x89fd08]
// 0072b087  c744243c01000000     mov dword ptr [esp + 0x3c], 1
// 0072b08f  83cb02               or ebx, 2
// 0072b092  50                   push eax
// 0072b093  8d4c2448             lea ecx, [esp + 0x48]
// 0072b097  895c2418             mov dword ptr [esp + 0x18], ebx
// 0072b09b  ff15e4fc8900         call dword ptr [0x89fce4]
// 0072b0a1  c744243c02000000     mov dword ptr [esp + 0x3c], 2
// 0072b0a9  f6c302               test bl, 2
// 0072b0ac  7411                 je 0x72b0bf
// 0072b0ae  83e3fd               and ebx, 0xfffffffd
// 0072b0b1  8d4c2428             lea ecx, [esp + 0x28]
// 0072b0b5  895c2414             mov dword ptr [esp + 0x14], ebx
// 0072b0b9  ff1510fd8900         call dword ptr [0x89fd10]
// 0072b0bf  c644243c04           mov byte ptr [esp + 0x3c], 4
// 0072b0c4  f6c301               test bl, 1
// 0072b0c7  7411                 je 0x72b0da
// 0072b0c9  83e3fe               and ebx, 0xfffffffe
// 0072b0cc  8d4c242c             lea ecx, [esp + 0x2c]
// 0072b0d0  895c2414             mov dword ptr [esp + 0x14], ebx
// 0072b0d4  ff1510fd8900         call dword ptr [0x89fd10]
// 0072b0da  8d4c2444             lea ecx, [esp + 0x44]
// 0072b0de  ff155cfb8900         call dword ptr [0x89fb5c]
// 0072b0e4  84c0                 test al, al
// 0072b0e6  0f85c9000000         jne 0x72b1b5
// 0072b0ec  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0072b0f2  83f8ff               cmp eax, -1
// 0072b0f5  750f                 jne 0x72b106
// 0072b0f7  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0072b0fd  3bcd                 cmp ecx, ebp
// 0072b0ff  7405                 je 0x72b106
// 0072b101  e89a4dffff           call 0x71fea0
// 0072b106  3bc5                 cmp eax, ebp
// 0072b108  0f84a7000000         je 0x72b1b5
// 0072b10e  39ae58010000         cmp dword ptr [esi + 0x158], ebp
// 0072b114  0f859b000000         jne 0x72b1b5
// 0072b11a  55                   push ebp
// 0072b11b  6a26                 push 0x26
// 0072b11d  8d4c244c             lea ecx, [esp + 0x4c]
// 0072b121  ff1500008a00         call dword ptr [0x8a0000]
// 0072b127  8bf8                 mov edi, eax
// 0072b129  83ffff               cmp edi, -1
// 0072b12c  7e19                 jle 0x72b147
// 0072b12e  8d4c2444             lea ecx, [esp + 0x44]
// 0072b132  ff1554fb8900         call dword ptr [0x89fb54]
// 0072b138  48                   dec eax
// 0072b139  3bf8                 cmp edi, eax
// 0072b13b  7d0a                 jge 0x72b147
// 0072b13d  bd01000000           mov ebp, 1
// 0072b142  8d4701               lea eax, [edi + 1]
// 0072b145  eb02                 jmp 0x72b149
// 0072b147  33c0                 xor eax, eax
// 0072b149  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0072b14d  51                   push ecx
// 0072b14e  50                   push eax
// 0072b14f  8d4c244c             lea ecx, [esp + 0x4c]
// 0072b153  ff15e0f98900         call dword ptr [0x89f9e0]
// 0072b159  0fb6d0               movzx edx, al
// 0072b15c  52                   push edx
// 0072b15d  e8de9b0800           call 0x7b4d40
// 0072b162  83c408               add esp, 8
// 0072b165  85c0                 test eax, eax
// 0072b167  744c                 je 0x72b1b5
// 0072b169  85ed                 test ebp, ebp
// 0072b16b  7530                 jne 0x72b19d
// 0072b16d  8b442424             mov eax, dword ptr [esp + 0x24]
// 0072b171  8b4874               mov ecx, dword ptr [eax + 0x74]
// 0072b174  f6415c04             test byte ptr [ecx + 0x5c], 4
// 0072b178  753b                 jne 0x72b1b5
// 0072b17a  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0072b180  39a8f8000000         cmp dword ptr [eax + 0xf8], ebp
// 0072b186  7408                 je 0x72b190
// 0072b188  39a8e0000000         cmp dword ptr [eax + 0xe0], ebp
// 0072b18e  7425                 je 0x72b1b5
// 0072b190  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0072b195  7514                 jne 0x72b1ab
// 0072b197  8974241c             mov dword ptr [esp + 0x1c], esi
// 0072b19b  eb18                 jmp 0x72b1b5
// 0072b19d  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0072b1a1  85ff                 test edi, edi
// 0072b1a3  754b                 jne 0x72b1f0
// 0072b1a5  89742418             mov dword ptr [esp + 0x18], esi
// 0072b1a9  eb0a                 jmp 0x72b1b5
// 0072b1ab  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0072b1af  c70201000000         mov dword ptr [edx], 1
// 0072b1b5  8bb680000000         mov esi, dword ptr [esi + 0x80]
// 0072b1bb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0072b1bf  56                   push esi
// 0072b1c0  8d442424             lea eax, [esp + 0x24]
// 0072b1c4  50                   push eax
// 0072b1c5  e846fdffff           call 0x72af10
// 0072b1ca  8bf0                 mov esi, eax
// 0072b1cc  33ed                 xor ebp, ebp
// 0072b1ce  8d4c2444             lea ecx, [esp + 0x44]
// 0072b1d2  3bf5                 cmp esi, ebp
// 0072b1d4  7432                 je 0x72b208
// 0072b1d6  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 0072b1de  ff1510fd8900         call dword ptr [0x89fd10]
// 0072b1e4  3b742430             cmp esi, dword ptr [esp + 0x30]
// 0072b1e8  0f8563feffff         jne 0x72b051
// 0072b1ee  eb1e                 jmp 0x72b20e
// 0072b1f0  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0072b1f4  c70101000000         mov dword ptr [ecx], 1
// 0072b1fa  8d4c2444             lea ecx, [esp + 0x44]
// 0072b1fe  ff1510fd8900         call dword ptr [0x89fd10]
// 0072b204  8bc7                 mov eax, edi
// 0072b206  eb12                 jmp 0x72b21a
// 0072b208  ff1510fd8900         call dword ptr [0x89fd10]
// 0072b20e  8b442418             mov eax, dword ptr [esp + 0x18]
// 0072b212  3bc5                 cmp eax, ebp
// 0072b214  7504                 jne 0x72b21a
// 0072b216  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0072b21a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0072b21e  64890d00000000       mov dword ptr fs:[0], ecx
// 0072b225  59                   pop ecx
// 0072b226  5f                   pop edi
// 0072b227  5e                   pop esi
// 0072b228  5d                   pop ebp
// 0072b229  5b                   pop ebx
// 0072b22a  83c42c               add esp, 0x2c
// 0072b22d  c20c00               ret 0xc
// copied from an identical function in another client (function ?FindAccel@CXTPCommandBars@@IBEPAVCXTPControl@@PAVCXTPCommandBar@@IAAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPCommandBars.cpp