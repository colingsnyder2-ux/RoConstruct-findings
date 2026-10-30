// roc 2010-06 00805210  unit: CXTPPropExchange  size: 443 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00805210
//
// 00805210  6aff                 push -1
// 00805212  6852379b00           push 0x9b3752
// 00805217  64a100000000         mov eax, dword ptr fs:[0]
// 0080521d  50                   push eax
// 0080521e  51                   push ecx
// 0080521f  53                   push ebx
// 00805220  55                   push ebp
// 00805221  56                   push esi
// 00805222  57                   push edi
// 00805223  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00805228  33c4                 xor eax, esp
// 0080522a  50                   push eax
// 0080522b  8d442418             lea eax, [esp + 0x18]
// 0080522f  64a300000000         mov dword ptr fs:[0], eax
// 00805235  8be9                 mov ebp, ecx
// 00805237  837d2800             cmp dword ptr [ebp + 0x28], 0
// 0080523b  8d4c2414             lea ecx, [esp + 0x14]
// 0080523f  0f858c000000         jne 0x8052d1
// 00805245  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 0080524b  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0080524f  8b07                 mov eax, dword ptr [edi]
// 00805251  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00805259  85c0                 test eax, eax
// 0080525b  7657                 jbe 0x8052b4
// 0080525d  8d440001             lea eax, [eax + eax + 1]
// 00805261  50                   push eax
// 00805262  e81b2afaff           call 0x7a7c82
// 00805267  8bf0                 mov esi, eax
// 00805269  33c0                 xor eax, eax
// 0080526b  83c404               add esp, 4
// 0080526e  3907                 cmp dword ptr [edi], eax
// 00805270  7628                 jbe 0x80529a
// 00805272  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00805276  8b11                 mov edx, dword ptr [ecx]
// 00805278  0fb61410             movzx edx, byte ptr [eax + edx]
// 0080527c  80e20f               and dl, 0xf
// 0080527f  80c241               add dl, 0x41
// 00805282  881446               mov byte ptr [esi + eax*2], dl
// 00805285  8b11                 mov edx, dword ptr [ecx]
// 00805287  0fb61410             movzx edx, byte ptr [eax + edx]
// 0080528b  c0ea04               shr dl, 4
// 0080528e  80c241               add dl, 0x41
// 00805291  88544601             mov byte ptr [esi + eax*2 + 1], dl
// 00805295  40                   inc eax
// 00805296  3b07                 cmp eax, dword ptr [edi]
// 00805298  72dc                 jb 0x805276
// 0080529a  8b07                 mov eax, dword ptr [edi]
// 0080529c  56                   push esi
// 0080529d  8d4c2418             lea ecx, [esp + 0x18]
// 008052a1  c6044600             mov byte ptr [esi + eax*2], 0
// 008052a5  ff158cce9e00         call dword ptr [0x9ece8c]
// 008052ab  56                   push esi
// 008052ac  e89529faff           call 0x7a7c46
// 008052b1  83c404               add esp, 4
// 008052b4  8b542428             mov edx, dword ptr [esp + 0x28]
// 008052b8  68fe08a000           push 0xa008fe
// 008052bd  8d4c2418             lea ecx, [esp + 0x18]
// 008052c1  51                   push ecx
// 008052c2  52                   push edx
// 008052c3  55                   push ebp
// 008052c4  e867f8ffff           call 0x804b30
// 008052c9  83c410               add esp, 0x10
// 008052cc  e9d5000000           jmp 0x8053a6
// 008052d1  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 008052d7  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008052db  8d442414             lea eax, [esp + 0x14]
// 008052df  50                   push eax
// 008052e0  51                   push ecx
// 008052e1  55                   push ebp
// 008052e2  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 008052ea  e811f8ffff           call 0x804b00
// 008052ef  83c40c               add esp, 0xc
// 008052f2  8d4c2414             lea ecx, [esp + 0x14]
// 008052f6  85c0                 test eax, eax
// 008052f8  745d                 je 0x805357
// 008052fa  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00805300  85c0                 test eax, eax
// 00805302  0f8e9e000000         jle 0x8053a6
// 00805308  8d4c2414             lea ecx, [esp + 0x14]
// 0080530c  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00805312  8bf8                 mov edi, eax
// 00805314  85ff                 test edi, edi
// 00805316  743b                 je 0x805353
// 00805318  8bd7                 mov edx, edi
// 0080531a  81e201000080         and edx, 0x80000001
// 00805320  7905                 jns 0x805327
// 00805322  4a                   dec edx
// 00805323  83cafe               or edx, 0xfffffffe
// 00805326  42                   inc edx
// 00805327  752a                 jne 0x805353
// 00805329  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0080532d  99                   cdq 
// 0080532e  2bc2                 sub eax, edx
// 00805330  8bf0                 mov esi, eax
// 00805332  d1fe                 sar esi, 1
// 00805334  837d0000             cmp dword ptr [ebp], 0
// 00805338  7527                 jne 0x805361
// 0080533a  56                   push esi
// 0080533b  ff15c8a89e00         call dword ptr [0x9ea8c8]
// 00805341  894500               mov dword ptr [ebp], eax
// 00805344  8b442434             mov eax, dword ptr [esp + 0x34]
// 00805348  83c404               add esp, 4
// 0080534b  8930                 mov dword ptr [eax], esi
// 0080534d  837d0000             cmp dword ptr [ebp], 0
// 00805351  7516                 jne 0x805369
// 00805353  8d4c2414             lea ecx, [esp + 0x14]
// 00805357  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0080535d  33c0                 xor eax, eax
// 0080535f  eb54                 jmp 0x8053b5
// 00805361  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00805365  3931                 cmp dword ptr [ecx], esi
// 00805367  72ea                 jb 0x805353
// 00805369  33f6                 xor esi, esi
// 0080536b  85ff                 test edi, edi
// 0080536d  7e37                 jle 0x8053a6
// 0080536f  90                   nop 
// 00805370  8d5601               lea edx, [esi + 1]
// 00805373  52                   push edx
// 00805374  8d4c2418             lea ecx, [esp + 0x18]
// 00805378  ff1558c59e00         call dword ptr [0x9ec558]
// 0080537e  8ad8                 mov bl, al
// 00805380  fecb                 dec bl
// 00805382  c0e304               shl bl, 4
// 00805385  56                   push esi
// 00805386  8d4c2418             lea ecx, [esp + 0x18]
// 0080538a  80eb41               sub bl, 0x41
// 0080538d  ff1558c59e00         call dword ptr [0x9ec558]
// 00805393  8b5500               mov edx, dword ptr [ebp]
// 00805396  8bce                 mov ecx, esi
// 00805398  02c3                 add al, bl
// 0080539a  d1e9                 shr ecx, 1
// 0080539c  83c602               add esi, 2
// 0080539f  3bf7                 cmp esi, edi
// 008053a1  880411               mov byte ptr [ecx + edx], al
// 008053a4  7cca                 jl 0x805370
// 008053a6  8d4c2414             lea ecx, [esp + 0x14]
// 008053aa  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 008053b0  b801000000           mov eax, 1
// 008053b5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008053b9  64890d00000000       mov dword ptr fs:[0], ecx
// 008053c0  59                   pop ecx
// 008053c1  5f                   pop edi
// 008053c2  5e                   pop esi
// 008053c3  5d                   pop ebp
// 008053c4  5b                   pop ebx
// 008053c5  83c410               add esp, 0x10
// 008053c8  c20c00               ret 0xc
// copied from an identical function in another client (function ?ExchangeBlobProp@CXTPPropExchange@@UAEHPBDAAPAEAAK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPPropExchange.cpp