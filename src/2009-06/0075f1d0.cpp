// roc 2009-06 0075f1d0  unit: CXTPDockingPaneManager  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075f1d0
//
// 0075f1d0  56                   push esi
// 0075f1d1  57                   push edi
// 0075f1d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0075f1d6  8bf1                 mov esi, ecx
// 0075f1d8  85ff                 test edi, edi
// 0075f1da  7425                 je 0x75f201
// 0075f1dc  8bcf                 mov ecx, edi
// 0075f1de  e86dde0600           call 0x7cd050
// 0075f1e3  85c0                 test eax, eax
// 0075f1e5  741a                 je 0x75f201
// 0075f1e7  8bce                 mov ecx, esi
// 0075f1e9  e8d2f1ffff           call 0x75e3c0
// 0075f1ee  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 0075f1f4  57                   push edi
// 0075f1f5  e8c6f90600           call 0x7cebc0
// 0075f1fa  8bce                 mov ecx, esi
// 0075f1fc  e88ffcffff           call 0x75ee90
// 0075f201  5f                   pop edi
// 0075f202  5e                   pop esi
// 0075f203  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?SetLayout@CXTPDockingPaneManager@@QAEXPBVCXTPDockingPaneLayout@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
