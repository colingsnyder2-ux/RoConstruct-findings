// roc 2007-03 006c9ca0  unit: seg_006c0000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c9ca0
//
// 006c9ca0  8d442404             lea eax, [esp + 4]
// 006c9ca4  50                   push eax
// 006c9ca5  e806c3fbff           call 0x685fb0
// 006c9caa  85c0                 test eax, eax
// 006c9cac  740d                 je 0x6c9cbb
// 006c9cae  83f8ff               cmp eax, -1
// 006c9cb1  7408                 je 0x6c9cbb
// 006c9cb3  b857000780           mov eax, 0x80070057
// 006c9cb8  c21400               ret 0x14
// 006c9cbb  68f8697d00           push 0x7d69f8
// 006c9cc0  ff15ccea7700         call dword ptr [0x77eacc]
// 006c9cc6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006c9cca  8901                 mov dword ptr [ecx], eax
// 006c9ccc  33c0                 xor eax, eax
// 006c9cce  c21400               ret 0x14
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetAccessibleName@CXTPDockingPaneTabbedContainer@@MAEJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
