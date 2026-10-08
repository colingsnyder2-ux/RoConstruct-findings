// roc 2009-06 007d6400  unit: CXTPDockingPaneTabbedContainer  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d6400
//
// 007d6400  8b442404             mov eax, dword ptr [esp + 4]
// 007d6404  8b5014               mov edx, dword ptr [eax + 0x14]
// 007d6407  895114               mov dword ptr [ecx + 0x14], edx
// 007d640a  c7814401000001000000 mov dword ptr [ecx + 0x144], 1
// 007d6414  83781805             cmp dword ptr [eax + 0x18], 5
// 007d6418  7516                 jne 0x7d6430
// 007d641a  8379cc00             cmp dword ptr [ecx - 0x34], 0
// 007d641e  7410                 je 0x7d6430
// 007d6420  c744240400000000     mov dword ptr [esp + 4], 0
// 007d6428  83c1ac               add ecx, -0x54
// 007d642b  e9f028f4ff           jmp 0x718d20
// 007d6430  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnParentContainerChanged@CXTPDockingPaneTabbedContainer@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
