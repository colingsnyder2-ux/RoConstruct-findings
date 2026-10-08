// from server: 100% by auto
// roc 2008-06 006e68b0  unit: CXTPDockingPaneManager  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e68b0
//
// 006e68b0  56                   push esi
// 006e68b1  57                   push edi
// 006e68b2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006e68b6  8bf1                 mov esi, ecx
// 006e68b8  85ff                 test edi, edi
// 006e68ba  7425                 je 0x6e68e1
// 006e68bc  8bcf                 mov ecx, edi
// 006e68be  e86de10600           call 0x754a30
// 006e68c3  85c0                 test eax, eax
// 006e68c5  741a                 je 0x6e68e1
// 006e68c7  8bce                 mov ecx, esi
// 006e68c9  e8d2f1ffff           call 0x6e5aa0
// 006e68ce  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 006e68d4  57                   push edi
// 006e68d5  e806fd0600           call 0x7565e0
// 006e68da  8bce                 mov ecx, esi
// 006e68dc  e88ffcffff           call 0x6e6570
// 006e68e1  5f                   pop edi
// 006e68e2  5e                   pop esi
// 006e68e3  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?SetLayout@CXTPDockingPaneManager@@QAEXPBVCXTPDockingPaneLayout@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
