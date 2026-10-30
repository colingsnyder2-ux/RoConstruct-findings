// roc 2012-06 009d7b30  unit: CXTPPropExchange  size: 358 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d7b30
//
// 009d7b30  8b442404             mov eax, dword ptr [esp + 4]
// 009d7b34  83ec10               sub esp, 0x10
// 009d7b37  53                   push ebx
// 009d7b38  55                   push ebp
// 009d7b39  56                   push esi
// 009d7b3a  8b30                 mov esi, dword ptr [eax]
// 009d7b3c  33ed                 xor ebp, ebp
// 009d7b3e  57                   push edi
// 009d7b3f  3bf5                 cmp esi, ebp
// 009d7b41  7506                 jne 0x9d7b49
// 009d7b43  896c2410             mov dword ptr [esp + 0x10], ebp
// 009d7b47  eb1a                 jmp 0x9d7b63
// 009d7b49  8bc6                 mov eax, esi
// 009d7b4b  8d5002               lea edx, [eax + 2]
// 009d7b4e  8bff                 mov edi, edi
// 009d7b50  668b08               mov cx, word ptr [eax]
// 009d7b53  83c002               add eax, 2
// 009d7b56  663bcd               cmp cx, bp
// 009d7b59  75f5                 jne 0x9d7b50
// 009d7b5b  2bc2                 sub eax, edx
// 009d7b5d  d1f8                 sar eax, 1
// 009d7b5f  89442410             mov dword ptr [esp + 0x10], eax
// 009d7b63  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 009d7b67  3bdd                 cmp ebx, ebp
// 009d7b69  0f841d010000         je 0x9d7c8c
// 009d7b6f  8bc3                 mov eax, ebx
// 009d7b71  8d5002               lea edx, [eax + 2]
// 009d7b74  668b08               mov cx, word ptr [eax]
// 009d7b77  83c002               add eax, 2
// 009d7b7a  663bcd               cmp cx, bp
// 009d7b7d  75f5                 jne 0x9d7b74
// 009d7b7f  2bc2                 sub eax, edx
// 009d7b81  d1f8                 sar eax, 1
// 009d7b83  8bf8                 mov edi, eax
// 009d7b85  897c2418             mov dword ptr [esp + 0x18], edi
// 009d7b89  0f84fd000000         je 0x9d7c8c
// 009d7b8f  396c2410             cmp dword ptr [esp + 0x10], ebp
// 009d7b93  0f84f3000000         je 0x9d7c8c
// 009d7b99  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 009d7b9d  3bc5                 cmp eax, ebp
// 009d7b9f  7506                 jne 0x9d7ba7
// 009d7ba1  896c2414             mov dword ptr [esp + 0x14], ebp
// 009d7ba5  eb1c                 jmp 0x9d7bc3
// 009d7ba7  8d5002               lea edx, [eax + 2]
// 009d7baa  8d9b00000000         lea ebx, [ebx]
// 009d7bb0  668b08               mov cx, word ptr [eax]
// 009d7bb3  83c002               add eax, 2
// 009d7bb6  663bcd               cmp cx, bp
// 009d7bb9  75f5                 jne 0x9d7bb0
// 009d7bbb  2bc2                 sub eax, edx
// 009d7bbd  d1f8                 sar eax, 1
// 009d7bbf  89442414             mov dword ptr [esp + 0x14], eax
// 009d7bc3  53                   push ebx
// 009d7bc4  56                   push esi
// 009d7bc5  8b351428b200         mov esi, dword ptr [0xb22814]
// 009d7bcb  ffd6                 call esi
// 009d7bcd  83c408               add esp, 8
// 009d7bd0  85c0                 test eax, eax
// 009d7bd2  0f84aa000000         je 0x9d7c82
// 009d7bd8  8d0c78               lea ecx, [eax + edi*2]
// 009d7bdb  53                   push ebx
// 009d7bdc  51                   push ecx
// 009d7bdd  45                   inc ebp
// 009d7bde  ffd6                 call esi
// 009d7be0  83c408               add esp, 8
// 009d7be3  85c0                 test eax, eax
// 009d7be5  75f1                 jne 0x9d7bd8
// 009d7be7  896c241c             mov dword ptr [esp + 0x1c], ebp
// 009d7beb  85ed                 test ebp, ebp
// 009d7bed  0f8e8f000000         jle 0x9d7c82
// 009d7bf3  8b542424             mov edx, dword ptr [esp + 0x24]
// 009d7bf7  8b02                 mov eax, dword ptr [edx]
// 009d7bf9  53                   push ebx
// 009d7bfa  50                   push eax
// 009d7bfb  ffd6                 call esi
// 009d7bfd  8bf0                 mov esi, eax
// 009d7bff  83c408               add esp, 8
// 009d7c02  85f6                 test esi, esi
// 009d7c04  747c                 je 0x9d7c82
// 009d7c06  8b442414             mov eax, dword ptr [esp + 0x14]
// 009d7c0a  8d2c00               lea ebp, [eax + eax]
// 009d7c0d  2bc7                 sub eax, edi
// 009d7c0f  89442414             mov dword ptr [esp + 0x14], eax
// 009d7c13  eb0f                 jmp 0x9d7c24
// 009d7c15  eb09                 jmp 0x9d7c20
// 009d7c17  8da42400000000       lea esp, [esp]
// 009d7c1e  8bff                 mov edi, edi
// 009d7c20  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 009d7c24  8b542424             mov edx, dword ptr [esp + 0x24]
// 009d7c28  8b442410             mov eax, dword ptr [esp + 0x10]
// 009d7c2c  8bce                 mov ecx, esi
// 009d7c2e  2b0a                 sub ecx, dword ptr [edx]
// 009d7c30  8d1c2e               lea ebx, [esi + ebp]
// 009d7c33  d1f9                 sar ecx, 1
// 009d7c35  2bc1                 sub eax, ecx
// 009d7c37  2bc7                 sub eax, edi
// 009d7c39  8d3c00               lea edi, [eax + eax]
// 009d7c3c  8b442418             mov eax, dword ptr [esp + 0x18]
// 009d7c40  57                   push edi
// 009d7c41  8d0c46               lea ecx, [esi + eax*2]
// 009d7c44  51                   push ecx
// 009d7c45  57                   push edi
// 009d7c46  53                   push ebx
// 009d7c47  ff15c02ab200         call dword ptr [0xb22ac0]
// 009d7c4d  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 009d7c51  55                   push ebp
// 009d7c52  52                   push edx
// 009d7c53  55                   push ebp
// 009d7c54  56                   push esi
// 009d7c55  ff15fc29b200         call dword ptr [0xb229fc]
// 009d7c5b  8b542448             mov edx, dword ptr [esp + 0x48]
// 009d7c5f  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 009d7c63  014c2430             add dword ptr [esp + 0x30], ecx
// 009d7c67  52                   push edx
// 009d7c68  33c0                 xor eax, eax
// 009d7c6a  53                   push ebx
// 009d7c6b  6689041f             mov word ptr [edi + ebx], ax
// 009d7c6f  ff151428b200         call dword ptr [0xb22814]
// 009d7c75  8bf0                 mov esi, eax
// 009d7c77  83c428               add esp, 0x28
// 009d7c7a  85f6                 test esi, esi
// 009d7c7c  75a2                 jne 0x9d7c20
// 009d7c7e  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 009d7c82  5f                   pop edi
// 009d7c83  5e                   pop esi
// 009d7c84  8bc5                 mov eax, ebp
// 009d7c86  5d                   pop ebp
// 009d7c87  5b                   pop ebx
// 009d7c88  83c410               add esp, 0x10
// 009d7c8b  c3                   ret 
// 009d7c8c  5f                   pop edi
// 009d7c8d  5e                   pop esi
// 009d7c8e  5d                   pop ebp
// 009d7c8f  33c0                 xor eax, eax
// 009d7c91  5b                   pop ebx
// 009d7c92  83c410               add esp, 0x10
// 009d7c95  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?REPLACEW_S@@YAHAAPA_WPB_W1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPPropExchange.cpp
