// from server: 100% by auto
// roc 2008-06 0077b060  unit: CXTPDockingPaneTabbedContainer  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077b060
//
// 0077b060  8b01                 mov eax, dword ptr [ecx]
// 0077b062  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0077b065  ffd2                 call edx
// 0077b067  8b8008010000         mov eax, dword ptr [eax + 0x108]
// 0077b06d  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?GetLayout@CXTPTabManager@@QBE?AW4XTPTabLayoutStyle@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
