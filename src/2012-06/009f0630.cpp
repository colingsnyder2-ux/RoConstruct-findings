// roc 2012-06 009f0630  unit: CXTPPropertyGridView  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f0630
//
// 009f0630  c7815401000000000000 mov dword ptr [ecx + 0x154], 0
// 009f063a  e89f20f9ff           call 0x9826de
// 009f063f  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnKillFocus@CXTPPropertyGridView@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
