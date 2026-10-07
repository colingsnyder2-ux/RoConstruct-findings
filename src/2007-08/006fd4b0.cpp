// roc 2007-08 006fd4b0  unit: CXTPDockingPaneTabbedContainer  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fd4b0
//
// 006fd4b0  8b01                 mov eax, dword ptr [ecx]
// 006fd4b2  8b502c               mov edx, dword ptr [eax + 0x2c]
// 006fd4b5  ffd2                 call edx
// 006fd4b7  8b8004010000         mov eax, dword ptr [eax + 0x104]
// 006fd4bd  c3                   ret 
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabManager.cpp (function ?GetPosition@CXTPTabManager@@UBE?AW4XTPTabPosition@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabManager.cpp
