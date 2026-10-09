// roc 2009-12 008b11f0  unit: CXTPDockingPaneTabbedContainer  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b11f0
//
// 008b11f0  83b9f400000000       cmp dword ptr [ecx + 0xf4], 0
// 008b11f7  7524                 jne 0x8b121d
// 008b11f9  8d8158ffffff         lea eax, [ecx - 0xa8]
// 008b11ff  85c0                 test eax, eax
// 008b1201  741a                 je 0x8b121d
// 008b1203  83782000             cmp dword ptr [eax + 0x20], 0
// 008b1207  7414                 je 0x8b121d
// 008b1209  8b442404             mov eax, dword ptr [esp + 4]
// 008b120d  8b8978ffffff         mov ecx, dword ptr [ecx - 0x88]
// 008b1213  6a00                 push 0
// 008b1215  50                   push eax
// 008b1216  51                   push ecx
// 008b1217  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008b121d  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?RedrawControl@CXTPDockingPaneTabbedContainer@@MAEXPBUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
