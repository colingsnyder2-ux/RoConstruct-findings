// roc 2009-12 007fadc0  unit: CXTPControlComboBoxPopupBar  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fadc0
//
// 007fadc0  53                   push ebx
// 007fadc1  55                   push ebp
// 007fadc2  56                   push esi
// 007fadc3  8bf1                 mov esi, ecx
// 007fadc5  8b06                 mov eax, dword ptr [esi]
// 007fadc7  8b9010020000         mov edx, dword ptr [eax + 0x210]
// 007fadcd  57                   push edi
// 007fadce  ffd2                 call edx
// 007fadd0  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007fadd4  83bf8401000000       cmp dword ptr [edi + 0x184], 0
// 007faddb  8be8                 mov ebp, eax
// 007faddd  7436                 je 0x7fae15
// 007faddf  6a12                 push 0x12
// 007fade1  ff1530cc9800         call dword ptr [0x98cc30]
// 007fade7  6685c0               test ax, ax
// 007fadea  7c20                 jl 0x7fae0c
// 007fadec  8b442418             mov eax, dword ptr [esp + 0x18]
// 007fadf0  83f826               cmp eax, 0x26
// 007fadf3  740f                 je 0x7fae04
// 007fadf5  83f828               cmp eax, 0x28
// 007fadf8  740a                 je 0x7fae04
// 007fadfa  83f821               cmp eax, 0x21
// 007fadfd  7405                 je 0x7fae04
// 007fadff  83f822               cmp eax, 0x22
// 007fae02  7508                 jne 0x7fae0c
// 007fae04  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007fae08  51                   push ecx
// 007fae09  50                   push eax
// 007fae0a  eb3e                 jmp 0x7fae4a
// 007fae0c  5f                   pop edi
// 007fae0d  5e                   pop esi
// 007fae0e  5d                   pop ebp
// 007fae0f  33c0                 xor eax, eax
// 007fae11  5b                   pop ebx
// 007fae12  c20c00               ret 0xc
// 007fae15  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 007fae19  83fb73               cmp ebx, 0x73
// 007fae1c  750f                 jne 0x7fae2d
// 007fae1e  6a12                 push 0x12
// 007fae20  ff1530cc9800         call dword ptr [0x98cc30]
// 007fae26  6685c0               test ax, ax
// 007fae29  7de1                 jge 0x7fae0c
// 007fae2b  eb17                 jmp 0x7fae44
// 007fae2d  83fb26               cmp ebx, 0x26
// 007fae30  7405                 je 0x7fae37
// 007fae32  83fb28               cmp ebx, 0x28
// 007fae35  750d                 jne 0x7fae44
// 007fae37  6a12                 push 0x12
// 007fae39  ff1530cc9800         call dword ptr [0x98cc30]
// 007fae3f  6685c0               test ax, ax
// 007fae42  7cc8                 jl 0x7fae0c
// 007fae44  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007fae48  52                   push edx
// 007fae49  53                   push ebx
// 007fae4a  8bce                 mov ecx, esi
// 007fae4c  e85fd20000           call 0x8080b0
// 007fae51  8b06                 mov eax, dword ptr [esi]
// 007fae53  8b9010020000         mov edx, dword ptr [eax + 0x210]
// 007fae59  8bce                 mov ecx, esi
// 007fae5b  ffd2                 call edx
// 007fae5d  3be8                 cmp ebp, eax
// 007fae5f  7440                 je 0x7faea1
// 007fae61  8b07                 mov eax, dword ptr [edi]
// 007fae63  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 007fae69  8bcf                 mov ecx, edi
// 007fae6b  ffd2                 call edx
// 007fae6d  8bb784010000         mov esi, dword ptr [edi + 0x184]
// 007fae73  85f6                 test esi, esi
// 007fae75  742a                 je 0x7faea1
// 007fae77  837e2000             cmp dword ptr [esi + 0x20], 0
// 007fae7b  7424                 je 0x7faea1
// 007fae7d  8b4620               mov eax, dword ptr [esi + 0x20]
// 007fae80  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 007fae86  6aff                 push -1
// 007fae88  6a00                 push 0
// 007fae8a  68b1000000           push 0xb1
// 007fae8f  50                   push eax
// 007fae90  ffd7                 call edi
// 007fae92  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007fae95  6a00                 push 0
// 007fae97  6a00                 push 0
// 007fae99  68b7000000           push 0xb7
// 007fae9e  51                   push ecx
// 007fae9f  ffd7                 call edi
// 007faea1  5f                   pop edi
// 007faea2  5e                   pop esi
// 007faea3  5d                   pop ebp
// 007faea4  b801000000           mov eax, 1
// 007faea9  5b                   pop ebx
// 007faeaa  c20c00               ret 0xc
// copied from an identical function in another client (function ?ProcessHookKeyDown@CXTPControlComboBoxPopupBar@@UAEHPAVCXTPControlComboBox@@IJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp