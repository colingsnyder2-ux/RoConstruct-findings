// roc 2007-08 006dbaf0  unit: CXTPDockingPaneAutoHidePanel  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006dbaf0
//
// 006dbaf0  56                   push esi
// 006dbaf1  57                   push edi
// 006dbaf2  8bf9                 mov edi, ecx
// 006dbaf4  be60000000           mov esi, 0x60
// 006dbaf9  8da42400000000       lea esp, [esp]
// 006dbb00  8b4760               mov eax, dword ptr [edi + 0x60]
// 006dbb03  03c6                 add eax, esi
// 006dbb05  833800               cmp dword ptr [eax], 0
// 006dbb08  7409                 je 0x6dbb13
// 006dbb0a  8b08                 mov ecx, dword ptr [eax]
// 006dbb0c  6a00                 push 0
// 006dbb0e  e86df3ffff           call 0x6dae80
// 006dbb13  83c604               add esi, 4
// 006dbb16  83fe70               cmp esi, 0x70
// 006dbb19  7ce5                 jl 0x6dbb00
// 006dbb1b  5f                   pop edi
// 006dbb1c  5e                   pop esi
// 006dbb1d  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?CloseActiveWindows@CXTPDockingPaneAutoHidePanel@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
