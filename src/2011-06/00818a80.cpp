// roc 2011-06 00818a80  unit: CPatchedControlComboBox  size: 738 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00818a80
//
// 00818a80  6aff                 push -1
// 00818a82  68fc2aa000           push 0xa02afc
// 00818a87  64a100000000         mov eax, dword ptr fs:[0]
// 00818a8d  50                   push eax
// 00818a8e  83ec1c               sub esp, 0x1c
// 00818a91  53                   push ebx
// 00818a92  55                   push ebp
// 00818a93  56                   push esi
// 00818a94  57                   push edi
// 00818a95  a12058c900           mov eax, dword ptr [0xc95820]
// 00818a9a  33c4                 xor eax, esp
// 00818a9c  50                   push eax
// 00818a9d  8d442430             lea eax, [esp + 0x30]
// 00818aa1  64a300000000         mov dword ptr fs:[0], eax
// 00818aa7  8be9                 mov ebp, ecx
// 00818aa9  33f6                 xor esi, esi
// 00818aab  89742418             mov dword ptr [esp + 0x18], esi
// 00818aaf  8b8584010000         mov eax, dword ptr [ebp + 0x184]
// 00818ab5  3bc6                 cmp eax, esi
// 00818ab7  756d                 jne 0x818b26
// 00818ab9  8b859c000000         mov eax, dword ptr [ebp + 0x9c]
// 00818abf  83f8ff               cmp eax, -1
// 00818ac2  750f                 jne 0x818ad3
// 00818ac4  8b8d5c010000         mov ecx, dword ptr [ebp + 0x15c]
// 00818aca  3bce                 cmp ecx, esi
// 00818acc  7405                 je 0x818ad3
// 00818ace  e88d41ffff           call 0x80cc60
// 00818ad3  3bc6                 cmp eax, esi
// 00818ad5  744f                 je 0x818b26
// 00818ad7  8b4500               mov eax, dword ptr [ebp]
// 00818ada  8b5074               mov edx, dword ptr [eax + 0x74]
// 00818add  8bcd                 mov ecx, ebp
// 00818adf  ffd2                 call edx
// 00818ae1  85c0                 test eax, eax
// 00818ae3  7441                 je 0x818b26
// 00818ae5  8b442450             mov eax, dword ptr [esp + 0x50]
// 00818ae9  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00818aed  8b542448             mov edx, dword ptr [esp + 0x48]
// 00818af1  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 00818af5  48                   dec eax
// 00818af6  49                   dec ecx
// 00818af7  42                   inc edx
// 00818af8  4f                   dec edi
// 00818af9  897c2420             mov dword ptr [esp + 0x20], edi
// 00818afd  89542424             mov dword ptr [esp + 0x24], edx
// 00818b01  894c2428             mov dword ptr [esp + 0x28], ecx
// 00818b05  8944242c             mov dword ptr [esp + 0x2c], eax
// 00818b09  e8d2c80200           call 0x8453e0
// 00818b0e  6a0d                 push 0xd
// 00818b10  8bc8                 mov ecx, eax
// 00818b12  e899c00200           call 0x844bb0
// 00818b17  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00818b1b  50                   push eax
// 00818b1c  8d442424             lea eax, [esp + 0x24]
// 00818b20  50                   push eax
// 00818b21  e8fa22ffff           call 0x80ae20
// 00818b26  8b85bc010000         mov eax, dword ptr [ebp + 0x1bc]
// 00818b2c  3bc6                 cmp eax, esi
// 00818b2e  0f8ea4000000         jle 0x818bd8
// 00818b34  8b8d00010000         mov ecx, dword ptr [ebp + 0x100]
// 00818b3a  56                   push esi
// 00818b3b  50                   push eax
// 00818b3c  e88f200000           call 0x81abd0
// 00818b41  8bc8                 mov ecx, eax
// 00818b43  e848cf0000           call 0x825a90
// 00818b48  8bf8                 mov edi, eax
// 00818b4a  3bfe                 cmp edi, esi
// 00818b4c  0f8486000000         je 0x818bd8
// 00818b52  8b859c000000         mov eax, dword ptr [ebp + 0x9c]
// 00818b58  83f8ff               cmp eax, -1
// 00818b5b  750f                 jne 0x818b6c
// 00818b5d  8b8d5c010000         mov ecx, dword ptr [ebp + 0x15c]
// 00818b63  3bce                 cmp ecx, esi
// 00818b65  7405                 je 0x818b6c
// 00818b67  e8f440ffff           call 0x80cc60
// 00818b6c  8bcf                 mov ecx, edi
// 00818b6e  3bc6                 cmp eax, esi
// 00818b70  7407                 je 0x818b79
// 00818b72  e8a96b0000           call 0x81f720
// 00818b77  eb07                 jmp 0x818b80
// 00818b79  6a01                 push 1
// 00818b7b  e8b0d40000           call 0x826030
// 00818b80  8bd8                 mov ebx, eax
// 00818b82  83ec08               sub esp, 8
// 00818b85  8bc4                 mov eax, esp
// 00818b87  8930                 mov dword ptr [eax], esi
// 00818b89  897004               mov dword ptr [eax + 4], esi
// 00818b8c  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00818b90  8b542450             mov edx, dword ptr [esp + 0x50]
// 00818b94  8d040a               lea eax, [edx + ecx]
// 00818b97  99                   cdq 
// 00818b98  2bc2                 sub eax, edx
// 00818b9a  8bf0                 mov esi, eax
// 00818b9c  8bcf                 mov ecx, edi
// 00818b9e  89642424             mov dword ptr [esp + 0x24], esp
// 00818ba2  d1fe                 sar esi, 1
// 00818ba4  e827b60800           call 0x8a41d0
// 00818ba9  99                   cdq 
// 00818baa  2bc2                 sub eax, edx
// 00818bac  d1f8                 sar eax, 1
// 00818bae  2bf0                 sub esi, eax
// 00818bb0  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00818bb4  53                   push ebx
// 00818bb5  56                   push esi
// 00818bb6  50                   push eax
// 00818bb7  8b442454             mov eax, dword ptr [esp + 0x54]
// 00818bbb  50                   push eax
// 00818bbc  8bcf                 mov ecx, edi
// 00818bbe  e8adde0000           call 0x826a70
// 00818bc3  8bcf                 mov ecx, edi
// 00818bc5  e8c6070500           call 0x869390
// 00818bca  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00818bce  8d540102             lea edx, [ecx + eax + 2]
// 00818bd2  89542444             mov dword ptr [esp + 0x44], edx
// 00818bd6  33f6                 xor esi, esi
// 00818bd8  39b584010000         cmp dword ptr [ebp + 0x184], esi
// 00818bde  0f8568010000         jne 0x818d4c
// 00818be4  8b4500               mov eax, dword ptr [ebp]
// 00818be7  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 00818bed  8d4c2414             lea ecx, [esp + 0x14]
// 00818bf1  51                   push ecx
// 00818bf2  8bcd                 mov ecx, ebp
// 00818bf4  ffd2                 call edx
// 00818bf6  8d4c2414             lea ecx, [esp + 0x14]
// 00818bfa  89742438             mov dword ptr [esp + 0x38], esi
// 00818bfe  ff15b026a400         call dword ptr [0xa426b0]
// 00818c04  84c0                 test al, al
// 00818c06  0f8584000000         jne 0x818c90
// 00818c0c  8b859c000000         mov eax, dword ptr [ebp + 0x9c]
// 00818c12  83f8ff               cmp eax, -1
// 00818c15  750f                 jne 0x818c26
// 00818c17  8b8d5c010000         mov ecx, dword ptr [ebp + 0x15c]
// 00818c1d  3bce                 cmp ecx, esi
// 00818c1f  7405                 je 0x818c26
// 00818c21  e83a40ffff           call 0x80cc60
// 00818c26  3bc6                 cmp eax, esi
// 00818c28  7507                 jne 0x818c31
// 00818c2a  be11000000           mov esi, 0x11
// 00818c2f  eb16                 jmp 0x818c47
// 00818c31  8b4500               mov eax, dword ptr [ebp]
// 00818c34  8b5074               mov edx, dword ptr [eax + 0x74]
// 00818c37  8bcd                 mov ecx, ebp
// 00818c39  ffd2                 call edx
// 00818c3b  8bf0                 mov esi, eax
// 00818c3d  f7de                 neg esi
// 00818c3f  1bf6                 sbb esi, esi
// 00818c41  83e606               and esi, 6
// 00818c44  83c608               add esi, 8
// 00818c47  e894c70200           call 0x8453e0
// 00818c4c  56                   push esi
// 00818c4d  8bc8                 mov ecx, eax
// 00818c4f  e85cbf0200           call 0x844bb0
// 00818c54  8b742440             mov esi, dword ptr [esp + 0x40]
// 00818c58  8b16                 mov edx, dword ptr [esi]
// 00818c5a  50                   push eax
// 00818c5b  8b4238               mov eax, dword ptr [edx + 0x38]
// 00818c5e  8bce                 mov ecx, esi
// 00818c60  ffd0                 call eax
// 00818c62  8b3e                 mov edi, dword ptr [esi]
// 00818c64  6824080000           push 0x824
// 00818c69  8d4c2448             lea ecx, [esp + 0x48]
// 00818c6d  51                   push ecx
// 00818c6e  8d4c241c             lea ecx, [esp + 0x1c]
// 00818c72  ff15a826a400         call dword ptr [0xa426a8]
// 00818c78  50                   push eax
// 00818c79  8d4c2420             lea ecx, [esp + 0x20]
// 00818c7d  ff15c82da400         call dword ptr [0xa42dc8]
// 00818c83  8b5770               mov edx, dword ptr [edi + 0x70]
// 00818c86  50                   push eax
// 00818c87  8bce                 mov ecx, esi
// 00818c89  ffd2                 call edx
// 00818c8b  e9b2000000           jmp 0x818d42
// 00818c90  8d44241c             lea eax, [esp + 0x1c]
// 00818c94  50                   push eax
// 00818c95  8bcd                 mov ecx, ebp
// 00818c97  e8a4d8ffff           call 0x816540
// 00818c9c  8bc8                 mov ecx, eax
// 00818c9e  c644243801           mov byte ptr [esp + 0x38], 1
// 00818ca3  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00818cab  ff15b026a400         call dword ptr [0xa426b0]
// 00818cb1  84c0                 test al, al
// 00818cb3  7530                 jne 0x818ce5
// 00818cb5  8b859c000000         mov eax, dword ptr [ebp + 0x9c]
// 00818cbb  83f8ff               cmp eax, -1
// 00818cbe  750f                 jne 0x818ccf
// 00818cc0  8b8d5c010000         mov ecx, dword ptr [ebp + 0x15c]
// 00818cc6  3bce                 cmp ecx, esi
// 00818cc8  7405                 je 0x818ccf
// 00818cca  e8913fffff           call 0x80cc60
// 00818ccf  3bc6                 cmp eax, esi
// 00818cd1  7412                 je 0x818ce5
// 00818cd3  8b5500               mov edx, dword ptr [ebp]
// 00818cd6  8b4274               mov eax, dword ptr [edx + 0x74]
// 00818cd9  8bcd                 mov ecx, ebp
// 00818cdb  ffd0                 call eax
// 00818cdd  85c0                 test eax, eax
// 00818cdf  7504                 jne 0x818ce5
// 00818ce1  b301                 mov bl, 1
// 00818ce3  eb02                 jmp 0x818ce7
// 00818ce5  32db                 xor bl, bl
// 00818ce7  8d4c241c             lea ecx, [esp + 0x1c]
// 00818ceb  89742438             mov dword ptr [esp + 0x38], esi
// 00818cef  ff15082ea400         call dword ptr [0xa42e08]
// 00818cf5  84db                 test bl, bl
// 00818cf7  7449                 je 0x818d42
// 00818cf9  e8e2c60200           call 0x8453e0
// 00818cfe  6a11                 push 0x11
// 00818d00  8bc8                 mov ecx, eax
// 00818d02  e8a9be0200           call 0x844bb0
// 00818d07  8b742440             mov esi, dword ptr [esp + 0x40]
// 00818d0b  8b16                 mov edx, dword ptr [esi]
// 00818d0d  50                   push eax
// 00818d0e  8b4238               mov eax, dword ptr [edx + 0x38]
// 00818d11  8bce                 mov ecx, esi
// 00818d13  ffd0                 call eax
// 00818d15  8d4c2440             lea ecx, [esp + 0x40]
// 00818d19  51                   push ecx
// 00818d1a  8bcd                 mov ecx, ebp
// 00818d1c  e81fd8ffff           call 0x816540
// 00818d21  6824080000           push 0x824
// 00818d26  8d542448             lea edx, [esp + 0x48]
// 00818d2a  52                   push edx
// 00818d2b  50                   push eax
// 00818d2c  8bce                 mov ecx, esi
// 00818d2e  c644244402           mov byte ptr [esp + 0x44], 2
// 00818d33  e8b873ffff           call 0x8100f0
// 00818d38  8d4c2440             lea ecx, [esp + 0x40]
// 00818d3c  ff15082ea400         call dword ptr [0xa42e08]
// 00818d42  8d4c2414             lea ecx, [esp + 0x14]
// 00818d46  ff15082ea400         call dword ptr [0xa42e08]
// 00818d4c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00818d50  64890d00000000       mov dword ptr fs:[0], ecx
// 00818d57  59                   pop ecx
// 00818d58  5f                   pop edi
// 00818d59  5e                   pop esi
// 00818d5a  5d                   pop ebp
// 00818d5b  5b                   pop ebx
// 00818d5c  83c428               add esp, 0x28
// 00818d5f  c21400               ret 0x14
// copied from an identical function in another client (function ?DrawEditText@CXTPControlComboBox@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControlComboBox.cpp