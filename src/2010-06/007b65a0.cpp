// roc 2010-06 007b65a0  unit: CPatchedControlComboBox  size: 738 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b65a0
//
// 007b65a0  6aff                 push -1
// 007b65a2  687cf29a00           push 0x9af27c
// 007b65a7  64a100000000         mov eax, dword ptr fs:[0]
// 007b65ad  50                   push eax
// 007b65ae  83ec1c               sub esp, 0x1c
// 007b65b1  53                   push ebx
// 007b65b2  55                   push ebp
// 007b65b3  56                   push esi
// 007b65b4  57                   push edi
// 007b65b5  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007b65ba  33c4                 xor eax, esp
// 007b65bc  50                   push eax
// 007b65bd  8d442430             lea eax, [esp + 0x30]
// 007b65c1  64a300000000         mov dword ptr fs:[0], eax
// 007b65c7  8be9                 mov ebp, ecx
// 007b65c9  33f6                 xor esi, esi
// 007b65cb  89742418             mov dword ptr [esp + 0x18], esi
// 007b65cf  8b8584010000         mov eax, dword ptr [ebp + 0x184]
// 007b65d5  3bc6                 cmp eax, esi
// 007b65d7  756d                 jne 0x7b6646
// 007b65d9  8b859c000000         mov eax, dword ptr [ebp + 0x9c]
// 007b65df  83f8ff               cmp eax, -1
// 007b65e2  750f                 jne 0x7b65f3
// 007b65e4  8b8d5c010000         mov ecx, dword ptr [ebp + 0x15c]
// 007b65ea  3bce                 cmp ecx, esi
// 007b65ec  7405                 je 0x7b65f3
// 007b65ee  e89d40ffff           call 0x7aa690
// 007b65f3  3bc6                 cmp eax, esi
// 007b65f5  744f                 je 0x7b6646
// 007b65f7  8b4500               mov eax, dword ptr [ebp]
// 007b65fa  8b5074               mov edx, dword ptr [eax + 0x74]
// 007b65fd  8bcd                 mov ecx, ebp
// 007b65ff  ffd2                 call edx
// 007b6601  85c0                 test eax, eax
// 007b6603  7441                 je 0x7b6646
// 007b6605  8b442450             mov eax, dword ptr [esp + 0x50]
// 007b6609  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007b660d  8b542448             mov edx, dword ptr [esp + 0x48]
// 007b6611  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 007b6615  48                   dec eax
// 007b6616  49                   dec ecx
// 007b6617  42                   inc edx
// 007b6618  4f                   dec edi
// 007b6619  897c2420             mov dword ptr [esp + 0x20], edi
// 007b661d  89542424             mov dword ptr [esp + 0x24], edx
// 007b6621  894c2428             mov dword ptr [esp + 0x28], ecx
// 007b6625  8944242c             mov dword ptr [esp + 0x2c], eax
// 007b6629  e8f2d40200           call 0x7e3b20
// 007b662e  6a0d                 push 0xd
// 007b6630  8bc8                 mov ecx, eax
// 007b6632  e879cc0200           call 0x7e32b0
// 007b6637  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007b663b  50                   push eax
// 007b663c  8d442424             lea eax, [esp + 0x24]
// 007b6640  50                   push eax
// 007b6641  e8f820ffff           call 0x7a873e
// 007b6646  8b85bc010000         mov eax, dword ptr [ebp + 0x1bc]
// 007b664c  3bc6                 cmp eax, esi
// 007b664e  0f8ea4000000         jle 0x7b66f8
// 007b6654  8b8d00010000         mov ecx, dword ptr [ebp + 0x100]
// 007b665a  56                   push esi
// 007b665b  50                   push eax
// 007b665c  e8af200000           call 0x7b8710
// 007b6661  8bc8                 mov ecx, eax
// 007b6663  e8b8d50000           call 0x7c3c20
// 007b6668  8bf8                 mov edi, eax
// 007b666a  3bfe                 cmp edi, esi
// 007b666c  0f8486000000         je 0x7b66f8
// 007b6672  8b859c000000         mov eax, dword ptr [ebp + 0x9c]
// 007b6678  83f8ff               cmp eax, -1
// 007b667b  750f                 jne 0x7b668c
// 007b667d  8b8d5c010000         mov ecx, dword ptr [ebp + 0x15c]
// 007b6683  3bce                 cmp ecx, esi
// 007b6685  7405                 je 0x7b668c
// 007b6687  e80440ffff           call 0x7aa690
// 007b668c  8bcf                 mov ecx, edi
// 007b668e  3bc6                 cmp eax, esi
// 007b6690  7407                 je 0x7b6699
// 007b6692  e8496c0000           call 0x7bd2e0
// 007b6697  eb07                 jmp 0x7b66a0
// 007b6699  6a01                 push 1
// 007b669b  e8a0db0000           call 0x7c4240
// 007b66a0  8bd8                 mov ebx, eax
// 007b66a2  83ec08               sub esp, 8
// 007b66a5  8bc4                 mov eax, esp
// 007b66a7  8930                 mov dword ptr [eax], esi
// 007b66a9  897004               mov dword ptr [eax + 4], esi
// 007b66ac  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007b66b0  8b542450             mov edx, dword ptr [esp + 0x50]
// 007b66b4  8d040a               lea eax, [edx + ecx]
// 007b66b7  99                   cdq 
// 007b66b8  2bc2                 sub eax, edx
// 007b66ba  8bf0                 mov esi, eax
// 007b66bc  8bcf                 mov ecx, edi
// 007b66be  89642424             mov dword ptr [esp + 0x24], esp
// 007b66c2  d1fe                 sar esi, 1
// 007b66c4  e887240000           call 0x7b8b50
// 007b66c9  99                   cdq 
// 007b66ca  2bc2                 sub eax, edx
// 007b66cc  d1f8                 sar eax, 1
// 007b66ce  2bf0                 sub esi, eax
// 007b66d0  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 007b66d4  53                   push ebx
// 007b66d5  56                   push esi
// 007b66d6  50                   push eax
// 007b66d7  8b442454             mov eax, dword ptr [esp + 0x54]
// 007b66db  50                   push eax
// 007b66dc  8bcf                 mov ecx, edi
// 007b66de  e86de80000           call 0x7c4f50
// 007b66e3  8bcf                 mov ecx, edi
// 007b66e5  e8b67a0100           call 0x7ce1a0
// 007b66ea  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007b66ee  8d540102             lea edx, [ecx + eax + 2]
// 007b66f2  89542444             mov dword ptr [esp + 0x44], edx
// 007b66f6  33f6                 xor esi, esi
// 007b66f8  39b584010000         cmp dword ptr [ebp + 0x184], esi
// 007b66fe  0f8568010000         jne 0x7b686c
// 007b6704  8b4500               mov eax, dword ptr [ebp]
// 007b6707  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 007b670d  8d4c2414             lea ecx, [esp + 0x14]
// 007b6711  51                   push ecx
// 007b6712  8bcd                 mov ecx, ebp
// 007b6714  ffd2                 call edx
// 007b6716  8d4c2414             lea ecx, [esp + 0x14]
// 007b671a  89742438             mov dword ptr [esp + 0x38], esi
// 007b671e  ff15eccd9e00         call dword ptr [0x9ecdec]
// 007b6724  84c0                 test al, al
// 007b6726  0f8584000000         jne 0x7b67b0
// 007b672c  8b859c000000         mov eax, dword ptr [ebp + 0x9c]
// 007b6732  83f8ff               cmp eax, -1
// 007b6735  750f                 jne 0x7b6746
// 007b6737  8b8d5c010000         mov ecx, dword ptr [ebp + 0x15c]
// 007b673d  3bce                 cmp ecx, esi
// 007b673f  7405                 je 0x7b6746
// 007b6741  e84a3fffff           call 0x7aa690
// 007b6746  3bc6                 cmp eax, esi
// 007b6748  7507                 jne 0x7b6751
// 007b674a  be11000000           mov esi, 0x11
// 007b674f  eb16                 jmp 0x7b6767
// 007b6751  8b4500               mov eax, dword ptr [ebp]
// 007b6754  8b5074               mov edx, dword ptr [eax + 0x74]
// 007b6757  8bcd                 mov ecx, ebp
// 007b6759  ffd2                 call edx
// 007b675b  8bf0                 mov esi, eax
// 007b675d  f7de                 neg esi
// 007b675f  1bf6                 sbb esi, esi
// 007b6761  83e606               and esi, 6
// 007b6764  83c608               add esi, 8
// 007b6767  e8b4d30200           call 0x7e3b20
// 007b676c  56                   push esi
// 007b676d  8bc8                 mov ecx, eax
// 007b676f  e83ccb0200           call 0x7e32b0
// 007b6774  8b742440             mov esi, dword ptr [esp + 0x40]
// 007b6778  8b16                 mov edx, dword ptr [esi]
// 007b677a  50                   push eax
// 007b677b  8b4238               mov eax, dword ptr [edx + 0x38]
// 007b677e  8bce                 mov ecx, esi
// 007b6780  ffd0                 call eax
// 007b6782  8b3e                 mov edi, dword ptr [esi]
// 007b6784  6824080000           push 0x824
// 007b6789  8d4c2448             lea ecx, [esp + 0x48]
// 007b678d  51                   push ecx
// 007b678e  8d4c241c             lea ecx, [esp + 0x1c]
// 007b6792  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007b6798  50                   push eax
// 007b6799  8d4c2420             lea ecx, [esp + 0x20]
// 007b679d  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007b67a3  8b5770               mov edx, dword ptr [edi + 0x70]
// 007b67a6  50                   push eax
// 007b67a7  8bce                 mov ecx, esi
// 007b67a9  ffd2                 call edx
// 007b67ab  e9b2000000           jmp 0x7b6862
// 007b67b0  8d44241c             lea eax, [esp + 0x1c]
// 007b67b4  50                   push eax
// 007b67b5  8bcd                 mov ecx, ebp
// 007b67b7  e844d9ffff           call 0x7b4100
// 007b67bc  8bc8                 mov ecx, eax
// 007b67be  c644243801           mov byte ptr [esp + 0x38], 1
// 007b67c3  c744241801000000     mov dword ptr [esp + 0x18], 1
// 007b67cb  ff15eccd9e00         call dword ptr [0x9ecdec]
// 007b67d1  84c0                 test al, al
// 007b67d3  7530                 jne 0x7b6805
// 007b67d5  8b859c000000         mov eax, dword ptr [ebp + 0x9c]
// 007b67db  83f8ff               cmp eax, -1
// 007b67de  750f                 jne 0x7b67ef
// 007b67e0  8b8d5c010000         mov ecx, dword ptr [ebp + 0x15c]
// 007b67e6  3bce                 cmp ecx, esi
// 007b67e8  7405                 je 0x7b67ef
// 007b67ea  e8a13effff           call 0x7aa690
// 007b67ef  3bc6                 cmp eax, esi
// 007b67f1  7412                 je 0x7b6805
// 007b67f3  8b5500               mov edx, dword ptr [ebp]
// 007b67f6  8b4274               mov eax, dword ptr [edx + 0x74]
// 007b67f9  8bcd                 mov ecx, ebp
// 007b67fb  ffd0                 call eax
// 007b67fd  85c0                 test eax, eax
// 007b67ff  7504                 jne 0x7b6805
// 007b6801  b301                 mov bl, 1
// 007b6803  eb02                 jmp 0x7b6807
// 007b6805  32db                 xor bl, bl
// 007b6807  8d4c241c             lea ecx, [esp + 0x1c]
// 007b680b  89742438             mov dword ptr [esp + 0x38], esi
// 007b680f  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007b6815  84db                 test bl, bl
// 007b6817  7449                 je 0x7b6862
// 007b6819  e802d30200           call 0x7e3b20
// 007b681e  6a11                 push 0x11
// 007b6820  8bc8                 mov ecx, eax
// 007b6822  e889ca0200           call 0x7e32b0
// 007b6827  8b742440             mov esi, dword ptr [esp + 0x40]
// 007b682b  8b16                 mov edx, dword ptr [esi]
// 007b682d  50                   push eax
// 007b682e  8b4238               mov eax, dword ptr [edx + 0x38]
// 007b6831  8bce                 mov ecx, esi
// 007b6833  ffd0                 call eax
// 007b6835  8d4c2440             lea ecx, [esp + 0x40]
// 007b6839  51                   push ecx
// 007b683a  8bcd                 mov ecx, ebp
// 007b683c  e8bfd8ffff           call 0x7b4100
// 007b6841  6824080000           push 0x824
// 007b6846  8d542448             lea edx, [esp + 0x48]
// 007b684a  52                   push edx
// 007b684b  50                   push eax
// 007b684c  8bce                 mov ecx, esi
// 007b684e  c644244402           mov byte ptr [esp + 0x44], 2
// 007b6853  e88874ffff           call 0x7adce0
// 007b6858  8d4c2440             lea ecx, [esp + 0x40]
// 007b685c  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007b6862  8d4c2414             lea ecx, [esp + 0x14]
// 007b6866  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007b686c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007b6870  64890d00000000       mov dword ptr fs:[0], ecx
// 007b6877  59                   pop ecx
// 007b6878  5f                   pop edi
// 007b6879  5e                   pop esi
// 007b687a  5d                   pop ebp
// 007b687b  5b                   pop ebx
// 007b687c  83c428               add esp, 0x28
// 007b687f  c21400               ret 0x14
// copied from an identical function in another client (function ?DrawEditText@CXTPControlComboBox@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControlComboBox.cpp