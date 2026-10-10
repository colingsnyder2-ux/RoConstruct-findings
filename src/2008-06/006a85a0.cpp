// roc 2008-06 006a85a0  unit: CXTPControlComboBoxPopupBar  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a85a0
//
// 006a85a0  53                   push ebx
// 006a85a1  55                   push ebp
// 006a85a2  56                   push esi
// 006a85a3  8bf1                 mov esi, ecx
// 006a85a5  8b06                 mov eax, dword ptr [esi]
// 006a85a7  8b9010020000         mov edx, dword ptr [eax + 0x210]
// 006a85ad  57                   push edi
// 006a85ae  ffd2                 call edx
// 006a85b0  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006a85b4  83bf8401000000       cmp dword ptr [edi + 0x184], 0
// 006a85bb  8be8                 mov ebp, eax
// 006a85bd  7436                 je 0x6a85f5
// 006a85bf  6a12                 push 0x12
// 006a85c1  ff15a42d8000         call dword ptr [0x802da4]
// 006a85c7  6685c0               test ax, ax
// 006a85ca  7c20                 jl 0x6a85ec
// 006a85cc  8b442418             mov eax, dword ptr [esp + 0x18]
// 006a85d0  83f826               cmp eax, 0x26
// 006a85d3  740f                 je 0x6a85e4
// 006a85d5  83f828               cmp eax, 0x28
// 006a85d8  740a                 je 0x6a85e4
// 006a85da  83f821               cmp eax, 0x21
// 006a85dd  7405                 je 0x6a85e4
// 006a85df  83f822               cmp eax, 0x22
// 006a85e2  7508                 jne 0x6a85ec
// 006a85e4  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006a85e8  51                   push ecx
// 006a85e9  50                   push eax
// 006a85ea  eb3e                 jmp 0x6a862a
// 006a85ec  5f                   pop edi
// 006a85ed  5e                   pop esi
// 006a85ee  5d                   pop ebp
// 006a85ef  33c0                 xor eax, eax
// 006a85f1  5b                   pop ebx
// 006a85f2  c20c00               ret 0xc
// 006a85f5  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006a85f9  83fb73               cmp ebx, 0x73
// 006a85fc  750f                 jne 0x6a860d
// 006a85fe  6a12                 push 0x12
// 006a8600  ff15a42d8000         call dword ptr [0x802da4]
// 006a8606  6685c0               test ax, ax
// 006a8609  7de1                 jge 0x6a85ec
// 006a860b  eb17                 jmp 0x6a8624
// 006a860d  83fb26               cmp ebx, 0x26
// 006a8610  7405                 je 0x6a8617
// 006a8612  83fb28               cmp ebx, 0x28
// 006a8615  750d                 jne 0x6a8624
// 006a8617  6a12                 push 0x12
// 006a8619  ff15a42d8000         call dword ptr [0x802da4]
// 006a861f  6685c0               test ax, ax
// 006a8622  7cc8                 jl 0x6a85ec
// 006a8624  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006a8628  52                   push edx
// 006a8629  53                   push ebx
// 006a862a  8bce                 mov ecx, esi
// 006a862c  e88f030100           call 0x6b89c0
// 006a8631  8b06                 mov eax, dword ptr [esi]
// 006a8633  8b9010020000         mov edx, dword ptr [eax + 0x210]
// 006a8639  8bce                 mov ecx, esi
// 006a863b  ffd2                 call edx
// 006a863d  3be8                 cmp ebp, eax
// 006a863f  7440                 je 0x6a8681
// 006a8641  8b07                 mov eax, dword ptr [edi]
// 006a8643  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 006a8649  8bcf                 mov ecx, edi
// 006a864b  ffd2                 call edx
// 006a864d  8bb784010000         mov esi, dword ptr [edi + 0x184]
// 006a8653  85f6                 test esi, esi
// 006a8655  742a                 je 0x6a8681
// 006a8657  837e2000             cmp dword ptr [esi + 0x20], 0
// 006a865b  7424                 je 0x6a8681
// 006a865d  8b4620               mov eax, dword ptr [esi + 0x20]
// 006a8660  8b3d142e8000         mov edi, dword ptr [0x802e14]
// 006a8666  6aff                 push -1
// 006a8668  6a00                 push 0
// 006a866a  68b1000000           push 0xb1
// 006a866f  50                   push eax
// 006a8670  ffd7                 call edi
// 006a8672  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006a8675  6a00                 push 0
// 006a8677  6a00                 push 0
// 006a8679  68b7000000           push 0xb7
// 006a867e  51                   push ecx
// 006a867f  ffd7                 call edi
// 006a8681  5f                   pop edi
// 006a8682  5e                   pop esi
// 006a8683  5d                   pop ebp
// 006a8684  b801000000           mov eax, 1
// 006a8689  5b                   pop ebx
// 006a868a  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlComboBox.cpp (function ?ProcessHookKeyDown@CXTPControlComboBoxPopupBar@@UAEHPAVCXTPControlComboBox@@IJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp
