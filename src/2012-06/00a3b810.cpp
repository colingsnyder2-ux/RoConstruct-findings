// roc 2012-06 00a3b810  unit: CXTPDockingPaneTabbedContainer  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3b810
//
// 00a3b810  8b542404             mov edx, dword ptr [esp + 4]
// 00a3b814  8d81c8feffff         lea eax, [ecx - 0x138]
// 00a3b81a  c70200000000         mov dword ptr [edx], 0
// 00a3b820  85c0                 test eax, eax
// 00a3b822  742e                 je 0xa3b852
// 00a3b824  83782000             cmp dword ptr [eax + 0x20], 0
// 00a3b828  7428                 je 0xa3b852
// 00a3b82a  85c0                 test eax, eax
// 00a3b82c  7510                 jne 0xa3b83e
// 00a3b82e  52                   push edx
// 00a3b82f  68b4fcc300           push 0xc3fcb4
// 00a3b834  50                   push eax
// 00a3b835  50                   push eax
// 00a3b836  e885eaf8ff           call 0x9ca2c0
// 00a3b83b  c20400               ret 4
// 00a3b83e  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a3b841  52                   push edx
// 00a3b842  68b4fcc300           push 0xc3fcb4
// 00a3b847  6a00                 push 0
// 00a3b849  50                   push eax
// 00a3b84a  e871eaf8ff           call 0x9ca2c0
// 00a3b84f  c20400               ret 4
// 00a3b852  b805400080           mov eax, 0x80004005
// 00a3b857  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetAccessibleParent@CXTPDockingPaneTabbedContainer@@MAEJPAPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
