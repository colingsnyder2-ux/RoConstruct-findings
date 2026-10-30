// roc 2010-06 0081cc70  unit: CXTPPropertyGridView  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0081cc70
//
// 0081cc70  c781b400000000000000 mov dword ptr [ecx + 0xb4], 0
// 0081cc7a  e8f1b2f8ff           call 0x7a7f70
// 0081cc7f  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnCaptureChanged@CXTPPropertyGridView@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
