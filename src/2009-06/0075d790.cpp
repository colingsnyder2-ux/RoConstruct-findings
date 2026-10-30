// roc 2009-06 0075d790  unit: CXTPControls  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075d790
//
// 0075d790  8bc1                 mov eax, ecx
// 0075d792  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0075d796  8b11                 mov edx, dword ptr [ecx]
// 0075d798  8b80d0000000         mov eax, dword ptr [eax + 0xd0]
// 0075d79e  8b5244               mov edx, dword ptr [edx + 0x44]
// 0075d7a1  6a00                 push 0
// 0075d7a3  6a00                 push 0
// 0075d7a5  50                   push eax
// 0075d7a6  ffd2                 call edx
// 0075d7a8  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?_Clone@CXTPDockingPaneManager@@AAEPAVCXTPDockingPaneBase@@PAV2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
