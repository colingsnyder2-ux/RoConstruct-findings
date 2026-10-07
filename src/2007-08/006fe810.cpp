// roc 2007-08 006fe810  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fe810
//
// 006fe810  8b515c               mov edx, dword ptr [ecx + 0x5c]
// 006fe813  85d2                 test edx, edx
// 006fe815  7430                 je 0x6fe847
// 006fe817  8b442404             mov eax, dword ptr [esp + 4]
// 006fe81b  85c0                 test eax, eax
// 006fe81d  7d04                 jge 0x6fe823
// 006fe81f  33c0                 xor eax, eax
// 006fe821  eb0b                 jmp 0x6fe82e
// 006fe823  3bc2                 cmp eax, edx
// 006fe825  7c03                 jl 0x6fe82a
// 006fe827  8d42ff               lea eax, [edx - 1]
// 006fe82a  85c0                 test eax, eax
// 006fe82c  7c0c                 jl 0x6fe83a
// 006fe82e  3bc2                 cmp eax, edx
// 006fe830  7d08                 jge 0x6fe83a
// 006fe832  8b5158               mov edx, dword ptr [ecx + 0x58]
// 006fe835  8b0482               mov eax, dword ptr [edx + eax*4]
// 006fe838  eb02                 jmp 0x6fe83c
// 006fe83a  33c0                 xor eax, eax
// 006fe83c  8b11                 mov edx, dword ptr [ecx]
// 006fe83e  89442404             mov dword ptr [esp + 4], eax
// 006fe842  8b4220               mov eax, dword ptr [edx + 0x20]
// 006fe845  ffe0                 jmp eax
// 006fe847  8b11                 mov edx, dword ptr [ecx]
// 006fe849  8b4220               mov eax, dword ptr [edx + 0x20]
// 006fe84c  c744240400000000     mov dword ptr [esp + 4], 0
// 006fe854  ffe0                 jmp eax
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabManager.cpp (function ?SetCurSel@CXTPTabManager@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabManager.cpp
