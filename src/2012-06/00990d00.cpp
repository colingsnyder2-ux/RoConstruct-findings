// roc 2012-06 00990d00  unit: CPatchedControlComboBox  size: 738 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00990d00
//
// 00990d00  6aff                 push -1
// 00990d02  680cc7ad00           push 0xadc70c
// 00990d07  64a100000000         mov eax, dword ptr fs:[0]
// 00990d0d  50                   push eax
// 00990d0e  83ec1c               sub esp, 0x1c
// 00990d11  53                   push ebx
// 00990d12  55                   push ebp
// 00990d13  56                   push esi
// 00990d14  57                   push edi
// 00990d15  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00990d1a  33c4                 xor eax, esp
// 00990d1c  50                   push eax
// 00990d1d  8d442430             lea eax, [esp + 0x30]
// 00990d21  64a300000000         mov dword ptr fs:[0], eax
// 00990d27  8be9                 mov ebp, ecx
// 00990d29  33f6                 xor esi, esi
// 00990d2b  89742418             mov dword ptr [esp + 0x18], esi
// 00990d2f  8b8584010000         mov eax, dword ptr [ebp + 0x184]
// 00990d35  3bc6                 cmp eax, esi
// 00990d37  756d                 jne 0x990da6
// 00990d39  8b859c000000         mov eax, dword ptr [ebp + 0x9c]
// 00990d3f  83f8ff               cmp eax, -1
// 00990d42  750f                 jne 0x990d53
// 00990d44  8b8d5c010000         mov ecx, dword ptr [ebp + 0x15c]
// 00990d4a  3bce                 cmp ecx, esi
// 00990d4c  7405                 je 0x990d53
// 00990d4e  e8cd41ffff           call 0x984f20
// 00990d53  3bc6                 cmp eax, esi
// 00990d55  744f                 je 0x990da6
// 00990d57  8b4500               mov eax, dword ptr [ebp]
// 00990d5a  8b5074               mov edx, dword ptr [eax + 0x74]
// 00990d5d  8bcd                 mov ecx, ebp
// 00990d5f  ffd2                 call edx
// 00990d61  85c0                 test eax, eax
// 00990d63  7441                 je 0x990da6
// 00990d65  8b442450             mov eax, dword ptr [esp + 0x50]
// 00990d69  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00990d6d  8b542448             mov edx, dword ptr [esp + 0x48]
// 00990d71  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 00990d75  48                   dec eax
// 00990d76  49                   dec ecx
// 00990d77  42                   inc edx
// 00990d78  4f                   dec edi
// 00990d79  897c2420             mov dword ptr [esp + 0x20], edi
// 00990d7d  89542424             mov dword ptr [esp + 0x24], edx
// 00990d81  894c2428             mov dword ptr [esp + 0x28], ecx
// 00990d85  8944242c             mov dword ptr [esp + 0x2c], eax
// 00990d89  e8d2ca0200           call 0x9bd860
// 00990d8e  6a0d                 push 0xd
// 00990d90  8bc8                 mov ecx, eax
// 00990d92  e849c20200           call 0x9bcfe0
// 00990d97  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00990d9b  50                   push eax
// 00990d9c  8d442424             lea eax, [esp + 0x24]
// 00990da0  50                   push eax
// 00990da1  e80621ffff           call 0x982eac
// 00990da6  8b85bc010000         mov eax, dword ptr [ebp + 0x1bc]
// 00990dac  3bc6                 cmp eax, esi
// 00990dae  0f8ea4000000         jle 0x990e58
// 00990db4  8b8d00010000         mov ecx, dword ptr [ebp + 0x100]
// 00990dba  56                   push esi
// 00990dbb  50                   push eax
// 00990dbc  e86f200000           call 0x992e30
// 00990dc1  8bc8                 mov ecx, eax
// 00990dc3  e8f8d20000           call 0x99e0c0
// 00990dc8  8bf8                 mov edi, eax
// 00990dca  3bfe                 cmp edi, esi
// 00990dcc  0f8486000000         je 0x990e58
// 00990dd2  8b859c000000         mov eax, dword ptr [ebp + 0x9c]
// 00990dd8  83f8ff               cmp eax, -1
// 00990ddb  750f                 jne 0x990dec
// 00990ddd  8b8d5c010000         mov ecx, dword ptr [ebp + 0x15c]
// 00990de3  3bce                 cmp ecx, esi
// 00990de5  7405                 je 0x990dec
// 00990de7  e83441ffff           call 0x984f20
// 00990dec  8bcf                 mov ecx, edi
// 00990dee  3bc6                 cmp eax, esi
// 00990df0  7407                 je 0x990df9
// 00990df2  e8396c0000           call 0x997a30
// 00990df7  eb07                 jmp 0x990e00
// 00990df9  6a01                 push 1
// 00990dfb  e860d80000           call 0x99e660
// 00990e00  8bd8                 mov ebx, eax
// 00990e02  83ec08               sub esp, 8
// 00990e05  8bc4                 mov eax, esp
// 00990e07  8930                 mov dword ptr [eax], esi
// 00990e09  897004               mov dword ptr [eax + 4], esi
// 00990e0c  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00990e10  8b542450             mov edx, dword ptr [esp + 0x50]
// 00990e14  8d040a               lea eax, [edx + ecx]
// 00990e17  99                   cdq 
// 00990e18  2bc2                 sub eax, edx
// 00990e1a  8bf0                 mov esi, eax
// 00990e1c  8bcf                 mov ecx, edi
// 00990e1e  89642424             mov dword ptr [esp + 0x24], esp
// 00990e22  d1fe                 sar esi, 1
// 00990e24  e8f76b0000           call 0x997a20
// 00990e29  99                   cdq 
// 00990e2a  2bc2                 sub eax, edx
// 00990e2c  d1f8                 sar eax, 1
// 00990e2e  2bf0                 sub esi, eax
// 00990e30  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00990e34  53                   push ebx
// 00990e35  56                   push esi
// 00990e36  50                   push eax
// 00990e37  8b442454             mov eax, dword ptr [esp + 0x54]
// 00990e3b  50                   push eax
// 00990e3c  8bcf                 mov ecx, edi
// 00990e3e  e85de20000           call 0x99f0a0
// 00990e43  8bcf                 mov ecx, edi
// 00990e45  e816a80900           call 0xa2b660
// 00990e4a  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00990e4e  8d540102             lea edx, [ecx + eax + 2]
// 00990e52  89542444             mov dword ptr [esp + 0x44], edx
// 00990e56  33f6                 xor esi, esi
// 00990e58  39b584010000         cmp dword ptr [ebp + 0x184], esi
// 00990e5e  0f8568010000         jne 0x990fcc
// 00990e64  8b4500               mov eax, dword ptr [ebp]
// 00990e67  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 00990e6d  8d4c2414             lea ecx, [esp + 0x14]
// 00990e71  51                   push ecx
// 00990e72  8bcd                 mov ecx, ebp
// 00990e74  ffd2                 call edx
// 00990e76  8d4c2414             lea ecx, [esp + 0x14]
// 00990e7a  89742438             mov dword ptr [esp + 0x38], esi
// 00990e7e  ff156046b200         call dword ptr [0xb24660]
// 00990e84  84c0                 test al, al
// 00990e86  0f8584000000         jne 0x990f10
// 00990e8c  8b859c000000         mov eax, dword ptr [ebp + 0x9c]
// 00990e92  83f8ff               cmp eax, -1
// 00990e95  750f                 jne 0x990ea6
// 00990e97  8b8d5c010000         mov ecx, dword ptr [ebp + 0x15c]
// 00990e9d  3bce                 cmp ecx, esi
// 00990e9f  7405                 je 0x990ea6
// 00990ea1  e87a40ffff           call 0x984f20
// 00990ea6  3bc6                 cmp eax, esi
// 00990ea8  7507                 jne 0x990eb1
// 00990eaa  be11000000           mov esi, 0x11
// 00990eaf  eb16                 jmp 0x990ec7
// 00990eb1  8b4500               mov eax, dword ptr [ebp]
// 00990eb4  8b5074               mov edx, dword ptr [eax + 0x74]
// 00990eb7  8bcd                 mov ecx, ebp
// 00990eb9  ffd2                 call edx
// 00990ebb  8bf0                 mov esi, eax
// 00990ebd  f7de                 neg esi
// 00990ebf  1bf6                 sbb esi, esi
// 00990ec1  83e606               and esi, 6
// 00990ec4  83c608               add esi, 8
// 00990ec7  e894c90200           call 0x9bd860
// 00990ecc  56                   push esi
// 00990ecd  8bc8                 mov ecx, eax
// 00990ecf  e80cc10200           call 0x9bcfe0
// 00990ed4  8b742440             mov esi, dword ptr [esp + 0x40]
// 00990ed8  8b16                 mov edx, dword ptr [esi]
// 00990eda  50                   push eax
// 00990edb  8b4238               mov eax, dword ptr [edx + 0x38]
// 00990ede  8bce                 mov ecx, esi
// 00990ee0  ffd0                 call eax
// 00990ee2  8b3e                 mov edi, dword ptr [esi]
// 00990ee4  6824080000           push 0x824
// 00990ee9  8d4c2448             lea ecx, [esp + 0x48]
// 00990eed  51                   push ecx
// 00990eee  8d4c241c             lea ecx, [esp + 0x1c]
// 00990ef2  ff155846b200         call dword ptr [0xb24658]
// 00990ef8  50                   push eax
// 00990ef9  8d4c2420             lea ecx, [esp + 0x20]
// 00990efd  ff159847b200         call dword ptr [0xb24798]
// 00990f03  8b5770               mov edx, dword ptr [edi + 0x70]
// 00990f06  50                   push eax
// 00990f07  8bce                 mov ecx, esi
// 00990f09  ffd2                 call edx
// 00990f0b  e9b2000000           jmp 0x990fc2
// 00990f10  8d44241c             lea eax, [esp + 0x1c]
// 00990f14  50                   push eax
// 00990f15  8bcd                 mov ecx, ebp
// 00990f17  e8a4d8ffff           call 0x98e7c0
// 00990f1c  8bc8                 mov ecx, eax
// 00990f1e  c644243801           mov byte ptr [esp + 0x38], 1
// 00990f23  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00990f2b  ff156046b200         call dword ptr [0xb24660]
// 00990f31  84c0                 test al, al
// 00990f33  7530                 jne 0x990f65
// 00990f35  8b859c000000         mov eax, dword ptr [ebp + 0x9c]
// 00990f3b  83f8ff               cmp eax, -1
// 00990f3e  750f                 jne 0x990f4f
// 00990f40  8b8d5c010000         mov ecx, dword ptr [ebp + 0x15c]
// 00990f46  3bce                 cmp ecx, esi
// 00990f48  7405                 je 0x990f4f
// 00990f4a  e8d13fffff           call 0x984f20
// 00990f4f  3bc6                 cmp eax, esi
// 00990f51  7412                 je 0x990f65
// 00990f53  8b5500               mov edx, dword ptr [ebp]
// 00990f56  8b4274               mov eax, dword ptr [edx + 0x74]
// 00990f59  8bcd                 mov ecx, ebp
// 00990f5b  ffd0                 call eax
// 00990f5d  85c0                 test eax, eax
// 00990f5f  7504                 jne 0x990f65
// 00990f61  b301                 mov bl, 1
// 00990f63  eb02                 jmp 0x990f67
// 00990f65  32db                 xor bl, bl
// 00990f67  8d4c241c             lea ecx, [esp + 0x1c]
// 00990f6b  89742438             mov dword ptr [esp + 0x38], esi
// 00990f6f  ff15d047b200         call dword ptr [0xb247d0]
// 00990f75  84db                 test bl, bl
// 00990f77  7449                 je 0x990fc2
// 00990f79  e8e2c80200           call 0x9bd860
// 00990f7e  6a11                 push 0x11
// 00990f80  8bc8                 mov ecx, eax
// 00990f82  e859c00200           call 0x9bcfe0
// 00990f87  8b742440             mov esi, dword ptr [esp + 0x40]
// 00990f8b  8b16                 mov edx, dword ptr [esi]
// 00990f8d  50                   push eax
// 00990f8e  8b4238               mov eax, dword ptr [edx + 0x38]
// 00990f91  8bce                 mov ecx, esi
// 00990f93  ffd0                 call eax
// 00990f95  8d4c2440             lea ecx, [esp + 0x40]
// 00990f99  51                   push ecx
// 00990f9a  8bcd                 mov ecx, ebp
// 00990f9c  e81fd8ffff           call 0x98e7c0
// 00990fa1  6824080000           push 0x824
// 00990fa6  8d542448             lea edx, [esp + 0x48]
// 00990faa  52                   push edx
// 00990fab  50                   push eax
// 00990fac  8bce                 mov ecx, esi
// 00990fae  c644244402           mov byte ptr [esp + 0x44], 2
// 00990fb3  e81874ffff           call 0x9883d0
// 00990fb8  8d4c2440             lea ecx, [esp + 0x40]
// 00990fbc  ff15d047b200         call dword ptr [0xb247d0]
// 00990fc2  8d4c2414             lea ecx, [esp + 0x14]
// 00990fc6  ff15d047b200         call dword ptr [0xb247d0]
// 00990fcc  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00990fd0  64890d00000000       mov dword ptr fs:[0], ecx
// 00990fd7  59                   pop ecx
// 00990fd8  5f                   pop edi
// 00990fd9  5e                   pop esi
// 00990fda  5d                   pop ebp
// 00990fdb  5b                   pop ebx
// 00990fdc  83c428               add esp, 0x28
// 00990fdf  c21400               ret 0x14
// copied from an identical function in another client (function ?DrawEditText@CXTPControlComboBox@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControlComboBox.cpp