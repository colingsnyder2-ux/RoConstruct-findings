// roc 2008-06 0078feb0  unit: CXTShadowWnd  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078feb0
//
// 0078feb0  8b442404             mov eax, dword ptr [esp + 4]
// 0078feb4  83f802               cmp eax, 2
// 0078feb7  7518                 jne 0x78fed1
// 0078feb9  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0078febc  6a00                 push 0
// 0078febe  6a00                 push 0
// 0078fec0  6844270000           push 0x2744
// 0078fec5  50                   push eax
// 0078fec6  ff150c2e8000         call dword ptr [0x802e0c]
// 0078fecc  33c0                 xor eax, eax
// 0078fece  c20c00               ret 0xc
// 0078fed1  83f847               cmp eax, 0x47
// 0078fed4  7524                 jne 0x78fefa
// 0078fed6  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0078feda  8b02                 mov eax, dword ptr [edx]
// 0078fedc  8b5018               mov edx, dword ptr [eax + 0x18]
// 0078fedf  83e203               and edx, 3
// 0078fee2  80fa03               cmp dl, 3
// 0078fee5  7413                 je 0x78fefa
// 0078fee7  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0078feea  6a00                 push 0
// 0078feec  6a00                 push 0
// 0078feee  6843270000           push 0x2743
// 0078fef3  50                   push eax
// 0078fef4  ff150c2e8000         call dword ptr [0x802e0c]
// 0078fefa  33c0                 xor eax, eax
// 0078fefc  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?OnHookMessage@CXTShadowWnd@@IAEHIAAIAAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
