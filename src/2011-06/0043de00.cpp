// roc 2011-06 0043de00  unit: CXTTreeViewBase  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0043de00
//
// 0043de00  8b442404             mov eax, dword ptr [esp + 4]
// 0043de04  56                   push esi
// 0043de05  50                   push eax
// 0043de06  8bf1                 mov esi, ecx
// 0043de08  e86dcd3c00           call 0x80ab7a
// 0043de0d  85c0                 test eax, eax
// 0043de0f  7504                 jne 0x43de15
// 0043de11  5e                   pop esi
// 0043de12  c20400               ret 4
// 0043de15  c6869c00000000       mov byte ptr [esi + 0x9c], 0
// 0043de1c  b801000000           mov eax, 1
// 0043de21  5e                   pop esi
// 0043de22  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeCtrlView.cpp (function ?PreCreateWindow@CXTPTreeViewBase@@MAEHAAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeCtrlView.cpp
