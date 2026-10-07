// roc 2011-06 00846fc0  unit: CXTPColorManager  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00846fc0
//
// 00846fc0  8b442404             mov eax, dword ptr [esp + 4]
// 00846fc4  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 00846fc7  6a02                 push 2
// 00846fc9  50                   push eax
// 00846fca  e889581800           call 0x9cc858
// 00846fcf  d1e8                 shr eax, 1
// 00846fd1  83e001               and eax, 1
// 00846fd4  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?IsSelected@CXTPTreeBase@@QBEHPAU_TREEITEM@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
