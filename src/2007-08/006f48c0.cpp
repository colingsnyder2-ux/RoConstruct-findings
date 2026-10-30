// from server: 100% by auto
// roc 2007-08 006f48c0  unit: CXTPCustomizeToolbarsPageCheckListBox  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f48c0
//
// 006f48c0  8b442404             mov eax, dword ptr [esp + 4]
// 006f48c4  83f82b               cmp eax, 0x2b
// 006f48c7  7512                 jne 0x6f48db
// 006f48c9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006f48cd  50                   push eax
// 006f48ce  e84dfeffff           call 0x6f4720
// 006f48d3  b801000000           mov eax, 1
// 006f48d8  c21000               ret 0x10
// 006f48db  89442404             mov dword ptr [esp + 4], eax
// 006f48df  e9ce430400           jmp 0x738cb2
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCustomizeToolbarsPage.cpp (function ?OnChildNotify@CXTPCustomizeToolbarsPageCheckListBox@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCustomizeToolbarsPage.cpp
