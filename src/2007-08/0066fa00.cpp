// roc 2007-08 0066fa00  unit: CXTPDockingPaneManager  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066fa00
//
// 0066fa00  56                   push esi
// 0066fa01  57                   push edi
// 0066fa02  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0066fa06  85ff                 test edi, edi
// 0066fa08  8bf1                 mov esi, ecx
// 0066fa0a  7425                 je 0x66fa31
// 0066fa0c  8bcf                 mov ecx, edi
// 0066fa0e  e84d810600           call 0x6d7b60
// 0066fa13  85c0                 test eax, eax
// 0066fa15  741a                 je 0x66fa31
// 0066fa17  8bce                 mov ecx, esi
// 0066fa19  e8b2f1ffff           call 0x66ebd0
// 0066fa1e  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 0066fa24  57                   push edi
// 0066fa25  e8669d0600           call 0x6d9790
// 0066fa2a  8bce                 mov ecx, esi
// 0066fa2c  e88ffcffff           call 0x66f6c0
// 0066fa31  5f                   pop edi
// 0066fa32  5e                   pop esi
// 0066fa33  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneManager.cpp (function ?SetLayout@CXTPDockingPaneManager@@QAEXPBVCXTPDockingPaneLayout@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneManager.cpp
