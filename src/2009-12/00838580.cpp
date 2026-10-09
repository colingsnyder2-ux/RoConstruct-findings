// roc 2009-12 00838580  unit: CXTPControls  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00838580
//
// 00838580  8b442404             mov eax, dword ptr [esp + 4]
// 00838584  85c0                 test eax, eax
// 00838586  7414                 je 0x83859c
// 00838588  83781000             cmp dword ptr [eax + 0x10], 0
// 0083858c  740e                 je 0x83859c
// 0083858e  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00838591  8b11                 mov edx, dword ptr [ecx]
// 00838593  89442404             mov dword ptr [esp + 4], eax
// 00838597  8b4248               mov eax, dword ptr [edx + 0x48]
// 0083859a  ffe0                 jmp eax
// 0083859c  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?_RemovePane@CXTPDockingPaneManager@@AAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
