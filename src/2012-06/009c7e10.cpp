// roc 2012-06 009c7e10  unit: CXTPDockingPaneManager  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c7e10
//
// 009c7e10  56                   push esi
// 009c7e11  57                   push edi
// 009c7e12  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009c7e16  8bf1                 mov esi, ecx
// 009c7e18  85ff                 test edi, edi
// 009c7e1a  7425                 je 0x9c7e41
// 009c7e1c  8bcf                 mov ecx, edi
// 009c7e1e  e81d980600           call 0xa31640
// 009c7e23  85c0                 test eax, eax
// 009c7e25  741a                 je 0x9c7e41
// 009c7e27  8bce                 mov ecx, esi
// 009c7e29  e8d2f1ffff           call 0x9c7000
// 009c7e2e  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 009c7e34  57                   push edi
// 009c7e35  e8b6b30600           call 0xa331f0
// 009c7e3a  8bce                 mov ecx, esi
// 009c7e3c  e88ffcffff           call 0x9c7ad0
// 009c7e41  5f                   pop edi
// 009c7e42  5e                   pop esi
// 009c7e43  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?SetLayout@CXTPDockingPaneManager@@QAEXPBVCXTPDockingPaneLayout@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
