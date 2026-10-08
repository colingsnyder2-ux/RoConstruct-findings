// from server: 100% by auto
// roc 2007-08 006e5260  unit: CXTPDockingPaneSplitterWnd  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e5260
//
// 006e5260  56                   push esi
// 006e5261  57                   push edi
// 006e5262  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006e5266  85ff                 test edi, edi
// 006e5268  8bf1                 mov esi, ecx
// 006e526a  7429                 je 0x6e5295
// 006e526c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006e5270  8b442410             mov eax, dword ptr [esp + 0x10]
// 006e5274  6a01                 push 1
// 006e5276  6a00                 push 0
// 006e5278  894e34               mov dword ptr [esi + 0x34], ecx
// 006e527b  57                   push edi
// 006e527c  8bce                 mov ecx, esi
// 006e527e  898690000000         mov dword ptr [esi + 0x90], eax
// 006e5284  e897f6ffff           call 0x6e4920
// 006e5289  8b5704               mov edx, dword ptr [edi + 4]
// 006e528c  895624               mov dword ptr [esi + 0x24], edx
// 006e528f  8b4708               mov eax, dword ptr [edi + 8]
// 006e5292  894628               mov dword ptr [esi + 0x28], eax
// 006e5295  5f                   pop edi
// 006e5296  5e                   pop esi
// 006e5297  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?Init@CXTPDockingPaneSplitterContainer@@IAEXPAVCXTPDockingPaneBase@@HPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
