// from server: 100% by auto
// roc 2008-06 0075dbc0  unit: CXTPDockingPaneTabbedContainer  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075dbc0
//
// 0075dbc0  8b442404             mov eax, dword ptr [esp + 4]
// 0075dbc4  8b5014               mov edx, dword ptr [eax + 0x14]
// 0075dbc7  895114               mov dword ptr [ecx + 0x14], edx
// 0075dbca  c7814401000001000000 mov dword ptr [ecx + 0x144], 1
// 0075dbd4  83781805             cmp dword ptr [eax + 0x18], 5
// 0075dbd8  7516                 jne 0x75dbf0
// 0075dbda  8379cc00             cmp dword ptr [ecx - 0x34], 0
// 0075dbde  7410                 je 0x75dbf0
// 0075dbe0  c744240400000000     mov dword ptr [esp + 4], 0
// 0075dbe8  83c1ac               add ecx, -0x54
// 0075dbeb  e97e2df4ff           jmp 0x6a096e
// 0075dbf0  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnParentContainerChanged@CXTPDockingPaneTabbedContainer@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
