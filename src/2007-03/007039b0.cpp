// roc 2007-03 007039b0  unit: seg_00700000  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007039b0
//
// 007039b0  8b442404             mov eax, dword ptr [esp + 4]
// 007039b4  83f802               cmp eax, 2
// 007039b7  7518                 jne 0x7039d1
// 007039b9  8b4120               mov eax, dword ptr [ecx + 0x20]
// 007039bc  6a00                 push 0
// 007039be  6a00                 push 0
// 007039c0  6844270000           push 0x2744
// 007039c5  50                   push eax
// 007039c6  ff1548ee7700         call dword ptr [0x77ee48]
// 007039cc  33c0                 xor eax, eax
// 007039ce  c20c00               ret 0xc
// 007039d1  83f847               cmp eax, 0x47
// 007039d4  7524                 jne 0x7039fa
// 007039d6  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007039da  8b02                 mov eax, dword ptr [edx]
// 007039dc  8b5018               mov edx, dword ptr [eax + 0x18]
// 007039df  83e203               and edx, 3
// 007039e2  80fa03               cmp dl, 3
// 007039e5  7413                 je 0x7039fa
// 007039e7  8b4120               mov eax, dword ptr [ecx + 0x20]
// 007039ea  6a00                 push 0
// 007039ec  6a00                 push 0
// 007039ee  6843270000           push 0x2743
// 007039f3  50                   push eax
// 007039f4  ff1548ee7700         call dword ptr [0x77ee48]
// 007039fa  33c0                 xor eax, eax
// 007039fc  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?OnHookMessage@CXTShadowWnd@@IAEHIAAIAAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
