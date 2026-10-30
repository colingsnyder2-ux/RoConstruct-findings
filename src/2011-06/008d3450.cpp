// roc 2011-06 008d3450  unit: CXTPDockingPaneTabbedContainer  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d3450
//
// 008d3450  8b01                 mov eax, dword ptr [ecx]
// 008d3452  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008d3455  ffd2                 call edx
// 008d3457  8b8008010000         mov eax, dword ptr [eax + 0x108]
// 008d345d  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?GetLayout@CXTPTabManager@@QBE?AW4XTPTabLayoutStyle@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
