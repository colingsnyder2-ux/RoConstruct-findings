// roc 2011-06 008c33e0  unit: CXTPDockingPaneTabbedContainer  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c33e0
//
// 008c33e0  8b542404             mov edx, dword ptr [esp + 4]
// 008c33e4  8d81c8feffff         lea eax, [ecx - 0x138]
// 008c33ea  c70200000000         mov dword ptr [edx], 0
// 008c33f0  85c0                 test eax, eax
// 008c33f2  742e                 je 0x8c3422
// 008c33f4  83782000             cmp dword ptr [eax + 0x20], 0
// 008c33f8  7428                 je 0x8c3422
// 008c33fa  85c0                 test eax, eax
// 008c33fc  7510                 jne 0x8c340e
// 008c33fe  52                   push edx
// 008c33ff  68a091af00           push 0xaf91a0
// 008c3404  50                   push eax
// 008c3405  50                   push eax
// 008c3406  e8f5e9f8ff           call 0x851e00
// 008c340b  c20400               ret 4
// 008c340e  8b4020               mov eax, dword ptr [eax + 0x20]
// 008c3411  52                   push edx
// 008c3412  68a091af00           push 0xaf91a0
// 008c3417  6a00                 push 0
// 008c3419  50                   push eax
// 008c341a  e8e1e9f8ff           call 0x851e00
// 008c341f  c20400               ret 4
// 008c3422  b805400080           mov eax, 0x80004005
// 008c3427  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetAccessibleParent@CXTPDockingPaneTabbedContainer@@MAEJPAPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
