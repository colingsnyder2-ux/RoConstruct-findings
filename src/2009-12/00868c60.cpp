// roc 2009-12 00868c60  unit: CXTPPropertyGridView  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00868c60
//
// 00868c60  c781b400000000000000 mov dword ptr [ecx + 0xb4], 0
// 00868c6a  e8c1b1f8ff           call 0x7f3e30
// 00868c6f  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnCaptureChanged@CXTPPropertyGridView@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
