// roc 2007-08 00665090  unit: CXTTreeCtrl  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00665090
//
// 00665090  8b442404             mov eax, dword ptr [esp + 4]
// 00665094  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 00665097  6a02                 push 2
// 00665099  50                   push eax
// 0066509a  e89b350d00           call 0x73863a
// 0066509f  d1e8                 shr eax, 1
// 006650a1  83e001               and eax, 1
// 006650a4  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?IsSelected@CXTTreeBase@@QBEHPAU_TREEITEM@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
