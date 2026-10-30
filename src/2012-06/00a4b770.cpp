// roc 2012-06 00a4b770  unit: CXTPDockingPaneTabbedContainer  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4b770
//
// 00a4b770  8b01                 mov eax, dword ptr [ecx]
// 00a4b772  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00a4b775  ffd2                 call edx
// 00a4b777  8b8004010000         mov eax, dword ptr [eax + 0x104]
// 00a4b77d  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?GetPosition@CXTPTabManager@@UBE?AW4XTPTabPosition@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
