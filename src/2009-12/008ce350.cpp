// roc 2009-12 008ce350  unit: CXTPDockingPaneTabbedContainer  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ce350
//
// 008ce350  8b01                 mov eax, dword ptr [ecx]
// 008ce352  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008ce355  ffd2                 call edx
// 008ce357  8b8004010000         mov eax, dword ptr [eax + 0x104]
// 008ce35d  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?GetPosition@CXTPTabManager@@UBE?AW4XTPTabPosition@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
