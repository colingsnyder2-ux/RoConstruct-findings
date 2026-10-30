// from server: 100% by auto
// roc 2008-06 00714130  unit: CXTPPropertyGridView  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00714130
//
// 00714130  c7815401000000000000 mov dword ptr [ecx + 0x154], 0
// 0071413a  e98bd2f8ff           jmp 0x6a13ca
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnSetFocus@CXTPPropertyGridView@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
