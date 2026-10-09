// roc 2007-03 006c92f0  unit: seg_006c0000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c92f0
//
// 006c92f0  837c240402           cmp dword ptr [esp + 4], 2
// 006c92f5  7535                 jne 0x6c932c
// 006c92f7  83b93401000000       cmp dword ptr [ecx + 0x134], 0
// 006c92fe  7408                 je 0x6c9308
// 006c9300  e83bfdffff           call 0x6c9040
// 006c9305  c20c00               ret 0xc
// 006c9308  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 006c930e  85c0                 test eax, eax
// 006c9310  7405                 je 0x6c9317
// 006c9312  83c020               add eax, 0x20
// 006c9315  eb02                 jmp 0x6c9319
// 006c9317  33c0                 xor eax, eax
// 006c9319  50                   push eax
// 006c931a  81c1e4000000         add ecx, 0xe4
// 006c9320  e8fb010000           call 0x6c9520
// 006c9325  8bc8                 mov ecx, eax
// 006c9327  e8c42ff9ff           call 0x65c2f0
// 006c932c  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnNcLButtonDblClk@CXTPDockingPaneMiniWnd@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
