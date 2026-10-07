// roc 2007-08 0041fbc0  unit: CXTTreeCtrl  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041fbc0
//
// 0041fbc0  8b442404             mov eax, dword ptr [esp + 4]
// 0041fbc4  56                   push esi
// 0041fbc5  50                   push eax
// 0041fbc6  8bf1                 mov esi, ecx
// 0041fbc8  e825012100           call 0x62fcf2
// 0041fbcd  85c0                 test eax, eax
// 0041fbcf  7504                 jne 0x41fbd5
// 0041fbd1  5e                   pop esi
// 0041fbd2  c20400               ret 4
// 0041fbd5  c6869000000000       mov byte ptr [esi + 0x90], 0
// 0041fbdc  b801000000           mov eax, 1
// 0041fbe1  5e                   pop esi
// 0041fbe2  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTTreeCtrlView.cpp (function ?PreCreateWindow@CXTTreeCtrlBase@@MAEHAAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeCtrlView.cpp
