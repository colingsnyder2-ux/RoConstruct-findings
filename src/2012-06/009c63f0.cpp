// roc 2012-06 009c63f0  unit: CXTPControls  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c63f0
//
// 009c63f0  8bc1                 mov eax, ecx
// 009c63f2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c63f6  8b11                 mov edx, dword ptr [ecx]
// 009c63f8  8b80d0000000         mov eax, dword ptr [eax + 0xd0]
// 009c63fe  8b5244               mov edx, dword ptr [edx + 0x44]
// 009c6401  6a00                 push 0
// 009c6403  6a00                 push 0
// 009c6405  50                   push eax
// 009c6406  ffd2                 call edx
// 009c6408  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?_Clone@CXTPDockingPaneManager@@AAEPAVCXTPDockingPaneBase@@PAV2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
