// from server: 100% by auto
// roc 2008-06 004229c0  unit: CXTTreeCtrl  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004229c0
//
// 004229c0  8b442404             mov eax, dword ptr [esp + 4]
// 004229c4  56                   push esi
// 004229c5  50                   push eax
// 004229c6  8bf1                 mov esi, ecx
// 004229c8  e83ddd2700           call 0x6a070a
// 004229cd  85c0                 test eax, eax
// 004229cf  7504                 jne 0x4229d5
// 004229d1  5e                   pop esi
// 004229d2  c20400               ret 4
// 004229d5  c6869000000000       mov byte ptr [esi + 0x90], 0
// 004229dc  b801000000           mov eax, 1
// 004229e1  5e                   pop esi
// 004229e2  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTTreeCtrlView.cpp (function ?PreCreateWindow@CXTTreeCtrlBase@@MAEHAAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeCtrlView.cpp
