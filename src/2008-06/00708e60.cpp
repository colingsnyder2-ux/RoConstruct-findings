// from server: 100% by auto
// roc 2008-06 00708e60  unit: CXTSplitterWnd  size: 469 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00708e60
//
// 00708e60  55                   push ebp
// 00708e61  8bec                 mov ebp, esp
// 00708e63  6aff                 push -1
// 00708e65  6848497e00           push 0x7e4948
// 00708e6a  64a100000000         mov eax, dword ptr fs:[0]
// 00708e70  50                   push eax
// 00708e71  83ec48               sub esp, 0x48
// 00708e74  53                   push ebx
// 00708e75  56                   push esi
// 00708e76  57                   push edi
// 00708e77  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 00708e7c  33c5                 xor eax, ebp
// 00708e7e  50                   push eax
// 00708e7f  8d45f4               lea eax, [ebp - 0xc]
// 00708e82  64a300000000         mov dword ptr fs:[0], eax
// 00708e88  8965f0               mov dword ptr [ebp - 0x10], esp
// 00708e8b  8bf1                 mov esi, ecx
// 00708e8d  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00708e90  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00708e93  50                   push eax
// 00708e94  51                   push ecx
// 00708e95  8bce                 mov ecx, esi
// 00708e97  e85282f9ff           call 0x6a10ee
// 00708e9c  50                   push eax
// 00708e9d  e81481f9ff           call 0x6a0fb6
// 00708ea2  50                   push eax
// 00708ea3  e87e7df9ff           call 0x6a0c26
// 00708ea8  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00708eab  83c408               add esp, 8
// 00708eae  8bf8                 mov edi, eax
// 00708eb0  52                   push edx
// 00708eb1  8bcf                 mov ecx, edi
// 00708eb3  e8387df9ff           call 0x6a0bf0
// 00708eb8  85c0                 test eax, eax
// 00708eba  0f855f010000         jne 0x70901f
// 00708ec0  8b5f54               mov ebx, dword ptr [edi + 0x54]
// 00708ec3  8bcf                 mov ecx, edi
// 00708ec5  e8bc330b00           call 0x7bc286
// 00708eca  8b5508               mov edx, dword ptr [ebp + 8]
// 00708ecd  8945ec               mov dword ptr [ebp - 0x14], eax
// 00708ed0  8d45e8               lea eax, [ebp - 0x18]
// 00708ed3  50                   push eax
// 00708ed4  8d4de4               lea ecx, [ebp - 0x1c]
// 00708ed7  51                   push ecx
// 00708ed8  52                   push edx
// 00708ed9  8bce                 mov ecx, esi
// 00708edb  e80882f9ff           call 0x6a10e8
// 00708ee0  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00708ee3  8d45e0               lea eax, [ebp - 0x20]
// 00708ee6  50                   push eax
// 00708ee7  8d4ddc               lea ecx, [ebp - 0x24]
// 00708eea  51                   push ecx
// 00708eeb  52                   push edx
// 00708eec  8bce                 mov ecx, esi
// 00708eee  e885380b00           call 0x7bc778
// 00708ef3  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00708ef6  33c0                 xor eax, eax
// 00708ef8  8945ac               mov dword ptr [ebp - 0x54], eax
// 00708efb  8945b0               mov dword ptr [ebp - 0x50], eax
// 00708efe  8945b8               mov dword ptr [ebp - 0x48], eax
// 00708f01  8945b4               mov dword ptr [ebp - 0x4c], eax
// 00708f04  8945bc               mov dword ptr [ebp - 0x44], eax
// 00708f07  8945b8               mov dword ptr [ebp - 0x48], eax
// 00708f0a  895db0               mov dword ptr [ebp - 0x50], ebx
// 00708f0d  894dac               mov dword ptr [ebp - 0x54], ecx
// 00708f10  3bd8                 cmp ebx, eax
// 00708f12  7405                 je 0x708f19
// 00708f14  8b5b28               mov ebx, dword ptr [ebx + 0x28]
// 00708f17  eb02                 jmp 0x708f1b
// 00708f19  33db                 xor ebx, ebx
// 00708f1b  8d4dd0               lea ecx, [ebp - 0x30]
// 00708f1e  895db4               mov dword ptr [ebp - 0x4c], ebx
// 00708f21  8945bc               mov dword ptr [ebp - 0x44], eax
// 00708f24  e8e9310b00           call 0x7bc112
// 00708f29  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00708f2c  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00708f33  c645fc01             mov byte ptr [ebp - 4], 1
// 00708f37  e88680f9ff           call 0x6a0fc2
// 00708f3c  8bd8                 mov ebx, eax
// 00708f3e  85db                 test ebx, ebx
// 00708f40  7505                 jne 0x708f47
// 00708f42  e83f77f9ff           call 0x6a0686
// 00708f47  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00708f4e  e8ad310b00           call 0x7bc100
// 00708f53  8b13                 mov edx, dword ptr [ebx]
// 00708f55  8b525c               mov edx, dword ptr [edx + 0x5c]
// 00708f58  8d4dac               lea ecx, [ebp - 0x54]
// 00708f5b  51                   push ecx
// 00708f5c  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 00708f5f  51                   push ecx
// 00708f60  56                   push esi
// 00708f61  33c0                 xor eax, eax
// 00708f63  8d4dc0               lea ecx, [ebp - 0x40]
// 00708f66  51                   push ecx
// 00708f67  6800000050           push 0x50000000
// 00708f6c  50                   push eax
// 00708f6d  50                   push eax
// 00708f6e  8bcb                 mov ecx, ebx
// 00708f70  8945c0               mov dword ptr [ebp - 0x40], eax
// 00708f73  8945c4               mov dword ptr [ebp - 0x3c], eax
// 00708f76  8945c8               mov dword ptr [ebp - 0x38], eax
// 00708f79  8945cc               mov dword ptr [ebp - 0x34], eax
// 00708f7c  ffd2                 call edx
// 00708f7e  85c0                 test eax, eax
// 00708f80  0f8499000000         je 0x70901f
// 00708f86  6a00                 push 0
// 00708f88  8bcf                 mov ecx, edi
// 00708f8a  e8df79f9ff           call 0x6a096e
// 00708f8f  6a00                 push 0
// 00708f91  8bcf                 mov ecx, edi
// 00708f93  e8c2370b00           call 0x7bc75a
// 00708f98  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 00708f9b  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 00708f9e  8b5508               mov edx, dword ptr [ebp + 8]
// 00708fa1  50                   push eax
// 00708fa2  51                   push ecx
// 00708fa3  52                   push edx
// 00708fa4  8bce                 mov ecx, esi
// 00708fa6  e89b80f9ff           call 0x6a1046
// 00708fab  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 00708fae  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 00708fb1  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 00708fb4  50                   push eax
// 00708fb5  51                   push ecx
// 00708fb6  53                   push ebx
// 00708fb7  8bce                 mov ecx, esi
// 00708fb9  e8b4370b00           call 0x7bc772
// 00708fbe  8b16                 mov edx, dword ptr [esi]
// 00708fc0  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 00708fc6  8bce                 mov ecx, esi
// 00708fc8  ffd0                 call eax
// 00708fca  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00708fcd  53                   push ebx
// 00708fce  51                   push ecx
// 00708fcf  8bce                 mov ecx, esi
// 00708fd1  e81881f9ff           call 0x6a10ee
// 00708fd6  50                   push eax
// 00708fd7  e8da7ff9ff           call 0x6a0fb6
// 00708fdc  50                   push eax
// 00708fdd  e8447cf9ff           call 0x6a0c26
// 00708fe2  8b10                 mov edx, dword ptr [eax]
// 00708fe4  8bc8                 mov ecx, eax
// 00708fe6  8b826c010000         mov eax, dword ptr [edx + 0x16c]
// 00708fec  83c408               add esp, 8
// 00708fef  ffd0                 call eax
// 00708ff1  8bc7                 mov eax, edi
// 00708ff3  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00708ff6  64890d00000000       mov dword ptr fs:[0], ecx
// 00708ffd  59                   pop ecx
// 00708ffe  5f                   pop edi
// 00708fff  5e                   pop esi
// 00709000  5b                   pop ebx
// 00709001  8be5                 mov esp, ebp
// 00709003  5d                   pop ebp
// 00709004  c20c00               ret 0xc
// 00709007  8b4dd8               mov ecx, dword ptr [ebp - 0x28]
// 0070900a  894dd4               mov dword ptr [ebp - 0x2c], ecx
// 0070900d  b813907000           mov eax, 0x709013
// 00709012  c3                   ret 
// 00709013  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0070901a  e8e1300b00           call 0x7bc100
// 0070901f  33c0                 xor eax, eax
// 00709021  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00709024  64890d00000000       mov dword ptr fs:[0], ecx
// 0070902b  59                   pop ecx
// 0070902c  5f                   pop edi
// 0070902d  5e                   pop esi
// 0070902e  5b                   pop ebx
// 0070902f  8be5                 mov esp, ebp
// 00709031  5d                   pop ebp
// 00709032  c20c00               ret 0xc

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTSplitterWnd.cpp
