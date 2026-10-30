// roc 2010-06 00865020  unit: CXTPDockingPaneTabbedContainer  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00865020
//
// 00865020  8b442404             mov eax, dword ptr [esp + 4]
// 00865024  8b5014               mov edx, dword ptr [eax + 0x14]
// 00865027  895114               mov dword ptr [ecx + 0x14], edx
// 0086502a  c7814401000001000000 mov dword ptr [ecx + 0x144], 1
// 00865034  83781805             cmp dword ptr [eax + 0x18], 5
// 00865038  7516                 jne 0x865050
// 0086503a  8379cc00             cmp dword ptr [ecx - 0x34], 0
// 0086503e  7410                 je 0x865050
// 00865040  c744240400000000     mov dword ptr [esp + 4], 0
// 00865048  83c1ac               add ecx, -0x54
// 0086504b  e9382cf4ff           jmp 0x7a7c88
// 00865050  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnParentContainerChanged@CXTPDockingPaneTabbedContainer@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
