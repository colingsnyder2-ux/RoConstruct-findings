// roc 2009-12 008b0f40  unit: CXTPDockingPaneTabbedContainer  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b0f40
//
// 008b0f40  8b442404             mov eax, dword ptr [esp + 4]
// 008b0f44  8b5014               mov edx, dword ptr [eax + 0x14]
// 008b0f47  895114               mov dword ptr [ecx + 0x14], edx
// 008b0f4a  c7814401000001000000 mov dword ptr [ecx + 0x144], 1
// 008b0f54  83781805             cmp dword ptr [eax + 0x18], 5
// 008b0f58  7516                 jne 0x8b0f70
// 008b0f5a  8379cc00             cmp dword ptr [ecx - 0x34], 0
// 008b0f5e  7410                 je 0x8b0f70
// 008b0f60  c744240400000000     mov dword ptr [esp + 4], 0
// 008b0f68  83c1ac               add ecx, -0x54
// 008b0f6b  e9d82bf4ff           jmp 0x7f3b48
// 008b0f70  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnParentContainerChanged@CXTPDockingPaneTabbedContainer@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
