// from server: 100% by auto
// roc 2007-08 00712630  unit: CXTShadowWnd  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00712630
//
// 00712630  8b442404             mov eax, dword ptr [esp + 4]
// 00712634  83f802               cmp eax, 2
// 00712637  7518                 jne 0x712651
// 00712639  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0071263c  6a00                 push 0
// 0071263e  6a00                 push 0
// 00712640  6844270000           push 0x2744
// 00712645  50                   push eax
// 00712646  ff15d0ec7700         call dword ptr [0x77ecd0]
// 0071264c  33c0                 xor eax, eax
// 0071264e  c20c00               ret 0xc
// 00712651  83f847               cmp eax, 0x47
// 00712654  7524                 jne 0x71267a
// 00712656  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0071265a  8b02                 mov eax, dword ptr [edx]
// 0071265c  8b5018               mov edx, dword ptr [eax + 0x18]
// 0071265f  83e203               and edx, 3
// 00712662  80fa03               cmp dl, 3
// 00712665  7413                 je 0x71267a
// 00712667  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0071266a  6a00                 push 0
// 0071266c  6a00                 push 0
// 0071266e  6843270000           push 0x2743
// 00712673  50                   push eax
// 00712674  ff15d0ec7700         call dword ptr [0x77ecd0]
// 0071267a  33c0                 xor eax, eax
// 0071267c  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Controls\XTWndShadow.cpp (function ?OnHookMessage@CXTShadowWnd@@IAEHIAAIAAJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTWndShadow.cpp
