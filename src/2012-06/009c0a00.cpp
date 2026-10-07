// roc 2012-06 009c0a00  unit: CRobloxTreeCtrl  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c0a00
//
// 009c0a00  83ec10               sub esp, 0x10
// 009c0a03  55                   push ebp
// 009c0a04  56                   push esi
// 009c0a05  6a00                 push 0
// 009c0a07  8be9                 mov ebp, ecx
// 009c0a09  8b4534               mov eax, dword ptr [ebp + 0x34]
// 009c0a0c  8b4020               mov eax, dword ptr [eax + 0x20]
// 009c0a0f  6a00                 push 0
// 009c0a11  680a110000           push 0x110a
// 009c0a16  50                   push eax
// 009c0a17  ff15043cb200         call dword ptr [0xb23c04]
// 009c0a1d  8bf0                 mov esi, eax
// 009c0a1f  85f6                 test esi, esi
// 009c0a21  0f84bf000000         je 0x9c0ae6
// 009c0a27  53                   push ebx
// 009c0a28  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 009c0a2c  57                   push edi
// 009c0a2d  8d4900               lea ecx, [ecx]
// 009c0a30  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 009c0a33  6a02                 push 2
// 009c0a35  56                   push esi
// 009c0a36  e8d78d0d00           call 0xa99812
// 009c0a3b  8b4d08               mov ecx, dword ptr [ebp + 8]
// 009c0a3e  51                   push ecx
// 009c0a3f  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 009c0a42  8d542414             lea edx, [esp + 0x14]
// 009c0a46  8bf8                 mov edi, eax
// 009c0a48  52                   push edx
// 009c0a49  d1ef                 shr edi, 1
// 009c0a4b  56                   push esi
// 009c0a4c  83e701               and edi, 1
// 009c0a4f  e82020fcff           call 0x982a74
// 009c0a54  8b442424             mov eax, dword ptr [esp + 0x24]
// 009c0a58  50                   push eax
// 009c0a59  8d4c2414             lea ecx, [esp + 0x14]
// 009c0a5d  51                   push ecx
// 009c0a5e  8bd1                 mov edx, ecx
// 009c0a60  52                   push edx
// 009c0a61  ff15f83cb200         call dword ptr [0xb23cf8]
// 009c0a67  6a00                 push 0
// 009c0a69  8bcb                 mov ecx, ebx
// 009c0a6b  56                   push esi
// 009c0a6c  85c0                 test eax, eax
// 009c0a6e  7433                 je 0x9c0aa3
// 009c0a70  e8cd8d0d00           call 0xa99842
// 009c0a75  85ff                 test edi, edi
// 009c0a77  7504                 jne 0x9c0a7d
// 009c0a79  85c0                 test eax, eax
// 009c0a7b  743c                 je 0x9c0ab9
// 009c0a7d  8a4c2428             mov cl, byte ptr [esp + 0x28]
// 009c0a81  f6c108               test cl, 8
// 009c0a84  740a                 je 0x9c0a90
// 009c0a86  85c0                 test eax, eax
// 009c0a88  7406                 je 0x9c0a90
// 009c0a8a  6a02                 push 2
// 009c0a8c  6a00                 push 0
// 009c0a8e  eb2d                 jmp 0x9c0abd
// 009c0a90  f6c104               test cl, 4
// 009c0a93  7430                 je 0x9c0ac5
// 009c0a95  85c0                 test eax, eax
// 009c0a97  742c                 je 0x9c0ac5
// 009c0a99  50                   push eax
// 009c0a9a  8bcb                 mov ecx, ebx
// 009c0a9c  e89b8d0d00           call 0xa9983c
// 009c0aa1  eb22                 jmp 0x9c0ac5
// 009c0aa3  e89a8d0d00           call 0xa99842
// 009c0aa8  85ff                 test edi, edi
// 009c0aaa  7409                 je 0x9c0ab5
// 009c0aac  85c0                 test eax, eax
// 009c0aae  7509                 jne 0x9c0ab9
// 009c0ab0  6a02                 push 2
// 009c0ab2  50                   push eax
// 009c0ab3  eb08                 jmp 0x9c0abd
// 009c0ab5  85c0                 test eax, eax
// 009c0ab7  740c                 je 0x9c0ac5
// 009c0ab9  6a02                 push 2
// 009c0abb  6a02                 push 2
// 009c0abd  56                   push esi
// 009c0abe  8bcd                 mov ecx, ebp
// 009c0ac0  e81bf5ffff           call 0x9bffe0
// 009c0ac5  8b4534               mov eax, dword ptr [ebp + 0x34]
// 009c0ac8  8b4020               mov eax, dword ptr [eax + 0x20]
// 009c0acb  56                   push esi
// 009c0acc  6a06                 push 6
// 009c0ace  680a110000           push 0x110a
// 009c0ad3  50                   push eax
// 009c0ad4  ff15043cb200         call dword ptr [0xb23c04]
// 009c0ada  8bf0                 mov esi, eax
// 009c0adc  85f6                 test esi, esi
// 009c0ade  0f854cffffff         jne 0x9c0a30
// 009c0ae4  5f                   pop edi
// 009c0ae5  5b                   pop ebx
// 009c0ae6  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 009c0ae9  8b5120               mov edx, dword ptr [ecx + 0x20]
// 009c0aec  52                   push edx
// 009c0aed  ff15c43cb200         call dword ptr [0xb23cc4]
// 009c0af3  5e                   pop esi
// 009c0af4  5d                   pop ebp
// 009c0af5  83c410               add esp, 0x10
// 009c0af8  c20c00               ret 0xc
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?UpdateSelectionForRect@CXTPTreeBase@@MAEXPBUtagRECT@@IAAV?$CTypedPtrList@VCPtrList@@PAU_TREEITEM@@@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
