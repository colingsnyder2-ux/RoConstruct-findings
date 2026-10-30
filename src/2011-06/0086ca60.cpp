// from server: 100% by auto
// roc 2011-06 0086ca60  unit: CXTPStatusBar  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086ca60
//
// 0086ca60  8b442404             mov eax, dword ptr [esp + 4]
// 0086ca64  85c0                 test eax, eax
// 0086ca66  7c14                 jl 0x86ca7c
// 0086ca68  3b81a0000000         cmp eax, dword ptr [ecx + 0xa0]
// 0086ca6e  7d0c                 jge 0x86ca7c
// 0086ca70  8b899c000000         mov ecx, dword ptr [ecx + 0x9c]
// 0086ca76  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0086ca79  c20400               ret 4
// 0086ca7c  33c0                 xor eax, eax
// 0086ca7e  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPStatusBar.cpp (function ?GetPane@CXTPStatusBar@@QBEPAVCXTPStatusBarPane@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPStatusBar.cpp
