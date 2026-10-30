// roc 2009-12 00805650  unit: CXTPCommandBar  size: 449 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00805650
//
// 00805650  6aff                 push -1
// 00805652  68f9959500           push 0x9595f9
// 00805657  64a100000000         mov eax, dword ptr fs:[0]
// 0080565d  50                   push eax
// 0080565e  83ec14               sub esp, 0x14
// 00805661  53                   push ebx
// 00805662  55                   push ebp
// 00805663  56                   push esi
// 00805664  57                   push edi
// 00805665  a10052b600           mov eax, dword ptr [0xb65200]
// 0080566a  33c4                 xor eax, esp
// 0080566c  50                   push eax
// 0080566d  8d442428             lea eax, [esp + 0x28]
// 00805671  64a300000000         mov dword ptr fs:[0], eax
// 00805677  8bf1                 mov esi, ecx
// 00805679  89742420             mov dword ptr [esp + 0x20], esi
// 0080567d  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00805683  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00805689  6a01                 push 1
// 0080568b  6a00                 push 0
// 0080568d  6a01                 push 1
// 0080568f  6a01                 push 1
// 00805691  50                   push eax
// 00805692  e839fe0300           call 0x8454d0
// 00805697  8bf8                 mov edi, eax
// 00805699  83cdff               or ebp, 0xffffffff
// 0080569c  3bfd                 cmp edi, ebp
// 0080569e  7507                 jne 0x8056a7
// 008056a0  8bc5                 mov eax, ebp
// 008056a2  e93c010000           jmp 0x8057e3
// 008056a7  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008056ab  c70100000000         mov dword ptr [ecx], 0
// 008056b1  897c2424             mov dword ptr [esp + 0x24], edi
// 008056b5  896c2418             mov dword ptr [esp + 0x18], ebp
// 008056b9  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008056bd  8d4900               lea ecx, [ecx]
// 008056c0  57                   push edi
// 008056c1  8bce                 mov ecx, esi
// 008056c3  e898fbffff           call 0x805260
// 008056c8  8bd8                 mov ebx, eax
// 008056ca  85db                 test ebx, ebx
// 008056cc  74d2                 je 0x8056a0
// 008056ce  8b13                 mov edx, dword ptr [ebx]
// 008056d0  8b5258               mov edx, dword ptr [edx + 0x58]
// 008056d3  8d442414             lea eax, [esp + 0x14]
// 008056d7  50                   push eax
// 008056d8  8bcb                 mov ecx, ebx
// 008056da  ffd2                 call edx
// 008056dc  8d4c2414             lea ecx, [esp + 0x14]
// 008056e0  c744243000000000     mov dword ptr [esp + 0x30], 0
// 008056e8  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008056ee  84c0                 test al, al
// 008056f0  0f85ac000000         jne 0x8057a2
// 008056f6  8b839c000000         mov eax, dword ptr [ebx + 0x9c]
// 008056fc  3bc5                 cmp eax, ebp
// 008056fe  750f                 jne 0x80570f
// 00805700  8b8b5c010000         mov ecx, dword ptr [ebx + 0x15c]
// 00805706  85c9                 test ecx, ecx
// 00805708  7405                 je 0x80570f
// 0080570a  e8a10effff           call 0x7f65b0
// 0080570f  85c0                 test eax, eax
// 00805711  0f848b000000         je 0x8057a2
// 00805717  6a00                 push 0
// 00805719  6a26                 push 0x26
// 0080571b  8d4c241c             lea ecx, [esp + 0x1c]
// 0080571f  ff1580d69800         call dword ptr [0x98d680]
// 00805725  8bf0                 mov esi, eax
// 00805727  3bf5                 cmp esi, ebp
// 00805729  7e19                 jle 0x805744
// 0080572b  8d4c2414             lea ecx, [esp + 0x14]
// 0080572f  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00805735  48                   dec eax
// 00805736  3bf0                 cmp esi, eax
// 00805738  7d0a                 jge 0x805744
// 0080573a  bd01000000           mov ebp, 1
// 0080573f  8d4601               lea eax, [esi + 1]
// 00805742  eb04                 jmp 0x805748
// 00805744  33ed                 xor ebp, ebp
// 00805746  33c0                 xor eax, eax
// 00805748  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0080574c  51                   push ecx
// 0080574d  50                   push eax
// 0080574e  8d4c241c             lea ecx, [esp + 0x1c]
// 00805752  ff1510d59800         call dword ptr [0x98d510]
// 00805758  0fb6d0               movzx edx, al
// 0080575b  52                   push edx
// 0080575c  e8ff950800           call 0x88ed60
// 00805761  83c408               add esp, 8
// 00805764  85c0                 test eax, eax
// 00805766  743a                 je 0x8057a2
// 00805768  85ed                 test ebp, ebp
// 0080576a  7419                 je 0x805785
// 0080576c  8b742418             mov esi, dword ptr [esp + 0x18]
// 00805770  83feff               cmp esi, -1
// 00805773  0f8580000000         jne 0x8057f9
// 00805779  8b8380000000         mov eax, dword ptr [ebx + 0x80]
// 0080577f  89442418             mov dword ptr [esp + 0x18], eax
// 00805783  eb1d                 jmp 0x8057a2
// 00805785  837c241cff           cmp dword ptr [esp + 0x1c], -1
// 0080578a  750c                 jne 0x805798
// 0080578c  8b8b80000000         mov ecx, dword ptr [ebx + 0x80]
// 00805792  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00805796  eb0a                 jmp 0x8057a2
// 00805798  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0080579c  c70201000000         mov dword ptr [edx], 1
// 008057a2  8b742420             mov esi, dword ptr [esp + 0x20]
// 008057a6  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 008057ac  6a00                 push 0
// 008057ae  6a00                 push 0
// 008057b0  6a01                 push 1
// 008057b2  6a01                 push 1
// 008057b4  57                   push edi
// 008057b5  e816fd0300           call 0x8454d0
// 008057ba  83cdff               or ebp, 0xffffffff
// 008057bd  8d4c2414             lea ecx, [esp + 0x14]
// 008057c1  8bf8                 mov edi, eax
// 008057c3  896c2430             mov dword ptr [esp + 0x30], ebp
// 008057c7  ff15c0de9800         call dword ptr [0x98dec0]
// 008057cd  3b7c2424             cmp edi, dword ptr [esp + 0x24]
// 008057d1  0f85e9feffff         jne 0x8056c0
// 008057d7  8b442418             mov eax, dword ptr [esp + 0x18]
// 008057db  3bc5                 cmp eax, ebp
// 008057dd  7504                 jne 0x8057e3
// 008057df  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008057e3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008057e7  64890d00000000       mov dword ptr fs:[0], ecx
// 008057ee  59                   pop ecx
// 008057ef  5f                   pop edi
// 008057f0  5e                   pop esi
// 008057f1  5d                   pop ebp
// 008057f2  5b                   pop ebx
// 008057f3  83c420               add esp, 0x20
// 008057f6  c20800               ret 8
// 008057f9  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008057fd  8d4c2414             lea ecx, [esp + 0x14]
// 00805801  c70001000000         mov dword ptr [eax], 1
// 00805807  ff15c0de9800         call dword ptr [0x98dec0]
// 0080580d  8bc6                 mov eax, esi
// 0080580f  ebd2                 jmp 0x8057e3
// copied from an identical function in another client (function ?FindAccelEx@CXTPCommandBar@@QBEHIAAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPCommandBar.cpp