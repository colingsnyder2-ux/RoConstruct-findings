// roc 2008-06 006a8950  unit: CXTPControlComboBoxList  size: 298 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a8950
//
// 006a8950  83ec1c               sub esp, 0x1c
// 006a8953  53                   push ebx
// 006a8954  55                   push ebp
// 006a8955  56                   push esi
// 006a8956  8bf1                 mov esi, ecx
// 006a8958  8b06                 mov eax, dword ptr [esi]
// 006a895a  8b9010020000         mov edx, dword ptr [eax + 0x210]
// 006a8960  57                   push edi
// 006a8961  ffd2                 call edx
// 006a8963  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 006a8967  83bb8401000000       cmp dword ptr [ebx + 0x184], 0
// 006a896e  8be8                 mov ebp, eax
// 006a8970  7445                 je 0x6a89b7
// 006a8972  6a12                 push 0x12
// 006a8974  ff15a42d8000         call dword ptr [0x802da4]
// 006a897a  6685c0               test ax, ax
// 006a897d  7c2c                 jl 0x6a89ab
// 006a897f  8b442434             mov eax, dword ptr [esp + 0x34]
// 006a8983  83f826               cmp eax, 0x26
// 006a8986  740f                 je 0x6a8997
// 006a8988  83f828               cmp eax, 0x28
// 006a898b  740a                 je 0x6a8997
// 006a898d  83f821               cmp eax, 0x21
// 006a8990  7405                 je 0x6a8997
// 006a8992  83f822               cmp eax, 0x22
// 006a8995  7514                 jne 0x6a89ab
// 006a8997  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006a899b  51                   push ecx
// 006a899c  50                   push eax
// 006a899d  6800010000           push 0x100
// 006a89a2  8bce                 mov ecx, esi
// 006a89a4  e85d7effff           call 0x6a0806
// 006a89a9  eb70                 jmp 0x6a8a1b
// 006a89ab  5f                   pop edi
// 006a89ac  5e                   pop esi
// 006a89ad  5d                   pop ebp
// 006a89ae  33c0                 xor eax, eax
// 006a89b0  5b                   pop ebx
// 006a89b1  83c41c               add esp, 0x1c
// 006a89b4  c20c00               ret 0xc
// 006a89b7  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 006a89bb  83ff73               cmp edi, 0x73
// 006a89be  750f                 jne 0x6a89cf
// 006a89c0  6a12                 push 0x12
// 006a89c2  ff15a42d8000         call dword ptr [0x802da4]
// 006a89c8  6685c0               test ax, ax
// 006a89cb  7dde                 jge 0x6a89ab
// 006a89cd  eb17                 jmp 0x6a89e6
// 006a89cf  83ff26               cmp edi, 0x26
// 006a89d2  7405                 je 0x6a89d9
// 006a89d4  83ff28               cmp edi, 0x28
// 006a89d7  750d                 jne 0x6a89e6
// 006a89d9  6a12                 push 0x12
// 006a89db  ff15a42d8000         call dword ptr [0x802da4]
// 006a89e1  6685c0               test ax, ax
// 006a89e4  7cc5                 jl 0x6a89ab
// 006a89e6  8b4620               mov eax, dword ptr [esi + 0x20]
// 006a89e9  8b542438             mov edx, dword ptr [esp + 0x38]
// 006a89ed  8d4c2410             lea ecx, [esp + 0x10]
// 006a89f1  51                   push ecx
// 006a89f2  50                   push eax
// 006a89f3  c744241c00010000     mov dword ptr [esp + 0x1c], 0x100
// 006a89fb  89442418             mov dword ptr [esp + 0x18], eax
// 006a89ff  897c2420             mov dword ptr [esp + 0x20], edi
// 006a8a03  89542424             mov dword ptr [esp + 0x24], edx
// 006a8a07  ff156c2c8000         call dword ptr [0x802c6c]
// 006a8a0d  e83c84ffff           call 0x6a0e4e
// 006a8a12  8b10                 mov edx, dword ptr [eax]
// 006a8a14  8bc8                 mov ecx, eax
// 006a8a16  8b4264               mov eax, dword ptr [edx + 0x64]
// 006a8a19  ffd0                 call eax
// 006a8a1b  8b16                 mov edx, dword ptr [esi]
// 006a8a1d  8b8210020000         mov eax, dword ptr [edx + 0x210]
// 006a8a23  8bce                 mov ecx, esi
// 006a8a25  ffd0                 call eax
// 006a8a27  3be8                 cmp ebp, eax
// 006a8a29  7440                 je 0x6a8a6b
// 006a8a2b  8b13                 mov edx, dword ptr [ebx]
// 006a8a2d  8b8264010000         mov eax, dword ptr [edx + 0x164]
// 006a8a33  8bcb                 mov ecx, ebx
// 006a8a35  ffd0                 call eax
// 006a8a37  8bb384010000         mov esi, dword ptr [ebx + 0x184]
// 006a8a3d  85f6                 test esi, esi
// 006a8a3f  742a                 je 0x6a8a6b
// 006a8a41  837e2000             cmp dword ptr [esi + 0x20], 0
// 006a8a45  7424                 je 0x6a8a6b
// 006a8a47  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006a8a4a  8b3d142e8000         mov edi, dword ptr [0x802e14]
// 006a8a50  6aff                 push -1
// 006a8a52  6a00                 push 0
// 006a8a54  68b1000000           push 0xb1
// 006a8a59  51                   push ecx
// 006a8a5a  ffd7                 call edi
// 006a8a5c  8b5620               mov edx, dword ptr [esi + 0x20]
// 006a8a5f  6a00                 push 0
// 006a8a61  6a00                 push 0
// 006a8a63  68b7000000           push 0xb7
// 006a8a68  52                   push edx
// 006a8a69  ffd7                 call edi
// 006a8a6b  5f                   pop edi
// 006a8a6c  5e                   pop esi
// 006a8a6d  5d                   pop ebp
// 006a8a6e  b801000000           mov eax, 1
// 006a8a73  5b                   pop ebx
// 006a8a74  83c41c               add esp, 0x1c
// 006a8a77  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlComboBox.cpp (function ?ProcessHookKeyDown@CXTPControlComboBoxList@@MAEHPAVCXTPControlComboBox@@IJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp
