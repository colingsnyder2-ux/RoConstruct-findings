// roc 2010-06 0084c7e0  unit: CXTPRibbonBar  size: 689 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0084c7e0
//
// 0084c7e0  6aff                 push -1
// 0084c7e2  6899b99b00           push 0x9bb999
// 0084c7e7  64a100000000         mov eax, dword ptr fs:[0]
// 0084c7ed  50                   push eax
// 0084c7ee  51                   push ecx
// 0084c7ef  53                   push ebx
// 0084c7f0  55                   push ebp
// 0084c7f1  56                   push esi
// 0084c7f2  57                   push edi
// 0084c7f3  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0084c7f8  33c4                 xor eax, esp
// 0084c7fa  50                   push eax
// 0084c7fb  8d442418             lea eax, [esp + 0x18]
// 0084c7ff  64a300000000         mov dword ptr fs:[0], eax
// 0084c805  8bf1                 mov esi, ecx
// 0084c807  6a11                 push 0x11
// 0084c809  ff157cbc9e00         call dword ptr [0x9ebc7c]
// 0084c80f  6685c0               test ax, ax
// 0084c812  0f8cd5010000         jl 0x84c9ed
// 0084c818  8bce                 mov ecx, esi
// 0084c81a  e8b1bdf6ff           call 0x7b85d0
// 0084c81f  8be8                 mov ebp, eax
// 0084c821  8b442428             mov eax, dword ptr [esp + 0x28]
// 0084c825  83f812               cmp eax, 0x12
// 0084c828  0f8587000000         jne 0x84c8b5
// 0084c82e  8bce                 mov ecx, esi
// 0084c830  e8fbecffff           call 0x84b530
// 0084c835  85c0                 test eax, eax
// 0084c837  0f8ef6000000         jle 0x84c933
// 0084c83d  8bcd                 mov ecx, ebp
// 0084c83f  e86cd7f7ff           call 0x7c9fb0
// 0084c844  6a01                 push 1
// 0084c846  8bcd                 mov ecx, ebp
// 0084c848  e8c3d3f7ff           call 0x7c9c10
// 0084c84d  8bce                 mov ecx, esi
// 0084c84f  c7454401000000       mov dword ptr [ebp + 0x44], 1
// 0084c856  e815cbffff           call 0x849370
// 0084c85b  85c0                 test eax, eax
// 0084c85d  8b06                 mov eax, dword ptr [esi]
// 0084c85f  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 0084c865  6a01                 push 1
// 0084c867  7410                 je 0x84c879
// 0084c869  6a01                 push 1
// 0084c86b  6a01                 push 1
// 0084c86d  ffd2                 call edx
// 0084c86f  b801000000           mov eax, 1
// 0084c874  e976010000           jmp 0x84c9ef
// 0084c879  6a00                 push 0
// 0084c87b  6a01                 push 1
// 0084c87d  ffd2                 call edx
// 0084c87f  8b8e68020000         mov ecx, dword ptr [esi + 0x268]
// 0084c885  8b9180000000         mov edx, dword ptr [ecx + 0x80]
// 0084c88b  8b06                 mov eax, dword ptr [esi]
// 0084c88d  8b8050010000         mov eax, dword ptr [eax + 0x150]
// 0084c893  6a01                 push 1
// 0084c895  52                   push edx
// 0084c896  8bce                 mov ecx, esi
// 0084c898  ffd0                 call eax
// 0084c89a  8bb668020000         mov esi, dword ptr [esi + 0x268]
// 0084c8a0  8b16                 mov edx, dword ptr [esi]
// 0084c8a2  8b4270               mov eax, dword ptr [edx + 0x70]
// 0084c8a5  6a01                 push 1
// 0084c8a7  8bce                 mov ecx, esi
// 0084c8a9  ffd0                 call eax
// 0084c8ab  b801000000           mov eax, 1
// 0084c8b0  e93a010000           jmp 0x84c9ef
// 0084c8b5  8d48cf               lea ecx, [eax - 0x31]
// 0084c8b8  83f908               cmp ecx, 8
// 0084c8bb  7776                 ja 0x84c933
// 0084c8bd  8b8e64020000         mov ecx, dword ptr [esi + 0x264]
// 0084c8c3  83c0cf               add eax, -0x31
// 0084c8c6  6a00                 push 0
// 0084c8c8  50                   push eax
// 0084c8c9  e802dbfaff           call 0x7fa3d0
// 0084c8ce  8bf8                 mov edi, eax
// 0084c8d0  85ff                 test edi, edi
// 0084c8d2  745f                 je 0x84c933
// 0084c8d4  8bcf                 mov ecx, edi
// 0084c8d6  e8f56dc0ff           call 0x4536d0
// 0084c8db  85c0                 test eax, eax
// 0084c8dd  7454                 je 0x84c933
// 0084c8df  8b9f80000000         mov ebx, dword ptr [edi + 0x80]
// 0084c8e5  8bcd                 mov ecx, ebp
// 0084c8e7  e8c4d6f7ff           call 0x7c9fb0
// 0084c8ec  6a01                 push 1
// 0084c8ee  8bcd                 mov ecx, ebp
// 0084c8f0  e81bd3f7ff           call 0x7c9c10
// 0084c8f5  6a01                 push 1
// 0084c8f7  c7454402000000       mov dword ptr [ebp + 0x44], 2
// 0084c8fe  8b16                 mov edx, dword ptr [esi]
// 0084c900  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 0084c906  6a00                 push 0
// 0084c908  6a01                 push 1
// 0084c90a  8bce                 mov ecx, esi
// 0084c90c  ffd0                 call eax
// 0084c90e  8b16                 mov edx, dword ptr [esi]
// 0084c910  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 0084c916  6a01                 push 1
// 0084c918  53                   push ebx
// 0084c919  8bce                 mov ecx, esi
// 0084c91b  ffd0                 call eax
// 0084c91d  8b17                 mov edx, dword ptr [edi]
// 0084c91f  8b82b0000000         mov eax, dword ptr [edx + 0xb0]
// 0084c925  8bcf                 mov ecx, edi
// 0084c927  ffd0                 call eax
// 0084c929  b801000000           mov eax, 1
// 0084c92e  e9bc000000           jmp 0x84c9ef
// 0084c933  8bce                 mov ecx, esi
// 0084c935  33db                 xor ebx, ebx
// 0084c937  e8f4ebffff           call 0x84b530
// 0084c93c  85c0                 test eax, eax
// 0084c93e  0f8ea9000000         jle 0x84c9ed
// 0084c944  53                   push ebx
// 0084c945  8bce                 mov ecx, esi
// 0084c947  e864feffff           call 0x84c7b0
// 0084c94c  8d4c2414             lea ecx, [esp + 0x14]
// 0084c950  8bf8                 mov edi, eax
// 0084c952  51                   push ecx
// 0084c953  8bcf                 mov ecx, edi
// 0084c955  e846580300           call 0x8821a0
// 0084c95a  8d4c2414             lea ecx, [esp + 0x14]
// 0084c95e  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0084c966  ff15eccd9e00         call dword ptr [0x9ecdec]
// 0084c96c  84c0                 test al, al
// 0084c96e  755b                 jne 0x84c9cb
// 0084c970  8bcf                 mov ecx, edi
// 0084c972  e89971ffff           call 0x843b10
// 0084c977  85c0                 test eax, eax
// 0084c979  7450                 je 0x84c9cb
// 0084c97b  8bcf                 mov ecx, edi
// 0084c97d  e86e580300           call 0x8821f0
// 0084c982  85c0                 test eax, eax
// 0084c984  7445                 je 0x84c9cb
// 0084c986  6a00                 push 0
// 0084c988  6a26                 push 0x26
// 0084c98a  8d4c241c             lea ecx, [esp + 0x1c]
// 0084c98e  ff1578c69e00         call dword ptr [0x9ec678]
// 0084c994  8bf8                 mov edi, eax
// 0084c996  83ffff               cmp edi, -1
// 0084c999  7e30                 jle 0x84c9cb
// 0084c99b  8d4c2414             lea ecx, [esp + 0x14]
// 0084c99f  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0084c9a5  48                   dec eax
// 0084c9a6  3bf8                 cmp edi, eax
// 0084c9a8  7d21                 jge 0x84c9cb
// 0084c9aa  8b542428             mov edx, dword ptr [esp + 0x28]
// 0084c9ae  52                   push edx
// 0084c9af  47                   inc edi
// 0084c9b0  57                   push edi
// 0084c9b1  8d4c241c             lea ecx, [esp + 0x1c]
// 0084c9b5  ff1558c59e00         call dword ptr [0x9ec558]
// 0084c9bb  0fb6c0               movzx eax, al
// 0084c9be  50                   push eax
// 0084c9bf  e88c65ffff           call 0x842f50
// 0084c9c4  83c408               add esp, 8
// 0084c9c7  85c0                 test eax, eax
// 0084c9c9  753a                 jne 0x84ca05
// 0084c9cb  8d4c2414             lea ecx, [esp + 0x14]
// 0084c9cf  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0084c9d7  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0084c9dd  8bce                 mov ecx, esi
// 0084c9df  43                   inc ebx
// 0084c9e0  e84bebffff           call 0x84b530
// 0084c9e5  3bd8                 cmp ebx, eax
// 0084c9e7  0f8c57ffffff         jl 0x84c944
// 0084c9ed  33c0                 xor eax, eax
// 0084c9ef  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0084c9f3  64890d00000000       mov dword ptr fs:[0], ecx
// 0084c9fa  59                   pop ecx
// 0084c9fb  5f                   pop edi
// 0084c9fc  5e                   pop esi
// 0084c9fd  5d                   pop ebp
// 0084c9fe  5b                   pop ebx
// 0084c9ff  83c410               add esp, 0x10
// 0084ca02  c20400               ret 4
// 0084ca05  83bee000000000       cmp dword ptr [esi + 0xe0], 0
// 0084ca0c  7507                 jne 0x84ca15
// 0084ca0e  8bcd                 mov ecx, ebp
// 0084ca10  e89bd5f7ff           call 0x7c9fb0
// 0084ca15  bf01000000           mov edi, 1
// 0084ca1a  57                   push edi
// 0084ca1b  8bcd                 mov ecx, ebp
// 0084ca1d  e8eed1f7ff           call 0x7c9c10
// 0084ca22  89be30010000         mov dword ptr [esi + 0x130], edi
// 0084ca28  53                   push ebx
// 0084ca29  8bce                 mov ecx, esi
// 0084ca2b  897d44               mov dword ptr [ebp + 0x44], edi
// 0084ca2e  e8bdc4ffff           call 0x848ef0
// 0084ca33  8b16                 mov edx, dword ptr [esi]
// 0084ca35  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 0084ca3b  57                   push edi
// 0084ca3c  6a00                 push 0
// 0084ca3e  57                   push edi
// 0084ca3f  8bce                 mov ecx, esi
// 0084ca41  ffd0                 call eax
// 0084ca43  8b8668020000         mov eax, dword ptr [esi + 0x268]
// 0084ca49  8b8880000000         mov ecx, dword ptr [eax + 0x80]
// 0084ca4f  8b16                 mov edx, dword ptr [esi]
// 0084ca51  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 0084ca57  57                   push edi
// 0084ca58  51                   push ecx
// 0084ca59  8bce                 mov ecx, esi
// 0084ca5b  ffd2                 call edx
// 0084ca5d  8b8e68020000         mov ecx, dword ptr [esi + 0x268]
// 0084ca63  8b01                 mov eax, dword ptr [ecx]
// 0084ca65  8b5070               mov edx, dword ptr [eax + 0x70]
// 0084ca68  57                   push edi
// 0084ca69  ffd2                 call edx
// 0084ca6b  8bce                 mov ecx, esi
// 0084ca6d  e8fec8ffff           call 0x849370
// 0084ca72  85c0                 test eax, eax
// 0084ca74  750a                 jne 0x84ca80
// 0084ca76  6a02                 push 2
// 0084ca78  56                   push esi
// 0084ca79  8bcd                 mov ecx, ebp
// 0084ca7b  e830e5f7ff           call 0x7cafb0
// 0084ca80  8d4c2414             lea ecx, [esp + 0x14]
// 0084ca84  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0084ca8a  8bc7                 mov eax, edi
// 0084ca8c  e95effffff           jmp 0x84c9ef
// copied from an identical function in another client (function ?PreviewAccel@CXTPRibbonBar@@UAEHI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Ribbon\XTPRibbonBar.cpp