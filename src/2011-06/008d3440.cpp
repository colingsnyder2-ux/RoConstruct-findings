// roc 2011-06 008d3440  unit: CXTPDockingPaneTabbedContainer  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d3440
//
// 008d3440  8b01                 mov eax, dword ptr [ecx]
// 008d3442  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008d3445  ffd2                 call edx
// 008d3447  8b8004010000         mov eax, dword ptr [eax + 0x104]
// 008d344d  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?GetPosition@CXTPTabManager@@UBE?AW4XTPTabPosition@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
