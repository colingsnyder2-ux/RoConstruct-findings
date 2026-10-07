// roc 2007-08 006772c0  unit: CXTPCustomizeCommandsPage  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006772c0
//
// 006772c0  8b442404             mov eax, dword ptr [esp + 4]
// 006772c4  83f804               cmp eax, 4
// 006772c7  740d                 je 0x6772d6
// 006772c9  83f803               cmp eax, 3
// 006772cc  7408                 je 0x6772d6
// 006772ce  83f802               cmp eax, 2
// 006772d1  7403                 je 0x6772d6
// 006772d3  33c0                 xor eax, eax
// 006772d5  c3                   ret 
// 006772d6  b801000000           mov eax, 1
// 006772db  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPPopupBar.cpp (function ?IsAnimateType@@YAHW4XTPAnimationType@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPPopupBar.cpp
