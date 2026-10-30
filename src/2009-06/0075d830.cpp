// roc 2009-06 0075d830  unit: CXTPControls  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075d830
//
// 0075d830  56                   push esi
// 0075d831  57                   push edi
// 0075d832  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0075d836  8bf1                 mov esi, ecx
// 0075d838  85ff                 test edi, edi
// 0075d83a  7411                 je 0x75d84d
// 0075d83c  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 0075d842  e861b7fbff           call 0x718fa8
// 0075d847  89bee4000000         mov dword ptr [esi + 0xe4], edi
// 0075d84d  5f                   pop edi
// 0075d84e  5e                   pop esi
// 0075d84f  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?SetImageManager@CXTPDockingPaneManager@@QAEXPAVCXTPImageManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
