// roc 2012-06 00a4b780  unit: CXTPDockingPaneTabbedContainer  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4b780
//
// 00a4b780  8b01                 mov eax, dword ptr [ecx]
// 00a4b782  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00a4b785  ffd2                 call edx
// 00a4b787  8b8008010000         mov eax, dword ptr [eax + 0x108]
// 00a4b78d  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?GetLayout@CXTPTabManager@@QBE?AW4XTPTabLayoutStyle@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
