// roc 2012-06 00a3ef50  unit: CXTPDockingPaneSplitterWnd  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3ef50
//
// 00a3ef50  56                   push esi
// 00a3ef51  57                   push edi
// 00a3ef52  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00a3ef56  8bf1                 mov esi, ecx
// 00a3ef58  85ff                 test edi, edi
// 00a3ef5a  7429                 je 0xa3ef85
// 00a3ef5c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a3ef60  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a3ef64  6a01                 push 1
// 00a3ef66  6a00                 push 0
// 00a3ef68  894e34               mov dword ptr [esi + 0x34], ecx
// 00a3ef6b  57                   push edi
// 00a3ef6c  8bce                 mov ecx, esi
// 00a3ef6e  898690000000         mov dword ptr [esi + 0x90], eax
// 00a3ef74  e887f6ffff           call 0xa3e600
// 00a3ef79  8b5704               mov edx, dword ptr [edi + 4]
// 00a3ef7c  895624               mov dword ptr [esi + 0x24], edx
// 00a3ef7f  8b4708               mov eax, dword ptr [edi + 8]
// 00a3ef82  894628               mov dword ptr [esi + 0x28], eax
// 00a3ef85  5f                   pop edi
// 00a3ef86  5e                   pop esi
// 00a3ef87  c20c00               ret 0xc
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?Init@CXTPDockingPaneSplitterContainer@@IAEXPAVCXTPDockingPaneBase@@HPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
