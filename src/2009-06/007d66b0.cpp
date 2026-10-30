// roc 2009-06 007d66b0  unit: CXTPDockingPaneTabbedContainer  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d66b0
//
// 007d66b0  83b9f400000000       cmp dword ptr [ecx + 0xf4], 0
// 007d66b7  7524                 jne 0x7d66dd
// 007d66b9  8d8158ffffff         lea eax, [ecx - 0xa8]
// 007d66bf  85c0                 test eax, eax
// 007d66c1  741a                 je 0x7d66dd
// 007d66c3  83782000             cmp dword ptr [eax + 0x20], 0
// 007d66c7  7414                 je 0x7d66dd
// 007d66c9  8b442404             mov eax, dword ptr [esp + 4]
// 007d66cd  8b8978ffffff         mov ecx, dword ptr [ecx - 0x88]
// 007d66d3  6a00                 push 0
// 007d66d5  50                   push eax
// 007d66d6  51                   push ecx
// 007d66d7  ff157cee8900         call dword ptr [0x89ee7c]
// 007d66dd  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?RedrawControl@CXTPDockingPaneTabbedContainer@@MAEXPBUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
