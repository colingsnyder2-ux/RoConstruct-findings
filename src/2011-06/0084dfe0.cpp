// roc 2011-06 0084dfe0  unit: CXTPControls  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084dfe0
//
// 0084dfe0  56                   push esi
// 0084dfe1  57                   push edi
// 0084dfe2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0084dfe6  8bf1                 mov esi, ecx
// 0084dfe8  85ff                 test edi, edi
// 0084dfea  7411                 je 0x84dffd
// 0084dfec  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 0084dff2  e8e3c5fbff           call 0x80a5da
// 0084dff7  89bee4000000         mov dword ptr [esi + 0xe4], edi
// 0084dffd  5f                   pop edi
// 0084dffe  5e                   pop esi
// 0084dfff  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?SetImageManager@CXTPDockingPaneManager@@QAEXPAVCXTPImageManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
