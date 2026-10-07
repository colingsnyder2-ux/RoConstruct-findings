// roc 2008-06 004337e0  unit: CClassTreeView  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004337e0
//
// 004337e0  8b442404             mov eax, dword ptr [esp + 4]
// 004337e4  56                   push esi
// 004337e5  50                   push eax
// 004337e6  8bf1                 mov esi, ecx
// 004337e8  e8efd82600           call 0x6a10dc
// 004337ed  85c0                 test eax, eax
// 004337ef  7504                 jne 0x4337f5
// 004337f1  5e                   pop esi
// 004337f2  c20400               ret 4
// 004337f5  c6869c00000000       mov byte ptr [esi + 0x9c], 0
// 004337fc  b801000000           mov eax, 1
// 00433801  5e                   pop esi
// 00433802  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTTreeCtrlView.cpp (function ?PreCreateWindow@CXTTreeViewBase@@MAEHAAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeCtrlView.cpp
