// roc 2009-06 007f37b0  unit: CXTPDockingPaneTabbedContainer  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f37b0
//
// 007f37b0  8b01                 mov eax, dword ptr [ecx]
// 007f37b2  8b502c               mov edx, dword ptr [eax + 0x2c]
// 007f37b5  ffd2                 call edx
// 007f37b7  8b8008010000         mov eax, dword ptr [eax + 0x108]
// 007f37bd  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?GetLayout@CXTPTabManager@@QBE?AW4XTPTabLayoutStyle@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
