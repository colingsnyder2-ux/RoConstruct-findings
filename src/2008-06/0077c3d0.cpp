// from server: 100% by auto
// roc 2008-06 0077c3d0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077c3d0
//
// 0077c3d0  8b515c               mov edx, dword ptr [ecx + 0x5c]
// 0077c3d3  85d2                 test edx, edx
// 0077c3d5  7430                 je 0x77c407
// 0077c3d7  8b442404             mov eax, dword ptr [esp + 4]
// 0077c3db  85c0                 test eax, eax
// 0077c3dd  7d04                 jge 0x77c3e3
// 0077c3df  33c0                 xor eax, eax
// 0077c3e1  eb0b                 jmp 0x77c3ee
// 0077c3e3  3bc2                 cmp eax, edx
// 0077c3e5  7c03                 jl 0x77c3ea
// 0077c3e7  8d42ff               lea eax, [edx - 1]
// 0077c3ea  85c0                 test eax, eax
// 0077c3ec  7c0c                 jl 0x77c3fa
// 0077c3ee  3bc2                 cmp eax, edx
// 0077c3f0  7d08                 jge 0x77c3fa
// 0077c3f2  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0077c3f5  8b0482               mov eax, dword ptr [edx + eax*4]
// 0077c3f8  eb02                 jmp 0x77c3fc
// 0077c3fa  33c0                 xor eax, eax
// 0077c3fc  8b11                 mov edx, dword ptr [ecx]
// 0077c3fe  89442404             mov dword ptr [esp + 4], eax
// 0077c402  8b4220               mov eax, dword ptr [edx + 0x20]
// 0077c405  ffe0                 jmp eax
// 0077c407  8b11                 mov edx, dword ptr [ecx]
// 0077c409  8b4220               mov eax, dword ptr [edx + 0x20]
// 0077c40c  c744240400000000     mov dword ptr [esp + 4], 0
// 0077c414  ffe0                 jmp eax
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?SetCurSel@CXTPTabManager@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
