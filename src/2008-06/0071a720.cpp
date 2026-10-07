// roc 2008-06 0071a720  unit: CXTPDockBar  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071a720
//
// 0071a720  56                   push esi
// 0071a721  8b742408             mov esi, dword ptr [esp + 8]
// 0071a725  56                   push esi
// 0071a726  e8df5ff8ff           call 0x6a070a
// 0071a72b  85c0                 test eax, eax
// 0071a72d  7504                 jne 0x71a733
// 0071a72f  5e                   pop esi
// 0071a730  c20400               ret 4
// 0071a733  814e2000000004       or dword ptr [esi + 0x20], 0x4000000
// 0071a73a  b801000000           mov eax, 1
// 0071a73f  5e                   pop esi
// 0071a740  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockBar.cpp (function ?PreCreateWindow@CXTPDockBar@@MAEHAAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockBar.cpp
