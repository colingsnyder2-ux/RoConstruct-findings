// from server: 100% by auto
// roc 2008-06 007622c0  unit: CXTPDockingPaneSplitterWnd  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007622c0
//
// 007622c0  56                   push esi
// 007622c1  57                   push edi
// 007622c2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007622c6  8bf1                 mov esi, ecx
// 007622c8  85ff                 test edi, edi
// 007622ca  7429                 je 0x7622f5
// 007622cc  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007622d0  8b442410             mov eax, dword ptr [esp + 0x10]
// 007622d4  6a01                 push 1
// 007622d6  6a00                 push 0
// 007622d8  894e34               mov dword ptr [esi + 0x34], ecx
// 007622db  57                   push edi
// 007622dc  8bce                 mov ecx, esi
// 007622de  898690000000         mov dword ptr [esi + 0x90], eax
// 007622e4  e887f6ffff           call 0x761970
// 007622e9  8b5704               mov edx, dword ptr [edi + 4]
// 007622ec  895624               mov dword ptr [esi + 0x24], edx
// 007622ef  8b4708               mov eax, dword ptr [edi + 8]
// 007622f2  894628               mov dword ptr [esi + 0x28], eax
// 007622f5  5f                   pop edi
// 007622f6  5e                   pop esi
// 007622f7  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?Init@CXTPDockingPaneSplitterContainer@@IAEXPAVCXTPDockingPaneBase@@HPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
