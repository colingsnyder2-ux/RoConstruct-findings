// from server: 100% by auto
// roc 2011-06 00426800  unit: CXTTreeCtrl  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00426800
//
// 00426800  8b442404             mov eax, dword ptr [esp + 4]
// 00426804  56                   push esi
// 00426805  50                   push eax
// 00426806  8bf1                 mov esi, ecx
// 00426808  e8d5383e00           call 0x80a0e2
// 0042680d  85c0                 test eax, eax
// 0042680f  7504                 jne 0x426815
// 00426811  5e                   pop esi
// 00426812  c20400               ret 4
// 00426815  c6869000000000       mov byte ptr [esi + 0x90], 0
// 0042681c  b801000000           mov eax, 1
// 00426821  5e                   pop esi
// 00426822  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Tree\XTPMarkupTreeCtrl.cpp (function ?PreCreateWindow@CXTPTreeCtrlBase@@MAEHAAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPMarkupTreeCtrl.cpp
