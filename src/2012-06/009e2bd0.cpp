// roc 2012-06 009e2bd0  unit: CXTPPropertyGrid  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e2bd0
//
// 009e2bd0  6a01                 push 1
// 009e2bd2  6a00                 push 0
// 009e2bd4  6a01                 push 1
// 009e2bd6  e845ebffff           call 0x9e1720
// 009e2bdb  8bc8                 mov ecx, eax
// 009e2bdd  e8fee20000           call 0x9f0ee0
// 009e2be2  c3                   ret 
// library xtp-13.2.1/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?OnSortAlphabetic@CXTPPropertyGrid@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-13.2.1 Source/PropertyGrid/XTPPropertyGrid.cpp
