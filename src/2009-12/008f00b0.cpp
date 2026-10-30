// roc 2009-12 008f00b0  unit: CXTPRibbonControls  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f00b0
//
// 008f00b0  8b442404             mov eax, dword ptr [esp + 4]
// 008f00b4  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 008f00ba  85d2                 test edx, edx
// 008f00bc  7412                 je 0x8f00d0
// 008f00be  394268               cmp dword ptr [edx + 0x68], eax
// 008f00c1  7508                 jne 0x8f00cb
// 008f00c3  b801000000           mov eax, 1
// 008f00c8  c20400               ret 4
// 008f00cb  39426c               cmp dword ptr [edx + 0x6c], eax
// 008f00ce  74f3                 je 0x8f00c3
// 008f00d0  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 008f00d3  3b8168020000         cmp eax, dword ptr [ecx + 0x268]
// 008f00d9  74e8                 je 0x8f00c3
// 008f00db  3b816c020000         cmp eax, dword ptr [ecx + 0x26c]
// 008f00e1  74e0                 je 0x8f00c3
// 008f00e3  3b8170020000         cmp eax, dword ptr [ecx + 0x270]
// 008f00e9  74d8                 je 0x8f00c3
// 008f00eb  3b81d0010000         cmp eax, dword ptr [ecx + 0x1d0]
// 008f00f1  74d0                 je 0x8f00c3
// 008f00f3  33d2                 xor edx, edx
// 008f00f5  3b81d4010000         cmp eax, dword ptr [ecx + 0x1d4]
// 008f00fb  0f94c2               sete dl
// 008f00fe  8bc2                 mov eax, edx
// 008f0100  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonQuickAccessControls.cpp (function ?OnControlRemoving@CXTPRibbonControls@@MAEHPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonQuickAccessControls.cpp
