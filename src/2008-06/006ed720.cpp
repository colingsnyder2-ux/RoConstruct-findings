// from server: 100% by auto
// roc 2008-06 006ed720  unit: PAUXTP_COMMANDBARS_CATEGORYINFO::?$CArray  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ed720
//
// 006ed720  8b442404             mov eax, dword ptr [esp + 4]
// 006ed724  85c0                 test eax, eax
// 006ed726  7c14                 jl 0x6ed73c
// 006ed728  3b8144010000         cmp eax, dword ptr [ecx + 0x144]
// 006ed72e  7d0c                 jge 0x6ed73c
// 006ed730  8b8940010000         mov ecx, dword ptr [ecx + 0x140]
// 006ed736  8b0481               mov eax, dword ptr [ecx + eax*4]
// 006ed739  c20400               ret 4
// 006ed73c  33c0                 xor eax, eax
// 006ed73e  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeCommandsPage.cpp (function ?GetCategoryInfo@CXTPCustomizeCommandsPage@@AAEPAUXTP_COMMANDBARS_CATEGORYINFO@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeCommandsPage.cpp
