// roc 2012-06 009bf440  unit: CXTPColorManager  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bf440
//
// 009bf440  8b442404             mov eax, dword ptr [esp + 4]
// 009bf444  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 009bf447  6a02                 push 2
// 009bf449  50                   push eax
// 009bf44a  e8c3a30d00           call 0xa99812
// 009bf44f  d1e8                 shr eax, 1
// 009bf451  83e001               and eax, 1
// 009bf454  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?IsSelected@CXTPTreeBase@@QBEHPAU_TREEITEM@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
