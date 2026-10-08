// roc 2009-06 00808530  unit: CXTShadowWnd  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00808530
//
// 00808530  8b442404             mov eax, dword ptr [esp + 4]
// 00808534  83f802               cmp eax, 2
// 00808537  7518                 jne 0x808551
// 00808539  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0080853c  6a00                 push 0
// 0080853e  6a00                 push 0
// 00808540  6844270000           push 0x2744
// 00808545  50                   push eax
// 00808546  ff159cee8900         call dword ptr [0x89ee9c]
// 0080854c  33c0                 xor eax, eax
// 0080854e  c20c00               ret 0xc
// 00808551  83f847               cmp eax, 0x47
// 00808554  7524                 jne 0x80857a
// 00808556  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0080855a  8b02                 mov eax, dword ptr [edx]
// 0080855c  8b5018               mov edx, dword ptr [eax + 0x18]
// 0080855f  83e203               and edx, 3
// 00808562  80fa03               cmp dl, 3
// 00808565  7413                 je 0x80857a
// 00808567  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0080856a  6a00                 push 0
// 0080856c  6a00                 push 0
// 0080856e  6843270000           push 0x2743
// 00808573  50                   push eax
// 00808574  ff159cee8900         call dword ptr [0x89ee9c]
// 0080857a  33c0                 xor eax, eax
// 0080857c  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?OnHookMessage@CXTShadowWnd@@IAEHIAAIAAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
