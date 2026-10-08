// roc 2010-06 008972e0  unit: CXTShadowWnd  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008972e0
//
// 008972e0  8b442404             mov eax, dword ptr [esp + 4]
// 008972e4  83f802               cmp eax, 2
// 008972e7  7518                 jne 0x897301
// 008972e9  8b4120               mov eax, dword ptr [ecx + 0x20]
// 008972ec  6a00                 push 0
// 008972ee  6a00                 push 0
// 008972f0  6844270000           push 0x2744
// 008972f5  50                   push eax
// 008972f6  ff1548ba9e00         call dword ptr [0x9eba48]
// 008972fc  33c0                 xor eax, eax
// 008972fe  c20c00               ret 0xc
// 00897301  83f847               cmp eax, 0x47
// 00897304  7524                 jne 0x89732a
// 00897306  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0089730a  8b02                 mov eax, dword ptr [edx]
// 0089730c  8b5018               mov edx, dword ptr [eax + 0x18]
// 0089730f  83e203               and edx, 3
// 00897312  80fa03               cmp dl, 3
// 00897315  7413                 je 0x89732a
// 00897317  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0089731a  6a00                 push 0
// 0089731c  6a00                 push 0
// 0089731e  6843270000           push 0x2743
// 00897323  50                   push eax
// 00897324  ff1548ba9e00         call dword ptr [0x9eba48]
// 0089732a  33c0                 xor eax, eax
// 0089732c  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?OnHookMessage@CXTShadowWnd@@IAEHIAAIAAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
