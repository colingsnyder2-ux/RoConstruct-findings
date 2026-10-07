// roc 2012-06 0042a520  unit: CXTTreeCtrl  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0042a520
//
// 0042a520  8b442404             mov eax, dword ptr [esp + 4]
// 0042a524  56                   push esi
// 0042a525  50                   push eax
// 0042a526  8bf1                 mov esi, ecx
// 0042a528  e8717c5500           call 0x98219e
// 0042a52d  85c0                 test eax, eax
// 0042a52f  7504                 jne 0x42a535
// 0042a531  5e                   pop esi
// 0042a532  c20400               ret 4
// 0042a535  c6869000000000       mov byte ptr [esi + 0x90], 0
// 0042a53c  b801000000           mov eax, 1
// 0042a541  5e                   pop esi
// 0042a542  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Tree\XTPMarkupTreeCtrl.cpp (function ?PreCreateWindow@CXTPTreeCtrlBase@@MAEHAAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPMarkupTreeCtrl.cpp
