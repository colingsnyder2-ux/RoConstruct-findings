// from server: 100% by auto
// roc 2011-06 008d46d0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d46d0
//
// 008d46d0  8b515c               mov edx, dword ptr [ecx + 0x5c]
// 008d46d3  33c0                 xor eax, eax
// 008d46d5  85d2                 test edx, edx
// 008d46d7  7e29                 jle 0x8d4702
// 008d46d9  8da42400000000       lea esp, [esp]
// 008d46e0  85c0                 test eax, eax
// 008d46e2  7c11                 jl 0x8d46f5
// 008d46e4  3bc2                 cmp eax, edx
// 008d46e6  7d0d                 jge 0x8d46f5
// 008d46e8  3b415c               cmp eax, dword ptr [ecx + 0x5c]
// 008d46eb  7d1c                 jge 0x8d4709
// 008d46ed  8b5158               mov edx, dword ptr [ecx + 0x58]
// 008d46f0  8b1482               mov edx, dword ptr [edx + eax*4]
// 008d46f3  eb02                 jmp 0x8d46f7
// 008d46f5  33d2                 xor edx, edx
// 008d46f7  89422c               mov dword ptr [edx + 0x2c], eax
// 008d46fa  8b515c               mov edx, dword ptr [ecx + 0x5c]
// 008d46fd  40                   inc eax
// 008d46fe  3bc2                 cmp eax, edx
// 008d4700  7cde                 jl 0x8d46e0
// 008d4702  8b01                 mov eax, dword ptr [ecx]
// 008d4704  8b5004               mov edx, dword ptr [eax + 4]
// 008d4707  ffe2                 jmp edx
// 008d4709  e9fc5bf3ff           jmp 0x80a30a
// library xtp-15.2.1/Source\TabManager\XTPTabManager.cpp (function ?OnItemsChanged@CXTPTabManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabManager.cpp
