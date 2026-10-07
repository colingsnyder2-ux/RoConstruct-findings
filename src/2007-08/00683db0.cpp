// roc 2007-08 00683db0  unit: CXTPPropertyGrid  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00683db0
//
// 00683db0  6a01                 push 1
// 00683db2  6a00                 push 0
// 00683db4  6a01                 push 1
// 00683db6  e865ecffff           call 0x682a20
// 00683dbb  8bc8                 mov ecx, eax
// 00683dbd  e87e950100           call 0x69d340
// 00683dc2  c3                   ret 
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?OnSortAlphabetic@CXTPPropertyGrid@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGrid.cpp
