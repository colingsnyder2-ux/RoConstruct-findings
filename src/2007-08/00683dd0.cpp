// roc 2007-08 00683dd0  unit: CXTPPropertyGrid  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00683dd0
//
// 00683dd0  6a01                 push 1
// 00683dd2  6a00                 push 0
// 00683dd4  6a00                 push 0
// 00683dd6  e845ecffff           call 0x682a20
// 00683ddb  8bc8                 mov ecx, eax
// 00683ddd  e85e950100           call 0x69d340
// 00683de2  c3                   ret 
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?OnSortCategorized@CXTPPropertyGrid@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGrid.cpp
