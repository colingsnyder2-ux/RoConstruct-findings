// roc 2011-06 0084a8b0  unit: CXTTreeView  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084a8b0
//
// 0084a8b0  c701bc70ac00         mov dword ptr [ecx], 0xac70bc
// 0084a8b6  c741603470ac00       mov dword ptr [ecx + 0x60], 0xac7034
// 0084a8bd  e9befeffff           jmp 0x84a780
// library xtp-15.2.1/Source\Controls\List\XTPListCtrlView.cpp (function ??1CXTPListView@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/List/XTPListCtrlView.cpp
