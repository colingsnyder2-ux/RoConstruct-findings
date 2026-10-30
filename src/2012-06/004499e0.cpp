// from server: 100% by auto
// roc 2012-06 004499e0  unit: CXTTreeViewBase  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004499e0
//
// 004499e0  8b442404             mov eax, dword ptr [esp + 4]
// 004499e4  56                   push esi
// 004499e5  50                   push eax
// 004499e6  8bf1                 mov esi, ecx
// 004499e8  e813925300           call 0x982c00
// 004499ed  85c0                 test eax, eax
// 004499ef  7504                 jne 0x4499f5
// 004499f1  5e                   pop esi
// 004499f2  c20400               ret 4
// 004499f5  c6869c00000000       mov byte ptr [esi + 0x9c], 0
// 004499fc  b801000000           mov eax, 1
// 00449a01  5e                   pop esi
// 00449a02  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeCtrlView.cpp (function ?PreCreateWindow@CXTPTreeViewBase@@MAEHAAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeCtrlView.cpp
