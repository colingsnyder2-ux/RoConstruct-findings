// roc 2012-06 00a75190  unit: CXTPRibbonControls  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a75190
//
// 00a75190  8b442404             mov eax, dword ptr [esp + 4]
// 00a75194  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 00a7519a  85d2                 test edx, edx
// 00a7519c  7412                 je 0xa751b0
// 00a7519e  394268               cmp dword ptr [edx + 0x68], eax
// 00a751a1  7508                 jne 0xa751ab
// 00a751a3  b801000000           mov eax, 1
// 00a751a8  c20400               ret 4
// 00a751ab  39426c               cmp dword ptr [edx + 0x6c], eax
// 00a751ae  74f3                 je 0xa751a3
// 00a751b0  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00a751b3  3b8168020000         cmp eax, dword ptr [ecx + 0x268]
// 00a751b9  74e8                 je 0xa751a3
// 00a751bb  3b816c020000         cmp eax, dword ptr [ecx + 0x26c]
// 00a751c1  74e0                 je 0xa751a3
// 00a751c3  3b8170020000         cmp eax, dword ptr [ecx + 0x270]
// 00a751c9  74d8                 je 0xa751a3
// 00a751cb  3b81d0010000         cmp eax, dword ptr [ecx + 0x1d0]
// 00a751d1  74d0                 je 0xa751a3
// 00a751d3  33d2                 xor edx, edx
// 00a751d5  3b81d4010000         cmp eax, dword ptr [ecx + 0x1d4]
// 00a751db  0f94c2               sete dl
// 00a751de  8bc2                 mov eax, edx
// 00a751e0  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonQuickAccessControls.cpp (function ?OnControlRemoving@CXTPRibbonControls@@MAEHPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonQuickAccessControls.cpp
