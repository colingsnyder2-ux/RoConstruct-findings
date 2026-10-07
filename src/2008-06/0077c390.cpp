// roc 2008-06 0077c390  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077c390
//
// 0077c390  8b515c               mov edx, dword ptr [ecx + 0x5c]
// 0077c393  33c0                 xor eax, eax
// 0077c395  85d2                 test edx, edx
// 0077c397  7e29                 jle 0x77c3c2
// 0077c399  8da42400000000       lea esp, [esp]
// 0077c3a0  85c0                 test eax, eax
// 0077c3a2  7c11                 jl 0x77c3b5
// 0077c3a4  3bc2                 cmp eax, edx
// 0077c3a6  7d0d                 jge 0x77c3b5
// 0077c3a8  3b415c               cmp eax, dword ptr [ecx + 0x5c]
// 0077c3ab  7d1c                 jge 0x77c3c9
// 0077c3ad  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0077c3b0  8b1482               mov edx, dword ptr [edx + eax*4]
// 0077c3b3  eb02                 jmp 0x77c3b7
// 0077c3b5  33d2                 xor edx, edx
// 0077c3b7  89422c               mov dword ptr [edx + 0x2c], eax
// 0077c3ba  8b515c               mov edx, dword ptr [ecx + 0x5c]
// 0077c3bd  40                   inc eax
// 0077c3be  3bc2                 cmp eax, edx
// 0077c3c0  7cde                 jl 0x77c3a0
// 0077c3c2  8b01                 mov eax, dword ptr [ecx]
// 0077c3c4  8b5004               mov edx, dword ptr [eax + 4]
// 0077c3c7  ffe2                 jmp edx
// 0077c3c9  e97645f2ff           jmp 0x6a0944
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?OnItemsChanged@CXTPTabManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
