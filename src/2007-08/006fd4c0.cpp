// roc 2007-08 006fd4c0  unit: CXTPDockingPaneTabbedContainer  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fd4c0
//
// 006fd4c0  8b01                 mov eax, dword ptr [ecx]
// 006fd4c2  8b502c               mov edx, dword ptr [eax + 0x2c]
// 006fd4c5  ffd2                 call edx
// 006fd4c7  8b8008010000         mov eax, dword ptr [eax + 0x108]
// 006fd4cd  c3                   ret 
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabManager.cpp (function ?GetLayout@CXTPTabManager@@QBE?AW4XTPTabLayoutStyle@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabManager.cpp
