// from server: 100% by auto
// roc 2012-06 009e9a70  unit: CXTPToolTipContextToolTip  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e9a70
//
// 009e9a70  8b442408             mov eax, dword ptr [esp + 8]
// 009e9a74  56                   push esi
// 009e9a75  85c0                 test eax, eax
// 009e9a77  7443                 je 0x9e9abc
// 009e9a79  8b4804               mov ecx, dword ptr [eax + 4]
// 009e9a7c  8b10                 mov edx, dword ptr [eax]
// 009e9a7e  51                   push ecx
// 009e9a7f  52                   push edx
// 009e9a80  ff15b43cb200         call dword ptr [0xb23cb4]
// 009e9a86  8bf0                 mov esi, eax
// 009e9a88  85f6                 test esi, esi
// 009e9a8a  7432                 je 0x9e9abe
// 009e9a8c  6af0                 push -0x10
// 009e9a8e  56                   push esi
// 009e9a8f  ff15bc3ab200         call dword ptr [0xb23abc]
// 009e9a95  a900000040           test eax, 0x40000000
// 009e9a9a  7422                 je 0x9e9abe
// 009e9a9c  6a00                 push 0
// 009e9a9e  6a00                 push 0
// 009e9aa0  68482a0000           push 0x2a48
// 009e9aa5  56                   push esi
// 009e9aa6  ff15043cb200         call dword ptr [0xb23c04]
// 009e9aac  83f801               cmp eax, 1
// 009e9aaf  750d                 jne 0x9e9abe
// 009e9ab1  56                   push esi
// 009e9ab2  ff15503ab200         call dword ptr [0xb23a50]
// 009e9ab8  5e                   pop esi
// 009e9ab9  c20800               ret 8
// 009e9abc  33f6                 xor esi, esi
// 009e9abe  8bc6                 mov eax, esi
// 009e9ac0  5e                   pop esi
// 009e9ac1  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPToolTipContext.cpp (function ?OnWindowFromPoint@CXTPToolTipContextToolTip@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPToolTipContext.cpp
