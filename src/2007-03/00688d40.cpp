// roc 2007-03 00688d40  unit: seg_00680000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00688d40
//
// 00688d40  c7815401000000000000 mov dword ptr [ecx + 0x154], 0
// 00688d4a  e88359f9ff           call 0x61e6d2
// 00688d4f  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnKillFocus@CXTPPropertyGridView@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
