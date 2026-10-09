// roc 2007-03 00659fa0  unit: seg_00650000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00659fa0
//
// 00659fa0  8bc1                 mov eax, ecx
// 00659fa2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00659fa6  8b11                 mov edx, dword ptr [ecx]
// 00659fa8  8b80d0000000         mov eax, dword ptr [eax + 0xd0]
// 00659fae  8b5244               mov edx, dword ptr [edx + 0x44]
// 00659fb1  6a00                 push 0
// 00659fb3  6a00                 push 0
// 00659fb5  50                   push eax
// 00659fb6  ffd2                 call edx
// 00659fb8  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?_Clone@CXTPDockingPaneManager@@AAEPAVCXTPDockingPaneBase@@PAV2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
