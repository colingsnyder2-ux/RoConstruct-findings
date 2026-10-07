// roc 2012-06 009e2bf0  unit: CXTPPropertyGrid  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e2bf0
//
// 009e2bf0  6a01                 push 1
// 009e2bf2  6a00                 push 0
// 009e2bf4  6a00                 push 0
// 009e2bf6  e825ebffff           call 0x9e1720
// 009e2bfb  8bc8                 mov ecx, eax
// 009e2bfd  e8dee20000           call 0x9f0ee0
// 009e2c02  c3                   ret 
// library xtp-13.2.1/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?OnSortCategorized@CXTPPropertyGrid@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-13.2.1 Source/PropertyGrid/XTPPropertyGrid.cpp
