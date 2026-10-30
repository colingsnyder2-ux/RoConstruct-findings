// roc 2009-06 005c9450  unit: seg_005c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c9450
//
// 005c9450  e80b321400           call 0x70c660
// 005c9455  dd80c8000000         fld qword ptr [eax + 0xc8]
// 005c945b  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?GetViewDivider@CXTPPropertyGrid@@QBENXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
