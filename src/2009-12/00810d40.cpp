// roc 2009-12 00810d40  unit: CXTPImageManager  size: 364 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00810d40
//
// 00810d40  56                   push esi
// 00810d41  8bf1                 mov esi, ecx
// 00810d43  e8589bffff           call 0x80a8a0
// 00810d48  85c0                 test eax, eax
// 00810d4a  0f8558010000         jne 0x810ea8
// 00810d50  8b4614               mov eax, dword ptr [esi + 0x14]
// 00810d53  85c0                 test eax, eax
// 00810d55  742b                 je 0x810d82
// 00810d57  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00810d5b  8b542418             mov edx, dword ptr [esp + 0x18]
// 00810d5f  51                   push ecx
// 00810d60  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00810d64  52                   push edx
// 00810d65  8b542418             mov edx, dword ptr [esp + 0x18]
// 00810d69  51                   push ecx
// 00810d6a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00810d6e  52                   push edx
// 00810d6f  8b542418             mov edx, dword ptr [esp + 0x18]
// 00810d73  51                   push ecx
// 00810d74  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00810d77  50                   push eax
// 00810d78  52                   push edx
// 00810d79  e8a2faffff           call 0x810820
// 00810d7e  5e                   pop esi
// 00810d7f  c21800               ret 0x18
// 00810d82  53                   push ebx
// 00810d83  57                   push edi
// 00810d84  e86783ffff           call 0x8090f0
// 00810d89  85c0                 test eax, eax
// 00810d8b  0f8596000000         jne 0x810e27
// 00810d91  8b4610               mov eax, dword ptr [esi + 0x10]
// 00810d94  85c0                 test eax, eax
// 00810d96  7505                 jne 0x810d9d
// 00810d98  e813f7ffff           call 0x8104b0
// 00810d9d  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00810da1  53                   push ebx
// 00810da2  8bc8                 mov ecx, eax
// 00810da4  e8f782ffff           call 0x8090a0
// 00810da9  85c0                 test eax, eax
// 00810dab  7412                 je 0x810dbf
// 00810dad  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00810db1  01442414             add dword ptr [esp + 0x14], eax
// 00810db5  f7d8                 neg eax
// 00810db7  8bf8                 mov edi, eax
// 00810db9  897c241c             mov dword ptr [esp + 0x1c], edi
// 00810dbd  eb04                 jmp 0x810dc3
// 00810dbf  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00810dc3  837c242400           cmp dword ptr [esp + 0x24], 0
// 00810dc8  7536                 jne 0x810e00
// 00810dca  85db                 test ebx, ebx
// 00810dcc  7504                 jne 0x810dd2
// 00810dce  33d2                 xor edx, edx
// 00810dd0  eb03                 jmp 0x810dd5
// 00810dd2  8b5304               mov edx, dword ptr [ebx + 4]
// 00810dd5  8b442420             mov eax, dword ptr [esp + 0x20]
// 00810dd9  6a03                 push 3
// 00810ddb  6a00                 push 0
// 00810ddd  6a00                 push 0
// 00810ddf  50                   push eax
// 00810de0  57                   push edi
// 00810de1  8bce                 mov ecx, esi
// 00810de3  e888e8d1ff           call 0x52f670
// 00810de8  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00810dec  50                   push eax
// 00810ded  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00810df1  51                   push ecx
// 00810df2  50                   push eax
// 00810df3  52                   push edx
// 00810df4  ff1514cb9800         call dword ptr [0x98cb14]
// 00810dfa  5f                   pop edi
// 00810dfb  5b                   pop ebx
// 00810dfc  5e                   pop esi
// 00810dfd  c21800               ret 0x18
// 00810e00  8bce                 mov ecx, esi
// 00810e02  e869e8d1ff           call 0x52f670
// 00810e07  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00810e0b  8b542418             mov edx, dword ptr [esp + 0x18]
// 00810e0f  50                   push eax
// 00810e10  8b442418             mov eax, dword ptr [esp + 0x18]
// 00810e14  51                   push ecx
// 00810e15  57                   push edi
// 00810e16  52                   push edx
// 00810e17  50                   push eax
// 00810e18  53                   push ebx
// 00810e19  e882fdffff           call 0x810ba0
// 00810e1e  83c418               add esp, 0x18
// 00810e21  5f                   pop edi
// 00810e22  5b                   pop ebx
// 00810e23  5e                   pop esi
// 00810e24  c21800               ret 0x18
// 00810e27  e814c2ffff           call 0x80d040
// 00810e2c  85c0                 test eax, eax
// 00810e2e  7476                 je 0x810ea6
// 00810e30  8b442418             mov eax, dword ptr [esp + 0x18]
// 00810e34  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00810e38  85c0                 test eax, eax
// 00810e3a  7d3f                 jge 0x810e7b
// 00810e3c  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00810e3f  3bf9                 cmp edi, ecx
// 00810e41  7538                 jne 0x810e7b
// 00810e43  03c8                 add ecx, eax
// 00810e45  85c9                 test ecx, ecx
// 00810e47  7e5d                 jle 0x810ea6
// 00810e49  8b5618               mov edx, dword ptr [esi + 0x18]
// 00810e4c  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00810e50  55                   push ebp
// 00810e51  51                   push ecx
// 00810e52  52                   push edx
// 00810e53  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00810e57  f7d8                 neg eax
// 00810e59  50                   push eax
// 00810e5a  8b442424             mov eax, dword ptr [esp + 0x24]
// 00810e5e  33ff                 xor edi, edi
// 00810e60  57                   push edi
// 00810e61  51                   push ecx
// 00810e62  8b4e04               mov ecx, dword ptr [esi + 4]
// 00810e65  53                   push ebx
// 00810e66  33ed                 xor ebp, ebp
// 00810e68  55                   push ebp
// 00810e69  50                   push eax
// 00810e6a  51                   push ecx
// 00810e6b  52                   push edx
// 00810e6c  e83ffcffff           call 0x810ab0
// 00810e71  83c428               add esp, 0x28
// 00810e74  5d                   pop ebp
// 00810e75  5f                   pop edi
// 00810e76  5b                   pop ebx
// 00810e77  5e                   pop esi
// 00810e78  c21800               ret 0x18
// 00810e7b  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 00810e7e  53                   push ebx
// 00810e7f  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 00810e82  53                   push ebx
// 00810e83  33d2                 xor edx, edx
// 00810e85  52                   push edx
// 00810e86  8b542420             mov edx, dword ptr [esp + 0x20]
// 00810e8a  33c9                 xor ecx, ecx
// 00810e8c  51                   push ecx
// 00810e8d  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00810e91  57                   push edi
// 00810e92  51                   push ecx
// 00810e93  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00810e97  50                   push eax
// 00810e98  8b4604               mov eax, dword ptr [esi + 4]
// 00810e9b  52                   push edx
// 00810e9c  50                   push eax
// 00810e9d  51                   push ecx
// 00810e9e  e80dfcffff           call 0x810ab0
// 00810ea3  83c428               add esp, 0x28
// 00810ea6  5f                   pop edi
// 00810ea7  5b                   pop ebx
// 00810ea8  5e                   pop esi
// 00810ea9  c21800               ret 0x18
// copied from an identical function in another client (function ?Draw@CXTPImageManagerIconHandle@@QAEXPAVCDC@@VCPoint@@VCSize@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp