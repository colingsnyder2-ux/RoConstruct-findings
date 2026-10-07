// roc 2008-06 0077b120  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077b120
//
// 0077b120  8b01                 mov eax, dword ptr [ecx]
// 0077b122  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0077b125  ffd2                 call edx
// 0077b127  8b403c               mov eax, dword ptr [eax + 0x3c]
// 0077b12a  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?IsDrawStaticFrame@CXTPTabManager@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
