// roc 2008-06 007589f0  unit: CXTPDockingPaneAutoHidePanel  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007589f0
//
// 007589f0  56                   push esi
// 007589f1  57                   push edi
// 007589f2  8bf9                 mov edi, ecx
// 007589f4  be60000000           mov esi, 0x60
// 007589f9  8da42400000000       lea esp, [esp]
// 00758a00  8b4760               mov eax, dword ptr [edi + 0x60]
// 00758a03  03c6                 add eax, esi
// 00758a05  833800               cmp dword ptr [eax], 0
// 00758a08  7409                 je 0x758a13
// 00758a0a  8b08                 mov ecx, dword ptr [eax]
// 00758a0c  6a00                 push 0
// 00758a0e  e80df2ffff           call 0x757c20
// 00758a13  83c604               add esi, 4
// 00758a16  83fe70               cmp esi, 0x70
// 00758a19  7ce5                 jl 0x758a00
// 00758a1b  5f                   pop edi
// 00758a1c  5e                   pop esi
// 00758a1d  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?CloseActiveWindows@CXTPDockingPaneAutoHidePanel@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
