// roc 2007-08 006e01c0  unit: CXTPDockingPaneMiniWnd  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e01c0
//
// 006e01c0  8b442404             mov eax, dword ptr [esp + 4]
// 006e01c4  56                   push esi
// 006e01c5  8bf1                 mov esi, ecx
// 006e01c7  c7401000000000       mov dword ptr [eax + 0x10], 0
// 006e01ce  83be3cffffff00       cmp dword ptr [esi - 0xc4], 0
// 006e01d5  c7463800000000       mov dword ptr [esi + 0x38], 0
// 006e01dc  740d                 je 0x6e01eb
// 006e01de  6a00                 push 0
// 006e01e0  8d8e1cffffff         lea ecx, [esi - 0xe4]
// 006e01e6  e85ffdf4ff           call 0x62ff4a
// 006e01eb  837e5000             cmp dword ptr [esi + 0x50], 0
// 006e01ef  740b                 je 0x6e01fc
// 006e01f1  8d8e1cffffff         lea ecx, [esi - 0xe4]
// 006e01f7  e864feffff           call 0x6e0060
// 006e01fc  5e                   pop esi
// 006e01fd  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?RemovePane@CXTPDockingPaneMiniWnd@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
