// roc 2012-06 00678cb0  unit: DummyArbiter  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00678cb0
//
// 00678cb0  e8fbe92f00           call 0x9776b0
// 00678cb5  dd80c8000000         fld qword ptr [eax + 0xc8]
// 00678cbb  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?GetViewDivider@CXTPPropertyGrid@@QBENXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
