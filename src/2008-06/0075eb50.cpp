// roc 2008-06 0075eb50  unit: CXTPDockingPaneTabbedContainer  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075eb50
//
// 0075eb50  8b542404             mov edx, dword ptr [esp + 4]
// 0075eb54  8d81c8feffff         lea eax, [ecx - 0x138]
// 0075eb5a  c70200000000         mov dword ptr [edx], 0
// 0075eb60  85c0                 test eax, eax
// 0075eb62  742e                 je 0x75eb92
// 0075eb64  83782000             cmp dword ptr [eax + 0x20], 0
// 0075eb68  7428                 je 0x75eb92
// 0075eb6a  85c0                 test eax, eax
// 0075eb6c  7510                 jne 0x75eb7e
// 0075eb6e  52                   push edx
// 0075eb6f  681c028500           push 0x85021c
// 0075eb74  50                   push eax
// 0075eb75  50                   push eax
// 0075eb76  e8f5a1f8ff           call 0x6e8d70
// 0075eb7b  c20400               ret 4
// 0075eb7e  8b4020               mov eax, dword ptr [eax + 0x20]
// 0075eb81  52                   push edx
// 0075eb82  681c028500           push 0x85021c
// 0075eb87  6a00                 push 0
// 0075eb89  50                   push eax
// 0075eb8a  e8e1a1f8ff           call 0x6e8d70
// 0075eb8f  c20400               ret 4
// 0075eb92  b805400080           mov eax, 0x80004005
// 0075eb97  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetAccessibleParent@CXTPDockingPaneTabbedContainer@@MAEJPAPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
