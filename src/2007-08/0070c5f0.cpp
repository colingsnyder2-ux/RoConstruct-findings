// roc 2007-08 0070c5f0  unit: CXTColorBase  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070c5f0
//
// 0070c5f0  8b442404             mov eax, dword ptr [esp + 4]
// 0070c5f4  56                   push esi
// 0070c5f5  50                   push eax
// 0070c5f6  8bf1                 mov esi, ecx
// 0070c5f8  e8f536f2ff           call 0x62fcf2
// 0070c5fd  85c0                 test eax, eax
// 0070c5ff  7504                 jne 0x70c605
// 0070c601  5e                   pop esi
// 0070c602  c20400               ret 4
// 0070c605  c6465c00             mov byte ptr [esi + 0x5c], 0
// 0070c609  b801000000           mov eax, 1
// 0070c60e  5e                   pop esi
// 0070c60f  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTColorPageStandard.cpp (function ?PreCreateWindow@CXTColorHex@@MAEHAAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTColorPageStandard.cpp
