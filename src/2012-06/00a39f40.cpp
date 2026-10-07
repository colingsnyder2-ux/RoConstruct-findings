// roc 2012-06 00a39f40  unit: CXTPDockingPaneMiniWnd  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a39f40
//
// 00a39f40  837c240402           cmp dword ptr [esp + 4], 2
// 00a39f45  7535                 jne 0xa39f7c
// 00a39f47  83b94801000000       cmp dword ptr [ecx + 0x148], 0
// 00a39f4e  7408                 je 0xa39f58
// 00a39f50  e82bfdffff           call 0xa39c80
// 00a39f55  c20c00               ret 0xc
// 00a39f58  8b8130010000         mov eax, dword ptr [ecx + 0x130]
// 00a39f5e  85c0                 test eax, eax
// 00a39f60  7405                 je 0xa39f67
// 00a39f62  83c020               add eax, 0x20
// 00a39f65  eb02                 jmp 0xa39f69
// 00a39f67  33c0                 xor eax, eax
// 00a39f69  50                   push eax
// 00a39f6a  81c1f8000000         add ecx, 0xf8
// 00a39f70  e8fb010000           call 0xa3a170
// 00a39f75  8bc8                 mov ecx, eax
// 00a39f77  e864e7f8ff           call 0x9c86e0
// 00a39f7c  c20c00               ret 0xc
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnNcLButtonDblClk@CXTPDockingPaneMiniWnd@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
