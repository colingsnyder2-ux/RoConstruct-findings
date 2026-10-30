// roc 2012-06 00a3ab50  unit: CXTPDockingPaneTabbedContainer  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3ab50
//
// 00a3ab50  83b9f400000000       cmp dword ptr [ecx + 0xf4], 0
// 00a3ab57  7524                 jne 0xa3ab7d
// 00a3ab59  8d8158ffffff         lea eax, [ecx - 0xa8]
// 00a3ab5f  85c0                 test eax, eax
// 00a3ab61  741a                 je 0xa3ab7d
// 00a3ab63  83782000             cmp dword ptr [eax + 0x20], 0
// 00a3ab67  7414                 je 0xa3ab7d
// 00a3ab69  8b442404             mov eax, dword ptr [esp + 4]
// 00a3ab6d  8b8978ffffff         mov ecx, dword ptr [ecx - 0x88]
// 00a3ab73  6a00                 push 0
// 00a3ab75  50                   push eax
// 00a3ab76  51                   push ecx
// 00a3ab77  ff15ec3bb200         call dword ptr [0xb23bec]
// 00a3ab7d  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?RedrawControl@CXTPDockingPaneTabbedContainer@@MAEXPBUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
