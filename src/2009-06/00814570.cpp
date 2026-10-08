// roc 2009-06 00814570  unit: CXTPRibbonControls  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00814570
//
// 00814570  8b442404             mov eax, dword ptr [esp + 4]
// 00814574  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 0081457a  85d2                 test edx, edx
// 0081457c  7412                 je 0x814590
// 0081457e  394268               cmp dword ptr [edx + 0x68], eax
// 00814581  7508                 jne 0x81458b
// 00814583  b801000000           mov eax, 1
// 00814588  c20400               ret 4
// 0081458b  39426c               cmp dword ptr [edx + 0x6c], eax
// 0081458e  74f3                 je 0x814583
// 00814590  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00814593  3b8168020000         cmp eax, dword ptr [ecx + 0x268]
// 00814599  74e8                 je 0x814583
// 0081459b  3b816c020000         cmp eax, dword ptr [ecx + 0x26c]
// 008145a1  74e0                 je 0x814583
// 008145a3  3b8170020000         cmp eax, dword ptr [ecx + 0x270]
// 008145a9  74d8                 je 0x814583
// 008145ab  3b81d0010000         cmp eax, dword ptr [ecx + 0x1d0]
// 008145b1  74d0                 je 0x814583
// 008145b3  33d2                 xor edx, edx
// 008145b5  3b81d4010000         cmp eax, dword ptr [ecx + 0x1d4]
// 008145bb  0f94c2               sete dl
// 008145be  8bc2                 mov eax, edx
// 008145c0  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonQuickAccessControls.cpp (function ?OnControlRemoving@CXTPRibbonControls@@MAEHPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonQuickAccessControls.cpp
