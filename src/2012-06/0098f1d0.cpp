// from server: 100% by auto
// roc 2012-06 0098f1d0  unit: CXTPEdit  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098f1d0
//
// 0098f1d0  0fb7442404           movzx eax, word ptr [esp + 4]
// 0098f1d5  3d25e10000           cmp eax, 0xe125
// 0098f1da  751b                 jne 0x98f1f7
// 0098f1dc  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0098f1df  6a00                 push 0
// 0098f1e1  6a00                 push 0
// 0098f1e3  6802030000           push 0x302
// 0098f1e8  50                   push eax
// 0098f1e9  ff15043cb200         call dword ptr [0xb23c04]
// 0098f1ef  b801000000           mov eax, 1
// 0098f1f4  c20800               ret 8
// 0098f1f7  3d22e10000           cmp eax, 0xe122
// 0098f1fc  751b                 jne 0x98f219
// 0098f1fe  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0098f201  6a00                 push 0
// 0098f203  6a00                 push 0
// 0098f205  6801030000           push 0x301
// 0098f20a  51                   push ecx
// 0098f20b  ff15043cb200         call dword ptr [0xb23c04]
// 0098f211  b801000000           mov eax, 1
// 0098f216  c20800               ret 8
// 0098f219  3d23e10000           cmp eax, 0xe123
// 0098f21e  751b                 jne 0x98f23b
// 0098f220  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0098f223  6a00                 push 0
// 0098f225  6a00                 push 0
// 0098f227  6800030000           push 0x300
// 0098f22c  52                   push edx
// 0098f22d  ff15043cb200         call dword ptr [0xb23c04]
// 0098f233  b801000000           mov eax, 1
// 0098f238  c20800               ret 8
// 0098f23b  33c0                 xor eax, eax
// 0098f23d  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPControlEdit.cpp (function ?OnCommand@CXTPCommandBarEditCtrl@@UAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlEdit.cpp
