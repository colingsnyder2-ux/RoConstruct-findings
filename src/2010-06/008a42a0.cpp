// roc 2010-06 008a42a0  unit: CXTPRibbonControls  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a42a0
//
// 008a42a0  8b442404             mov eax, dword ptr [esp + 4]
// 008a42a4  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 008a42aa  85d2                 test edx, edx
// 008a42ac  7412                 je 0x8a42c0
// 008a42ae  394268               cmp dword ptr [edx + 0x68], eax
// 008a42b1  7508                 jne 0x8a42bb
// 008a42b3  b801000000           mov eax, 1
// 008a42b8  c20400               ret 4
// 008a42bb  39426c               cmp dword ptr [edx + 0x6c], eax
// 008a42be  74f3                 je 0x8a42b3
// 008a42c0  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 008a42c3  3b8168020000         cmp eax, dword ptr [ecx + 0x268]
// 008a42c9  74e8                 je 0x8a42b3
// 008a42cb  3b816c020000         cmp eax, dword ptr [ecx + 0x26c]
// 008a42d1  74e0                 je 0x8a42b3
// 008a42d3  3b8170020000         cmp eax, dword ptr [ecx + 0x270]
// 008a42d9  74d8                 je 0x8a42b3
// 008a42db  3b81d0010000         cmp eax, dword ptr [ecx + 0x1d0]
// 008a42e1  74d0                 je 0x8a42b3
// 008a42e3  33d2                 xor edx, edx
// 008a42e5  3b81d4010000         cmp eax, dword ptr [ecx + 0x1d4]
// 008a42eb  0f94c2               sete dl
// 008a42ee  8bc2                 mov eax, edx
// 008a42f0  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonQuickAccessControls.cpp (function ?OnControlRemoving@CXTPRibbonControls@@MAEHPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonQuickAccessControls.cpp
