// roc 2009-12 008e3010  unit: CXTShadowWnd  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e3010
//
// 008e3010  8b442404             mov eax, dword ptr [esp + 4]
// 008e3014  83f802               cmp eax, 2
// 008e3017  7518                 jne 0x8e3031
// 008e3019  8b4120               mov eax, dword ptr [ecx + 0x20]
// 008e301c  6a00                 push 0
// 008e301e  6a00                 push 0
// 008e3020  6844270000           push 0x2744
// 008e3025  50                   push eax
// 008e3026  ff15b8cb9800         call dword ptr [0x98cbb8]
// 008e302c  33c0                 xor eax, eax
// 008e302e  c20c00               ret 0xc
// 008e3031  83f847               cmp eax, 0x47
// 008e3034  7524                 jne 0x8e305a
// 008e3036  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008e303a  8b02                 mov eax, dword ptr [edx]
// 008e303c  8b5018               mov edx, dword ptr [eax + 0x18]
// 008e303f  83e203               and edx, 3
// 008e3042  80fa03               cmp dl, 3
// 008e3045  7413                 je 0x8e305a
// 008e3047  8b4120               mov eax, dword ptr [ecx + 0x20]
// 008e304a  6a00                 push 0
// 008e304c  6a00                 push 0
// 008e304e  6843270000           push 0x2743
// 008e3053  50                   push eax
// 008e3054  ff15b8cb9800         call dword ptr [0x98cbb8]
// 008e305a  33c0                 xor eax, eax
// 008e305c  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?OnHookMessage@CXTShadowWnd@@IAEHIAAIAAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
