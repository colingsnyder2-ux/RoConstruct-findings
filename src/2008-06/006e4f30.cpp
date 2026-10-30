// from server: 100% by auto
// roc 2008-06 006e4f30  unit: CXTPControls  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e4f30
//
// 006e4f30  8b442404             mov eax, dword ptr [esp + 4]
// 006e4f34  85c0                 test eax, eax
// 006e4f36  7414                 je 0x6e4f4c
// 006e4f38  83781000             cmp dword ptr [eax + 0x10], 0
// 006e4f3c  740e                 je 0x6e4f4c
// 006e4f3e  8b4810               mov ecx, dword ptr [eax + 0x10]
// 006e4f41  8b11                 mov edx, dword ptr [ecx]
// 006e4f43  89442404             mov dword ptr [esp + 4], eax
// 006e4f47  8b4248               mov eax, dword ptr [edx + 0x48]
// 006e4f4a  ffe0                 jmp eax
// 006e4f4c  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?_RemovePane@CXTPDockingPaneManager@@AAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
