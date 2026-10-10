// roc 2008-06 006e6e20  unit: CXTPDockingPaneManager  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e6e20
//
// 006e6e20  56                   push esi
// 006e6e21  8bf1                 mov esi, ecx
// 006e6e23  e8e8aaffff           call 0x6e1910
// 006e6e28  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 006e6e2e  8b01                 mov eax, dword ptr [ecx]
// 006e6e30  8b5068               mov edx, dword ptr [eax + 0x68]
// 006e6e33  ffd2                 call edx
// 006e6e35  8bce                 mov ecx, esi
// 006e6e37  5e                   pop esi
// 006e6e38  e933f7ffff           jmp 0x6e6570
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneManager.cpp (function ?OnSysColorChange@CXTPDockingPaneManager@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneManager.cpp
