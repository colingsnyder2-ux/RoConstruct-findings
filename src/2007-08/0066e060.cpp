// roc 2007-08 0066e060  unit: CXTPControls  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066e060
//
// 0066e060  8b442404             mov eax, dword ptr [esp + 4]
// 0066e064  85c0                 test eax, eax
// 0066e066  7414                 je 0x66e07c
// 0066e068  83781000             cmp dword ptr [eax + 0x10], 0
// 0066e06c  740e                 je 0x66e07c
// 0066e06e  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0066e071  8b11                 mov edx, dword ptr [ecx]
// 0066e073  89442404             mov dword ptr [esp + 4], eax
// 0066e077  8b4248               mov eax, dword ptr [edx + 0x48]
// 0066e07a  ffe0                 jmp eax
// 0066e07c  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneManager.cpp (function ?_RemovePane@CXTPDockingPaneManager@@AAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneManager.cpp
