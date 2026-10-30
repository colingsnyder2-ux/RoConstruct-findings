// from server: 100% by auto
// roc 2008-06 006e4f50  unit: CXTPControls  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e4f50
//
// 006e4f50  56                   push esi
// 006e4f51  57                   push edi
// 006e4f52  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006e4f56  8bf1                 mov esi, ecx
// 006e4f58  85ff                 test edi, edi
// 006e4f5a  7411                 je 0x6e4f6d
// 006e4f5c  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 006e4f62  e87dbcfbff           call 0x6a0be4
// 006e4f67  89bee4000000         mov dword ptr [esi + 0xe4], edi
// 006e4f6d  5f                   pop edi
// 006e4f6e  5e                   pop esi
// 006e4f6f  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?SetImageManager@CXTPDockingPaneManager@@QAEXPAVCXTPImageManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
