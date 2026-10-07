// roc 2011-06 00871550  unit: CXTPToolTipContextToolTip  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00871550
//
// 00871550  8b442408             mov eax, dword ptr [esp + 8]
// 00871554  56                   push esi
// 00871555  85c0                 test eax, eax
// 00871557  7443                 je 0x87159c
// 00871559  8b4804               mov ecx, dword ptr [eax + 4]
// 0087155c  8b10                 mov edx, dword ptr [eax]
// 0087155e  51                   push ecx
// 0087155f  52                   push edx
// 00871560  ff15a41aa400         call dword ptr [0xa41aa4]
// 00871566  8bf0                 mov esi, eax
// 00871568  85f6                 test esi, esi
// 0087156a  7432                 je 0x87159e
// 0087156c  6af0                 push -0x10
// 0087156e  56                   push esi
// 0087156f  ff15981ca400         call dword ptr [0xa41c98]
// 00871575  a900000040           test eax, 0x40000000
// 0087157a  7422                 je 0x87159e
// 0087157c  6a00                 push 0
// 0087157e  6a00                 push 0
// 00871580  68482a0000           push 0x2a48
// 00871585  56                   push esi
// 00871586  ff15c019a400         call dword ptr [0xa419c0]
// 0087158c  83f801               cmp eax, 1
// 0087158f  750d                 jne 0x87159e
// 00871591  56                   push esi
// 00871592  ff15b819a400         call dword ptr [0xa419b8]
// 00871598  5e                   pop esi
// 00871599  c20800               ret 8
// 0087159c  33f6                 xor esi, esi
// 0087159e  8bc6                 mov eax, esi
// 008715a0  5e                   pop esi
// 008715a1  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPToolTipContext.cpp (function ?OnWindowFromPoint@CXTPToolTipContextToolTip@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPToolTipContext.cpp
