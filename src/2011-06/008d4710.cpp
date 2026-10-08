// from server: 100% by auto
// roc 2011-06 008d4710  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d4710
//
// 008d4710  8b515c               mov edx, dword ptr [ecx + 0x5c]
// 008d4713  85d2                 test edx, edx
// 008d4715  7430                 je 0x8d4747
// 008d4717  8b442404             mov eax, dword ptr [esp + 4]
// 008d471b  85c0                 test eax, eax
// 008d471d  7d04                 jge 0x8d4723
// 008d471f  33c0                 xor eax, eax
// 008d4721  eb0b                 jmp 0x8d472e
// 008d4723  3bc2                 cmp eax, edx
// 008d4725  7c03                 jl 0x8d472a
// 008d4727  8d42ff               lea eax, [edx - 1]
// 008d472a  85c0                 test eax, eax
// 008d472c  7c0c                 jl 0x8d473a
// 008d472e  3bc2                 cmp eax, edx
// 008d4730  7d08                 jge 0x8d473a
// 008d4732  8b5158               mov edx, dword ptr [ecx + 0x58]
// 008d4735  8b0482               mov eax, dword ptr [edx + eax*4]
// 008d4738  eb02                 jmp 0x8d473c
// 008d473a  33c0                 xor eax, eax
// 008d473c  8b11                 mov edx, dword ptr [ecx]
// 008d473e  89442404             mov dword ptr [esp + 4], eax
// 008d4742  8b4220               mov eax, dword ptr [edx + 0x20]
// 008d4745  ffe0                 jmp eax
// 008d4747  8b11                 mov edx, dword ptr [ecx]
// 008d4749  8b4220               mov eax, dword ptr [edx + 0x20]
// 008d474c  c744240400000000     mov dword ptr [esp + 4], 0
// 008d4754  ffe0                 jmp eax
// library xtp-15.2.1/Source\TabManager\XTPTabManager.cpp (function ?SetCurSel@CXTPTabManager@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabManager.cpp
