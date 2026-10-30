// roc 2009-06 007d7370  unit: CXTPDockingPaneTabbedContainer  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d7370
//
// 007d7370  8b542404             mov edx, dword ptr [esp + 4]
// 007d7374  8d81c8feffff         lea eax, [ecx - 0x138]
// 007d737a  c70200000000         mov dword ptr [edx], 0
// 007d7380  85c0                 test eax, eax
// 007d7382  742e                 je 0x7d73b2
// 007d7384  83782000             cmp dword ptr [eax + 0x20], 0
// 007d7388  7428                 je 0x7d73b2
// 007d738a  85c0                 test eax, eax
// 007d738c  7510                 jne 0x7d739e
// 007d738e  52                   push edx
// 007d738f  68e04e9200           push 0x924ee0
// 007d7394  50                   push eax
// 007d7395  50                   push eax
// 007d7396  e8f5a2f8ff           call 0x761690
// 007d739b  c20400               ret 4
// 007d739e  8b4020               mov eax, dword ptr [eax + 0x20]
// 007d73a1  52                   push edx
// 007d73a2  68e04e9200           push 0x924ee0
// 007d73a7  6a00                 push 0
// 007d73a9  50                   push eax
// 007d73aa  e8e1a2f8ff           call 0x761690
// 007d73af  c20400               ret 4
// 007d73b2  b805400080           mov eax, 0x80004005
// 007d73b7  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetAccessibleParent@CXTPDockingPaneTabbedContainer@@MAEJPAPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
