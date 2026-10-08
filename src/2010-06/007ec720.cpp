// roc 2010-06 007ec720  unit: CXTPControls  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ec720
//
// 007ec720  8bc1                 mov eax, ecx
// 007ec722  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007ec726  8b11                 mov edx, dword ptr [ecx]
// 007ec728  8b80d0000000         mov eax, dword ptr [eax + 0xd0]
// 007ec72e  8b5244               mov edx, dword ptr [edx + 0x44]
// 007ec731  6a00                 push 0
// 007ec733  6a00                 push 0
// 007ec735  50                   push eax
// 007ec736  ffd2                 call edx
// 007ec738  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?_Clone@CXTPDockingPaneManager@@AAEPAVCXTPDockingPaneBase@@PAV2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
