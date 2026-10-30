// roc 2012-06 009a3de0  unit: CXTPCommandBar  size: 592 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a3de0
//
// 009a3de0  6aff                 push -1
// 009a3de2  684dd9ad00           push 0xadd94d
// 009a3de7  64a100000000         mov eax, dword ptr fs:[0]
// 009a3ded  50                   push eax
// 009a3dee  83ec20               sub esp, 0x20
// 009a3df1  53                   push ebx
// 009a3df2  55                   push ebp
// 009a3df3  56                   push esi
// 009a3df4  57                   push edi
// 009a3df5  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009a3dfa  33c4                 xor eax, esp
// 009a3dfc  50                   push eax
// 009a3dfd  8d442434             lea eax, [esp + 0x34]
// 009a3e01  64a300000000         mov dword ptr fs:[0], eax
// 009a3e07  894c2424             mov dword ptr [esp + 0x24], ecx
// 009a3e0b  33db                 xor ebx, ebx
// 009a3e0d  895c2414             mov dword ptr [esp + 0x14], ebx
// 009a3e11  8b442444             mov eax, dword ptr [esp + 0x44]
// 009a3e15  8b90fc000000         mov edx, dword ptr [eax + 0xfc]
// 009a3e1b  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 009a3e21  89542420             mov dword ptr [esp + 0x20], edx
// 009a3e25  50                   push eax
// 009a3e26  8d542424             lea edx, [esp + 0x24]
// 009a3e2a  52                   push edx
// 009a3e2b  33ed                 xor ebp, ebp
// 009a3e2d  e8defeffff           call 0x9a3d10
// 009a3e32  8bf0                 mov esi, eax
// 009a3e34  3bf5                 cmp esi, ebp
// 009a3e36  7507                 jne 0x9a3e3f
// 009a3e38  33c0                 xor eax, eax
// 009a3e3a  e9db010000           jmp 0x9a401a
// 009a3e3f  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 009a3e43  8928                 mov dword ptr [eax], ebp
// 009a3e45  89742430             mov dword ptr [esp + 0x30], esi
// 009a3e49  896c2418             mov dword ptr [esp + 0x18], ebp
// 009a3e4d  896c241c             mov dword ptr [esp + 0x1c], ebp
// 009a3e51  8b16                 mov edx, dword ptr [esi]
// 009a3e53  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 009a3e59  8bce                 mov ecx, esi
// 009a3e5b  ffd0                 call eax
// 009a3e5d  85c0                 test eax, eax
// 009a3e5f  7417                 je 0x9a3e78
// 009a3e61  8b16                 mov edx, dword ptr [esi]
// 009a3e63  8b5258               mov edx, dword ptr [edx + 0x58]
// 009a3e66  8d44242c             lea eax, [esp + 0x2c]
// 009a3e6a  50                   push eax
// 009a3e6b  8bce                 mov ecx, esi
// 009a3e6d  ffd2                 call edx
// 009a3e6f  896c243c             mov dword ptr [esp + 0x3c], ebp
// 009a3e73  83cb01               or ebx, 1
// 009a3e76  eb1a                 jmp 0x9a3e92
// 009a3e78  68e83bb400           push 0xb43be8
// 009a3e7d  8d4c242c             lea ecx, [esp + 0x2c]
// 009a3e81  ff15c847b200         call dword ptr [0xb247c8]
// 009a3e87  c744243c01000000     mov dword ptr [esp + 0x3c], 1
// 009a3e8f  83cb02               or ebx, 2
// 009a3e92  50                   push eax
// 009a3e93  8d4c2448             lea ecx, [esp + 0x48]
// 009a3e97  895c2418             mov dword ptr [esp + 0x18], ebx
// 009a3e9b  ff158047b200         call dword ptr [0xb24780]
// 009a3ea1  c744243c02000000     mov dword ptr [esp + 0x3c], 2
// 009a3ea9  f6c302               test bl, 2
// 009a3eac  7411                 je 0x9a3ebf
// 009a3eae  83e3fd               and ebx, 0xfffffffd
// 009a3eb1  8d4c2428             lea ecx, [esp + 0x28]
// 009a3eb5  895c2414             mov dword ptr [esp + 0x14], ebx
// 009a3eb9  ff15d047b200         call dword ptr [0xb247d0]
// 009a3ebf  c644243c04           mov byte ptr [esp + 0x3c], 4
// 009a3ec4  f6c301               test bl, 1
// 009a3ec7  7411                 je 0x9a3eda
// 009a3ec9  83e3fe               and ebx, 0xfffffffe
// 009a3ecc  8d4c242c             lea ecx, [esp + 0x2c]
// 009a3ed0  895c2414             mov dword ptr [esp + 0x14], ebx
// 009a3ed4  ff15d047b200         call dword ptr [0xb247d0]
// 009a3eda  8d4c2444             lea ecx, [esp + 0x44]
// 009a3ede  ff156046b200         call dword ptr [0xb24660]
// 009a3ee4  84c0                 test al, al
// 009a3ee6  0f85c9000000         jne 0x9a3fb5
// 009a3eec  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 009a3ef2  83f8ff               cmp eax, -1
// 009a3ef5  750f                 jne 0x9a3f06
// 009a3ef7  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 009a3efd  3bcd                 cmp ecx, ebp
// 009a3eff  7405                 je 0x9a3f06
// 009a3f01  e81a10feff           call 0x984f20
// 009a3f06  3bc5                 cmp eax, ebp
// 009a3f08  0f84a7000000         je 0x9a3fb5
// 009a3f0e  39ae58010000         cmp dword ptr [esi + 0x158], ebp
// 009a3f14  0f859b000000         jne 0x9a3fb5
// 009a3f1a  55                   push ebp
// 009a3f1b  6a26                 push 0x26
// 009a3f1d  8d4c244c             lea ecx, [esp + 0x4c]
// 009a3f21  ff15f447b200         call dword ptr [0xb247f4]
// 009a3f27  8bf8                 mov edi, eax
// 009a3f29  83ffff               cmp edi, -1
// 009a3f2c  7e19                 jle 0x9a3f47
// 009a3f2e  8d4c2444             lea ecx, [esp + 0x44]
// 009a3f32  ff155846b200         call dword ptr [0xb24658]
// 009a3f38  48                   dec eax
// 009a3f39  3bf8                 cmp edi, eax
// 009a3f3b  7d0a                 jge 0x9a3f47
// 009a3f3d  bd01000000           mov ebp, 1
// 009a3f42  8d4701               lea eax, [edi + 1]
// 009a3f45  eb02                 jmp 0x9a3f49
// 009a3f47  33c0                 xor eax, eax
// 009a3f49  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 009a3f4d  51                   push ecx
// 009a3f4e  50                   push eax
// 009a3f4f  8d4c244c             lea ecx, [esp + 0x4c]
// 009a3f53  ff15e844b200         call dword ptr [0xb244e8]
// 009a3f59  0fb6d0               movzx edx, al
// 009a3f5c  52                   push edx
// 009a3f5d  e8ee450700           call 0xa18550
// 009a3f62  83c408               add esp, 8
// 009a3f65  85c0                 test eax, eax
// 009a3f67  744c                 je 0x9a3fb5
// 009a3f69  85ed                 test ebp, ebp
// 009a3f6b  7530                 jne 0x9a3f9d
// 009a3f6d  8b442424             mov eax, dword ptr [esp + 0x24]
// 009a3f71  8b4874               mov ecx, dword ptr [eax + 0x74]
// 009a3f74  f6415c04             test byte ptr [ecx + 0x5c], 4
// 009a3f78  753b                 jne 0x9a3fb5
// 009a3f7a  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 009a3f80  39a8f8000000         cmp dword ptr [eax + 0xf8], ebp
// 009a3f86  7408                 je 0x9a3f90
// 009a3f88  39a8e0000000         cmp dword ptr [eax + 0xe0], ebp
// 009a3f8e  7425                 je 0x9a3fb5
// 009a3f90  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 009a3f95  7514                 jne 0x9a3fab
// 009a3f97  8974241c             mov dword ptr [esp + 0x1c], esi
// 009a3f9b  eb18                 jmp 0x9a3fb5
// 009a3f9d  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 009a3fa1  85ff                 test edi, edi
// 009a3fa3  754b                 jne 0x9a3ff0
// 009a3fa5  89742418             mov dword ptr [esp + 0x18], esi
// 009a3fa9  eb0a                 jmp 0x9a3fb5
// 009a3fab  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 009a3faf  c70201000000         mov dword ptr [edx], 1
// 009a3fb5  8bb680000000         mov esi, dword ptr [esi + 0x80]
// 009a3fbb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 009a3fbf  56                   push esi
// 009a3fc0  8d442424             lea eax, [esp + 0x24]
// 009a3fc4  50                   push eax
// 009a3fc5  e846fdffff           call 0x9a3d10
// 009a3fca  8bf0                 mov esi, eax
// 009a3fcc  33ed                 xor ebp, ebp
// 009a3fce  8d4c2444             lea ecx, [esp + 0x44]
// 009a3fd2  3bf5                 cmp esi, ebp
// 009a3fd4  7432                 je 0x9a4008
// 009a3fd6  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 009a3fde  ff15d047b200         call dword ptr [0xb247d0]
// 009a3fe4  3b742430             cmp esi, dword ptr [esp + 0x30]
// 009a3fe8  0f8563feffff         jne 0x9a3e51
// 009a3fee  eb1e                 jmp 0x9a400e
// 009a3ff0  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 009a3ff4  c70101000000         mov dword ptr [ecx], 1
// 009a3ffa  8d4c2444             lea ecx, [esp + 0x44]
// 009a3ffe  ff15d047b200         call dword ptr [0xb247d0]
// 009a4004  8bc7                 mov eax, edi
// 009a4006  eb12                 jmp 0x9a401a
// 009a4008  ff15d047b200         call dword ptr [0xb247d0]
// 009a400e  8b442418             mov eax, dword ptr [esp + 0x18]
// 009a4012  3bc5                 cmp eax, ebp
// 009a4014  7504                 jne 0x9a401a
// 009a4016  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009a401a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 009a401e  64890d00000000       mov dword ptr fs:[0], ecx
// 009a4025  59                   pop ecx
// 009a4026  5f                   pop edi
// 009a4027  5e                   pop esi
// 009a4028  5d                   pop ebp
// 009a4029  5b                   pop ebx
// 009a402a  83c42c               add esp, 0x2c
// 009a402d  c20c00               ret 0xc
// copied from an identical function in another client (function ?FindAccel@CXTPCommandBars@@IBEPAVCXTPControl@@PAVCXTPCommandBar@@IAAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPCommandBars.cpp