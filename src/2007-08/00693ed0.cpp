// roc 2007-08 00693ed0  unit: CXTPStatusBar  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00693ed0
//
// 00693ed0  56                   push esi
// 00693ed1  e868c3f9ff           call 0x63023e
// 00693ed6  8bf0                 mov esi, eax
// 00693ed8  85f6                 test esi, esi
// 00693eda  7430                 je 0x693f0c
// 00693edc  6af0                 push -0x10
// 00693ede  56                   push esi
// 00693edf  ff1534ec7700         call dword ptr [0x77ec34]
// 00693ee5  a900000040           test eax, 0x40000000
// 00693eea  7420                 je 0x693f0c
// 00693eec  6a00                 push 0
// 00693eee  6a00                 push 0
// 00693ef0  68482a0000           push 0x2a48
// 00693ef5  56                   push esi
// 00693ef6  ff15d8ec7700         call dword ptr [0x77ecd8]
// 00693efc  83f801               cmp eax, 1
// 00693eff  750b                 jne 0x693f0c
// 00693f01  56                   push esi
// 00693f02  ff15f8eb7700         call dword ptr [0x77ebf8]
// 00693f08  5e                   pop esi
// 00693f09  c20800               ret 8
// 00693f0c  8bc6                 mov eax, esi
// 00693f0e  5e                   pop esi
// 00693f0f  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Common\XTPToolTipContext.cpp (function ?OnWindowFromPoint@CStandardToolTip@CXTPToolTipContext@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPToolTipContext.cpp
