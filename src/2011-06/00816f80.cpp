// roc 2011-06 00816f80  unit: CXTPEdit  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00816f80
//
// 00816f80  0fb7442404           movzx eax, word ptr [esp + 4]
// 00816f85  3d25e10000           cmp eax, 0xe125
// 00816f8a  751b                 jne 0x816fa7
// 00816f8c  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00816f8f  6a00                 push 0
// 00816f91  6a00                 push 0
// 00816f93  6802030000           push 0x302
// 00816f98  50                   push eax
// 00816f99  ff15c019a400         call dword ptr [0xa419c0]
// 00816f9f  b801000000           mov eax, 1
// 00816fa4  c20800               ret 8
// 00816fa7  3d22e10000           cmp eax, 0xe122
// 00816fac  751b                 jne 0x816fc9
// 00816fae  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00816fb1  6a00                 push 0
// 00816fb3  6a00                 push 0
// 00816fb5  6801030000           push 0x301
// 00816fba  51                   push ecx
// 00816fbb  ff15c019a400         call dword ptr [0xa419c0]
// 00816fc1  b801000000           mov eax, 1
// 00816fc6  c20800               ret 8
// 00816fc9  3d23e10000           cmp eax, 0xe123
// 00816fce  751b                 jne 0x816feb
// 00816fd0  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00816fd3  6a00                 push 0
// 00816fd5  6a00                 push 0
// 00816fd7  6800030000           push 0x300
// 00816fdc  52                   push edx
// 00816fdd  ff15c019a400         call dword ptr [0xa419c0]
// 00816fe3  b801000000           mov eax, 1
// 00816fe8  c20800               ret 8
// 00816feb  33c0                 xor eax, eax
// 00816fed  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPControlEdit.cpp (function ?OnCommand@CXTPCommandBarEditCtrl@@UAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlEdit.cpp
