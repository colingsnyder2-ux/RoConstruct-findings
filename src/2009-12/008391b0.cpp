// roc 2009-12 008391b0  unit: CXTPDockingPaneManager  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008391b0
//
// 008391b0  56                   push esi
// 008391b1  e8caf4ffff           call 0x838680
// 008391b6  8b7004               mov esi, dword ptr [eax + 4]
// 008391b9  85f6                 test esi, esi
// 008391bb  7413                 je 0x8391d0
// 008391bd  8d4900               lea ecx, [ecx]
// 008391c0  8bc6                 mov eax, esi
// 008391c2  8b4808               mov ecx, dword ptr [eax + 8]
// 008391c5  8b36                 mov esi, dword ptr [esi]
// 008391c7  e854360200           call 0x85c820
// 008391cc  85f6                 test esi, esi
// 008391ce  75f0                 jne 0x8391c0
// 008391d0  5e                   pop esi
// 008391d1  c3                   ret 
// copied from an identical function in another client (function ?_DetachAll@CXTPDockingPaneManager@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD /Ob1 /Oy-
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp