// roc 2008-06 00798da0  unit: CXTPRibbonControls  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00798da0
//
// 00798da0  8b442404             mov eax, dword ptr [esp + 4]
// 00798da4  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 00798daa  85d2                 test edx, edx
// 00798dac  7412                 je 0x798dc0
// 00798dae  394268               cmp dword ptr [edx + 0x68], eax
// 00798db1  7508                 jne 0x798dbb
// 00798db3  b801000000           mov eax, 1
// 00798db8  c20400               ret 4
// 00798dbb  39426c               cmp dword ptr [edx + 0x6c], eax
// 00798dbe  74f3                 je 0x798db3
// 00798dc0  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00798dc3  3b8168020000         cmp eax, dword ptr [ecx + 0x268]
// 00798dc9  74e8                 je 0x798db3
// 00798dcb  3b816c020000         cmp eax, dword ptr [ecx + 0x26c]
// 00798dd1  74e0                 je 0x798db3
// 00798dd3  3b8170020000         cmp eax, dword ptr [ecx + 0x270]
// 00798dd9  74d8                 je 0x798db3
// 00798ddb  3b81d0010000         cmp eax, dword ptr [ecx + 0x1d0]
// 00798de1  74d0                 je 0x798db3
// 00798de3  33d2                 xor edx, edx
// 00798de5  3b81d4010000         cmp eax, dword ptr [ecx + 0x1d4]
// 00798deb  0f94c2               sete dl
// 00798dee  8bc2                 mov eax, edx
// 00798df0  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonQuickAccessControls.cpp (function ?OnControlRemoving@CXTPRibbonControls@@MAEHPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonQuickAccessControls.cpp
