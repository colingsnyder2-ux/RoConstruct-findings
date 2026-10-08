// from server: 100% by auto
// roc 2011-06 008a21b0  unit: CXTPDockBar  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a21b0
//
// 008a21b0  56                   push esi
// 008a21b1  8b742408             mov esi, dword ptr [esp + 8]
// 008a21b5  56                   push esi
// 008a21b6  e8277ff6ff           call 0x80a0e2
// 008a21bb  85c0                 test eax, eax
// 008a21bd  7504                 jne 0x8a21c3
// 008a21bf  5e                   pop esi
// 008a21c0  c20400               ret 4
// 008a21c3  814e2000000004       or dword ptr [esi + 0x20], 0x4000000
// 008a21ca  b801000000           mov eax, 1
// 008a21cf  5e                   pop esi
// 008a21d0  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPDockBar.cpp (function ?PreCreateWindow@CXTPDockBar@@MAEHAAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockBar.cpp
