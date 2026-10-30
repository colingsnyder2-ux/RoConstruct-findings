// roc 2009-12 008aebc0  unit: CXTPDockingPaneMiniWnd  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008aebc0
//
// 008aebc0  56                   push esi
// 008aebc1  8bf1                 mov esi, ecx
// 008aebc3  85f6                 test esi, esi
// 008aebc5  7434                 je 0x8aebfb
// 008aebc7  837e2000             cmp dword ptr [esi + 0x20], 0
// 008aebcb  742e                 je 0x8aebfb
// 008aebcd  83be5401000000       cmp dword ptr [esi + 0x154], 0
// 008aebd4  741d                 je 0x8aebf3
// 008aebd6  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 008aebdc  8b5038               mov edx, dword ptr [eax + 0x38]
// 008aebdf  8d8ef8000000         lea ecx, [esi + 0xf8]
// 008aebe5  6a00                 push 0
// 008aebe7  c7865401000000000000 mov dword ptr [esi + 0x154], 0
// 008aebf1  ffd2                 call edx
// 008aebf3  8bce                 mov ecx, esi
// 008aebf5  5e                   pop esi
// 008aebf6  e9ff800700           jmp 0x926cfa
// 008aebfb  5e                   pop esi
// 008aebfc  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnIdleUpdateCmdUI@CXTPDockingPaneMiniWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
