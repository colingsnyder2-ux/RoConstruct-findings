// roc 2011-06 008efde0  unit: CXTShadowWnd  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008efde0
//
// 008efde0  8b442404             mov eax, dword ptr [esp + 4]
// 008efde4  83f802               cmp eax, 2
// 008efde7  7518                 jne 0x8efe01
// 008efde9  8b4120               mov eax, dword ptr [ecx + 0x20]
// 008efdec  6a00                 push 0
// 008efdee  6a00                 push 0
// 008efdf0  6844270000           push 0x2744
// 008efdf5  50                   push eax
// 008efdf6  ff15b419a400         call dword ptr [0xa419b4]
// 008efdfc  33c0                 xor eax, eax
// 008efdfe  c20c00               ret 0xc
// 008efe01  83f847               cmp eax, 0x47
// 008efe04  7524                 jne 0x8efe2a
// 008efe06  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008efe0a  8b02                 mov eax, dword ptr [edx]
// 008efe0c  8b5018               mov edx, dword ptr [eax + 0x18]
// 008efe0f  83e203               and edx, 3
// 008efe12  80fa03               cmp dl, 3
// 008efe15  7413                 je 0x8efe2a
// 008efe17  8b4120               mov eax, dword ptr [ecx + 0x20]
// 008efe1a  6a00                 push 0
// 008efe1c  6a00                 push 0
// 008efe1e  6843270000           push 0x2743
// 008efe23  50                   push eax
// 008efe24  ff15b419a400         call dword ptr [0xa419b4]
// 008efe2a  33c0                 xor eax, eax
// 008efe2c  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?OnHookMessage@CXTShadowWnd@@IAEHIAAIAAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
