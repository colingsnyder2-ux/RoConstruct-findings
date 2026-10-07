// roc 2007-08 006e0310  unit: CXTPDockingPaneMiniWnd  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e0310
//
// 006e0310  837c240402           cmp dword ptr [esp + 4], 2
// 006e0315  7535                 jne 0x6e034c
// 006e0317  83b93401000000       cmp dword ptr [ecx + 0x134], 0
// 006e031e  7408                 je 0x6e0328
// 006e0320  e83bfdffff           call 0x6e0060
// 006e0325  c20c00               ret 0xc
// 006e0328  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 006e032e  85c0                 test eax, eax
// 006e0330  7405                 je 0x6e0337
// 006e0332  83c020               add eax, 0x20
// 006e0335  eb02                 jmp 0x6e0339
// 006e0337  33c0                 xor eax, eax
// 006e0339  50                   push eax
// 006e033a  81c1e4000000         add ecx, 0xe4
// 006e0340  e8fb010000           call 0x6e0540
// 006e0345  8bc8                 mov ecx, eax
// 006e0347  e864fff8ff           call 0x6702b0
// 006e034c  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnNcLButtonDblClk@CXTPDockingPaneMiniWnd@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
