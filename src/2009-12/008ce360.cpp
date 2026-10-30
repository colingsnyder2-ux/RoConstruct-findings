// roc 2009-12 008ce360  unit: CXTPDockingPaneTabbedContainer  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ce360
//
// 008ce360  8b01                 mov eax, dword ptr [ecx]
// 008ce362  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008ce365  ffd2                 call edx
// 008ce367  8b8008010000         mov eax, dword ptr [eax + 0x108]
// 008ce36d  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?GetLayout@CXTPTabManager@@QBE?AW4XTPTabLayoutStyle@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
