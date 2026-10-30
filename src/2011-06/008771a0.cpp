// roc 2011-06 008771a0  unit: CXTPPropertyGridView  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008771a0
//
// 008771a0  c781b400000000000000 mov dword ptr [ecx + 0xb4], 0
// 008771aa  e87f34f9ff           call 0x80a62e
// 008771af  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnCaptureChanged@CXTPPropertyGridView@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
