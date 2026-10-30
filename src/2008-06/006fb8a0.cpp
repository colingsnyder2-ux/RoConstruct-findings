// from server: 100% by auto
// roc 2008-06 006fb8a0  unit: CXTPPropertyGrid  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fb8a0
//
// 006fb8a0  6a01                 push 1
// 006fb8a2  6a00                 push 0
// 006fb8a4  6a00                 push 0
// 006fb8a6  e805ebffff           call 0x6fa3b0
// 006fb8ab  8bc8                 mov ecx, eax
// 006fb8ad  e81eb30100           call 0x716bd0
// 006fb8b2  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?OnSortCategorized@CXTPPropertyGrid@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
