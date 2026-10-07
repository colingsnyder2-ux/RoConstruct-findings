// roc 2012-06 00a1a5f0  unit: CXTPDockBar  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1a5f0
//
// 00a1a5f0  56                   push esi
// 00a1a5f1  8b742408             mov esi, dword ptr [esp + 8]
// 00a1a5f5  56                   push esi
// 00a1a5f6  e8a37bf6ff           call 0x98219e
// 00a1a5fb  85c0                 test eax, eax
// 00a1a5fd  7504                 jne 0xa1a603
// 00a1a5ff  5e                   pop esi
// 00a1a600  c20400               ret 4
// 00a1a603  814e2000000004       or dword ptr [esi + 0x20], 0x4000000
// 00a1a60a  b801000000           mov eax, 1
// 00a1a60f  5e                   pop esi
// 00a1a610  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPDockBar.cpp (function ?PreCreateWindow@CXTPDockBar@@MAEHAAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockBar.cpp
