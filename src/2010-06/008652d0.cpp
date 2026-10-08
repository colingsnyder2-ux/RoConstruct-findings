// roc 2010-06 008652d0  unit: CXTPDockingPaneTabbedContainer  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008652d0
//
// 008652d0  83b9f400000000       cmp dword ptr [ecx + 0xf4], 0
// 008652d7  7524                 jne 0x8652fd
// 008652d9  8d8158ffffff         lea eax, [ecx - 0xa8]
// 008652df  85c0                 test eax, eax
// 008652e1  741a                 je 0x8652fd
// 008652e3  83782000             cmp dword ptr [eax + 0x20], 0
// 008652e7  7414                 je 0x8652fd
// 008652e9  8b442404             mov eax, dword ptr [esp + 4]
// 008652ed  8b8978ffffff         mov ecx, dword ptr [ecx - 0x88]
// 008652f3  6a00                 push 0
// 008652f5  50                   push eax
// 008652f6  51                   push ecx
// 008652f7  ff1578ba9e00         call dword ptr [0x9eba78]
// 008652fd  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?RedrawControl@CXTPDockingPaneTabbedContainer@@MAEXPBUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
