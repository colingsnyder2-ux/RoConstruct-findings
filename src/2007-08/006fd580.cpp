// from server: 100% by auto
// roc 2007-08 006fd580  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fd580
//
// 006fd580  8b01                 mov eax, dword ptr [ecx]
// 006fd582  8b502c               mov edx, dword ptr [eax + 0x2c]
// 006fd585  ffd2                 call edx
// 006fd587  8b403c               mov eax, dword ptr [eax + 0x3c]
// 006fd58a  c3                   ret 
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabManager.cpp (function ?IsDrawStaticFrame@CXTPTabManager@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabManager.cpp
