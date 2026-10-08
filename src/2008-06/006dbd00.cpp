// from server: 100% by auto
// roc 2008-06 006dbd00  unit: CXTTreeView  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dbd00
//
// 006dbd00  c701fc598500         mov dword ptr [ecx], 0x8559fc
// 006dbd06  c7416074598500       mov dword ptr [ecx + 0x60], 0x855974
// 006dbd0d  e9befeffff           jmp 0x6dbbd0
// library xtp-11.2.2/Source\Controls\XTListCtrlView.cpp (function ??1CXTListView@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTListCtrlView.cpp
