// roc 2009-12 008e9940  unit: CXTPRibbonGroup  size: 349 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e9940
//
// 008e9940  8b442410             mov eax, dword ptr [esp + 0x10]
// 008e9944  83ec10               sub esp, 0x10
// 008e9947  53                   push ebx
// 008e9948  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008e994c  55                   push ebp
// 008e994d  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 008e9951  56                   push esi
// 008e9952  8bf1                 mov esi, ecx
// 008e9954  837e7000             cmp dword ptr [esi + 0x70], 0
// 008e9958  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008e995b  57                   push edi
// 008e995c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008e9960  897e34               mov dword ptr [esi + 0x34], edi
// 008e9963  895e38               mov dword ptr [esi + 0x38], ebx
// 008e9966  896e3c               mov dword ptr [esi + 0x3c], ebp
// 008e9969  894640               mov dword ptr [esi + 0x40], eax
// 008e996c  7445                 je 0x8e99b3
// 008e996e  8b91d0000000         mov edx, dword ptr [ecx + 0xd0]
// 008e9974  8944241c             mov dword ptr [esp + 0x1c], eax
// 008e9978  8b01                 mov eax, dword ptr [ecx]
// 008e997a  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 008e9980  83e2fd               and edx, 0xfffffffd
// 008e9983  52                   push edx
// 008e9984  ffd0                 call eax
// 008e9986  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008e9989  8b11                 mov edx, dword ptr [ecx]
// 008e998b  83ec10               sub esp, 0x10
// 008e998e  8bc4                 mov eax, esp
// 008e9990  8938                 mov dword ptr [eax], edi
// 008e9992  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 008e9996  895804               mov dword ptr [eax + 4], ebx
// 008e9999  896808               mov dword ptr [eax + 8], ebp
// 008e999c  89780c               mov dword ptr [eax + 0xc], edi
// 008e999f  8b427c               mov eax, dword ptr [edx + 0x7c]
// 008e99a2  ffd0                 call eax
// 008e99a4  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008e99a7  c7819400000001000000 mov dword ptr [ecx + 0x94], 1
// 008e99b1  eb14                 jmp 0x8e99c7
// 008e99b3  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 008e99b9  8b11                 mov edx, dword ptr [ecx]
// 008e99bb  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 008e99c1  83c802               or eax, 2
// 008e99c4  50                   push eax
// 008e99c5  ffd2                 call edx
// 008e99c7  837e7400             cmp dword ptr [esi + 0x74], 0
// 008e99cb  7523                 jne 0x8e99f0
// 008e99cd  8b7668               mov esi, dword ptr [esi + 0x68]
// 008e99d0  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 008e99d6  8b06                 mov eax, dword ptr [esi]
// 008e99d8  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 008e99de  83c901               or ecx, 1
// 008e99e1  51                   push ecx
// 008e99e2  8bce                 mov ecx, esi
// 008e99e4  ffd2                 call edx
// 008e99e6  5f                   pop edi
// 008e99e7  5e                   pop esi
// 008e99e8  5d                   pop ebp
// 008e99e9  5b                   pop ebx
// 008e99ea  83c410               add esp, 0x10
// 008e99ed  c21000               ret 0x10
// 008e99f0  837e7000             cmp dword ptr [esi + 0x70], 0
// 008e99f4  7423                 je 0x8e9a19
// 008e99f6  8b7668               mov esi, dword ptr [esi + 0x68]
// 008e99f9  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 008e99ff  8b06                 mov eax, dword ptr [esi]
// 008e9a01  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 008e9a07  83c902               or ecx, 2
// 008e9a0a  51                   push ecx
// 008e9a0b  8bce                 mov ecx, esi
// 008e9a0d  ffd2                 call edx
// 008e9a0f  5f                   pop edi
// 008e9a10  5e                   pop esi
// 008e9a11  5d                   pop ebp
// 008e9a12  5b                   pop ebx
// 008e9a13  83c410               add esp, 0x10
// 008e9a16  c21000               ret 0x10
// 008e9a19  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 008e9a1c  e84fb2faff           call 0x894c70
// 008e9a21  8b9860060000         mov ebx, dword ptr [eax + 0x660]
// 008e9a27  8b4668               mov eax, dword ptr [esi + 0x68]
// 008e9a2a  c7809400000001000000 mov dword ptr [eax + 0x94], 1
// 008e9a34  8b4e68               mov ecx, dword ptr [esi + 0x68]
// 008e9a37  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 008e9a3d  8b11                 mov edx, dword ptr [ecx]
// 008e9a3f  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 008e9a45  83e0fe               and eax, 0xfffffffe
// 008e9a48  50                   push eax
// 008e9a49  ffd2                 call edx
// 008e9a4b  8b4e68               mov ecx, dword ptr [esi + 0x68]
// 008e9a4e  8b91d0000000         mov edx, dword ptr [ecx + 0xd0]
// 008e9a54  8b01                 mov eax, dword ptr [ecx]
// 008e9a56  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 008e9a5c  83e2fd               and edx, 0xfffffffd
// 008e9a5f  52                   push edx
// 008e9a60  ffd0                 call eax
// 008e9a62  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008e9a66  8b542430             mov edx, dword ptr [esp + 0x30]
// 008e9a6a  8bc1                 mov eax, ecx
// 008e9a6c  8bfa                 mov edi, edx
// 008e9a6e  2bc3                 sub eax, ebx
// 008e9a70  8d6afd               lea ebp, [edx - 3]
// 008e9a73  83ec10               sub esp, 0x10
// 008e9a76  8bd4                 mov edx, esp
// 008e9a78  2bfb                 sub edi, ebx
// 008e9a7a  48                   dec eax
// 008e9a7b  8902                 mov dword ptr [edx], eax
// 008e9a7d  8d59fd               lea ebx, [ecx - 3]
// 008e9a80  8b4e68               mov ecx, dword ptr [esi + 0x68]
// 008e9a83  8b31                 mov esi, dword ptr [ecx]
// 008e9a85  897a04               mov dword ptr [edx + 4], edi
// 008e9a88  895a08               mov dword ptr [edx + 8], ebx
// 008e9a8b  896a0c               mov dword ptr [edx + 0xc], ebp
// 008e9a8e  8b567c               mov edx, dword ptr [esi + 0x7c]
// 008e9a91  ffd2                 call edx
// 008e9a93  5f                   pop edi
// 008e9a94  5e                   pop esi
// 008e9a95  5d                   pop ebp
// 008e9a96  5b                   pop ebx
// 008e9a97  83c410               add esp, 0x10
// 008e9a9a  c21000               ret 0x10
// copied from an identical function in another client (function ?SetRect@CXTPRibbonGroup@@UAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonGroup.cpp