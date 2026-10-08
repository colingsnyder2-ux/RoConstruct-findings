// roc 2012-06 00a4b840  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4b840
//
// 00a4b840  8b01                 mov eax, dword ptr [ecx]
// 00a4b842  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00a4b845  ffd2                 call edx
// 00a4b847  8b403c               mov eax, dword ptr [eax + 0x3c]
// 00a4b84a  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?IsDrawStaticFrame@CXTPTabManager@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
