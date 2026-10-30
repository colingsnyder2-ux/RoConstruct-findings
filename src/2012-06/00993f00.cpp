// roc 2012-06 00993f00  unit: CXTPCommandBar  size: 449 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00993f00
//
// 00993f00  6aff                 push -1
// 00993f02  68e9c9ad00           push 0xadc9e9
// 00993f07  64a100000000         mov eax, dword ptr fs:[0]
// 00993f0d  50                   push eax
// 00993f0e  83ec14               sub esp, 0x14
// 00993f11  53                   push ebx
// 00993f12  55                   push ebp
// 00993f13  56                   push esi
// 00993f14  57                   push edi
// 00993f15  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00993f1a  33c4                 xor eax, esp
// 00993f1c  50                   push eax
// 00993f1d  8d442428             lea eax, [esp + 0x28]
// 00993f21  64a300000000         mov dword ptr fs:[0], eax
// 00993f27  8bf1                 mov esi, ecx
// 00993f29  89742420             mov dword ptr [esp + 0x20], esi
// 00993f2d  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00993f33  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00993f39  6a01                 push 1
// 00993f3b  6a00                 push 0
// 00993f3d  6a01                 push 1
// 00993f3f  6a01                 push 1
// 00993f41  50                   push eax
// 00993f42  e839b40300           call 0x9cf380
// 00993f47  8bf8                 mov edi, eax
// 00993f49  83cdff               or ebp, 0xffffffff
// 00993f4c  3bfd                 cmp edi, ebp
// 00993f4e  7507                 jne 0x993f57
// 00993f50  8bc5                 mov eax, ebp
// 00993f52  e93c010000           jmp 0x994093
// 00993f57  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00993f5b  c70100000000         mov dword ptr [ecx], 0
// 00993f61  897c2424             mov dword ptr [esp + 0x24], edi
// 00993f65  896c2418             mov dword ptr [esp + 0x18], ebp
// 00993f69  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00993f6d  8d4900               lea ecx, [ecx]
// 00993f70  57                   push edi
// 00993f71  8bce                 mov ecx, esi
// 00993f73  e898fbffff           call 0x993b10
// 00993f78  8bd8                 mov ebx, eax
// 00993f7a  85db                 test ebx, ebx
// 00993f7c  74d2                 je 0x993f50
// 00993f7e  8b13                 mov edx, dword ptr [ebx]
// 00993f80  8b5258               mov edx, dword ptr [edx + 0x58]
// 00993f83  8d442414             lea eax, [esp + 0x14]
// 00993f87  50                   push eax
// 00993f88  8bcb                 mov ecx, ebx
// 00993f8a  ffd2                 call edx
// 00993f8c  8d4c2414             lea ecx, [esp + 0x14]
// 00993f90  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00993f98  ff156046b200         call dword ptr [0xb24660]
// 00993f9e  84c0                 test al, al
// 00993fa0  0f85ac000000         jne 0x994052
// 00993fa6  8b839c000000         mov eax, dword ptr [ebx + 0x9c]
// 00993fac  3bc5                 cmp eax, ebp
// 00993fae  750f                 jne 0x993fbf
// 00993fb0  8b8b5c010000         mov ecx, dword ptr [ebx + 0x15c]
// 00993fb6  85c9                 test ecx, ecx
// 00993fb8  7405                 je 0x993fbf
// 00993fba  e8610fffff           call 0x984f20
// 00993fbf  85c0                 test eax, eax
// 00993fc1  0f848b000000         je 0x994052
// 00993fc7  6a00                 push 0
// 00993fc9  6a26                 push 0x26
// 00993fcb  8d4c241c             lea ecx, [esp + 0x1c]
// 00993fcf  ff15f447b200         call dword ptr [0xb247f4]
// 00993fd5  8bf0                 mov esi, eax
// 00993fd7  3bf5                 cmp esi, ebp
// 00993fd9  7e19                 jle 0x993ff4
// 00993fdb  8d4c2414             lea ecx, [esp + 0x14]
// 00993fdf  ff155846b200         call dword ptr [0xb24658]
// 00993fe5  48                   dec eax
// 00993fe6  3bf0                 cmp esi, eax
// 00993fe8  7d0a                 jge 0x993ff4
// 00993fea  bd01000000           mov ebp, 1
// 00993fef  8d4601               lea eax, [esi + 1]
// 00993ff2  eb04                 jmp 0x993ff8
// 00993ff4  33ed                 xor ebp, ebp
// 00993ff6  33c0                 xor eax, eax
// 00993ff8  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00993ffc  51                   push ecx
// 00993ffd  50                   push eax
// 00993ffe  8d4c241c             lea ecx, [esp + 0x1c]
// 00994002  ff15e844b200         call dword ptr [0xb244e8]
// 00994008  0fb6d0               movzx edx, al
// 0099400b  52                   push edx
// 0099400c  e83f450800           call 0xa18550
// 00994011  83c408               add esp, 8
// 00994014  85c0                 test eax, eax
// 00994016  743a                 je 0x994052
// 00994018  85ed                 test ebp, ebp
// 0099401a  7419                 je 0x994035
// 0099401c  8b742418             mov esi, dword ptr [esp + 0x18]
// 00994020  83feff               cmp esi, -1
// 00994023  0f8580000000         jne 0x9940a9
// 00994029  8b8380000000         mov eax, dword ptr [ebx + 0x80]
// 0099402f  89442418             mov dword ptr [esp + 0x18], eax
// 00994033  eb1d                 jmp 0x994052
// 00994035  837c241cff           cmp dword ptr [esp + 0x1c], -1
// 0099403a  750c                 jne 0x994048
// 0099403c  8b8b80000000         mov ecx, dword ptr [ebx + 0x80]
// 00994042  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00994046  eb0a                 jmp 0x994052
// 00994048  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0099404c  c70201000000         mov dword ptr [edx], 1
// 00994052  8b742420             mov esi, dword ptr [esp + 0x20]
// 00994056  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0099405c  6a00                 push 0
// 0099405e  6a00                 push 0
// 00994060  6a01                 push 1
// 00994062  6a01                 push 1
// 00994064  57                   push edi
// 00994065  e816b30300           call 0x9cf380
// 0099406a  83cdff               or ebp, 0xffffffff
// 0099406d  8d4c2414             lea ecx, [esp + 0x14]
// 00994071  8bf8                 mov edi, eax
// 00994073  896c2430             mov dword ptr [esp + 0x30], ebp
// 00994077  ff15d047b200         call dword ptr [0xb247d0]
// 0099407d  3b7c2424             cmp edi, dword ptr [esp + 0x24]
// 00994081  0f85e9feffff         jne 0x993f70
// 00994087  8b442418             mov eax, dword ptr [esp + 0x18]
// 0099408b  3bc5                 cmp eax, ebp
// 0099408d  7504                 jne 0x994093
// 0099408f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00994093  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00994097  64890d00000000       mov dword ptr fs:[0], ecx
// 0099409e  59                   pop ecx
// 0099409f  5f                   pop edi
// 009940a0  5e                   pop esi
// 009940a1  5d                   pop ebp
// 009940a2  5b                   pop ebx
// 009940a3  83c420               add esp, 0x20
// 009940a6  c20800               ret 8
// 009940a9  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 009940ad  8d4c2414             lea ecx, [esp + 0x14]
// 009940b1  c70001000000         mov dword ptr [eax], 1
// 009940b7  ff15d047b200         call dword ptr [0xb247d0]
// 009940bd  8bc6                 mov eax, esi
// 009940bf  ebd2                 jmp 0x994093
// copied from an identical function in another client (function ?FindAccelEx@CXTPCommandBar@@QBEHIAAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPCommandBar.cpp