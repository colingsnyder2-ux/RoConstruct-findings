// roc 2009-06 0075d810  unit: CXTPControls  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075d810
//
// 0075d810  8b442404             mov eax, dword ptr [esp + 4]
// 0075d814  85c0                 test eax, eax
// 0075d816  7414                 je 0x75d82c
// 0075d818  83781000             cmp dword ptr [eax + 0x10], 0
// 0075d81c  740e                 je 0x75d82c
// 0075d81e  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0075d821  8b11                 mov edx, dword ptr [ecx]
// 0075d823  89442404             mov dword ptr [esp + 4], eax
// 0075d827  8b4248               mov eax, dword ptr [edx + 0x48]
// 0075d82a  ffe0                 jmp eax
// 0075d82c  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?_RemovePane@CXTPDockingPaneManager@@AAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
