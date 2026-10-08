// from server: 100% by auto
// roc 2011-06 008bd090  unit: CXTPDockingPaneAutoHidePanel  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bd090
//
// 008bd090  56                   push esi
// 008bd091  57                   push edi
// 008bd092  8bf9                 mov edi, ecx
// 008bd094  be60000000           mov esi, 0x60
// 008bd099  8da42400000000       lea esp, [esp]
// 008bd0a0  8b4760               mov eax, dword ptr [edi + 0x60]
// 008bd0a3  03c6                 add eax, esi
// 008bd0a5  833800               cmp dword ptr [eax], 0
// 008bd0a8  7409                 je 0x8bd0b3
// 008bd0aa  8b08                 mov ecx, dword ptr [eax]
// 008bd0ac  6a00                 push 0
// 008bd0ae  e85df2ffff           call 0x8bc310
// 008bd0b3  83c604               add esi, 4
// 008bd0b6  83fe70               cmp esi, 0x70
// 008bd0b9  7ce5                 jl 0x8bd0a0
// 008bd0bb  5f                   pop edi
// 008bd0bc  5e                   pop esi
// 008bd0bd  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?CloseActiveWindows@CXTPDockingPaneAutoHidePanel@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
