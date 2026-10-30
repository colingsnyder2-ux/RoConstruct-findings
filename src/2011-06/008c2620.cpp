// roc 2011-06 008c2620  unit: CXTPDockingPaneTabbedContainer  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c2620
//
// 008c2620  8d442404             lea eax, [esp + 4]
// 008c2624  50                   push eax
// 008c2625  e806edf8ff           call 0x851330
// 008c262a  85c0                 test eax, eax
// 008c262c  740d                 je 0x8c263b
// 008c262e  83f8ff               cmp eax, -1
// 008c2631  7408                 je 0x8c263b
// 008c2633  b857000780           mov eax, 0x80070057
// 008c2638  c21400               ret 0x14
// 008c263b  683061ad00           push 0xad6130
// 008c2640  ff15bc0aa400         call dword ptr [0xa40abc]
// 008c2646  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c264a  8901                 mov dword ptr [ecx], eax
// 008c264c  33c0                 xor eax, eax
// 008c264e  c21400               ret 0x14
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetAccessibleName@CXTPDockingPaneTabbedContainer@@MAEJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
