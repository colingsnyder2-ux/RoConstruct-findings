// from server: 100% by auto
// roc 2012-06 00a4ca20  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4ca20
//
// 00a4ca20  8b515c               mov edx, dword ptr [ecx + 0x5c]
// 00a4ca23  33c0                 xor eax, eax
// 00a4ca25  85d2                 test edx, edx
// 00a4ca27  7e29                 jle 0xa4ca52
// 00a4ca29  8da42400000000       lea esp, [esp]
// 00a4ca30  85c0                 test eax, eax
// 00a4ca32  7c11                 jl 0xa4ca45
// 00a4ca34  3bc2                 cmp eax, edx
// 00a4ca36  7d0d                 jge 0xa4ca45
// 00a4ca38  3b415c               cmp eax, dword ptr [ecx + 0x5c]
// 00a4ca3b  7d1c                 jge 0xa4ca59
// 00a4ca3d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00a4ca40  8b1482               mov edx, dword ptr [edx + eax*4]
// 00a4ca43  eb02                 jmp 0xa4ca47
// 00a4ca45  33d2                 xor edx, edx
// 00a4ca47  89422c               mov dword ptr [edx + 0x2c], eax
// 00a4ca4a  8b515c               mov edx, dword ptr [ecx + 0x5c]
// 00a4ca4d  40                   inc eax
// 00a4ca4e  3bc2                 cmp eax, edx
// 00a4ca50  7cde                 jl 0xa4ca30
// 00a4ca52  8b01                 mov eax, dword ptr [ecx]
// 00a4ca54  8b5004               mov edx, dword ptr [eax + 4]
// 00a4ca57  ffe2                 jmp edx
// 00a4ca59  e96259f3ff           jmp 0x9823c0
// library xtp-15.2.1/Source\TabManager\XTPTabManager.cpp (function ?OnItemsChanged@CXTPTabManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabManager.cpp
