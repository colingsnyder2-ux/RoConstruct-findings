// roc 2011-06 008780b0  unit: CXTPPropertyGridView  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008780b0
//
// 008780b0  c7815401000000000000 mov dword ptr [ecx + 0x154], 0
// 008780ba  e86f25f9ff           call 0x80a62e
// 008780bf  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnKillFocus@CXTPPropertyGridView@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
