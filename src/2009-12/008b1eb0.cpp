// roc 2009-12 008b1eb0  unit: CXTPDockingPaneTabbedContainer  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b1eb0
//
// 008b1eb0  8b542404             mov edx, dword ptr [esp + 4]
// 008b1eb4  8d81c8feffff         lea eax, [ecx - 0x138]
// 008b1eba  c70200000000         mov dword ptr [edx], 0
// 008b1ec0  85c0                 test eax, eax
// 008b1ec2  742e                 je 0x8b1ef2
// 008b1ec4  83782000             cmp dword ptr [eax + 0x20], 0
// 008b1ec8  7428                 je 0x8b1ef2
// 008b1eca  85c0                 test eax, eax
// 008b1ecc  7510                 jne 0x8b1ede
// 008b1ece  52                   push edx
// 008b1ecf  68a04ba200           push 0xa24ba0
// 008b1ed4  50                   push eax
// 008b1ed5  50                   push eax
// 008b1ed6  e885a5f8ff           call 0x83c460
// 008b1edb  c20400               ret 4
// 008b1ede  8b4020               mov eax, dword ptr [eax + 0x20]
// 008b1ee1  52                   push edx
// 008b1ee2  68a04ba200           push 0xa24ba0
// 008b1ee7  6a00                 push 0
// 008b1ee9  50                   push eax
// 008b1eea  e871a5f8ff           call 0x83c460
// 008b1eef  c20400               ret 4
// 008b1ef2  b805400080           mov eax, 0x80004005
// 008b1ef7  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetAccessibleParent@CXTPDockingPaneTabbedContainer@@MAEJPAPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
