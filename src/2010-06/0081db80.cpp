// roc 2010-06 0081db80  unit: CXTPPropertyGridView  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0081db80
//
// 0081db80  c7815401000000000000 mov dword ptr [ecx + 0x154], 0
// 0081db8a  e8e1a3f8ff           call 0x7a7f70
// 0081db8f  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnKillFocus@CXTPPropertyGridView@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
