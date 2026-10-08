// from server: 100% by auto
// roc 2008-06 0075d120  unit: CXTPDockingPaneMiniWnd  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075d120
//
// 0075d120  8b442404             mov eax, dword ptr [esp + 4]
// 0075d124  56                   push esi
// 0075d125  8bf1                 mov esi, ecx
// 0075d127  c7401000000000       mov dword ptr [eax + 0x10], 0
// 0075d12e  83be28ffffff00       cmp dword ptr [esi - 0xd8], 0
// 0075d135  c7463800000000       mov dword ptr [esi + 0x38], 0
// 0075d13c  740d                 je 0x75d14b
// 0075d13e  6a00                 push 0
// 0075d140  8d8e08ffffff         lea ecx, [esi - 0xf8]
// 0075d146  e82338f4ff           call 0x6a096e
// 0075d14b  837e5000             cmp dword ptr [esi + 0x50], 0
// 0075d14f  740b                 je 0x75d15c
// 0075d151  8d8e08ffffff         lea ecx, [esi - 0xf8]
// 0075d157  e854feffff           call 0x75cfb0
// 0075d15c  5e                   pop esi
// 0075d15d  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?RemovePane@CXTPDockingPaneMiniWnd@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
