// roc 2011-06 0084df40  unit: CXTPControls  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084df40
//
// 0084df40  8bc1                 mov eax, ecx
// 0084df42  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0084df46  8b11                 mov edx, dword ptr [ecx]
// 0084df48  8b80d0000000         mov eax, dword ptr [eax + 0xd0]
// 0084df4e  8b5244               mov edx, dword ptr [edx + 0x44]
// 0084df51  6a00                 push 0
// 0084df53  6a00                 push 0
// 0084df55  50                   push eax
// 0084df56  ffd2                 call edx
// 0084df58  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?_Clone@CXTPDockingPaneManager@@AAEPAVCXTPDockingPaneBase@@PAV2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
