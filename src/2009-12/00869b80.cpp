// roc 2009-12 00869b80  unit: CXTPPropertyGridView  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00869b80
//
// 00869b80  c7815401000000000000 mov dword ptr [ecx + 0x154], 0
// 00869b8a  e8a1a2f8ff           call 0x7f3e30
// 00869b8f  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnKillFocus@CXTPPropertyGridView@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
