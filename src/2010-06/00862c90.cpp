// roc 2010-06 00862c90  unit: CXTPDockingPaneMiniWnd  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00862c90
//
// 00862c90  56                   push esi
// 00862c91  8bf1                 mov esi, ecx
// 00862c93  85f6                 test esi, esi
// 00862c95  7434                 je 0x862ccb
// 00862c97  837e2000             cmp dword ptr [esi + 0x20], 0
// 00862c9b  742e                 je 0x862ccb
// 00862c9d  83be5401000000       cmp dword ptr [esi + 0x154], 0
// 00862ca4  741d                 je 0x862cc3
// 00862ca6  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 00862cac  8b5038               mov edx, dword ptr [eax + 0x38]
// 00862caf  8d8ef8000000         lea ecx, [esi + 0xf8]
// 00862cb5  6a00                 push 0
// 00862cb7  c7865401000000000000 mov dword ptr [esi + 0x154], 0
// 00862cc1  ffd2                 call edx
// 00862cc3  8bce                 mov ecx, esi
// 00862cc5  5e                   pop esi
// 00862cc6  e971a91100           jmp 0x97d63c
// 00862ccb  5e                   pop esi
// 00862ccc  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnIdleUpdateCmdUI@CXTPDockingPaneMiniWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
