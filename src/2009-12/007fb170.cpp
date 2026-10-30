// roc 2009-12 007fb170  unit: CXTPControlComboBoxList  size: 298 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fb170
//
// 007fb170  83ec1c               sub esp, 0x1c
// 007fb173  53                   push ebx
// 007fb174  55                   push ebp
// 007fb175  56                   push esi
// 007fb176  8bf1                 mov esi, ecx
// 007fb178  8b06                 mov eax, dword ptr [esi]
// 007fb17a  8b9010020000         mov edx, dword ptr [eax + 0x210]
// 007fb180  57                   push edi
// 007fb181  ffd2                 call edx
// 007fb183  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 007fb187  83bb8401000000       cmp dword ptr [ebx + 0x184], 0
// 007fb18e  8be8                 mov ebp, eax
// 007fb190  7445                 je 0x7fb1d7
// 007fb192  6a12                 push 0x12
// 007fb194  ff1530cc9800         call dword ptr [0x98cc30]
// 007fb19a  6685c0               test ax, ax
// 007fb19d  7c2c                 jl 0x7fb1cb
// 007fb19f  8b442434             mov eax, dword ptr [esp + 0x34]
// 007fb1a3  83f826               cmp eax, 0x26
// 007fb1a6  740f                 je 0x7fb1b7
// 007fb1a8  83f828               cmp eax, 0x28
// 007fb1ab  740a                 je 0x7fb1b7
// 007fb1ad  83f821               cmp eax, 0x21
// 007fb1b0  7405                 je 0x7fb1b7
// 007fb1b2  83f822               cmp eax, 0x22
// 007fb1b5  7514                 jne 0x7fb1cb
// 007fb1b7  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007fb1bb  51                   push ecx
// 007fb1bc  50                   push eax
// 007fb1bd  6800010000           push 0x100
// 007fb1c2  8bce                 mov ecx, esi
// 007fb1c4  e81788ffff           call 0x7f39e0
// 007fb1c9  eb70                 jmp 0x7fb23b
// 007fb1cb  5f                   pop edi
// 007fb1cc  5e                   pop esi
// 007fb1cd  5d                   pop ebp
// 007fb1ce  33c0                 xor eax, eax
// 007fb1d0  5b                   pop ebx
// 007fb1d1  83c41c               add esp, 0x1c
// 007fb1d4  c20c00               ret 0xc
// 007fb1d7  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 007fb1db  83ff73               cmp edi, 0x73
// 007fb1de  750f                 jne 0x7fb1ef
// 007fb1e0  6a12                 push 0x12
// 007fb1e2  ff1530cc9800         call dword ptr [0x98cc30]
// 007fb1e8  6685c0               test ax, ax
// 007fb1eb  7dde                 jge 0x7fb1cb
// 007fb1ed  eb17                 jmp 0x7fb206
// 007fb1ef  83ff26               cmp edi, 0x26
// 007fb1f2  7405                 je 0x7fb1f9
// 007fb1f4  83ff28               cmp edi, 0x28
// 007fb1f7  750d                 jne 0x7fb206
// 007fb1f9  6a12                 push 0x12
// 007fb1fb  ff1530cc9800         call dword ptr [0x98cc30]
// 007fb201  6685c0               test ax, ax
// 007fb204  7cc5                 jl 0x7fb1cb
// 007fb206  8b4620               mov eax, dword ptr [esi + 0x20]
// 007fb209  8b542438             mov edx, dword ptr [esp + 0x38]
// 007fb20d  8d4c2410             lea ecx, [esp + 0x10]
// 007fb211  51                   push ecx
// 007fb212  50                   push eax
// 007fb213  c744241c00010000     mov dword ptr [esp + 0x1c], 0x100
// 007fb21b  89442418             mov dword ptr [esp + 0x18], eax
// 007fb21f  897c2420             mov dword ptr [esp + 0x20], edi
// 007fb223  89542424             mov dword ptr [esp + 0x24], edx
// 007fb227  ff15b8ca9800         call dword ptr [0x98cab8]
// 007fb22d  e8e48dffff           call 0x7f4016
// 007fb232  8b10                 mov edx, dword ptr [eax]
// 007fb234  8bc8                 mov ecx, eax
// 007fb236  8b4264               mov eax, dword ptr [edx + 0x64]
// 007fb239  ffd0                 call eax
// 007fb23b  8b16                 mov edx, dword ptr [esi]
// 007fb23d  8b8210020000         mov eax, dword ptr [edx + 0x210]
// 007fb243  8bce                 mov ecx, esi
// 007fb245  ffd0                 call eax
// 007fb247  3be8                 cmp ebp, eax
// 007fb249  7440                 je 0x7fb28b
// 007fb24b  8b13                 mov edx, dword ptr [ebx]
// 007fb24d  8b8264010000         mov eax, dword ptr [edx + 0x164]
// 007fb253  8bcb                 mov ecx, ebx
// 007fb255  ffd0                 call eax
// 007fb257  8bb384010000         mov esi, dword ptr [ebx + 0x184]
// 007fb25d  85f6                 test esi, esi
// 007fb25f  742a                 je 0x7fb28b
// 007fb261  837e2000             cmp dword ptr [esi + 0x20], 0
// 007fb265  7424                 je 0x7fb28b
// 007fb267  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007fb26a  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 007fb270  6aff                 push -1
// 007fb272  6a00                 push 0
// 007fb274  68b1000000           push 0xb1
// 007fb279  51                   push ecx
// 007fb27a  ffd7                 call edi
// 007fb27c  8b5620               mov edx, dword ptr [esi + 0x20]
// 007fb27f  6a00                 push 0
// 007fb281  6a00                 push 0
// 007fb283  68b7000000           push 0xb7
// 007fb288  52                   push edx
// 007fb289  ffd7                 call edi
// 007fb28b  5f                   pop edi
// 007fb28c  5e                   pop esi
// 007fb28d  5d                   pop ebp
// 007fb28e  b801000000           mov eax, 1
// 007fb293  5b                   pop ebx
// 007fb294  83c41c               add esp, 0x1c
// 007fb297  c20c00               ret 0xc
// copied from an identical function in another client (function ?ProcessHookKeyDown@CXTPControlComboBoxList@@MAEHPAVCXTPControlComboBox@@IJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp