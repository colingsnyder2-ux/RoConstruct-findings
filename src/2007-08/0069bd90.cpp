// from server: 100% by auto
// roc 2007-08 0069bd90  unit: CXTPPropertyGridView  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069bd90
//
// 0069bd90  c781b400000000000000 mov dword ptr [ecx + 0xb4], 0
// 0069bd9a  e89f44f9ff           call 0x63023e
// 0069bd9f  c20400               ret 4
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnCaptureChanged@CXTPPropertyGridView@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridView.cpp
