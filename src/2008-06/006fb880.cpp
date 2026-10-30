// from server: 100% by auto
// roc 2008-06 006fb880  unit: CXTPPropertyGrid  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fb880
//
// 006fb880  6a01                 push 1
// 006fb882  6a00                 push 0
// 006fb884  6a01                 push 1
// 006fb886  e825ebffff           call 0x6fa3b0
// 006fb88b  8bc8                 mov ecx, eax
// 006fb88d  e83eb30100           call 0x716bd0
// 006fb892  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?OnSortAlphabetic@CXTPPropertyGrid@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
