// roc 2010-06 007ee0f0  unit: CXTPDockingPaneManager  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ee0f0
//
// 007ee0f0  56                   push esi
// 007ee0f1  57                   push edi
// 007ee0f2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007ee0f6  8bf1                 mov esi, ecx
// 007ee0f8  85ff                 test edi, edi
// 007ee0fa  7425                 je 0x7ee121
// 007ee0fc  8bcf                 mov ecx, edi
// 007ee0fe  e88dde0600           call 0x85bf90
// 007ee103  85c0                 test eax, eax
// 007ee105  741a                 je 0x7ee121
// 007ee107  8bce                 mov ecx, esi
// 007ee109  e8d2f1ffff           call 0x7ed2e0
// 007ee10e  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 007ee114  57                   push edi
// 007ee115  e8f6f90600           call 0x85db10
// 007ee11a  8bce                 mov ecx, esi
// 007ee11c  e88ffcffff           call 0x7eddb0
// 007ee121  5f                   pop edi
// 007ee122  5e                   pop esi
// 007ee123  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?SetLayout@CXTPDockingPaneManager@@QAEXPBVCXTPDockingPaneLayout@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
