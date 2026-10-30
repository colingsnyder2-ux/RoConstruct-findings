// from server: 100% by auto
// roc 2012-06 009e9cf0  unit: CXTPToolTipContextToolTip  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e9cf0
//
// 009e9cf0  56                   push esi
// 009e9cf1  e8e889f9ff           call 0x9826de
// 009e9cf6  8bf0                 mov esi, eax
// 009e9cf8  85f6                 test esi, esi
// 009e9cfa  7430                 je 0x9e9d2c
// 009e9cfc  6af0                 push -0x10
// 009e9cfe  56                   push esi
// 009e9cff  ff15bc3ab200         call dword ptr [0xb23abc]
// 009e9d05  a900000040           test eax, 0x40000000
// 009e9d0a  7420                 je 0x9e9d2c
// 009e9d0c  6a00                 push 0
// 009e9d0e  6a00                 push 0
// 009e9d10  68482a0000           push 0x2a48
// 009e9d15  56                   push esi
// 009e9d16  ff15043cb200         call dword ptr [0xb23c04]
// 009e9d1c  83f801               cmp eax, 1
// 009e9d1f  750b                 jne 0x9e9d2c
// 009e9d21  56                   push esi
// 009e9d22  ff15503ab200         call dword ptr [0xb23a50]
// 009e9d28  5e                   pop esi
// 009e9d29  c20800               ret 8
// 009e9d2c  8bc6                 mov eax, esi
// 009e9d2e  5e                   pop esi
// 009e9d2f  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPToolTipContext.cpp (function ?OnWindowFromPoint@CStandardToolTip@CXTPToolTipContext@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPToolTipContext.cpp
