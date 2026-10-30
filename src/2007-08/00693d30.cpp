// from server: 100% by auto
// roc 2007-08 00693d30  unit: CXTPStatusBar  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00693d30
//
// 00693d30  8b442408             mov eax, dword ptr [esp + 8]
// 00693d34  85c0                 test eax, eax
// 00693d36  56                   push esi
// 00693d37  7443                 je 0x693d7c
// 00693d39  8b4804               mov ecx, dword ptr [eax + 4]
// 00693d3c  8b10                 mov edx, dword ptr [eax]
// 00693d3e  51                   push ecx
// 00693d3f  52                   push edx
// 00693d40  ff1598ee7700         call dword ptr [0x77ee98]
// 00693d46  8bf0                 mov esi, eax
// 00693d48  85f6                 test esi, esi
// 00693d4a  7432                 je 0x693d7e
// 00693d4c  6af0                 push -0x10
// 00693d4e  56                   push esi
// 00693d4f  ff1534ec7700         call dword ptr [0x77ec34]
// 00693d55  a900000040           test eax, 0x40000000
// 00693d5a  7422                 je 0x693d7e
// 00693d5c  6a00                 push 0
// 00693d5e  6a00                 push 0
// 00693d60  68482a0000           push 0x2a48
// 00693d65  56                   push esi
// 00693d66  ff15d8ec7700         call dword ptr [0x77ecd8]
// 00693d6c  83f801               cmp eax, 1
// 00693d6f  750d                 jne 0x693d7e
// 00693d71  56                   push esi
// 00693d72  ff15f8eb7700         call dword ptr [0x77ebf8]
// 00693d78  5e                   pop esi
// 00693d79  c20800               ret 8
// 00693d7c  33f6                 xor esi, esi
// 00693d7e  8bc6                 mov eax, esi
// 00693d80  5e                   pop esi
// 00693d81  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Common\XTPToolTipContext.cpp (function ?OnWindowFromPoint@CXTPToolTipContextToolTip@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPToolTipContext.cpp
