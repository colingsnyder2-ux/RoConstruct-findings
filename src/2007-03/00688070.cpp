// roc 2007-03 00688070  unit: seg_00680000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00688070
//
// 00688070  c781b400000000000000 mov dword ptr [ecx + 0xb4], 0
// 0068807a  e85366f9ff           call 0x61e6d2
// 0068807f  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnCaptureChanged@CXTPPropertyGridView@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
