// roc 2010-06 007ec7c0  unit: CXTPControls  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ec7c0
//
// 007ec7c0  56                   push esi
// 007ec7c1  57                   push edi
// 007ec7c2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007ec7c6  8bf1                 mov esi, ecx
// 007ec7c8  85ff                 test edi, edi
// 007ec7ca  7411                 je 0x7ec7dd
// 007ec7cc  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 007ec7d2  e845b7fbff           call 0x7a7f1c
// 007ec7d7  89bee4000000         mov dword ptr [esi + 0xe4], edi
// 007ec7dd  5f                   pop edi
// 007ec7de  5e                   pop esi
// 007ec7df  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?SetImageManager@CXTPDockingPaneManager@@QAEXPAVCXTPImageManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
