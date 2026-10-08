// from server: 100% by auto
// roc 2007-08 006768c0  unit: PAUXTP_COMMANDBARS_CATEGORYINFO::?$CArray  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006768c0
//
// 006768c0  8b442404             mov eax, dword ptr [esp + 4]
// 006768c4  85c0                 test eax, eax
// 006768c6  7c14                 jl 0x6768dc
// 006768c8  3b8144010000         cmp eax, dword ptr [ecx + 0x144]
// 006768ce  7d0c                 jge 0x6768dc
// 006768d0  8b8940010000         mov ecx, dword ptr [ecx + 0x140]
// 006768d6  8b0481               mov eax, dword ptr [ecx + eax*4]
// 006768d9  c20400               ret 4
// 006768dc  33c0                 xor eax, eax
// 006768de  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCustomizeCommandsPage.cpp (function ?GetCategoryInfo@CXTPCustomizeCommandsPage@@AAEPAUXTP_COMMANDBARS_CATEGORYINFO@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCustomizeCommandsPage.cpp
