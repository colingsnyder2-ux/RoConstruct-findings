// roc 2009-12 00815c90  unit: CXTPCommandBar  size: 592 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00815c90
//
// 00815c90  6aff                 push -1
// 00815c92  68cda59500           push 0x95a5cd
// 00815c97  64a100000000         mov eax, dword ptr fs:[0]
// 00815c9d  50                   push eax
// 00815c9e  83ec20               sub esp, 0x20
// 00815ca1  53                   push ebx
// 00815ca2  55                   push ebp
// 00815ca3  56                   push esi
// 00815ca4  57                   push edi
// 00815ca5  a10052b600           mov eax, dword ptr [0xb65200]
// 00815caa  33c4                 xor eax, esp
// 00815cac  50                   push eax
// 00815cad  8d442434             lea eax, [esp + 0x34]
// 00815cb1  64a300000000         mov dword ptr fs:[0], eax
// 00815cb7  894c2424             mov dword ptr [esp + 0x24], ecx
// 00815cbb  33db                 xor ebx, ebx
// 00815cbd  895c2414             mov dword ptr [esp + 0x14], ebx
// 00815cc1  8b442444             mov eax, dword ptr [esp + 0x44]
// 00815cc5  8b90fc000000         mov edx, dword ptr [eax + 0xfc]
// 00815ccb  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 00815cd1  89542420             mov dword ptr [esp + 0x20], edx
// 00815cd5  50                   push eax
// 00815cd6  8d542424             lea edx, [esp + 0x24]
// 00815cda  52                   push edx
// 00815cdb  33ed                 xor ebp, ebp
// 00815cdd  e8defeffff           call 0x815bc0
// 00815ce2  8bf0                 mov esi, eax
// 00815ce4  3bf5                 cmp esi, ebp
// 00815ce6  7507                 jne 0x815cef
// 00815ce8  33c0                 xor eax, eax
// 00815cea  e9db010000           jmp 0x815eca
// 00815cef  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00815cf3  8928                 mov dword ptr [eax], ebp
// 00815cf5  89742430             mov dword ptr [esp + 0x30], esi
// 00815cf9  896c2418             mov dword ptr [esp + 0x18], ebp
// 00815cfd  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00815d01  8b16                 mov edx, dword ptr [esi]
// 00815d03  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 00815d09  8bce                 mov ecx, esi
// 00815d0b  ffd0                 call eax
// 00815d0d  85c0                 test eax, eax
// 00815d0f  7417                 je 0x815d28
// 00815d11  8b16                 mov edx, dword ptr [esi]
// 00815d13  8b5258               mov edx, dword ptr [edx + 0x58]
// 00815d16  8d44242c             lea eax, [esp + 0x2c]
// 00815d1a  50                   push eax
// 00815d1b  8bce                 mov ecx, esi
// 00815d1d  ffd2                 call edx
// 00815d1f  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00815d23  83cb01               or ebx, 1
// 00815d26  eb1a                 jmp 0x815d42
// 00815d28  6856fd9900           push 0x99fd56
// 00815d2d  8d4c242c             lea ecx, [esp + 0x2c]
// 00815d31  ff15b8de9800         call dword ptr [0x98deb8]
// 00815d37  c744243c01000000     mov dword ptr [esp + 0x3c], 1
// 00815d3f  83cb02               or ebx, 2
// 00815d42  50                   push eax
// 00815d43  8d4c2448             lea ecx, [esp + 0x48]
// 00815d47  895c2418             mov dword ptr [esp + 0x18], ebx
// 00815d4b  ff1594de9800         call dword ptr [0x98de94]
// 00815d51  c744243c02000000     mov dword ptr [esp + 0x3c], 2
// 00815d59  f6c302               test bl, 2
// 00815d5c  7411                 je 0x815d6f
// 00815d5e  83e3fd               and ebx, 0xfffffffd
// 00815d61  8d4c2428             lea ecx, [esp + 0x28]
// 00815d65  895c2414             mov dword ptr [esp + 0x14], ebx
// 00815d69  ff15c0de9800         call dword ptr [0x98dec0]
// 00815d6f  c644243c04           mov byte ptr [esp + 0x3c], 4
// 00815d74  f6c301               test bl, 1
// 00815d77  7411                 je 0x815d8a
// 00815d79  83e3fe               and ebx, 0xfffffffe
// 00815d7c  8d4c242c             lea ecx, [esp + 0x2c]
// 00815d80  895c2414             mov dword ptr [esp + 0x14], ebx
// 00815d84  ff15c0de9800         call dword ptr [0x98dec0]
// 00815d8a  8d4c2444             lea ecx, [esp + 0x44]
// 00815d8e  ff15bcdd9800         call dword ptr [0x98ddbc]
// 00815d94  84c0                 test al, al
// 00815d96  0f85c9000000         jne 0x815e65
// 00815d9c  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00815da2  83f8ff               cmp eax, -1
// 00815da5  750f                 jne 0x815db6
// 00815da7  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00815dad  3bcd                 cmp ecx, ebp
// 00815daf  7405                 je 0x815db6
// 00815db1  e8fa07feff           call 0x7f65b0
// 00815db6  3bc5                 cmp eax, ebp
// 00815db8  0f84a7000000         je 0x815e65
// 00815dbe  39ae58010000         cmp dword ptr [esi + 0x158], ebp
// 00815dc4  0f859b000000         jne 0x815e65
// 00815dca  55                   push ebp
// 00815dcb  6a26                 push 0x26
// 00815dcd  8d4c244c             lea ecx, [esp + 0x4c]
// 00815dd1  ff1580d69800         call dword ptr [0x98d680]
// 00815dd7  8bf8                 mov edi, eax
// 00815dd9  83ffff               cmp edi, -1
// 00815ddc  7e19                 jle 0x815df7
// 00815dde  8d4c2444             lea ecx, [esp + 0x44]
// 00815de2  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00815de8  48                   dec eax
// 00815de9  3bf8                 cmp edi, eax
// 00815deb  7d0a                 jge 0x815df7
// 00815ded  bd01000000           mov ebp, 1
// 00815df2  8d4701               lea eax, [edi + 1]
// 00815df5  eb02                 jmp 0x815df9
// 00815df7  33c0                 xor eax, eax
// 00815df9  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00815dfd  51                   push ecx
// 00815dfe  50                   push eax
// 00815dff  8d4c244c             lea ecx, [esp + 0x4c]
// 00815e03  ff1510d59800         call dword ptr [0x98d510]
// 00815e09  0fb6d0               movzx edx, al
// 00815e0c  52                   push edx
// 00815e0d  e84e8f0700           call 0x88ed60
// 00815e12  83c408               add esp, 8
// 00815e15  85c0                 test eax, eax
// 00815e17  744c                 je 0x815e65
// 00815e19  85ed                 test ebp, ebp
// 00815e1b  7530                 jne 0x815e4d
// 00815e1d  8b442424             mov eax, dword ptr [esp + 0x24]
// 00815e21  8b4874               mov ecx, dword ptr [eax + 0x74]
// 00815e24  f6415c04             test byte ptr [ecx + 0x5c], 4
// 00815e28  753b                 jne 0x815e65
// 00815e2a  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00815e30  39a8f8000000         cmp dword ptr [eax + 0xf8], ebp
// 00815e36  7408                 je 0x815e40
// 00815e38  39a8e0000000         cmp dword ptr [eax + 0xe0], ebp
// 00815e3e  7425                 je 0x815e65
// 00815e40  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00815e45  7514                 jne 0x815e5b
// 00815e47  8974241c             mov dword ptr [esp + 0x1c], esi
// 00815e4b  eb18                 jmp 0x815e65
// 00815e4d  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00815e51  85ff                 test edi, edi
// 00815e53  754b                 jne 0x815ea0
// 00815e55  89742418             mov dword ptr [esp + 0x18], esi
// 00815e59  eb0a                 jmp 0x815e65
// 00815e5b  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00815e5f  c70201000000         mov dword ptr [edx], 1
// 00815e65  8bb680000000         mov esi, dword ptr [esi + 0x80]
// 00815e6b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00815e6f  56                   push esi
// 00815e70  8d442424             lea eax, [esp + 0x24]
// 00815e74  50                   push eax
// 00815e75  e846fdffff           call 0x815bc0
// 00815e7a  8bf0                 mov esi, eax
// 00815e7c  33ed                 xor ebp, ebp
// 00815e7e  8d4c2444             lea ecx, [esp + 0x44]
// 00815e82  3bf5                 cmp esi, ebp
// 00815e84  7432                 je 0x815eb8
// 00815e86  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 00815e8e  ff15c0de9800         call dword ptr [0x98dec0]
// 00815e94  3b742430             cmp esi, dword ptr [esp + 0x30]
// 00815e98  0f8563feffff         jne 0x815d01
// 00815e9e  eb1e                 jmp 0x815ebe
// 00815ea0  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00815ea4  c70101000000         mov dword ptr [ecx], 1
// 00815eaa  8d4c2444             lea ecx, [esp + 0x44]
// 00815eae  ff15c0de9800         call dword ptr [0x98dec0]
// 00815eb4  8bc7                 mov eax, edi
// 00815eb6  eb12                 jmp 0x815eca
// 00815eb8  ff15c0de9800         call dword ptr [0x98dec0]
// 00815ebe  8b442418             mov eax, dword ptr [esp + 0x18]
// 00815ec2  3bc5                 cmp eax, ebp
// 00815ec4  7504                 jne 0x815eca
// 00815ec6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00815eca  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00815ece  64890d00000000       mov dword ptr fs:[0], ecx
// 00815ed5  59                   pop ecx
// 00815ed6  5f                   pop edi
// 00815ed7  5e                   pop esi
// 00815ed8  5d                   pop ebp
// 00815ed9  5b                   pop ebx
// 00815eda  83c42c               add esp, 0x2c
// 00815edd  c20c00               ret 0xc
// copied from an identical function in another client (function ?FindAccel@CXTPCommandBars@@IBEPAVCXTPControl@@PAVCXTPCommandBar@@IAAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPCommandBars.cpp