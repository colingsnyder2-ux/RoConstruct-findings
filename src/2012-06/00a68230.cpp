// roc 2012-06 00a68230  unit: CXTShadowWnd  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a68230
//
// 00a68230  8b442404             mov eax, dword ptr [esp + 4]
// 00a68234  83f802               cmp eax, 2
// 00a68237  7518                 jne 0xa68251
// 00a68239  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00a6823c  6a00                 push 0
// 00a6823e  6a00                 push 0
// 00a68240  6844270000           push 0x2744
// 00a68245  50                   push eax
// 00a68246  ff15243cb200         call dword ptr [0xb23c24]
// 00a6824c  33c0                 xor eax, eax
// 00a6824e  c20c00               ret 0xc
// 00a68251  83f847               cmp eax, 0x47
// 00a68254  7524                 jne 0xa6827a
// 00a68256  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a6825a  8b02                 mov eax, dword ptr [edx]
// 00a6825c  8b5018               mov edx, dword ptr [eax + 0x18]
// 00a6825f  83e203               and edx, 3
// 00a68262  80fa03               cmp dl, 3
// 00a68265  7413                 je 0xa6827a
// 00a68267  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00a6826a  6a00                 push 0
// 00a6826c  6a00                 push 0
// 00a6826e  6843270000           push 0x2743
// 00a68273  50                   push eax
// 00a68274  ff15243cb200         call dword ptr [0xb23c24]
// 00a6827a  33c0                 xor eax, eax
// 00a6827c  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?OnHookMessage@CXTShadowWnd@@IAEHIAAIAAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
