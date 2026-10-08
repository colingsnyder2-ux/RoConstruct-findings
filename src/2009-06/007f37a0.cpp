// roc 2009-06 007f37a0  unit: CXTPDockingPaneTabbedContainer  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f37a0
//
// 007f37a0  8b01                 mov eax, dword ptr [ecx]
// 007f37a2  8b502c               mov edx, dword ptr [eax + 0x2c]
// 007f37a5  ffd2                 call edx
// 007f37a7  8b8004010000         mov eax, dword ptr [eax + 0x104]
// 007f37ad  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?GetPosition@CXTPTabManager@@UBE?AW4XTPTabPosition@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
