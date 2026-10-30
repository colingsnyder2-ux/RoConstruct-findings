// roc 2011-06 008c2470  unit: CXTPDockingPaneTabbedContainer  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c2470
//
// 008c2470  8b442404             mov eax, dword ptr [esp + 4]
// 008c2474  8b5014               mov edx, dword ptr [eax + 0x14]
// 008c2477  895114               mov dword ptr [ecx + 0x14], edx
// 008c247a  c7814401000001000000 mov dword ptr [ecx + 0x144], 1
// 008c2484  83781805             cmp dword ptr [eax + 0x18], 5
// 008c2488  7516                 jne 0x8c24a0
// 008c248a  8379cc00             cmp dword ptr [ecx - 0x34], 0
// 008c248e  7410                 je 0x8c24a0
// 008c2490  c744240400000000     mov dword ptr [esp + 4], 0
// 008c2498  83c1ac               add ecx, -0x54
// 008c249b  e9a67ef4ff           jmp 0x80a346
// 008c24a0  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnParentContainerChanged@CXTPDockingPaneTabbedContainer@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
