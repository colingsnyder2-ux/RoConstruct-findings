// roc 2009-12 008ce420  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ce420
//
// 008ce420  8b01                 mov eax, dword ptr [ecx]
// 008ce422  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008ce425  ffd2                 call edx
// 008ce427  8b403c               mov eax, dword ptr [eax + 0x3c]
// 008ce42a  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?IsDrawStaticFrame@CXTPTabManager@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
