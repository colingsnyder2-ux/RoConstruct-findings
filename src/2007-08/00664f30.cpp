// from server: 100% by auto
// roc 2007-08 00664f30  unit: CXTTreeView  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00664f30
//
// 00664f30  c7018ca27c00         mov dword ptr [ecx], 0x7ca28c
// 00664f36  c741600ca27c00       mov dword ptr [ecx + 0x60], 0x7ca20c
// 00664f3d  e9befeffff           jmp 0x664e00
// library xtp-11.2.2-vc8/Source\Controls\XTListCtrlView.cpp (function ??1CXTListView@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTListCtrlView.cpp
