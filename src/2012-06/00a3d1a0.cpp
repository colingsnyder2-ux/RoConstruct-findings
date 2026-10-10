// roc 2012-06 00a3d1a0  unit: CXTPDockingPaneTabbedContainer  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3d1a0
//
// 00a3d1a0  56                   push esi
// 00a3d1a1  57                   push edi
// 00a3d1a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00a3d1a6  8bf1                 mov esi, ecx
// 00a3d1a8  85ff                 test edi, edi
// 00a3d1aa  7446                 je 0xa3d1f2
// 00a3d1ac  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a3d1b0  894668               mov dword ptr [esi + 0x68], eax
// 00a3d1b3  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 00a3d1b6  894e58               mov dword ptr [esi + 0x58], ecx
// 00a3d1b9  8b5728               mov edx, dword ptr [edi + 0x28]
// 00a3d1bc  89565c               mov dword ptr [esi + 0x5c], edx
// 00a3d1bf  8b473c               mov eax, dword ptr [edi + 0x3c]
// 00a3d1c2  894670               mov dword ptr [esi + 0x70], eax
// 00a3d1c5  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 00a3d1c8  894e74               mov dword ptr [esi + 0x74], ecx
// 00a3d1cb  8b5744               mov edx, dword ptr [edi + 0x44]
// 00a3d1ce  895678               mov dword ptr [esi + 0x78], edx
// 00a3d1d1  8b4748               mov eax, dword ptr [edi + 0x48]
// 00a3d1d4  6a01                 push 1
// 00a3d1d6  57                   push edi
// 00a3d1d7  8bce                 mov ecx, esi
// 00a3d1d9  89467c               mov dword ptr [esi + 0x7c], eax
// 00a3d1dc  e8cff7ffff           call 0xa3c9b0
// 00a3d1e1  8b16                 mov edx, dword ptr [esi]
// 00a3d1e3  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 00a3d1e9  6a01                 push 1
// 00a3d1eb  6a01                 push 1
// 00a3d1ed  57                   push edi
// 00a3d1ee  8bce                 mov ecx, esi
// 00a3d1f0  ffd0                 call eax
// 00a3d1f2  5f                   pop edi
// 00a3d1f3  5e                   pop esi
// 00a3d1f4  c20800               ret 8
// library xtp-15.2.1-shared-mfc/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?Init@CXTPDockingPaneTabbedContainer@@IAEXPAVCXTPDockingPane@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
