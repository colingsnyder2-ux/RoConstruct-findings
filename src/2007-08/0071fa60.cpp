// roc 2007-08 0071fa60  unit: CXTPDockingPaneAutoHidePanel  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071fa60
//
// 0071fa60  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0071fa64  8b01                 mov eax, dword ptr [ecx]
// 0071fa66  8b10                 mov edx, dword ptr [eax]
// 0071fa68  8911                 mov dword ptr [ecx], edx
// 0071fa6a  8b4008               mov eax, dword ptr [eax + 8]
// 0071fa6d  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneBaseContainer.cpp (function ?GetNext@CXTPDockingPaneBaseContainer@@QBEPAVCXTPDockingPaneBase@@AAPAU__POSITION@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneBaseContainer.cpp
