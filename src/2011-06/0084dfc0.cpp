// roc 2011-06 0084dfc0  unit: CXTPControls  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084dfc0
//
// 0084dfc0  8b442404             mov eax, dword ptr [esp + 4]
// 0084dfc4  85c0                 test eax, eax
// 0084dfc6  7414                 je 0x84dfdc
// 0084dfc8  83781000             cmp dword ptr [eax + 0x10], 0
// 0084dfcc  740e                 je 0x84dfdc
// 0084dfce  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0084dfd1  8b11                 mov edx, dword ptr [ecx]
// 0084dfd3  89442404             mov dword ptr [esp + 4], eax
// 0084dfd7  8b4248               mov eax, dword ptr [edx + 0x48]
// 0084dfda  ffe0                 jmp eax
// 0084dfdc  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?_RemovePane@CXTPDockingPaneManager@@AAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
