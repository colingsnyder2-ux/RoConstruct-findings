// roc 2009-06 0078dc50  unit: CXTPPropertyGridView  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078dc50
//
// 0078dc50  c781b400000000000000 mov dword ptr [ecx + 0xb4], 0
// 0078dc5a  e8a9b3f8ff           call 0x719008
// 0078dc5f  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnCaptureChanged@CXTPPropertyGridView@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
