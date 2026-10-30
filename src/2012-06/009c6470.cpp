// roc 2012-06 009c6470  unit: CXTPControls  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c6470
//
// 009c6470  8b442404             mov eax, dword ptr [esp + 4]
// 009c6474  85c0                 test eax, eax
// 009c6476  7414                 je 0x9c648c
// 009c6478  83781000             cmp dword ptr [eax + 0x10], 0
// 009c647c  740e                 je 0x9c648c
// 009c647e  8b4810               mov ecx, dword ptr [eax + 0x10]
// 009c6481  8b11                 mov edx, dword ptr [ecx]
// 009c6483  89442404             mov dword ptr [esp + 4], eax
// 009c6487  8b4248               mov eax, dword ptr [edx + 0x48]
// 009c648a  ffe0                 jmp eax
// 009c648c  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?_RemovePane@CXTPDockingPaneManager@@AAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
