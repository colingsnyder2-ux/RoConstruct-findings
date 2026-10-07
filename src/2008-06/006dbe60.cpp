// roc 2008-06 006dbe60  unit: CXTTreeCtrl  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dbe60
//
// 006dbe60  8b442404             mov eax, dword ptr [esp + 4]
// 006dbe64  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 006dbe67  6a02                 push 2
// 006dbe69  50                   push eax
// 006dbe6a  e8ad040e00           call 0x7bc31c
// 006dbe6f  d1e8                 shr eax, 1
// 006dbe71  83e001               and eax, 1
// 006dbe74  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?IsSelected@CXTTreeBase@@QBEHPAU_TREEITEM@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
