// roc 2011-06 008c6b80  unit: CXTPDockingPaneSplitterWnd  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c6b80
//
// 008c6b80  56                   push esi
// 008c6b81  57                   push edi
// 008c6b82  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008c6b86  8bf1                 mov esi, ecx
// 008c6b88  85ff                 test edi, edi
// 008c6b8a  7429                 je 0x8c6bb5
// 008c6b8c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c6b90  8b442410             mov eax, dword ptr [esp + 0x10]
// 008c6b94  6a01                 push 1
// 008c6b96  6a00                 push 0
// 008c6b98  894e34               mov dword ptr [esi + 0x34], ecx
// 008c6b9b  57                   push edi
// 008c6b9c  8bce                 mov ecx, esi
// 008c6b9e  898690000000         mov dword ptr [esi + 0x90], eax
// 008c6ba4  e887f6ffff           call 0x8c6230
// 008c6ba9  8b5704               mov edx, dword ptr [edi + 4]
// 008c6bac  895624               mov dword ptr [esi + 0x24], edx
// 008c6baf  8b4708               mov eax, dword ptr [edi + 8]
// 008c6bb2  894628               mov dword ptr [esi + 0x28], eax
// 008c6bb5  5f                   pop edi
// 008c6bb6  5e                   pop esi
// 008c6bb7  c20c00               ret 0xc
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?Init@CXTPDockingPaneSplitterContainer@@IAEXPAVCXTPDockingPaneBase@@HPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
