// roc 2008-06 0075b820  unit: CXTPDockingPaneMiniWnd  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075b820
//
// 0075b820  56                   push esi
// 0075b821  8bf1                 mov esi, ecx
// 0075b823  85f6                 test esi, esi
// 0075b825  7434                 je 0x75b85b
// 0075b827  837e2000             cmp dword ptr [esi + 0x20], 0
// 0075b82b  742e                 je 0x75b85b
// 0075b82d  83be5401000000       cmp dword ptr [esi + 0x154], 0
// 0075b834  741d                 je 0x75b853
// 0075b836  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 0075b83c  8b5038               mov edx, dword ptr [eax + 0x38]
// 0075b83f  8d8ef8000000         lea ecx, [esi + 0xf8]
// 0075b845  6a00                 push 0
// 0075b847  c7865401000000000000 mov dword ptr [esi + 0x154], 0
// 0075b851  ffd2                 call edx
// 0075b853  8bce                 mov ecx, esi
// 0075b855  5e                   pop esi
// 0075b856  e985100600           jmp 0x7bc8e0
// 0075b85b  5e                   pop esi
// 0075b85c  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnIdleUpdateCmdUI@CXTPDockingPaneMiniWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
