// roc 2007-03 00686e60  unit: seg_00680000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00686e60
//
// 00686e60  c7815401000000000000 mov dword ptr [ecx + 0x154], 0
// 00686e6a  e91d7ff9ff           jmp 0x61ed8c
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnSetFocus@CXTPPropertyGridView@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
