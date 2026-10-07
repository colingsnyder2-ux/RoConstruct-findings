// roc 2011-06 008c19e0  unit: CXTPDockingPaneMiniWnd  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c19e0
//
// 008c19e0  8b442404             mov eax, dword ptr [esp + 4]
// 008c19e4  56                   push esi
// 008c19e5  8bf1                 mov esi, ecx
// 008c19e7  c7401000000000       mov dword ptr [eax + 0x10], 0
// 008c19ee  83be28ffffff00       cmp dword ptr [esi - 0xd8], 0
// 008c19f5  c7463800000000       mov dword ptr [esi + 0x38], 0
// 008c19fc  740d                 je 0x8c1a0b
// 008c19fe  6a00                 push 0
// 008c1a00  8d8e08ffffff         lea ecx, [esi - 0xf8]
// 008c1a06  e83b89f4ff           call 0x80a346
// 008c1a0b  837e5000             cmp dword ptr [esi + 0x50], 0
// 008c1a0f  740b                 je 0x8c1a1c
// 008c1a11  8d8e08ffffff         lea ecx, [esi - 0xf8]
// 008c1a17  e854feffff           call 0x8c1870
// 008c1a1c  5e                   pop esi
// 008c1a1d  c20400               ret 4
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?RemovePane@CXTPDockingPaneMiniWnd@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
