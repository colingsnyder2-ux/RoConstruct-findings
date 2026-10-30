// roc 2009-06 0078c940  unit: CXTPPropertyGridView  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078c940
//
// 0078c940  c7815401000000000000 mov dword ptr [ecx + 0x154], 0
// 0078c94a  e90bcff8ff           jmp 0x71985a
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnSetFocus@CXTPPropertyGridView@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
