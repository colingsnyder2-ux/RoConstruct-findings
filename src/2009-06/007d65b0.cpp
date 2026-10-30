// roc 2009-06 007d65b0  unit: CXTPDockingPaneTabbedContainer  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d65b0
//
// 007d65b0  8d442404             lea eax, [esp + 4]
// 007d65b4  50                   push eax
// 007d65b5  e816a6f8ff           call 0x760bd0
// 007d65ba  85c0                 test eax, eax
// 007d65bc  740d                 je 0x7d65cb
// 007d65be  83f8ff               cmp eax, -1
// 007d65c1  7408                 je 0x7d65cb
// 007d65c3  b857000780           mov eax, 0x80070057
// 007d65c8  c21400               ret 0x14
// 007d65cb  68c86f9000           push 0x906fc8
// 007d65d0  ff15d8e98900         call dword ptr [0x89e9d8]
// 007d65d6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007d65da  8901                 mov dword ptr [ecx], eax
// 007d65dc  33c0                 xor eax, eax
// 007d65de  c21400               ret 0x14
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetAccessibleName@CXTPDockingPaneTabbedContainer@@MAEJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
