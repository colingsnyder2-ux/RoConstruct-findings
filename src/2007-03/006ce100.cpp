// roc 2007-03 006ce100  unit: seg_006c0000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006ce100
//
// 006ce100  56                   push esi
// 006ce101  57                   push edi
// 006ce102  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006ce106  85ff                 test edi, edi
// 006ce108  8bf1                 mov esi, ecx
// 006ce10a  7429                 je 0x6ce135
// 006ce10c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ce110  8b442410             mov eax, dword ptr [esp + 0x10]
// 006ce114  6a01                 push 1
// 006ce116  6a00                 push 0
// 006ce118  894e34               mov dword ptr [esi + 0x34], ecx
// 006ce11b  57                   push edi
// 006ce11c  8bce                 mov ecx, esi
// 006ce11e  898690000000         mov dword ptr [esi + 0x90], eax
// 006ce124  e897f6ffff           call 0x6cd7c0
// 006ce129  8b5704               mov edx, dword ptr [edi + 4]
// 006ce12c  895624               mov dword ptr [esi + 0x24], edx
// 006ce12f  8b4708               mov eax, dword ptr [edi + 8]
// 006ce132  894628               mov dword ptr [esi + 0x28], eax
// 006ce135  5f                   pop edi
// 006ce136  5e                   pop esi
// 006ce137  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?Init@CXTPDockingPaneSplitterContainer@@IAEXPAVCXTPDockingPaneBase@@HPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
