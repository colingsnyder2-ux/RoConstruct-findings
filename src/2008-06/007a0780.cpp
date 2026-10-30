// from server: 100% by auto
// roc 2008-06 007a0780  unit: CInstanceRecord::CNameItem  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a0780
//
// 007a0780  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007a0784  8b01                 mov eax, dword ptr [ecx]
// 007a0786  8b10                 mov edx, dword ptr [eax]
// 007a0788  8911                 mov dword ptr [ecx], edx
// 007a078a  8b4008               mov eax, dword ptr [eax + 8]
// 007a078d  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneBaseContainer.cpp (function ?GetNext@CXTPDockingPaneBaseContainer@@QBEPAVCXTPDockingPaneBase@@AAPAU__POSITION@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneBaseContainer.cpp
