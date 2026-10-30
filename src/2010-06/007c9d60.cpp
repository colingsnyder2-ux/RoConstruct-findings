// roc 2010-06 007c9d60  unit: CXTPCommandBar  size: 592 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c9d60
//
// 007c9d60  6aff                 push -1
// 007c9d62  688d039b00           push 0x9b038d
// 007c9d67  64a100000000         mov eax, dword ptr fs:[0]
// 007c9d6d  50                   push eax
// 007c9d6e  83ec20               sub esp, 0x20
// 007c9d71  53                   push ebx
// 007c9d72  55                   push ebp
// 007c9d73  56                   push esi
// 007c9d74  57                   push edi
// 007c9d75  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007c9d7a  33c4                 xor eax, esp
// 007c9d7c  50                   push eax
// 007c9d7d  8d442434             lea eax, [esp + 0x34]
// 007c9d81  64a300000000         mov dword ptr fs:[0], eax
// 007c9d87  894c2424             mov dword ptr [esp + 0x24], ecx
// 007c9d8b  33db                 xor ebx, ebx
// 007c9d8d  895c2414             mov dword ptr [esp + 0x14], ebx
// 007c9d91  8b442444             mov eax, dword ptr [esp + 0x44]
// 007c9d95  8b90fc000000         mov edx, dword ptr [eax + 0xfc]
// 007c9d9b  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 007c9da1  89542420             mov dword ptr [esp + 0x20], edx
// 007c9da5  50                   push eax
// 007c9da6  8d542424             lea edx, [esp + 0x24]
// 007c9daa  52                   push edx
// 007c9dab  33ed                 xor ebp, ebp
// 007c9dad  e8defeffff           call 0x7c9c90
// 007c9db2  8bf0                 mov esi, eax
// 007c9db4  3bf5                 cmp esi, ebp
// 007c9db6  7507                 jne 0x7c9dbf
// 007c9db8  33c0                 xor eax, eax
// 007c9dba  e9db010000           jmp 0x7c9f9a
// 007c9dbf  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 007c9dc3  8928                 mov dword ptr [eax], ebp
// 007c9dc5  89742430             mov dword ptr [esp + 0x30], esi
// 007c9dc9  896c2418             mov dword ptr [esp + 0x18], ebp
// 007c9dcd  896c241c             mov dword ptr [esp + 0x1c], ebp
// 007c9dd1  8b16                 mov edx, dword ptr [esi]
// 007c9dd3  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 007c9dd9  8bce                 mov ecx, esi
// 007c9ddb  ffd0                 call eax
// 007c9ddd  85c0                 test eax, eax
// 007c9ddf  7417                 je 0x7c9df8
// 007c9de1  8b16                 mov edx, dword ptr [esi]
// 007c9de3  8b5258               mov edx, dword ptr [edx + 0x58]
// 007c9de6  8d44242c             lea eax, [esp + 0x2c]
// 007c9dea  50                   push eax
// 007c9deb  8bce                 mov ecx, esi
// 007c9ded  ffd2                 call edx
// 007c9def  896c243c             mov dword ptr [esp + 0x3c], ebp
// 007c9df3  83cb01               or ebx, 1
// 007c9df6  eb1a                 jmp 0x7c9e12
// 007c9df8  68fe08a000           push 0xa008fe
// 007c9dfd  8d4c242c             lea ecx, [esp + 0x2c]
// 007c9e01  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 007c9e07  c744243c01000000     mov dword ptr [esp + 0x3c], 1
// 007c9e0f  83cb02               or ebx, 2
// 007c9e12  50                   push eax
// 007c9e13  8d4c2448             lea ecx, [esp + 0x48]
// 007c9e17  895c2418             mov dword ptr [esp + 0x18], ebx
// 007c9e1b  ff15c4ce9e00         call dword ptr [0x9ecec4]
// 007c9e21  c744243c02000000     mov dword ptr [esp + 0x3c], 2
// 007c9e29  f6c302               test bl, 2
// 007c9e2c  7411                 je 0x7c9e3f
// 007c9e2e  83e3fd               and ebx, 0xfffffffd
// 007c9e31  8d4c2428             lea ecx, [esp + 0x28]
// 007c9e35  895c2414             mov dword ptr [esp + 0x14], ebx
// 007c9e39  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007c9e3f  c644243c04           mov byte ptr [esp + 0x3c], 4
// 007c9e44  f6c301               test bl, 1
// 007c9e47  7411                 je 0x7c9e5a
// 007c9e49  83e3fe               and ebx, 0xfffffffe
// 007c9e4c  8d4c242c             lea ecx, [esp + 0x2c]
// 007c9e50  895c2414             mov dword ptr [esp + 0x14], ebx
// 007c9e54  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007c9e5a  8d4c2444             lea ecx, [esp + 0x44]
// 007c9e5e  ff15eccd9e00         call dword ptr [0x9ecdec]
// 007c9e64  84c0                 test al, al
// 007c9e66  0f85c9000000         jne 0x7c9f35
// 007c9e6c  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 007c9e72  83f8ff               cmp eax, -1
// 007c9e75  750f                 jne 0x7c9e86
// 007c9e77  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007c9e7d  3bcd                 cmp ecx, ebp
// 007c9e7f  7405                 je 0x7c9e86
// 007c9e81  e80a08feff           call 0x7aa690
// 007c9e86  3bc5                 cmp eax, ebp
// 007c9e88  0f84a7000000         je 0x7c9f35
// 007c9e8e  39ae58010000         cmp dword ptr [esi + 0x158], ebp
// 007c9e94  0f859b000000         jne 0x7c9f35
// 007c9e9a  55                   push ebp
// 007c9e9b  6a26                 push 0x26
// 007c9e9d  8d4c244c             lea ecx, [esp + 0x4c]
// 007c9ea1  ff1578c69e00         call dword ptr [0x9ec678]
// 007c9ea7  8bf8                 mov edi, eax
// 007c9ea9  83ffff               cmp edi, -1
// 007c9eac  7e19                 jle 0x7c9ec7
// 007c9eae  8d4c2444             lea ecx, [esp + 0x44]
// 007c9eb2  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007c9eb8  48                   dec eax
// 007c9eb9  3bf8                 cmp edi, eax
// 007c9ebb  7d0a                 jge 0x7c9ec7
// 007c9ebd  bd01000000           mov ebp, 1
// 007c9ec2  8d4701               lea eax, [edi + 1]
// 007c9ec5  eb02                 jmp 0x7c9ec9
// 007c9ec7  33c0                 xor eax, eax
// 007c9ec9  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007c9ecd  51                   push ecx
// 007c9ece  50                   push eax
// 007c9ecf  8d4c244c             lea ecx, [esp + 0x4c]
// 007c9ed3  ff1558c59e00         call dword ptr [0x9ec558]
// 007c9ed9  0fb6d0               movzx edx, al
// 007c9edc  52                   push edx
// 007c9edd  e86e900700           call 0x842f50
// 007c9ee2  83c408               add esp, 8
// 007c9ee5  85c0                 test eax, eax
// 007c9ee7  744c                 je 0x7c9f35
// 007c9ee9  85ed                 test ebp, ebp
// 007c9eeb  7530                 jne 0x7c9f1d
// 007c9eed  8b442424             mov eax, dword ptr [esp + 0x24]
// 007c9ef1  8b4874               mov ecx, dword ptr [eax + 0x74]
// 007c9ef4  f6415c04             test byte ptr [ecx + 0x5c], 4
// 007c9ef8  753b                 jne 0x7c9f35
// 007c9efa  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007c9f00  39a8f8000000         cmp dword ptr [eax + 0xf8], ebp
// 007c9f06  7408                 je 0x7c9f10
// 007c9f08  39a8e0000000         cmp dword ptr [eax + 0xe0], ebp
// 007c9f0e  7425                 je 0x7c9f35
// 007c9f10  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 007c9f15  7514                 jne 0x7c9f2b
// 007c9f17  8974241c             mov dword ptr [esp + 0x1c], esi
// 007c9f1b  eb18                 jmp 0x7c9f35
// 007c9f1d  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 007c9f21  85ff                 test edi, edi
// 007c9f23  754b                 jne 0x7c9f70
// 007c9f25  89742418             mov dword ptr [esp + 0x18], esi
// 007c9f29  eb0a                 jmp 0x7c9f35
// 007c9f2b  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 007c9f2f  c70201000000         mov dword ptr [edx], 1
// 007c9f35  8bb680000000         mov esi, dword ptr [esi + 0x80]
// 007c9f3b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007c9f3f  56                   push esi
// 007c9f40  8d442424             lea eax, [esp + 0x24]
// 007c9f44  50                   push eax
// 007c9f45  e846fdffff           call 0x7c9c90
// 007c9f4a  8bf0                 mov esi, eax
// 007c9f4c  33ed                 xor ebp, ebp
// 007c9f4e  8d4c2444             lea ecx, [esp + 0x44]
// 007c9f52  3bf5                 cmp esi, ebp
// 007c9f54  7432                 je 0x7c9f88
// 007c9f56  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 007c9f5e  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007c9f64  3b742430             cmp esi, dword ptr [esp + 0x30]
// 007c9f68  0f8563feffff         jne 0x7c9dd1
// 007c9f6e  eb1e                 jmp 0x7c9f8e
// 007c9f70  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007c9f74  c70101000000         mov dword ptr [ecx], 1
// 007c9f7a  8d4c2444             lea ecx, [esp + 0x44]
// 007c9f7e  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007c9f84  8bc7                 mov eax, edi
// 007c9f86  eb12                 jmp 0x7c9f9a
// 007c9f88  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007c9f8e  8b442418             mov eax, dword ptr [esp + 0x18]
// 007c9f92  3bc5                 cmp eax, ebp
// 007c9f94  7504                 jne 0x7c9f9a
// 007c9f96  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007c9f9a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007c9f9e  64890d00000000       mov dword ptr fs:[0], ecx
// 007c9fa5  59                   pop ecx
// 007c9fa6  5f                   pop edi
// 007c9fa7  5e                   pop esi
// 007c9fa8  5d                   pop ebp
// 007c9fa9  5b                   pop ebx
// 007c9faa  83c42c               add esp, 0x2c
// 007c9fad  c20c00               ret 0xc
// copied from an identical function in another client (function ?FindAccel@CXTPCommandBars@@IBEPAVCXTPControl@@PAVCXTPCommandBar@@IAAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPCommandBars.cpp