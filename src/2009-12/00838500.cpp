// roc 2009-12 00838500  unit: CXTPControls  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00838500
//
// 00838500  8bc1                 mov eax, ecx
// 00838502  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00838506  8b11                 mov edx, dword ptr [ecx]
// 00838508  8b80d0000000         mov eax, dword ptr [eax + 0xd0]
// 0083850e  8b5244               mov edx, dword ptr [edx + 0x44]
// 00838511  6a00                 push 0
// 00838513  6a00                 push 0
// 00838515  50                   push eax
// 00838516  ffd2                 call edx
// 00838518  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?_Clone@CXTPDockingPaneManager@@AAEPAVCXTPDockingPaneBase@@PAV2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
