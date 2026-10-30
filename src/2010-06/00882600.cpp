// roc 2010-06 00882600  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00882600
//
// 00882600  8b01                 mov eax, dword ptr [ecx]
// 00882602  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00882605  ffd2                 call edx
// 00882607  8b403c               mov eax, dword ptr [eax + 0x3c]
// 0088260a  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?IsDrawStaticFrame@CXTPTabManager@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
