// roc 2008-06 0075d270  unit: CXTPDockingPaneMiniWnd  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075d270
//
// 0075d270  837c240402           cmp dword ptr [esp + 4], 2
// 0075d275  7535                 jne 0x75d2ac
// 0075d277  83b94801000000       cmp dword ptr [ecx + 0x148], 0
// 0075d27e  7408                 je 0x75d288
// 0075d280  e82bfdffff           call 0x75cfb0
// 0075d285  c20c00               ret 0xc
// 0075d288  8b8130010000         mov eax, dword ptr [ecx + 0x130]
// 0075d28e  85c0                 test eax, eax
// 0075d290  7405                 je 0x75d297
// 0075d292  83c020               add eax, 0x20
// 0075d295  eb02                 jmp 0x75d299
// 0075d297  33c0                 xor eax, eax
// 0075d299  50                   push eax
// 0075d29a  81c1f8000000         add ecx, 0xf8
// 0075d2a0  e8fb010000           call 0x75d4a0
// 0075d2a5  8bc8                 mov ecx, eax
// 0075d2a7  e8d49ef8ff           call 0x6e7180
// 0075d2ac  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnNcLButtonDblClk@CXTPDockingPaneMiniWnd@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
