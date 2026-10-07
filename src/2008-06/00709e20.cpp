// roc 2008-06 00709e20  unit: CXTPToolTipContextToolTip  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00709e20
//
// 00709e20  56                   push esi
// 00709e21  e8426ef9ff           call 0x6a0c68
// 00709e26  8bf0                 mov esi, eax
// 00709e28  85f6                 test esi, esi
// 00709e2a  7430                 je 0x709e5c
// 00709e2c  6af0                 push -0x10
// 00709e2e  56                   push esi
// 00709e2f  ff15bc2d8000         call dword ptr [0x802dbc]
// 00709e35  a900000040           test eax, 0x40000000
// 00709e3a  7420                 je 0x709e5c
// 00709e3c  6a00                 push 0
// 00709e3e  6a00                 push 0
// 00709e40  68482a0000           push 0x2a48
// 00709e45  56                   push esi
// 00709e46  ff15142e8000         call dword ptr [0x802e14]
// 00709e4c  83f801               cmp eax, 1
// 00709e4f  750b                 jne 0x709e5c
// 00709e51  56                   push esi
// 00709e52  ff15f82d8000         call dword ptr [0x802df8]
// 00709e58  5e                   pop esi
// 00709e59  c20800               ret 8
// 00709e5c  8bc6                 mov eax, esi
// 00709e5e  5e                   pop esi
// 00709e5f  c20800               ret 8
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?OnWindowFromPoint@CStandardToolTip@CXTPToolTipContext@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
