// roc 2011-06 0081bc10  unit: CXTPCommandBar  size: 449 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081bc10
//
// 0081bc10  6aff                 push -1
// 0081bc12  68f92ca000           push 0xa02cf9
// 0081bc17  64a100000000         mov eax, dword ptr fs:[0]
// 0081bc1d  50                   push eax
// 0081bc1e  83ec14               sub esp, 0x14
// 0081bc21  53                   push ebx
// 0081bc22  55                   push ebp
// 0081bc23  56                   push esi
// 0081bc24  57                   push edi
// 0081bc25  a12058c900           mov eax, dword ptr [0xc95820]
// 0081bc2a  33c4                 xor eax, esp
// 0081bc2c  50                   push eax
// 0081bc2d  8d442428             lea eax, [esp + 0x28]
// 0081bc31  64a300000000         mov dword ptr fs:[0], eax
// 0081bc37  8bf1                 mov esi, ecx
// 0081bc39  89742420             mov dword ptr [esp + 0x20], esi
// 0081bc3d  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 0081bc43  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0081bc49  6a01                 push 1
// 0081bc4b  6a00                 push 0
// 0081bc4d  6a01                 push 1
// 0081bc4f  6a01                 push 1
// 0081bc51  50                   push eax
// 0081bc52  e859b20300           call 0x856eb0
// 0081bc57  8bf8                 mov edi, eax
// 0081bc59  83cdff               or ebp, 0xffffffff
// 0081bc5c  3bfd                 cmp edi, ebp
// 0081bc5e  7507                 jne 0x81bc67
// 0081bc60  8bc5                 mov eax, ebp
// 0081bc62  e93c010000           jmp 0x81bda3
// 0081bc67  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0081bc6b  c70100000000         mov dword ptr [ecx], 0
// 0081bc71  897c2424             mov dword ptr [esp + 0x24], edi
// 0081bc75  896c2418             mov dword ptr [esp + 0x18], ebp
// 0081bc79  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0081bc7d  8d4900               lea ecx, [ecx]
// 0081bc80  57                   push edi
// 0081bc81  8bce                 mov ecx, esi
// 0081bc83  e898fbffff           call 0x81b820
// 0081bc88  8bd8                 mov ebx, eax
// 0081bc8a  85db                 test ebx, ebx
// 0081bc8c  74d2                 je 0x81bc60
// 0081bc8e  8b13                 mov edx, dword ptr [ebx]
// 0081bc90  8b5258               mov edx, dword ptr [edx + 0x58]
// 0081bc93  8d442414             lea eax, [esp + 0x14]
// 0081bc97  50                   push eax
// 0081bc98  8bcb                 mov ecx, ebx
// 0081bc9a  ffd2                 call edx
// 0081bc9c  8d4c2414             lea ecx, [esp + 0x14]
// 0081bca0  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0081bca8  ff15b026a400         call dword ptr [0xa426b0]
// 0081bcae  84c0                 test al, al
// 0081bcb0  0f85ac000000         jne 0x81bd62
// 0081bcb6  8b839c000000         mov eax, dword ptr [ebx + 0x9c]
// 0081bcbc  3bc5                 cmp eax, ebp
// 0081bcbe  750f                 jne 0x81bccf
// 0081bcc0  8b8b5c010000         mov ecx, dword ptr [ebx + 0x15c]
// 0081bcc6  85c9                 test ecx, ecx
// 0081bcc8  7405                 je 0x81bccf
// 0081bcca  e8910fffff           call 0x80cc60
// 0081bccf  85c0                 test eax, eax
// 0081bcd1  0f848b000000         je 0x81bd62
// 0081bcd7  6a00                 push 0
// 0081bcd9  6a26                 push 0x26
// 0081bcdb  8d4c241c             lea ecx, [esp + 0x1c]
// 0081bcdf  ff154c27a400         call dword ptr [0xa4274c]
// 0081bce5  8bf0                 mov esi, eax
// 0081bce7  3bf5                 cmp esi, ebp
// 0081bce9  7e19                 jle 0x81bd04
// 0081bceb  8d4c2414             lea ecx, [esp + 0x14]
// 0081bcef  ff15a826a400         call dword ptr [0xa426a8]
// 0081bcf5  48                   dec eax
// 0081bcf6  3bf0                 cmp esi, eax
// 0081bcf8  7d0a                 jge 0x81bd04
// 0081bcfa  bd01000000           mov ebp, 1
// 0081bcff  8d4601               lea eax, [esi + 1]
// 0081bd02  eb04                 jmp 0x81bd08
// 0081bd04  33ed                 xor ebp, ebp
// 0081bd06  33c0                 xor eax, eax
// 0081bd08  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0081bd0c  51                   push ecx
// 0081bd0d  50                   push eax
// 0081bd0e  8d4c241c             lea ecx, [esp + 0x1c]
// 0081bd12  ff153c25a400         call dword ptr [0xa4253c]
// 0081bd18  0fb6d0               movzx edx, al
// 0081bd1b  52                   push edx
// 0081bd1c  e8ef430800           call 0x8a0110
// 0081bd21  83c408               add esp, 8
// 0081bd24  85c0                 test eax, eax
// 0081bd26  743a                 je 0x81bd62
// 0081bd28  85ed                 test ebp, ebp
// 0081bd2a  7419                 je 0x81bd45
// 0081bd2c  8b742418             mov esi, dword ptr [esp + 0x18]
// 0081bd30  83feff               cmp esi, -1
// 0081bd33  0f8580000000         jne 0x81bdb9
// 0081bd39  8b8380000000         mov eax, dword ptr [ebx + 0x80]
// 0081bd3f  89442418             mov dword ptr [esp + 0x18], eax
// 0081bd43  eb1d                 jmp 0x81bd62
// 0081bd45  837c241cff           cmp dword ptr [esp + 0x1c], -1
// 0081bd4a  750c                 jne 0x81bd58
// 0081bd4c  8b8b80000000         mov ecx, dword ptr [ebx + 0x80]
// 0081bd52  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0081bd56  eb0a                 jmp 0x81bd62
// 0081bd58  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0081bd5c  c70201000000         mov dword ptr [edx], 1
// 0081bd62  8b742420             mov esi, dword ptr [esp + 0x20]
// 0081bd66  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0081bd6c  6a00                 push 0
// 0081bd6e  6a00                 push 0
// 0081bd70  6a01                 push 1
// 0081bd72  6a01                 push 1
// 0081bd74  57                   push edi
// 0081bd75  e836b10300           call 0x856eb0
// 0081bd7a  83cdff               or ebp, 0xffffffff
// 0081bd7d  8d4c2414             lea ecx, [esp + 0x14]
// 0081bd81  8bf8                 mov edi, eax
// 0081bd83  896c2430             mov dword ptr [esp + 0x30], ebp
// 0081bd87  ff15082ea400         call dword ptr [0xa42e08]
// 0081bd8d  3b7c2424             cmp edi, dword ptr [esp + 0x24]
// 0081bd91  0f85e9feffff         jne 0x81bc80
// 0081bd97  8b442418             mov eax, dword ptr [esp + 0x18]
// 0081bd9b  3bc5                 cmp eax, ebp
// 0081bd9d  7504                 jne 0x81bda3
// 0081bd9f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0081bda3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0081bda7  64890d00000000       mov dword ptr fs:[0], ecx
// 0081bdae  59                   pop ecx
// 0081bdaf  5f                   pop edi
// 0081bdb0  5e                   pop esi
// 0081bdb1  5d                   pop ebp
// 0081bdb2  5b                   pop ebx
// 0081bdb3  83c420               add esp, 0x20
// 0081bdb6  c20800               ret 8
// 0081bdb9  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0081bdbd  8d4c2414             lea ecx, [esp + 0x14]
// 0081bdc1  c70001000000         mov dword ptr [eax], 1
// 0081bdc7  ff15082ea400         call dword ptr [0xa42e08]
// 0081bdcd  8bc6                 mov eax, esi
// 0081bdcf  ebd2                 jmp 0x81bda3
// copied from an identical function in another client (function ?FindAccelEx@CXTPCommandBar@@QBEHIAAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPCommandBar.cpp