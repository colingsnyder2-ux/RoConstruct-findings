// roc 2011-06 008717d0  unit: CXTPToolTipContextToolTip  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008717d0
//
// 008717d0  56                   push esi
// 008717d1  e8588ef9ff           call 0x80a62e
// 008717d6  8bf0                 mov esi, eax
// 008717d8  85f6                 test esi, esi
// 008717da  7430                 je 0x87180c
// 008717dc  6af0                 push -0x10
// 008717de  56                   push esi
// 008717df  ff15981ca400         call dword ptr [0xa41c98]
// 008717e5  a900000040           test eax, 0x40000000
// 008717ea  7420                 je 0x87180c
// 008717ec  6a00                 push 0
// 008717ee  6a00                 push 0
// 008717f0  68482a0000           push 0x2a48
// 008717f5  56                   push esi
// 008717f6  ff15c019a400         call dword ptr [0xa419c0]
// 008717fc  83f801               cmp eax, 1
// 008717ff  750b                 jne 0x87180c
// 00871801  56                   push esi
// 00871802  ff15b819a400         call dword ptr [0xa419b8]
// 00871808  5e                   pop esi
// 00871809  c20800               ret 8
// 0087180c  8bc6                 mov eax, esi
// 0087180e  5e                   pop esi
// 0087180f  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPToolTipContext.cpp (function ?OnWindowFromPoint@CStandardToolTip@CXTPToolTipContext@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPToolTipContext.cpp
