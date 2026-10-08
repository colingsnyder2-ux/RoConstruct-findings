// from server: 100% by auto
// roc 2012-06 00a355a0  unit: CXTPDockingPaneAutoHidePanel  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a355a0
//
// 00a355a0  56                   push esi
// 00a355a1  57                   push edi
// 00a355a2  8bf9                 mov edi, ecx
// 00a355a4  be60000000           mov esi, 0x60
// 00a355a9  8da42400000000       lea esp, [esp]
// 00a355b0  8b4760               mov eax, dword ptr [edi + 0x60]
// 00a355b3  03c6                 add eax, esi
// 00a355b5  833800               cmp dword ptr [eax], 0
// 00a355b8  7409                 je 0xa355c3
// 00a355ba  8b08                 mov ecx, dword ptr [eax]
// 00a355bc  6a00                 push 0
// 00a355be  e84df2ffff           call 0xa34810
// 00a355c3  83c604               add esi, 4
// 00a355c6  83fe70               cmp esi, 0x70
// 00a355c9  7ce5                 jl 0xa355b0
// 00a355cb  5f                   pop edi
// 00a355cc  5e                   pop esi
// 00a355cd  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?CloseActiveWindows@CXTPDockingPaneAutoHidePanel@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
