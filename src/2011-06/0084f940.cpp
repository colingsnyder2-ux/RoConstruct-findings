// roc 2011-06 0084f940  unit: CXTPDockingPaneManager  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084f940
//
// 0084f940  56                   push esi
// 0084f941  57                   push edi
// 0084f942  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0084f946  8bf1                 mov esi, ecx
// 0084f948  85ff                 test edi, edi
// 0084f94a  7425                 je 0x84f971
// 0084f94c  8bcf                 mov ecx, edi
// 0084f94e  e8fd970600           call 0x8b9150
// 0084f953  85c0                 test eax, eax
// 0084f955  741a                 je 0x84f971
// 0084f957  8bce                 mov ecx, esi
// 0084f959  e8d2f1ffff           call 0x84eb30
// 0084f95e  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 0084f964  57                   push edi
// 0084f965  e866b30600           call 0x8bacd0
// 0084f96a  8bce                 mov ecx, esi
// 0084f96c  e88ffcffff           call 0x84f600
// 0084f971  5f                   pop edi
// 0084f972  5e                   pop esi
// 0084f973  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?SetLayout@CXTPDockingPaneManager@@QAEXPBVCXTPDockingPaneLayout@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
