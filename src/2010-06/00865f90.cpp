// roc 2010-06 00865f90  unit: CXTPDockingPaneTabbedContainer  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00865f90
//
// 00865f90  8b542404             mov edx, dword ptr [esp + 4]
// 00865f94  8d81c8feffff         lea eax, [ecx - 0x138]
// 00865f9a  c70200000000         mov dword ptr [edx], 0
// 00865fa0  85c0                 test eax, eax
// 00865fa2  742e                 je 0x865fd2
// 00865fa4  83782000             cmp dword ptr [eax + 0x20], 0
// 00865fa8  7428                 je 0x865fd2
// 00865faa  85c0                 test eax, eax
// 00865fac  7510                 jne 0x865fbe
// 00865fae  52                   push edx
// 00865faf  6820cba800           push 0xa8cb20
// 00865fb4  50                   push eax
// 00865fb5  50                   push eax
// 00865fb6  e805a6f8ff           call 0x7f05c0
// 00865fbb  c20400               ret 4
// 00865fbe  8b4020               mov eax, dword ptr [eax + 0x20]
// 00865fc1  52                   push edx
// 00865fc2  6820cba800           push 0xa8cb20
// 00865fc7  6a00                 push 0
// 00865fc9  50                   push eax
// 00865fca  e8f1a5f8ff           call 0x7f05c0
// 00865fcf  c20400               ret 4
// 00865fd2  b805400080           mov eax, 0x80004005
// 00865fd7  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetAccessibleParent@CXTPDockingPaneTabbedContainer@@MAEJPAPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
