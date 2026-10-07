// roc 2012-06 00a4ca60  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4ca60
//
// 00a4ca60  8b515c               mov edx, dword ptr [ecx + 0x5c]
// 00a4ca63  85d2                 test edx, edx
// 00a4ca65  7430                 je 0xa4ca97
// 00a4ca67  8b442404             mov eax, dword ptr [esp + 4]
// 00a4ca6b  85c0                 test eax, eax
// 00a4ca6d  7d04                 jge 0xa4ca73
// 00a4ca6f  33c0                 xor eax, eax
// 00a4ca71  eb0b                 jmp 0xa4ca7e
// 00a4ca73  3bc2                 cmp eax, edx
// 00a4ca75  7c03                 jl 0xa4ca7a
// 00a4ca77  8d42ff               lea eax, [edx - 1]
// 00a4ca7a  85c0                 test eax, eax
// 00a4ca7c  7c0c                 jl 0xa4ca8a
// 00a4ca7e  3bc2                 cmp eax, edx
// 00a4ca80  7d08                 jge 0xa4ca8a
// 00a4ca82  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00a4ca85  8b0482               mov eax, dword ptr [edx + eax*4]
// 00a4ca88  eb02                 jmp 0xa4ca8c
// 00a4ca8a  33c0                 xor eax, eax
// 00a4ca8c  8b11                 mov edx, dword ptr [ecx]
// 00a4ca8e  89442404             mov dword ptr [esp + 4], eax
// 00a4ca92  8b4220               mov eax, dword ptr [edx + 0x20]
// 00a4ca95  ffe0                 jmp eax
// 00a4ca97  8b11                 mov edx, dword ptr [ecx]
// 00a4ca99  8b4220               mov eax, dword ptr [edx + 0x20]
// 00a4ca9c  c744240400000000     mov dword ptr [esp + 4], 0
// 00a4caa4  ffe0                 jmp eax
// library xtp-15.2.1/Source\TabManager\XTPTabManager.cpp (function ?SetCurSel@CXTPTabManager@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabManager.cpp
