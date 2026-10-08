// roc 2012-06 009c6490  unit: CXTPControls  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c6490
//
// 009c6490  56                   push esi
// 009c6491  57                   push edi
// 009c6492  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009c6496  8bf1                 mov esi, ecx
// 009c6498  85ff                 test edi, edi
// 009c649a  7411                 je 0x9c64ad
// 009c649c  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 009c64a2  e8e3c1fbff           call 0x98268a
// 009c64a7  89bee4000000         mov dword ptr [esi + 0xe4], edi
// 009c64ad  5f                   pop edi
// 009c64ae  5e                   pop esi
// 009c64af  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?SetImageManager@CXTPDockingPaneManager@@QAEXPAVCXTPImageManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
