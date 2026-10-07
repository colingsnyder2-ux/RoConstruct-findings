// roc 2012-06 009c2d60  unit: CXTTreeView  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c2d60
//
// 009c2d60  c7019c27c100         mov dword ptr [ecx], 0xc1279c
// 009c2d66  c741601427c100       mov dword ptr [ecx + 0x60], 0xc12714
// 009c2d6d  e9befeffff           jmp 0x9c2c30
// library xtp-15.2.1/Source\Controls\List\XTPListCtrlView.cpp (function ??1CXTPListView@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/List/XTPListCtrlView.cpp
