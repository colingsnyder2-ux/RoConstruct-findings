// roc 2012-06 00a39df0  unit: CXTPDockingPaneMiniWnd  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a39df0
//
// 00a39df0  8b442404             mov eax, dword ptr [esp + 4]
// 00a39df4  56                   push esi
// 00a39df5  8bf1                 mov esi, ecx
// 00a39df7  c7401000000000       mov dword ptr [eax + 0x10], 0
// 00a39dfe  83be28ffffff00       cmp dword ptr [esi - 0xd8], 0
// 00a39e05  c7463800000000       mov dword ptr [esi + 0x38], 0
// 00a39e0c  740d                 je 0xa39e1b
// 00a39e0e  6a00                 push 0
// 00a39e10  8d8e08ffffff         lea ecx, [esi - 0xf8]
// 00a39e16  e8898cf4ff           call 0x982aa4
// 00a39e1b  837e5000             cmp dword ptr [esi + 0x50], 0
// 00a39e1f  740b                 je 0xa39e2c
// 00a39e21  8d8e08ffffff         lea ecx, [esi - 0xf8]
// 00a39e27  e854feffff           call 0xa39c80
// 00a39e2c  5e                   pop esi
// 00a39e2d  c20400               ret 4
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?RemovePane@CXTPDockingPaneMiniWnd@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
