// roc 2011-06 008c2720  unit: CXTPDockingPaneTabbedContainer  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c2720
//
// 008c2720  83b9f400000000       cmp dword ptr [ecx + 0xf4], 0
// 008c2727  7524                 jne 0x8c274d
// 008c2729  8d8158ffffff         lea eax, [ecx - 0xa8]
// 008c272f  85c0                 test eax, eax
// 008c2731  741a                 je 0x8c274d
// 008c2733  83782000             cmp dword ptr [eax + 0x20], 0
// 008c2737  7414                 je 0x8c274d
// 008c2739  8b442404             mov eax, dword ptr [esp + 4]
// 008c273d  8b8978ffffff         mov ecx, dword ptr [ecx - 0x88]
// 008c2743  6a00                 push 0
// 008c2745  50                   push eax
// 008c2746  51                   push ecx
// 008c2747  ff15ec19a400         call dword ptr [0xa419ec]
// 008c274d  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?RedrawControl@CXTPDockingPaneTabbedContainer@@MAEXPBUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
