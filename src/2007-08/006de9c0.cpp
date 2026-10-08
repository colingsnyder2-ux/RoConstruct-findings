// from server: 100% by auto
// roc 2007-08 006de9c0  unit: CXTPDockingPaneMiniWnd  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006de9c0
//
// 006de9c0  56                   push esi
// 006de9c1  8bf1                 mov esi, ecx
// 006de9c3  85f6                 test esi, esi
// 006de9c5  7434                 je 0x6de9fb
// 006de9c7  837e2000             cmp dword ptr [esi + 0x20], 0
// 006de9cb  742e                 je 0x6de9fb
// 006de9cd  83be4001000000       cmp dword ptr [esi + 0x140], 0
// 006de9d4  741d                 je 0x6de9f3
// 006de9d6  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 006de9dc  8b5038               mov edx, dword ptr [eax + 0x38]
// 006de9df  8d8ee4000000         lea ecx, [esi + 0xe4]
// 006de9e5  6a00                 push 0
// 006de9e7  c7864001000000000000 mov dword ptr [esi + 0x140], 0
// 006de9f1  ffd2                 call edx
// 006de9f3  8bce                 mov ecx, esi
// 006de9f5  5e                   pop esi
// 006de9f6  e94ba20500           jmp 0x738c46
// 006de9fb  5e                   pop esi
// 006de9fc  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnIdleUpdateCmdUI@CXTPDockingPaneMiniWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
