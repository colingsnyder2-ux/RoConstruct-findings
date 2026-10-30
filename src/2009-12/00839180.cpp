// roc 2009-12 00839180  unit: CXTPDockingPaneManager  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00839180
//
// 00839180  56                   push esi
// 00839181  e8faf4ffff           call 0x838680
// 00839186  8b7004               mov esi, dword ptr [eax + 4]
// 00839189  85f6                 test esi, esi
// 0083918b  7413                 je 0x8391a0
// 0083918d  8d4900               lea ecx, [ecx]
// 00839190  8bc6                 mov eax, esi
// 00839192  8b4808               mov ecx, dword ptr [eax + 8]
// 00839195  8b36                 mov esi, dword ptr [esi]
// 00839197  e8a4400200           call 0x85d240
// 0083919c  85f6                 test esi, esi
// 0083919e  75f0                 jne 0x839190
// 008391a0  5e                   pop esi
// 008391a1  c3                   ret 
// copied from an identical function in another client (function ?_DetachAll@CXTPDockingPaneManager@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD /Ob1 /Oy-
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp