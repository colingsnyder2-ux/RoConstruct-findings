// roc 2011-06 008fce60  unit: CXTPRibbonControls  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fce60
//
// 008fce60  8b442404             mov eax, dword ptr [esp + 4]
// 008fce64  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 008fce6a  85d2                 test edx, edx
// 008fce6c  7412                 je 0x8fce80
// 008fce6e  394268               cmp dword ptr [edx + 0x68], eax
// 008fce71  7508                 jne 0x8fce7b
// 008fce73  b801000000           mov eax, 1
// 008fce78  c20400               ret 4
// 008fce7b  39426c               cmp dword ptr [edx + 0x6c], eax
// 008fce7e  74f3                 je 0x8fce73
// 008fce80  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 008fce83  3b8168020000         cmp eax, dword ptr [ecx + 0x268]
// 008fce89  74e8                 je 0x8fce73
// 008fce8b  3b816c020000         cmp eax, dword ptr [ecx + 0x26c]
// 008fce91  74e0                 je 0x8fce73
// 008fce93  3b8170020000         cmp eax, dword ptr [ecx + 0x270]
// 008fce99  74d8                 je 0x8fce73
// 008fce9b  3b81d0010000         cmp eax, dword ptr [ecx + 0x1d0]
// 008fcea1  74d0                 je 0x8fce73
// 008fcea3  33d2                 xor edx, edx
// 008fcea5  3b81d4010000         cmp eax, dword ptr [ecx + 0x1d4]
// 008fceab  0f94c2               sete dl
// 008fceae  8bc2                 mov eax, edx
// 008fceb0  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonQuickAccessControls.cpp (function ?OnControlRemoving@CXTPRibbonControls@@MAEHPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonQuickAccessControls.cpp
