// roc 2010-06 007ec7a0  unit: CXTPControls  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ec7a0
//
// 007ec7a0  8b442404             mov eax, dword ptr [esp + 4]
// 007ec7a4  85c0                 test eax, eax
// 007ec7a6  7414                 je 0x7ec7bc
// 007ec7a8  83781000             cmp dword ptr [eax + 0x10], 0
// 007ec7ac  740e                 je 0x7ec7bc
// 007ec7ae  8b4810               mov ecx, dword ptr [eax + 0x10]
// 007ec7b1  8b11                 mov edx, dword ptr [ecx]
// 007ec7b3  89442404             mov dword ptr [esp + 4], eax
// 007ec7b7  8b4248               mov eax, dword ptr [edx + 0x48]
// 007ec7ba  ffe0                 jmp eax
// 007ec7bc  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?_RemovePane@CXTPDockingPaneManager@@AAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
