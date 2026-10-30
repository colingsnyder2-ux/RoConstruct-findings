// from server: 100% by auto
// roc 2011-06 008c1b30  unit: CXTPDockingPaneMiniWnd  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c1b30
//
// 008c1b30  837c240402           cmp dword ptr [esp + 4], 2
// 008c1b35  7535                 jne 0x8c1b6c
// 008c1b37  83b94801000000       cmp dword ptr [ecx + 0x148], 0
// 008c1b3e  7408                 je 0x8c1b48
// 008c1b40  e82bfdffff           call 0x8c1870
// 008c1b45  c20c00               ret 0xc
// 008c1b48  8b8130010000         mov eax, dword ptr [ecx + 0x130]
// 008c1b4e  85c0                 test eax, eax
// 008c1b50  7405                 je 0x8c1b57
// 008c1b52  83c020               add eax, 0x20
// 008c1b55  eb02                 jmp 0x8c1b59
// 008c1b57  33c0                 xor eax, eax
// 008c1b59  50                   push eax
// 008c1b5a  81c1f8000000         add ecx, 0xf8
// 008c1b60  e8fb010000           call 0x8c1d60
// 008c1b65  8bc8                 mov ecx, eax
// 008c1b67  e8a4e6f8ff           call 0x850210
// 008c1b6c  c20c00               ret 0xc
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnNcLButtonDblClk@CXTPDockingPaneMiniWnd@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
