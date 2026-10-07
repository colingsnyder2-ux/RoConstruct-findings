// roc 2008-06 0077b050  unit: CXTPDockingPaneTabbedContainer  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077b050
//
// 0077b050  8b01                 mov eax, dword ptr [ecx]
// 0077b052  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0077b055  ffd2                 call edx
// 0077b057  8b8004010000         mov eax, dword ptr [eax + 0x104]
// 0077b05d  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?GetPosition@CXTPTabManager@@UBE?AW4XTPTabPosition@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
