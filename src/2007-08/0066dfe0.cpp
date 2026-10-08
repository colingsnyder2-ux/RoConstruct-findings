// from server: 100% by auto
// roc 2007-08 0066dfe0  unit: CXTPControls  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066dfe0
//
// 0066dfe0  8bc1                 mov eax, ecx
// 0066dfe2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0066dfe6  8b11                 mov edx, dword ptr [ecx]
// 0066dfe8  8b80d0000000         mov eax, dword ptr [eax + 0xd0]
// 0066dfee  8b5244               mov edx, dword ptr [edx + 0x44]
// 0066dff1  6a00                 push 0
// 0066dff3  6a00                 push 0
// 0066dff5  50                   push eax
// 0066dff6  ffd2                 call edx
// 0066dff8  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneManager.cpp (function ?_Clone@CXTPDockingPaneManager@@AAEPAVCXTPDockingPaneBase@@PAV2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneManager.cpp
