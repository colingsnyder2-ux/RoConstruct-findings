// roc 2007-03 0065a020  unit: seg_00650000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065a020
//
// 0065a020  8b442404             mov eax, dword ptr [esp + 4]
// 0065a024  85c0                 test eax, eax
// 0065a026  7414                 je 0x65a03c
// 0065a028  83781000             cmp dword ptr [eax + 0x10], 0
// 0065a02c  740e                 je 0x65a03c
// 0065a02e  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0065a031  8b11                 mov edx, dword ptr [ecx]
// 0065a033  89442404             mov dword ptr [esp + 4], eax
// 0065a037  8b4248               mov eax, dword ptr [edx + 0x48]
// 0065a03a  ffe0                 jmp eax
// 0065a03c  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?_RemovePane@CXTPDockingPaneManager@@AAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
