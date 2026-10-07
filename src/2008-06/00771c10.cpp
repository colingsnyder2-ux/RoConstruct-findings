// roc 2008-06 00771c10  unit: CXTPCustomizeToolbarsPageCheckListBox  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00771c10
//
// 00771c10  8b442404             mov eax, dword ptr [esp + 4]
// 00771c14  83f82b               cmp eax, 0x2b
// 00771c17  7512                 jne 0x771c2b
// 00771c19  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00771c1d  50                   push eax
// 00771c1e  e85dfeffff           call 0x771a80
// 00771c23  b801000000           mov eax, 1
// 00771c28  c21000               ret 0x10
// 00771c2b  89442404             mov dword ptr [esp + 4], eax
// 00771c2f  e912ad0400           jmp 0x7bc946
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeToolbarsPage.cpp (function ?OnChildNotify@CXTPCustomizeToolbarsPageCheckListBox@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeToolbarsPage.cpp
