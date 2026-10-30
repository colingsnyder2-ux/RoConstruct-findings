// from server: 100% by auto
// roc 2008-06 006ee100  unit: CXTPCustomizeCommandsPage  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ee100
//
// 006ee100  8b442404             mov eax, dword ptr [esp + 4]
// 006ee104  83f804               cmp eax, 4
// 006ee107  740d                 je 0x6ee116
// 006ee109  83f803               cmp eax, 3
// 006ee10c  7408                 je 0x6ee116
// 006ee10e  83f802               cmp eax, 2
// 006ee111  7403                 je 0x6ee116
// 006ee113  33c0                 xor eax, eax
// 006ee115  c3                   ret 
// 006ee116  b801000000           mov eax, 1
// 006ee11b  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?IsAnimateType@@YAHW4XTPAnimationType@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
