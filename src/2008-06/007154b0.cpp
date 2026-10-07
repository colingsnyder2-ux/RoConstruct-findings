// roc 2008-06 007154b0  unit: CXTPPropertyGridView  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007154b0
//
// 007154b0  c781b400000000000000 mov dword ptr [ecx + 0xb4], 0
// 007154ba  e8a9b7f8ff           call 0x6a0c68
// 007154bf  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnCaptureChanged@CXTPPropertyGridView@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
