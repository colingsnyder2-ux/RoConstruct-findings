// roc 2009-06 0071d7b0  unit: CPatchedControlComboBox  size: 738 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071d7b0
//
// 0071d7b0  6aff                 push -1
// 0071d7b2  681c478700           push 0x87471c
// 0071d7b7  64a100000000         mov eax, dword ptr fs:[0]
// 0071d7bd  50                   push eax
// 0071d7be  83ec1c               sub esp, 0x1c
// 0071d7c1  53                   push ebx
// 0071d7c2  55                   push ebp
// 0071d7c3  56                   push esi
// 0071d7c4  57                   push edi
// 0071d7c5  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0071d7ca  33c4                 xor eax, esp
// 0071d7cc  50                   push eax
// 0071d7cd  8d442430             lea eax, [esp + 0x30]
// 0071d7d1  64a300000000         mov dword ptr fs:[0], eax
// 0071d7d7  8be9                 mov ebp, ecx
// 0071d7d9  33f6                 xor esi, esi
// 0071d7db  89742418             mov dword ptr [esp + 0x18], esi
// 0071d7df  8b8584010000         mov eax, dword ptr [ebp + 0x184]
// 0071d7e5  3bc6                 cmp eax, esi
// 0071d7e7  756d                 jne 0x71d856
// 0071d7e9  8b859c000000         mov eax, dword ptr [ebp + 0x9c]
// 0071d7ef  83f8ff               cmp eax, -1
// 0071d7f2  750f                 jne 0x71d803
// 0071d7f4  8b8d5c010000         mov ecx, dword ptr [ebp + 0x15c]
// 0071d7fa  3bce                 cmp ecx, esi
// 0071d7fc  7405                 je 0x71d803
// 0071d7fe  e89d260000           call 0x71fea0
// 0071d803  3bc6                 cmp eax, esi
// 0071d805  744f                 je 0x71d856
// 0071d807  8b4500               mov eax, dword ptr [ebp]
// 0071d80a  8b5074               mov edx, dword ptr [eax + 0x74]
// 0071d80d  8bcd                 mov ecx, ebp
// 0071d80f  ffd2                 call edx
// 0071d811  85c0                 test eax, eax
// 0071d813  7441                 je 0x71d856
// 0071d815  8b442450             mov eax, dword ptr [esp + 0x50]
// 0071d819  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0071d81d  8b542448             mov edx, dword ptr [esp + 0x48]
// 0071d821  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 0071d825  48                   dec eax
// 0071d826  49                   dec ecx
// 0071d827  42                   inc edx
// 0071d828  4f                   dec edi
// 0071d829  897c2420             mov dword ptr [esp + 0x20], edi
// 0071d82d  89542424             mov dword ptr [esp + 0x24], edx
// 0071d831  894c2428             mov dword ptr [esp + 0x28], ecx
// 0071d835  8944242c             mov dword ptr [esp + 0x2c], eax
// 0071d839  e8e2720300           call 0x754b20
// 0071d83e  6a0d                 push 0xd
// 0071d840  8bc8                 mov ecx, eax
// 0071d842  e8596a0300           call 0x7542a0
// 0071d847  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0071d84b  50                   push eax
// 0071d84c  8d442424             lea eax, [esp + 0x24]
// 0071d850  50                   push eax
// 0071d851  e87abfffff           call 0x7197d0
// 0071d856  8b85bc010000         mov eax, dword ptr [ebp + 0x1bc]
// 0071d85c  3bc6                 cmp eax, esi
// 0071d85e  0f8ea4000000         jle 0x71d908
// 0071d864  8b8d00010000         mov ecx, dword ptr [ebp + 0x100]
// 0071d86a  56                   push esi
// 0071d86b  50                   push eax
// 0071d86c  e85ffc0000           call 0x72d4d0
// 0071d871  8bc8                 mov ecx, eax
// 0071d873  e818b20100           call 0x738a90
// 0071d878  8bf8                 mov edi, eax
// 0071d87a  3bfe                 cmp edi, esi
// 0071d87c  0f8486000000         je 0x71d908
// 0071d882  8b859c000000         mov eax, dword ptr [ebp + 0x9c]
// 0071d888  83f8ff               cmp eax, -1
// 0071d88b  750f                 jne 0x71d89c
// 0071d88d  8b8d5c010000         mov ecx, dword ptr [ebp + 0x15c]
// 0071d893  3bce                 cmp ecx, esi
// 0071d895  7405                 je 0x71d89c
// 0071d897  e804260000           call 0x71fea0
// 0071d89c  8bcf                 mov ecx, edi
// 0071d89e  3bc6                 cmp eax, esi
// 0071d8a0  7407                 je 0x71d8a9
// 0071d8a2  e819470100           call 0x731fc0
// 0071d8a7  eb07                 jmp 0x71d8b0
// 0071d8a9  6a01                 push 1
// 0071d8ab  e800b80100           call 0x7390b0
// 0071d8b0  8bd8                 mov ebx, eax
// 0071d8b2  83ec08               sub esp, 8
// 0071d8b5  8bc4                 mov eax, esp
// 0071d8b7  8930                 mov dword ptr [eax], esi
// 0071d8b9  897004               mov dword ptr [eax + 4], esi
// 0071d8bc  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0071d8c0  8b542450             mov edx, dword ptr [esp + 0x50]
// 0071d8c4  8d040a               lea eax, [edx + ecx]
// 0071d8c7  99                   cdq 
// 0071d8c8  2bc2                 sub eax, edx
// 0071d8ca  8bf0                 mov esi, eax
// 0071d8cc  8bcf                 mov ecx, edi
// 0071d8ce  89642424             mov dword ptr [esp + 0x24], esp
// 0071d8d2  d1fe                 sar esi, 1
// 0071d8d4  e8d7f50200           call 0x74ceb0
// 0071d8d9  99                   cdq 
// 0071d8da  2bc2                 sub eax, edx
// 0071d8dc  d1f8                 sar eax, 1
// 0071d8de  2bf0                 sub esi, eax
// 0071d8e0  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0071d8e4  53                   push ebx
// 0071d8e5  56                   push esi
// 0071d8e6  50                   push eax
// 0071d8e7  8b442454             mov eax, dword ptr [esp + 0x54]
// 0071d8eb  50                   push eax
// 0071d8ec  8bcf                 mov ecx, edi
// 0071d8ee  e8cdc40100           call 0x739dc0
// 0071d8f3  8bcf                 mov ecx, edi
// 0071d8f5  e826a90a00           call 0x7c8220
// 0071d8fa  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0071d8fe  8d540102             lea edx, [ecx + eax + 2]
// 0071d902  89542444             mov dword ptr [esp + 0x44], edx
// 0071d906  33f6                 xor esi, esi
// 0071d908  39b584010000         cmp dword ptr [ebp + 0x184], esi
// 0071d90e  0f8568010000         jne 0x71da7c
// 0071d914  8b4500               mov eax, dword ptr [ebp]
// 0071d917  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 0071d91d  8d4c2414             lea ecx, [esp + 0x14]
// 0071d921  51                   push ecx
// 0071d922  8bcd                 mov ecx, ebp
// 0071d924  ffd2                 call edx
// 0071d926  8d4c2414             lea ecx, [esp + 0x14]
// 0071d92a  89742438             mov dword ptr [esp + 0x38], esi
// 0071d92e  ff155cfb8900         call dword ptr [0x89fb5c]
// 0071d934  84c0                 test al, al
// 0071d936  0f8584000000         jne 0x71d9c0
// 0071d93c  8b859c000000         mov eax, dword ptr [ebp + 0x9c]
// 0071d942  83f8ff               cmp eax, -1
// 0071d945  750f                 jne 0x71d956
// 0071d947  8b8d5c010000         mov ecx, dword ptr [ebp + 0x15c]
// 0071d94d  3bce                 cmp ecx, esi
// 0071d94f  7405                 je 0x71d956
// 0071d951  e84a250000           call 0x71fea0
// 0071d956  3bc6                 cmp eax, esi
// 0071d958  7507                 jne 0x71d961
// 0071d95a  be11000000           mov esi, 0x11
// 0071d95f  eb16                 jmp 0x71d977
// 0071d961  8b4500               mov eax, dword ptr [ebp]
// 0071d964  8b5074               mov edx, dword ptr [eax + 0x74]
// 0071d967  8bcd                 mov ecx, ebp
// 0071d969  ffd2                 call edx
// 0071d96b  8bf0                 mov esi, eax
// 0071d96d  f7de                 neg esi
// 0071d96f  1bf6                 sbb esi, esi
// 0071d971  83e606               and esi, 6
// 0071d974  83c608               add esi, 8
// 0071d977  e8a4710300           call 0x754b20
// 0071d97c  56                   push esi
// 0071d97d  8bc8                 mov ecx, eax
// 0071d97f  e81c690300           call 0x7542a0
// 0071d984  8b742440             mov esi, dword ptr [esp + 0x40]
// 0071d988  8b16                 mov edx, dword ptr [esi]
// 0071d98a  50                   push eax
// 0071d98b  8b4238               mov eax, dword ptr [edx + 0x38]
// 0071d98e  8bce                 mov ecx, esi
// 0071d990  ffd0                 call eax
// 0071d992  8b3e                 mov edi, dword ptr [esi]
// 0071d994  6824080000           push 0x824
// 0071d999  8d4c2448             lea ecx, [esp + 0x48]
// 0071d99d  51                   push ecx
// 0071d99e  8d4c241c             lea ecx, [esp + 0x1c]
// 0071d9a2  ff1554fb8900         call dword ptr [0x89fb54]
// 0071d9a8  50                   push eax
// 0071d9a9  8d4c2420             lea ecx, [esp + 0x20]
// 0071d9ad  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0071d9b3  8b5770               mov edx, dword ptr [edi + 0x70]
// 0071d9b6  50                   push eax
// 0071d9b7  8bce                 mov ecx, esi
// 0071d9b9  ffd2                 call edx
// 0071d9bb  e9b2000000           jmp 0x71da72
// 0071d9c0  8d44241c             lea eax, [esp + 0x1c]
// 0071d9c4  50                   push eax
// 0071d9c5  8bcd                 mov ecx, ebp
// 0071d9c7  e8c4d7ffff           call 0x71b190
// 0071d9cc  8bc8                 mov ecx, eax
// 0071d9ce  c644243801           mov byte ptr [esp + 0x38], 1
// 0071d9d3  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0071d9db  ff155cfb8900         call dword ptr [0x89fb5c]
// 0071d9e1  84c0                 test al, al
// 0071d9e3  7530                 jne 0x71da15
// 0071d9e5  8b859c000000         mov eax, dword ptr [ebp + 0x9c]
// 0071d9eb  83f8ff               cmp eax, -1
// 0071d9ee  750f                 jne 0x71d9ff
// 0071d9f0  8b8d5c010000         mov ecx, dword ptr [ebp + 0x15c]
// 0071d9f6  3bce                 cmp ecx, esi
// 0071d9f8  7405                 je 0x71d9ff
// 0071d9fa  e8a1240000           call 0x71fea0
// 0071d9ff  3bc6                 cmp eax, esi
// 0071da01  7412                 je 0x71da15
// 0071da03  8b5500               mov edx, dword ptr [ebp]
// 0071da06  8b4274               mov eax, dword ptr [edx + 0x74]
// 0071da09  8bcd                 mov ecx, ebp
// 0071da0b  ffd0                 call eax
// 0071da0d  85c0                 test eax, eax
// 0071da0f  7504                 jne 0x71da15
// 0071da11  b301                 mov bl, 1
// 0071da13  eb02                 jmp 0x71da17
// 0071da15  32db                 xor bl, bl
// 0071da17  8d4c241c             lea ecx, [esp + 0x1c]
// 0071da1b  89742438             mov dword ptr [esp + 0x38], esi
// 0071da1f  ff1510fd8900         call dword ptr [0x89fd10]
// 0071da25  84db                 test bl, bl
// 0071da27  7449                 je 0x71da72
// 0071da29  e8f2700300           call 0x754b20
// 0071da2e  6a11                 push 0x11
// 0071da30  8bc8                 mov ecx, eax
// 0071da32  e869680300           call 0x7542a0
// 0071da37  8b742440             mov esi, dword ptr [esp + 0x40]
// 0071da3b  8b16                 mov edx, dword ptr [esi]
// 0071da3d  50                   push eax
// 0071da3e  8b4238               mov eax, dword ptr [edx + 0x38]
// 0071da41  8bce                 mov ecx, esi
// 0071da43  ffd0                 call eax
// 0071da45  8d4c2440             lea ecx, [esp + 0x40]
// 0071da49  51                   push ecx
// 0071da4a  8bcd                 mov ecx, ebp
// 0071da4c  e83fd7ffff           call 0x71b190
// 0071da51  6824080000           push 0x824
// 0071da56  8d542448             lea edx, [esp + 0x48]
// 0071da5a  52                   push edx
// 0071da5b  50                   push eax
// 0071da5c  8bce                 mov ecx, esi
// 0071da5e  c644244402           mov byte ptr [esp + 0x44], 2
// 0071da63  e828dfffff           call 0x71b990
// 0071da68  8d4c2440             lea ecx, [esp + 0x40]
// 0071da6c  ff1510fd8900         call dword ptr [0x89fd10]
// 0071da72  8d4c2414             lea ecx, [esp + 0x14]
// 0071da76  ff1510fd8900         call dword ptr [0x89fd10]
// 0071da7c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0071da80  64890d00000000       mov dword ptr fs:[0], ecx
// 0071da87  59                   pop ecx
// 0071da88  5f                   pop edi
// 0071da89  5e                   pop esi
// 0071da8a  5d                   pop ebp
// 0071da8b  5b                   pop ebx
// 0071da8c  83c428               add esp, 0x28
// 0071da8f  c21400               ret 0x14
// copied from an identical function in another client (function ?DrawEditText@CXTPControlComboBox@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControlComboBox.cpp