// from server: 100% by auto
// roc 2007-08 0069ab20  unit: CXTPPropertyGridView  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069ab20
//
// 0069ab20  c7815401000000000000 mov dword ptr [ecx + 0x154], 0
// 0069ab2a  e9f35df9ff           jmp 0x630922
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnSetFocus@CXTPPropertyGridView@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridView.cpp
