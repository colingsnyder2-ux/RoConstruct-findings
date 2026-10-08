// from server: 100% by auto
// roc 2007-08 006a0ed0  unit: CXTPDockBar  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a0ed0
//
// 006a0ed0  56                   push esi
// 006a0ed1  8b742408             mov esi, dword ptr [esp + 8]
// 006a0ed5  56                   push esi
// 006a0ed6  e817eef8ff           call 0x62fcf2
// 006a0edb  85c0                 test eax, eax
// 006a0edd  7504                 jne 0x6a0ee3
// 006a0edf  5e                   pop esi
// 006a0ee0  c20400               ret 4
// 006a0ee3  814e2000000004       or dword ptr [esi + 0x20], 0x4000000
// 006a0eea  b801000000           mov eax, 1
// 006a0eef  5e                   pop esi
// 006a0ef0  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDockBar.cpp (function ?PreCreateWindow@CXTPDockBar@@MAEHAAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDockBar.cpp
