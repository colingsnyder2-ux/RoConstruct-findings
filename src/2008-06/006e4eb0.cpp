// from server: 100% by auto
// roc 2008-06 006e4eb0  unit: CXTPControls  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e4eb0
//
// 006e4eb0  8bc1                 mov eax, ecx
// 006e4eb2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e4eb6  8b11                 mov edx, dword ptr [ecx]
// 006e4eb8  8b80d0000000         mov eax, dword ptr [eax + 0xd0]
// 006e4ebe  8b5244               mov edx, dword ptr [edx + 0x44]
// 006e4ec1  6a00                 push 0
// 006e4ec3  6a00                 push 0
// 006e4ec5  50                   push eax
// 006e4ec6  ffd2                 call edx
// 006e4ec8  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?_Clone@CXTPDockingPaneManager@@AAEPAVCXTPDockingPaneBase@@PAV2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
