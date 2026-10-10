// roc 2008-06 007604e0  unit: CXTPDockingPaneTabbedContainer  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007604e0
//
// 007604e0  56                   push esi
// 007604e1  57                   push edi
// 007604e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007604e6  8bf1                 mov esi, ecx
// 007604e8  85ff                 test edi, edi
// 007604ea  7446                 je 0x760532
// 007604ec  8b442410             mov eax, dword ptr [esp + 0x10]
// 007604f0  894668               mov dword ptr [esi + 0x68], eax
// 007604f3  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 007604f6  894e58               mov dword ptr [esi + 0x58], ecx
// 007604f9  8b5728               mov edx, dword ptr [edi + 0x28]
// 007604fc  89565c               mov dword ptr [esi + 0x5c], edx
// 007604ff  8b473c               mov eax, dword ptr [edi + 0x3c]
// 00760502  894670               mov dword ptr [esi + 0x70], eax
// 00760505  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 00760508  894e74               mov dword ptr [esi + 0x74], ecx
// 0076050b  8b5744               mov edx, dword ptr [edi + 0x44]
// 0076050e  895678               mov dword ptr [esi + 0x78], edx
// 00760511  8b4748               mov eax, dword ptr [edi + 0x48]
// 00760514  6a01                 push 1
// 00760516  57                   push edi
// 00760517  8bce                 mov ecx, esi
// 00760519  89467c               mov dword ptr [esi + 0x7c], eax
// 0076051c  e8cff7ffff           call 0x75fcf0
// 00760521  8b16                 mov edx, dword ptr [esi]
// 00760523  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 00760529  6a01                 push 1
// 0076052b  6a01                 push 1
// 0076052d  57                   push edi
// 0076052e  8bce                 mov ecx, esi
// 00760530  ffd0                 call eax
// 00760532  5f                   pop edi
// 00760533  5e                   pop esi
// 00760534  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?Init@CXTPDockingPaneTabbedContainer@@IAEXPAVCXTPDockingPane@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
