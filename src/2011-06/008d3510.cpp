// roc 2011-06 008d3510  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d3510
//
// 008d3510  8b01                 mov eax, dword ptr [ecx]
// 008d3512  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008d3515  ffd2                 call edx
// 008d3517  8b403c               mov eax, dword ptr [eax + 0x3c]
// 008d351a  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?IsDrawStaticFrame@CXTPTabManager@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
