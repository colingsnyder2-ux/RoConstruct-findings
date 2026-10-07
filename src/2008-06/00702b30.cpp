// roc 2008-06 00702b30  unit: CXTPTabClientWnd  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00702b30
//
// 00702b30  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00702b34  56                   push esi
// 00702b35  57                   push edi
// 00702b36  e845aaf0ff           call 0x60d580
// 00702b3b  8b3d142e8000         mov edi, dword ptr [0x802e14]
// 00702b41  6a00                 push 0
// 00702b43  6a00                 push 0
// 00702b45  8bf0                 mov esi, eax
// 00702b47  6860280000           push 0x2860
// 00702b4c  56                   push esi
// 00702b4d  ffd7                 call edi
// 00702b4f  85c0                 test eax, eax
// 00702b51  7541                 jne 0x702b94
// 00702b53  50                   push eax
// 00702b54  50                   push eax
// 00702b55  6a7f                 push 0x7f
// 00702b57  56                   push esi
// 00702b58  ffd7                 call edi
// 00702b5a  85c0                 test eax, eax
// 00702b5c  7536                 jne 0x702b94
// 00702b5e  50                   push eax
// 00702b5f  6a01                 push 1
// 00702b61  6a7f                 push 0x7f
// 00702b63  56                   push esi
// 00702b64  ffd7                 call edi
// 00702b66  85c0                 test eax, eax
// 00702b68  752a                 jne 0x702b94
// 00702b6a  8b3de82b8000         mov edi, dword ptr [0x802be8]
// 00702b70  6ade                 push -0x22
// 00702b72  56                   push esi
// 00702b73  ffd7                 call edi
// 00702b75  85c0                 test eax, eax
// 00702b77  751b                 jne 0x702b94
// 00702b79  6af2                 push -0xe
// 00702b7b  56                   push esi
// 00702b7c  ffd7                 call edi
// 00702b7e  85c0                 test eax, eax
// 00702b80  7512                 jne 0x702b94
// 00702b82  e89fddf9ff           call 0x6a0926
// 00702b87  68057f0000           push 0x7f05
// 00702b8c  6a00                 push 0
// 00702b8e  ff15642d8000         call dword ptr [0x802d64]
// 00702b94  5f                   pop edi
// 00702b95  5e                   pop esi
// 00702b96  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetItemIcon@CXTPTabClientWnd@@MBEPAUHICON__@@PBVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
