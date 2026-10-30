// roc 2009-12 0083a500  unit: CXTPDockingPaneManager  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083a500
//
// 0083a500  56                   push esi
// 0083a501  8bf1                 mov esi, ecx
// 0083a503  e89870ffff           call 0x8315a0
// 0083a508  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 0083a50e  8b01                 mov eax, dword ptr [ecx]
// 0083a510  8b5068               mov edx, dword ptr [eax + 0x68]
// 0083a513  ffd2                 call edx
// 0083a515  8bce                 mov ecx, esi
// 0083a517  5e                   pop esi
// 0083a518  e933f7ffff           jmp 0x839c50
// copied from an identical function in another client (function ?OnSysColorChange@CXTPDockingPaneManager@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/DockingPane/XTPDockingPaneManager.cpp