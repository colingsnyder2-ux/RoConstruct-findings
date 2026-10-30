// roc 2009-06 0072e510  unit: CXTPCommandBar  size: 449 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0072e510
//
// 0072e510  6aff                 push -1
// 0072e512  68f9568700           push 0x8756f9
// 0072e517  64a100000000         mov eax, dword ptr fs:[0]
// 0072e51d  50                   push eax
// 0072e51e  83ec14               sub esp, 0x14
// 0072e521  53                   push ebx
// 0072e522  55                   push ebp
// 0072e523  56                   push esi
// 0072e524  57                   push edi
// 0072e525  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0072e52a  33c4                 xor eax, esp
// 0072e52c  50                   push eax
// 0072e52d  8d442428             lea eax, [esp + 0x28]
// 0072e531  64a300000000         mov dword ptr fs:[0], eax
// 0072e537  8bf1                 mov esi, ecx
// 0072e539  89742420             mov dword ptr [esp + 0x20], esi
// 0072e53d  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 0072e543  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0072e549  6a01                 push 1
// 0072e54b  6a00                 push 0
// 0072e54d  6a01                 push 1
// 0072e54f  6a01                 push 1
// 0072e551  50                   push eax
// 0072e552  e899c10300           call 0x76a6f0
// 0072e557  8bf8                 mov edi, eax
// 0072e559  83cdff               or ebp, 0xffffffff
// 0072e55c  3bfd                 cmp edi, ebp
// 0072e55e  7507                 jne 0x72e567
// 0072e560  8bc5                 mov eax, ebp
// 0072e562  e93c010000           jmp 0x72e6a3
// 0072e567  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0072e56b  c70100000000         mov dword ptr [ecx], 0
// 0072e571  897c2424             mov dword ptr [esp + 0x24], edi
// 0072e575  896c2418             mov dword ptr [esp + 0x18], ebp
// 0072e579  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0072e57d  8d4900               lea ecx, [ecx]
// 0072e580  57                   push edi
// 0072e581  8bce                 mov ecx, esi
// 0072e583  e898fbffff           call 0x72e120
// 0072e588  8bd8                 mov ebx, eax
// 0072e58a  85db                 test ebx, ebx
// 0072e58c  74d2                 je 0x72e560
// 0072e58e  8b13                 mov edx, dword ptr [ebx]
// 0072e590  8b5258               mov edx, dword ptr [edx + 0x58]
// 0072e593  8d442414             lea eax, [esp + 0x14]
// 0072e597  50                   push eax
// 0072e598  8bcb                 mov ecx, ebx
// 0072e59a  ffd2                 call edx
// 0072e59c  8d4c2414             lea ecx, [esp + 0x14]
// 0072e5a0  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0072e5a8  ff155cfb8900         call dword ptr [0x89fb5c]
// 0072e5ae  84c0                 test al, al
// 0072e5b0  0f85ac000000         jne 0x72e662
// 0072e5b6  8b839c000000         mov eax, dword ptr [ebx + 0x9c]
// 0072e5bc  3bc5                 cmp eax, ebp
// 0072e5be  750f                 jne 0x72e5cf
// 0072e5c0  8b8b5c010000         mov ecx, dword ptr [ebx + 0x15c]
// 0072e5c6  85c9                 test ecx, ecx
// 0072e5c8  7405                 je 0x72e5cf
// 0072e5ca  e8d118ffff           call 0x71fea0
// 0072e5cf  85c0                 test eax, eax
// 0072e5d1  0f848b000000         je 0x72e662
// 0072e5d7  6a00                 push 0
// 0072e5d9  6a26                 push 0x26
// 0072e5db  8d4c241c             lea ecx, [esp + 0x1c]
// 0072e5df  ff1500008a00         call dword ptr [0x8a0000]
// 0072e5e5  8bf0                 mov esi, eax
// 0072e5e7  3bf5                 cmp esi, ebp
// 0072e5e9  7e19                 jle 0x72e604
// 0072e5eb  8d4c2414             lea ecx, [esp + 0x14]
// 0072e5ef  ff1554fb8900         call dword ptr [0x89fb54]
// 0072e5f5  48                   dec eax
// 0072e5f6  3bf0                 cmp esi, eax
// 0072e5f8  7d0a                 jge 0x72e604
// 0072e5fa  bd01000000           mov ebp, 1
// 0072e5ff  8d4601               lea eax, [esi + 1]
// 0072e602  eb04                 jmp 0x72e608
// 0072e604  33ed                 xor ebp, ebp
// 0072e606  33c0                 xor eax, eax
// 0072e608  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0072e60c  51                   push ecx
// 0072e60d  50                   push eax
// 0072e60e  8d4c241c             lea ecx, [esp + 0x1c]
// 0072e612  ff15e0f98900         call dword ptr [0x89f9e0]
// 0072e618  0fb6d0               movzx edx, al
// 0072e61b  52                   push edx
// 0072e61c  e81f670800           call 0x7b4d40
// 0072e621  83c408               add esp, 8
// 0072e624  85c0                 test eax, eax
// 0072e626  743a                 je 0x72e662
// 0072e628  85ed                 test ebp, ebp
// 0072e62a  7419                 je 0x72e645
// 0072e62c  8b742418             mov esi, dword ptr [esp + 0x18]
// 0072e630  83feff               cmp esi, -1
// 0072e633  0f8580000000         jne 0x72e6b9
// 0072e639  8b8380000000         mov eax, dword ptr [ebx + 0x80]
// 0072e63f  89442418             mov dword ptr [esp + 0x18], eax
// 0072e643  eb1d                 jmp 0x72e662
// 0072e645  837c241cff           cmp dword ptr [esp + 0x1c], -1
// 0072e64a  750c                 jne 0x72e658
// 0072e64c  8b8b80000000         mov ecx, dword ptr [ebx + 0x80]
// 0072e652  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0072e656  eb0a                 jmp 0x72e662
// 0072e658  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0072e65c  c70201000000         mov dword ptr [edx], 1
// 0072e662  8b742420             mov esi, dword ptr [esp + 0x20]
// 0072e666  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0072e66c  6a00                 push 0
// 0072e66e  6a00                 push 0
// 0072e670  6a01                 push 1
// 0072e672  6a01                 push 1
// 0072e674  57                   push edi
// 0072e675  e876c00300           call 0x76a6f0
// 0072e67a  83cdff               or ebp, 0xffffffff
// 0072e67d  8d4c2414             lea ecx, [esp + 0x14]
// 0072e681  8bf8                 mov edi, eax
// 0072e683  896c2430             mov dword ptr [esp + 0x30], ebp
// 0072e687  ff1510fd8900         call dword ptr [0x89fd10]
// 0072e68d  3b7c2424             cmp edi, dword ptr [esp + 0x24]
// 0072e691  0f85e9feffff         jne 0x72e580
// 0072e697  8b442418             mov eax, dword ptr [esp + 0x18]
// 0072e69b  3bc5                 cmp eax, ebp
// 0072e69d  7504                 jne 0x72e6a3
// 0072e69f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0072e6a3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0072e6a7  64890d00000000       mov dword ptr fs:[0], ecx
// 0072e6ae  59                   pop ecx
// 0072e6af  5f                   pop edi
// 0072e6b0  5e                   pop esi
// 0072e6b1  5d                   pop ebp
// 0072e6b2  5b                   pop ebx
// 0072e6b3  83c420               add esp, 0x20
// 0072e6b6  c20800               ret 8
// 0072e6b9  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0072e6bd  8d4c2414             lea ecx, [esp + 0x14]
// 0072e6c1  c70001000000         mov dword ptr [eax], 1
// 0072e6c7  ff1510fd8900         call dword ptr [0x89fd10]
// 0072e6cd  8bc6                 mov eax, esi
// 0072e6cf  ebd2                 jmp 0x72e6a3
// copied from an identical function in another client (function ?FindAccelEx@CXTPCommandBar@@QBEHIAAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPCommandBar.cpp