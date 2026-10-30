// roc 2011-06 0082b810  unit: CXTPCommandBar  size: 592 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082b810
//
// 0082b810  6aff                 push -1
// 0082b812  68fd3ba000           push 0xa03bfd
// 0082b817  64a100000000         mov eax, dword ptr fs:[0]
// 0082b81d  50                   push eax
// 0082b81e  83ec20               sub esp, 0x20
// 0082b821  53                   push ebx
// 0082b822  55                   push ebp
// 0082b823  56                   push esi
// 0082b824  57                   push edi
// 0082b825  a12058c900           mov eax, dword ptr [0xc95820]
// 0082b82a  33c4                 xor eax, esp
// 0082b82c  50                   push eax
// 0082b82d  8d442434             lea eax, [esp + 0x34]
// 0082b831  64a300000000         mov dword ptr fs:[0], eax
// 0082b837  894c2424             mov dword ptr [esp + 0x24], ecx
// 0082b83b  33db                 xor ebx, ebx
// 0082b83d  895c2414             mov dword ptr [esp + 0x14], ebx
// 0082b841  8b442444             mov eax, dword ptr [esp + 0x44]
// 0082b845  8b90fc000000         mov edx, dword ptr [eax + 0xfc]
// 0082b84b  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 0082b851  89542420             mov dword ptr [esp + 0x20], edx
// 0082b855  50                   push eax
// 0082b856  8d542424             lea edx, [esp + 0x24]
// 0082b85a  52                   push edx
// 0082b85b  33ed                 xor ebp, ebp
// 0082b85d  e8defeffff           call 0x82b740
// 0082b862  8bf0                 mov esi, eax
// 0082b864  3bf5                 cmp esi, ebp
// 0082b866  7507                 jne 0x82b86f
// 0082b868  33c0                 xor eax, eax
// 0082b86a  e9db010000           jmp 0x82ba4a
// 0082b86f  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0082b873  8928                 mov dword ptr [eax], ebp
// 0082b875  89742430             mov dword ptr [esp + 0x30], esi
// 0082b879  896c2418             mov dword ptr [esp + 0x18], ebp
// 0082b87d  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0082b881  8b16                 mov edx, dword ptr [esi]
// 0082b883  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 0082b889  8bce                 mov ecx, esi
// 0082b88b  ffd0                 call eax
// 0082b88d  85c0                 test eax, eax
// 0082b88f  7417                 je 0x82b8a8
// 0082b891  8b16                 mov edx, dword ptr [esi]
// 0082b893  8b5258               mov edx, dword ptr [edx + 0x58]
// 0082b896  8d44242c             lea eax, [esp + 0x2c]
// 0082b89a  50                   push eax
// 0082b89b  8bce                 mov ecx, esi
// 0082b89d  ffd2                 call edx
// 0082b89f  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0082b8a3  83cb01               or ebx, 1
// 0082b8a6  eb1a                 jmp 0x82b8c2
// 0082b8a8  68cabea500           push 0xa5beca
// 0082b8ad  8d4c242c             lea ecx, [esp + 0x2c]
// 0082b8b1  ff15002ea400         call dword ptr [0xa42e00]
// 0082b8b7  c744243c01000000     mov dword ptr [esp + 0x3c], 1
// 0082b8bf  83cb02               or ebx, 2
// 0082b8c2  50                   push eax
// 0082b8c3  8d4c2448             lea ecx, [esp + 0x48]
// 0082b8c7  895c2418             mov dword ptr [esp + 0x18], ebx
// 0082b8cb  ff15e42da400         call dword ptr [0xa42de4]
// 0082b8d1  c744243c02000000     mov dword ptr [esp + 0x3c], 2
// 0082b8d9  f6c302               test bl, 2
// 0082b8dc  7411                 je 0x82b8ef
// 0082b8de  83e3fd               and ebx, 0xfffffffd
// 0082b8e1  8d4c2428             lea ecx, [esp + 0x28]
// 0082b8e5  895c2414             mov dword ptr [esp + 0x14], ebx
// 0082b8e9  ff15082ea400         call dword ptr [0xa42e08]
// 0082b8ef  c644243c04           mov byte ptr [esp + 0x3c], 4
// 0082b8f4  f6c301               test bl, 1
// 0082b8f7  7411                 je 0x82b90a
// 0082b8f9  83e3fe               and ebx, 0xfffffffe
// 0082b8fc  8d4c242c             lea ecx, [esp + 0x2c]
// 0082b900  895c2414             mov dword ptr [esp + 0x14], ebx
// 0082b904  ff15082ea400         call dword ptr [0xa42e08]
// 0082b90a  8d4c2444             lea ecx, [esp + 0x44]
// 0082b90e  ff15b026a400         call dword ptr [0xa426b0]
// 0082b914  84c0                 test al, al
// 0082b916  0f85c9000000         jne 0x82b9e5
// 0082b91c  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0082b922  83f8ff               cmp eax, -1
// 0082b925  750f                 jne 0x82b936
// 0082b927  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0082b92d  3bcd                 cmp ecx, ebp
// 0082b92f  7405                 je 0x82b936
// 0082b931  e82a13feff           call 0x80cc60
// 0082b936  3bc5                 cmp eax, ebp
// 0082b938  0f84a7000000         je 0x82b9e5
// 0082b93e  39ae58010000         cmp dword ptr [esi + 0x158], ebp
// 0082b944  0f859b000000         jne 0x82b9e5
// 0082b94a  55                   push ebp
// 0082b94b  6a26                 push 0x26
// 0082b94d  8d4c244c             lea ecx, [esp + 0x4c]
// 0082b951  ff154c27a400         call dword ptr [0xa4274c]
// 0082b957  8bf8                 mov edi, eax
// 0082b959  83ffff               cmp edi, -1
// 0082b95c  7e19                 jle 0x82b977
// 0082b95e  8d4c2444             lea ecx, [esp + 0x44]
// 0082b962  ff15a826a400         call dword ptr [0xa426a8]
// 0082b968  48                   dec eax
// 0082b969  3bf8                 cmp edi, eax
// 0082b96b  7d0a                 jge 0x82b977
// 0082b96d  bd01000000           mov ebp, 1
// 0082b972  8d4701               lea eax, [edi + 1]
// 0082b975  eb02                 jmp 0x82b979
// 0082b977  33c0                 xor eax, eax
// 0082b979  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0082b97d  51                   push ecx
// 0082b97e  50                   push eax
// 0082b97f  8d4c244c             lea ecx, [esp + 0x4c]
// 0082b983  ff153c25a400         call dword ptr [0xa4253c]
// 0082b989  0fb6d0               movzx edx, al
// 0082b98c  52                   push edx
// 0082b98d  e87e470700           call 0x8a0110
// 0082b992  83c408               add esp, 8
// 0082b995  85c0                 test eax, eax
// 0082b997  744c                 je 0x82b9e5
// 0082b999  85ed                 test ebp, ebp
// 0082b99b  7530                 jne 0x82b9cd
// 0082b99d  8b442424             mov eax, dword ptr [esp + 0x24]
// 0082b9a1  8b4874               mov ecx, dword ptr [eax + 0x74]
// 0082b9a4  f6415c04             test byte ptr [ecx + 0x5c], 4
// 0082b9a8  753b                 jne 0x82b9e5
// 0082b9aa  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0082b9b0  39a8f8000000         cmp dword ptr [eax + 0xf8], ebp
// 0082b9b6  7408                 je 0x82b9c0
// 0082b9b8  39a8e0000000         cmp dword ptr [eax + 0xe0], ebp
// 0082b9be  7425                 je 0x82b9e5
// 0082b9c0  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0082b9c5  7514                 jne 0x82b9db
// 0082b9c7  8974241c             mov dword ptr [esp + 0x1c], esi
// 0082b9cb  eb18                 jmp 0x82b9e5
// 0082b9cd  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0082b9d1  85ff                 test edi, edi
// 0082b9d3  754b                 jne 0x82ba20
// 0082b9d5  89742418             mov dword ptr [esp + 0x18], esi
// 0082b9d9  eb0a                 jmp 0x82b9e5
// 0082b9db  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0082b9df  c70201000000         mov dword ptr [edx], 1
// 0082b9e5  8bb680000000         mov esi, dword ptr [esi + 0x80]
// 0082b9eb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0082b9ef  56                   push esi
// 0082b9f0  8d442424             lea eax, [esp + 0x24]
// 0082b9f4  50                   push eax
// 0082b9f5  e846fdffff           call 0x82b740
// 0082b9fa  8bf0                 mov esi, eax
// 0082b9fc  33ed                 xor ebp, ebp
// 0082b9fe  8d4c2444             lea ecx, [esp + 0x44]
// 0082ba02  3bf5                 cmp esi, ebp
// 0082ba04  7432                 je 0x82ba38
// 0082ba06  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 0082ba0e  ff15082ea400         call dword ptr [0xa42e08]
// 0082ba14  3b742430             cmp esi, dword ptr [esp + 0x30]
// 0082ba18  0f8563feffff         jne 0x82b881
// 0082ba1e  eb1e                 jmp 0x82ba3e
// 0082ba20  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0082ba24  c70101000000         mov dword ptr [ecx], 1
// 0082ba2a  8d4c2444             lea ecx, [esp + 0x44]
// 0082ba2e  ff15082ea400         call dword ptr [0xa42e08]
// 0082ba34  8bc7                 mov eax, edi
// 0082ba36  eb12                 jmp 0x82ba4a
// 0082ba38  ff15082ea400         call dword ptr [0xa42e08]
// 0082ba3e  8b442418             mov eax, dword ptr [esp + 0x18]
// 0082ba42  3bc5                 cmp eax, ebp
// 0082ba44  7504                 jne 0x82ba4a
// 0082ba46  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0082ba4a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0082ba4e  64890d00000000       mov dword ptr fs:[0], ecx
// 0082ba55  59                   pop ecx
// 0082ba56  5f                   pop edi
// 0082ba57  5e                   pop esi
// 0082ba58  5d                   pop ebp
// 0082ba59  5b                   pop ebx
// 0082ba5a  83c42c               add esp, 0x2c
// 0082ba5d  c20c00               ret 0xc
// copied from an identical function in another client (function ?FindAccel@CXTPCommandBars@@IBEPAVCXTPControl@@PAVCXTPCommandBar@@IAAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPCommandBars.cpp