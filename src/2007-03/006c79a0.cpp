// roc 2007-03 006c79a0  unit: seg_006c0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c79a0
//
// 006c79a0  56                   push esi
// 006c79a1  8bf1                 mov esi, ecx
// 006c79a3  85f6                 test esi, esi
// 006c79a5  7434                 je 0x6c79db
// 006c79a7  837e2000             cmp dword ptr [esi + 0x20], 0
// 006c79ab  742e                 je 0x6c79db
// 006c79ad  83be4001000000       cmp dword ptr [esi + 0x140], 0
// 006c79b4  741d                 je 0x6c79d3
// 006c79b6  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 006c79bc  8b5038               mov edx, dword ptr [eax + 0x38]
// 006c79bf  8d8ee4000000         lea ecx, [esi + 0xe4]
// 006c79c5  6a00                 push 0
// 006c79c7  c7864001000000000000 mov dword ptr [esi + 0x140], 0
// 006c79d1  ffd2                 call edx
// 006c79d3  8bce                 mov ecx, esi
// 006c79d5  5e                   pop esi
// 006c79d6  e9db390700           jmp 0x73b3b6
// 006c79db  5e                   pop esi
// 006c79dc  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnIdleUpdateCmdUI@CXTPDockingPaneMiniWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
