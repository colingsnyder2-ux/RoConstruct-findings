// roc 2009-12 008389b0  unit: CXTPDockingPaneManager  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008389b0
//
// 008389b0  56                   push esi
// 008389b1  8bf1                 mov esi, ecx
// 008389b3  ff15eccb9800         call dword ptr [0x98cbec]
// 008389b9  398638010000         cmp dword ptr [esi + 0x138], eax
// 008389bf  7433                 je 0x8389f4
// 008389c1  8bce                 mov ecx, esi
// 008389c3  898638010000         mov dword ptr [esi + 0x138], eax
// 008389c9  e8a2fcffff           call 0x838670
// 008389ce  8b7004               mov esi, dword ptr [eax + 4]
// 008389d1  85f6                 test esi, esi
// 008389d3  741f                 je 0x8389f4
// 008389d5  8bc6                 mov eax, esi
// 008389d7  8b4808               mov ecx, dword ptr [eax + 8]
// 008389da  8b4118               mov eax, dword ptr [ecx + 0x18]
// 008389dd  8b36                 mov esi, dword ptr [esi]
// 008389df  83f801               cmp eax, 1
// 008389e2  7405                 je 0x8389e9
// 008389e4  83f803               cmp eax, 3
// 008389e7  7507                 jne 0x8389f0
// 008389e9  8b01                 mov eax, dword ptr [ecx]
// 008389eb  8b5028               mov edx, dword ptr [eax + 0x28]
// 008389ee  ffd2                 call edx
// 008389f0  85f6                 test esi, esi
// 008389f2  75e1                 jne 0x8389d5
// 008389f4  5e                   pop esi
// 008389f5  c3                   ret 
// copied from an identical function in another client (function ?UpdatePanes@CXTPDockingPaneManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD /Ob1 /Oy-
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp