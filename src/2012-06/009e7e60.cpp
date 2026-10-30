// roc 2012-06 009e7e60  unit: CXTPStatusBar  size: 198 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e7e60
//
// 009e7e60  56                   push esi
// 009e7e61  8bf1                 mov esi, ecx
// 009e7e63  e86a170b00           call 0xa995d2
// 009e7e68  8b8e80000000         mov ecx, dword ptr [esi + 0x80]
// 009e7e6e  2500000010           and eax, 0x10000000
// 009e7e73  33d2                 xor edx, edx
// 009e7e75  f6c101               test cl, 1
// 009e7e78  740b                 je 0x9e7e85
// 009e7e7a  85c0                 test eax, eax
// 009e7e7c  7407                 je 0x9e7e85
// 009e7e7e  ba80000000           mov edx, 0x80
// 009e7e83  eb0e                 jmp 0x9e7e93
// 009e7e85  f6c102               test cl, 2
// 009e7e88  7409                 je 0x9e7e93
// 009e7e8a  85c0                 test eax, eax
// 009e7e8c  7505                 jne 0x9e7e93
// 009e7e8e  ba40000000           mov edx, 0x40
// 009e7e93  83e1fc               and ecx, 0xfffffffc
// 009e7e96  898e80000000         mov dword ptr [esi + 0x80], ecx
// 009e7e9c  85d2                 test edx, edx
// 009e7e9e  7415                 je 0x9e7eb5
// 009e7ea0  83ca17               or edx, 0x17
// 009e7ea3  52                   push edx
// 009e7ea4  6a00                 push 0
// 009e7ea6  6a00                 push 0
// 009e7ea8  6a00                 push 0
// 009e7eaa  6a00                 push 0
// 009e7eac  6a00                 push 0
// 009e7eae  8bce                 mov ecx, esi
// 009e7eb0  e81fa6f9ff           call 0x9824d4
// 009e7eb5  8bce                 mov ecx, esi
// 009e7eb7  e816170b00           call 0xa995d2
// 009e7ebc  a900000010           test eax, 0x10000000
// 009e7ec1  745d                 je 0x9e7f20
// 009e7ec3  8b8e90000000         mov ecx, dword ptr [esi + 0x90]
// 009e7ec9  85c9                 test ecx, ecx
// 009e7ecb  740c                 je 0x9e7ed9
// 009e7ecd  e800170b00           call 0xa995d2
// 009e7ed2  a900000010           test eax, 0x10000000
// 009e7ed7  7447                 je 0x9e7f20
// 009e7ed9  8b4638               mov eax, dword ptr [esi + 0x38]
// 009e7edc  57                   push edi
// 009e7edd  8b3d503ab200         mov edi, dword ptr [0xb23a50]
// 009e7ee3  85c0                 test eax, eax
// 009e7ee5  7506                 jne 0x9e7eed
// 009e7ee7  8b4620               mov eax, dword ptr [esi + 0x20]
// 009e7eea  50                   push eax
// 009e7eeb  ffd7                 call edi
// 009e7eed  50                   push eax
// 009e7eee  e873a7f9ff           call 0x982666
// 009e7ef3  85c0                 test eax, eax
// 009e7ef5  7510                 jne 0x9e7f07
// 009e7ef7  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 009e7efa  51                   push ecx
// 009e7efb  ffd7                 call edi
// 009e7efd  50                   push eax
// 009e7efe  e863a7f9ff           call 0x982666
// 009e7f03  85c0                 test eax, eax
// 009e7f05  7412                 je 0x9e7f19
// 009e7f07  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 009e7f0b  8b16                 mov edx, dword ptr [esi]
// 009e7f0d  8b924c010000         mov edx, dword ptr [edx + 0x14c]
// 009e7f13  51                   push ecx
// 009e7f14  50                   push eax
// 009e7f15  8bce                 mov ecx, esi
// 009e7f17  ffd2                 call edx
// 009e7f19  5f                   pop edi
// 009e7f1a  33c0                 xor eax, eax
// 009e7f1c  5e                   pop esi
// 009e7f1d  c20800               ret 8
// 009e7f20  33c0                 xor eax, eax
// 009e7f22  5e                   pop esi
// 009e7f23  c20800               ret 8
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPStatusBar.cpp (function ?OnIdleUpdateCmdUI@CXTPStatusBar@@QAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPStatusBar.cpp
