// from server: 100% by auto
// roc 2008-06 0078b590  unit: CXTColorPageCustom  size: 501 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078b590
//
// 0078b590  53                   push ebx
// 0078b591  56                   push esi
// 0078b592  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0078b596  57                   push edi
// 0078b597  8bf9                 mov edi, ecx
// 0078b599  8d8788000000         lea eax, [edi + 0x88]
// 0078b59f  50                   push eax
// 0078b5a0  6a65                 push 0x65
// 0078b5a2  56                   push esi
// 0078b5a3  e84859f1ff           call 0x6a0ef0
// 0078b5a8  8d8f08010000         lea ecx, [edi + 0x108]
// 0078b5ae  51                   push ecx
// 0078b5af  6a66                 push 0x66
// 0078b5b1  56                   push esi
// 0078b5b2  e83959f1ff           call 0x6a0ef0
// 0078b5b7  8d9780010000         lea edx, [edi + 0x180]
// 0078b5bd  52                   push edx
// 0078b5be  6a69                 push 0x69
// 0078b5c0  56                   push esi
// 0078b5c1  e82a59f1ff           call 0x6a0ef0
// 0078b5c6  8d87d4010000         lea eax, [edi + 0x1d4]
// 0078b5cc  50                   push eax
// 0078b5cd  6a6b                 push 0x6b
// 0078b5cf  56                   push esi
// 0078b5d0  e81b59f1ff           call 0x6a0ef0
// 0078b5d5  8d8f28020000         lea ecx, [edi + 0x228]
// 0078b5db  51                   push ecx
// 0078b5dc  6a6a                 push 0x6a
// 0078b5de  56                   push esi
// 0078b5df  e80c59f1ff           call 0x6a0ef0
// 0078b5e4  8d977c020000         lea edx, [edi + 0x27c]
// 0078b5ea  52                   push edx
// 0078b5eb  6a68                 push 0x68
// 0078b5ed  56                   push esi
// 0078b5ee  e8fd58f1ff           call 0x6a0ef0
// 0078b5f3  8d87d0020000         lea eax, [edi + 0x2d0]
// 0078b5f9  50                   push eax
// 0078b5fa  6a6c                 push 0x6c
// 0078b5fc  56                   push esi
// 0078b5fd  e8ee58f1ff           call 0x6a0ef0
// 0078b602  8d8f24030000         lea ecx, [edi + 0x324]
// 0078b608  51                   push ecx
// 0078b609  6a6d                 push 0x6d
// 0078b60b  56                   push esi
// 0078b60c  e8df58f1ff           call 0x6a0ef0
// 0078b611  8d9778030000         lea edx, [edi + 0x378]
// 0078b617  52                   push edx
// 0078b618  6a74                 push 0x74
// 0078b61a  56                   push esi
// 0078b61b  e8d058f1ff           call 0x6a0ef0
// 0078b620  8d87cc030000         lea eax, [edi + 0x3cc]
// 0078b626  50                   push eax
// 0078b627  6a77                 push 0x77
// 0078b629  56                   push esi
// 0078b62a  e8c158f1ff           call 0x6a0ef0
// 0078b62f  8d8f20040000         lea ecx, [edi + 0x420]
// 0078b635  51                   push ecx
// 0078b636  6a75                 push 0x75
// 0078b638  56                   push esi
// 0078b639  e8b258f1ff           call 0x6a0ef0
// 0078b63e  8d9774040000         lea edx, [edi + 0x474]
// 0078b644  52                   push edx
// 0078b645  6a70                 push 0x70
// 0078b647  56                   push esi
// 0078b648  e8a358f1ff           call 0x6a0ef0
// 0078b64d  8d87c8040000         lea eax, [edi + 0x4c8]
// 0078b653  50                   push eax
// 0078b654  6a78                 push 0x78
// 0078b656  56                   push esi
// 0078b657  e89458f1ff           call 0x6a0ef0
// 0078b65c  8d8f1c050000         lea ecx, [edi + 0x51c]
// 0078b662  51                   push ecx
// 0078b663  6a79                 push 0x79
// 0078b665  56                   push esi
// 0078b666  e88558f1ff           call 0x6a0ef0
// 0078b66b  8d9770050000         lea edx, [edi + 0x570]
// 0078b671  52                   push edx
// 0078b672  6a73                 push 0x73
// 0078b674  56                   push esi
// 0078b675  e87658f1ff           call 0x6a0ef0
// 0078b67a  8d87c4050000         lea eax, [edi + 0x5c4]
// 0078b680  50                   push eax
// 0078b681  6a6f                 push 0x6f
// 0078b683  56                   push esi
// 0078b684  e86758f1ff           call 0x6a0ef0
// 0078b689  8d8f18060000         lea ecx, [edi + 0x618]
// 0078b68f  51                   push ecx
// 0078b690  6a76                 push 0x76
// 0078b692  56                   push esi
// 0078b693  e85858f1ff           call 0x6a0ef0
// 0078b698  8d976c060000         lea edx, [edi + 0x66c]
// 0078b69e  52                   push edx
// 0078b69f  6a71                 push 0x71
// 0078b6a1  56                   push esi
// 0078b6a2  e84958f1ff           call 0x6a0ef0
// 0078b6a7  8d87c0060000         lea eax, [edi + 0x6c0]
// 0078b6ad  50                   push eax
// 0078b6ae  6a6e                 push 0x6e
// 0078b6b0  56                   push esi
// 0078b6b1  e83a58f1ff           call 0x6a0ef0
// 0078b6b6  8d8f14070000         lea ecx, [edi + 0x714]
// 0078b6bc  51                   push ecx
// 0078b6bd  6a72                 push 0x72
// 0078b6bf  56                   push esi
// 0078b6c0  e82b58f1ff           call 0x6a0ef0
// 0078b6c5  8d9f68070000         lea ebx, [edi + 0x768]
// 0078b6cb  53                   push ebx
// 0078b6cc  6a6e                 push 0x6e
// 0078b6ce  56                   push esi
// 0078b6cf  e8d2120300           call 0x7bc9a6
// 0078b6d4  8b13                 mov edx, dword ptr [ebx]
// 0078b6d6  68ff000000           push 0xff
// 0078b6db  6a00                 push 0
// 0078b6dd  52                   push edx
// 0078b6de  56                   push esi
// 0078b6df  e8bc120300           call 0x7bc9a0
// 0078b6e4  8d9f6c070000         lea ebx, [edi + 0x76c]
// 0078b6ea  53                   push ebx
// 0078b6eb  6a76                 push 0x76
// 0078b6ed  56                   push esi
// 0078b6ee  e8b3120300           call 0x7bc9a6
// 0078b6f3  8b03                 mov eax, dword ptr [ebx]
// 0078b6f5  68ff000000           push 0xff
// 0078b6fa  6a00                 push 0
// 0078b6fc  50                   push eax
// 0078b6fd  56                   push esi
// 0078b6fe  e89d120300           call 0x7bc9a0
// 0078b703  8d9f70070000         lea ebx, [edi + 0x770]
// 0078b709  53                   push ebx
// 0078b70a  6a6f                 push 0x6f
// 0078b70c  56                   push esi
// 0078b70d  e894120300           call 0x7bc9a6
// 0078b712  8b0b                 mov ecx, dword ptr [ebx]
// 0078b714  68ff000000           push 0xff
// 0078b719  6a00                 push 0
// 0078b71b  51                   push ecx
// 0078b71c  56                   push esi
// 0078b71d  e87e120300           call 0x7bc9a0
// 0078b722  8d9f74070000         lea ebx, [edi + 0x774]
// 0078b728  53                   push ebx
// 0078b729  6a73                 push 0x73
// 0078b72b  56                   push esi
// 0078b72c  e875120300           call 0x7bc9a6
// 0078b731  8b13                 mov edx, dword ptr [ebx]
// 0078b733  68ff000000           push 0xff
// 0078b738  6a00                 push 0
// 0078b73a  52                   push edx
// 0078b73b  56                   push esi
// 0078b73c  e85f120300           call 0x7bc9a0
// 0078b741  8d9f78070000         lea ebx, [edi + 0x778]
// 0078b747  53                   push ebx
// 0078b748  6a71                 push 0x71
// 0078b74a  56                   push esi
// 0078b74b  e856120300           call 0x7bc9a6
// 0078b750  8b03                 mov eax, dword ptr [ebx]
// 0078b752  68ff000000           push 0xff
// 0078b757  6a00                 push 0
// 0078b759  50                   push eax
// 0078b75a  56                   push esi
// 0078b75b  e840120300           call 0x7bc9a0
// 0078b760  81c77c070000         add edi, 0x77c
// 0078b766  57                   push edi
// 0078b767  6a72                 push 0x72
// 0078b769  56                   push esi
// 0078b76a  e837120300           call 0x7bc9a6
// 0078b76f  8b0f                 mov ecx, dword ptr [edi]
// 0078b771  68ff000000           push 0xff
// 0078b776  6a00                 push 0
// 0078b778  51                   push ecx
// 0078b779  56                   push esi
// 0078b77a  e821120300           call 0x7bc9a0
// 0078b77f  5f                   pop edi
// 0078b780  5e                   pop esi
// 0078b781  5b                   pop ebx
// 0078b782  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTColorPageCustom.cpp (function ?DoDataExchange@CXTColorPageCustom@@MAEXPAVCDataExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageCustom.cpp
