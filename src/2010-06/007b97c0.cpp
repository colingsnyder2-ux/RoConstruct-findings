// roc 2010-06 007b97c0  unit: CXTPCommandBar  size: 449 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b97c0
//
// 007b97c0  6aff                 push -1
// 007b97c2  6819f49a00           push 0x9af419
// 007b97c7  64a100000000         mov eax, dword ptr fs:[0]
// 007b97cd  50                   push eax
// 007b97ce  83ec14               sub esp, 0x14
// 007b97d1  53                   push ebx
// 007b97d2  55                   push ebp
// 007b97d3  56                   push esi
// 007b97d4  57                   push edi
// 007b97d5  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007b97da  33c4                 xor eax, esp
// 007b97dc  50                   push eax
// 007b97dd  8d442428             lea eax, [esp + 0x28]
// 007b97e1  64a300000000         mov dword ptr fs:[0], eax
// 007b97e7  8bf1                 mov esi, ecx
// 007b97e9  89742420             mov dword ptr [esp + 0x20], esi
// 007b97ed  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 007b97f3  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 007b97f9  6a01                 push 1
// 007b97fb  6a00                 push 0
// 007b97fd  6a01                 push 1
// 007b97ff  6a01                 push 1
// 007b9801  50                   push eax
// 007b9802  e869fd0300           call 0x7f9570
// 007b9807  8bf8                 mov edi, eax
// 007b9809  83cdff               or ebp, 0xffffffff
// 007b980c  3bfd                 cmp edi, ebp
// 007b980e  7507                 jne 0x7b9817
// 007b9810  8bc5                 mov eax, ebp
// 007b9812  e93c010000           jmp 0x7b9953
// 007b9817  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007b981b  c70100000000         mov dword ptr [ecx], 0
// 007b9821  897c2424             mov dword ptr [esp + 0x24], edi
// 007b9825  896c2418             mov dword ptr [esp + 0x18], ebp
// 007b9829  896c241c             mov dword ptr [esp + 0x1c], ebp
// 007b982d  8d4900               lea ecx, [ecx]
// 007b9830  57                   push edi
// 007b9831  8bce                 mov ecx, esi
// 007b9833  e898fbffff           call 0x7b93d0
// 007b9838  8bd8                 mov ebx, eax
// 007b983a  85db                 test ebx, ebx
// 007b983c  74d2                 je 0x7b9810
// 007b983e  8b13                 mov edx, dword ptr [ebx]
// 007b9840  8b5258               mov edx, dword ptr [edx + 0x58]
// 007b9843  8d442414             lea eax, [esp + 0x14]
// 007b9847  50                   push eax
// 007b9848  8bcb                 mov ecx, ebx
// 007b984a  ffd2                 call edx
// 007b984c  8d4c2414             lea ecx, [esp + 0x14]
// 007b9850  c744243000000000     mov dword ptr [esp + 0x30], 0
// 007b9858  ff15eccd9e00         call dword ptr [0x9ecdec]
// 007b985e  84c0                 test al, al
// 007b9860  0f85ac000000         jne 0x7b9912
// 007b9866  8b839c000000         mov eax, dword ptr [ebx + 0x9c]
// 007b986c  3bc5                 cmp eax, ebp
// 007b986e  750f                 jne 0x7b987f
// 007b9870  8b8b5c010000         mov ecx, dword ptr [ebx + 0x15c]
// 007b9876  85c9                 test ecx, ecx
// 007b9878  7405                 je 0x7b987f
// 007b987a  e8110effff           call 0x7aa690
// 007b987f  85c0                 test eax, eax
// 007b9881  0f848b000000         je 0x7b9912
// 007b9887  6a00                 push 0
// 007b9889  6a26                 push 0x26
// 007b988b  8d4c241c             lea ecx, [esp + 0x1c]
// 007b988f  ff1578c69e00         call dword ptr [0x9ec678]
// 007b9895  8bf0                 mov esi, eax
// 007b9897  3bf5                 cmp esi, ebp
// 007b9899  7e19                 jle 0x7b98b4
// 007b989b  8d4c2414             lea ecx, [esp + 0x14]
// 007b989f  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007b98a5  48                   dec eax
// 007b98a6  3bf0                 cmp esi, eax
// 007b98a8  7d0a                 jge 0x7b98b4
// 007b98aa  bd01000000           mov ebp, 1
// 007b98af  8d4601               lea eax, [esi + 1]
// 007b98b2  eb04                 jmp 0x7b98b8
// 007b98b4  33ed                 xor ebp, ebp
// 007b98b6  33c0                 xor eax, eax
// 007b98b8  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007b98bc  51                   push ecx
// 007b98bd  50                   push eax
// 007b98be  8d4c241c             lea ecx, [esp + 0x1c]
// 007b98c2  ff1558c59e00         call dword ptr [0x9ec558]
// 007b98c8  0fb6d0               movzx edx, al
// 007b98cb  52                   push edx
// 007b98cc  e87f960800           call 0x842f50
// 007b98d1  83c408               add esp, 8
// 007b98d4  85c0                 test eax, eax
// 007b98d6  743a                 je 0x7b9912
// 007b98d8  85ed                 test ebp, ebp
// 007b98da  7419                 je 0x7b98f5
// 007b98dc  8b742418             mov esi, dword ptr [esp + 0x18]
// 007b98e0  83feff               cmp esi, -1
// 007b98e3  0f8580000000         jne 0x7b9969
// 007b98e9  8b8380000000         mov eax, dword ptr [ebx + 0x80]
// 007b98ef  89442418             mov dword ptr [esp + 0x18], eax
// 007b98f3  eb1d                 jmp 0x7b9912
// 007b98f5  837c241cff           cmp dword ptr [esp + 0x1c], -1
// 007b98fa  750c                 jne 0x7b9908
// 007b98fc  8b8b80000000         mov ecx, dword ptr [ebx + 0x80]
// 007b9902  894c241c             mov dword ptr [esp + 0x1c], ecx
// 007b9906  eb0a                 jmp 0x7b9912
// 007b9908  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007b990c  c70201000000         mov dword ptr [edx], 1
// 007b9912  8b742420             mov esi, dword ptr [esp + 0x20]
// 007b9916  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 007b991c  6a00                 push 0
// 007b991e  6a00                 push 0
// 007b9920  6a01                 push 1
// 007b9922  6a01                 push 1
// 007b9924  57                   push edi
// 007b9925  e846fc0300           call 0x7f9570
// 007b992a  83cdff               or ebp, 0xffffffff
// 007b992d  8d4c2414             lea ecx, [esp + 0x14]
// 007b9931  8bf8                 mov edi, eax
// 007b9933  896c2430             mov dword ptr [esp + 0x30], ebp
// 007b9937  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007b993d  3b7c2424             cmp edi, dword ptr [esp + 0x24]
// 007b9941  0f85e9feffff         jne 0x7b9830
// 007b9947  8b442418             mov eax, dword ptr [esp + 0x18]
// 007b994b  3bc5                 cmp eax, ebp
// 007b994d  7504                 jne 0x7b9953
// 007b994f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007b9953  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007b9957  64890d00000000       mov dword ptr fs:[0], ecx
// 007b995e  59                   pop ecx
// 007b995f  5f                   pop edi
// 007b9960  5e                   pop esi
// 007b9961  5d                   pop ebp
// 007b9962  5b                   pop ebx
// 007b9963  83c420               add esp, 0x20
// 007b9966  c20800               ret 8
// 007b9969  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007b996d  8d4c2414             lea ecx, [esp + 0x14]
// 007b9971  c70001000000         mov dword ptr [eax], 1
// 007b9977  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007b997d  8bc6                 mov eax, esi
// 007b997f  ebd2                 jmp 0x7b9953
// copied from an identical function in another client (function ?FindAccelEx@CXTPCommandBar@@QBEHIAAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPCommandBar.cpp