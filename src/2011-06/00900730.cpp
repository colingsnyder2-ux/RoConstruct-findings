// roc 2011-06 00900730  unit: CXTPDockingPaneAutoHidePanel  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00900730
//
// 00900730  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00900734  8b01                 mov eax, dword ptr [ecx]
// 00900736  8b10                 mov edx, dword ptr [eax]
// 00900738  8911                 mov dword ptr [ecx], edx
// 0090073a  8b4008               mov eax, dword ptr [eax + 8]
// 0090073d  c20400               ret 4
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneBaseContainer.cpp (function ?GetNext@CXTPDockingPaneBaseContainer@@QBEPAVCXTPDockingPaneBase@@AAPAU__POSITION@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneBaseContainer.cpp
