// roc 2008-06 0075de70  unit: CXTPDockingPaneTabbedContainer  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075de70
//
// 0075de70  83b9f400000000       cmp dword ptr [ecx + 0xf4], 0
// 0075de77  7524                 jne 0x75de9d
// 0075de79  8d8158ffffff         lea eax, [ecx - 0xa8]
// 0075de7f  85c0                 test eax, eax
// 0075de81  741a                 je 0x75de9d
// 0075de83  83782000             cmp dword ptr [eax + 0x20], 0
// 0075de87  7414                 je 0x75de9d
// 0075de89  8b442404             mov eax, dword ptr [esp + 4]
// 0075de8d  8b8978ffffff         mov ecx, dword ptr [ecx - 0x88]
// 0075de93  6a00                 push 0
// 0075de95  50                   push eax
// 0075de96  51                   push ecx
// 0075de97  ff15182e8000         call dword ptr [0x802e18]
// 0075de9d  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?RedrawControl@CXTPDockingPaneTabbedContainer@@MAEXPBUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
