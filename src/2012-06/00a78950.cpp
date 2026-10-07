// roc 2012-06 00a78950  unit: CXTPDockingPaneAutoHidePanel  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a78950
//
// 00a78950  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a78954  8b01                 mov eax, dword ptr [ecx]
// 00a78956  8b10                 mov edx, dword ptr [eax]
// 00a78958  8911                 mov dword ptr [ecx], edx
// 00a7895a  8b4008               mov eax, dword ptr [eax + 8]
// 00a7895d  c20400               ret 4
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneBaseContainer.cpp (function ?GetNext@CXTPDockingPaneBaseContainer@@QBEPAVCXTPDockingPaneBase@@AAPAU__POSITION@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneBaseContainer.cpp
