// roc 2012-06 00a3a8a0  unit: CXTPDockingPaneTabbedContainer  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3a8a0
//
// 00a3a8a0  8b442404             mov eax, dword ptr [esp + 4]
// 00a3a8a4  8b5014               mov edx, dword ptr [eax + 0x14]
// 00a3a8a7  895114               mov dword ptr [ecx + 0x14], edx
// 00a3a8aa  c7814401000001000000 mov dword ptr [ecx + 0x144], 1
// 00a3a8b4  83781805             cmp dword ptr [eax + 0x18], 5
// 00a3a8b8  7516                 jne 0xa3a8d0
// 00a3a8ba  8379cc00             cmp dword ptr [ecx - 0x34], 0
// 00a3a8be  7410                 je 0xa3a8d0
// 00a3a8c0  c744240400000000     mov dword ptr [esp + 4], 0
// 00a3a8c8  83c1ac               add ecx, -0x54
// 00a3a8cb  e9d481f4ff           jmp 0x982aa4
// 00a3a8d0  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnParentContainerChanged@CXTPDockingPaneTabbedContainer@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
