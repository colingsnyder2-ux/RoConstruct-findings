// roc 2009-12 008c1540  unit: CXTPImageEditorDlg::CDlgToolBar  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c1540
//
// 008c1540  8b442404             mov eax, dword ptr [esp + 4]
// 008c1544  83ec10               sub esp, 0x10
// 008c1547  53                   push ebx
// 008c1548  55                   push ebp
// 008c1549  56                   push esi
// 008c154a  57                   push edi
// 008c154b  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008c154f  57                   push edi
// 008c1550  8bf1                 mov esi, ecx
// 008c1552  50                   push eax
// 008c1553  897e64               mov dword ptr [esi + 0x64], edi
// 008c1556  e8df500600           call 0x92663a
// 008c155b  8b8f600a0000         mov ecx, dword ptr [edi + 0xa60]
// 008c1561  894e54               mov dword ptr [esi + 0x54], ecx
// 008c1564  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008c1567  8b97640a0000         mov edx, dword ptr [edi + 0xa64]
// 008c156d  8d442410             lea eax, [esp + 0x10]
// 008c1571  50                   push eax
// 008c1572  51                   push ecx
// 008c1573  895658               mov dword ptr [esi + 0x58], edx
// 008c1576  ff1570cc9800         call dword ptr [0x98cc70]
// 008c157c  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008c1580  8b442418             mov eax, dword ptr [esp + 0x18]
// 008c1584  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 008c1587  2bc3                 sub eax, ebx
// 008c1589  99                   cdq 
// 008c158a  f7f9                 idiv ecx
// 008c158c  8b7e58               mov edi, dword ptr [esi + 0x58]
// 008c158f  6a02                 push 2
// 008c1591  8be8                 mov ebp, eax
// 008c1593  8b442420             mov eax, dword ptr [esp + 0x20]
// 008c1597  2b442418             sub eax, dword ptr [esp + 0x18]
// 008c159b  896e5c               mov dword ptr [esi + 0x5c], ebp
// 008c159e  99                   cdq 
// 008c159f  f7ff                 idiv edi
// 008c15a1  8b542418             mov edx, dword ptr [esp + 0x18]
// 008c15a5  894660               mov dword ptr [esi + 0x60], eax
// 008c15a8  8bc5                 mov eax, ebp
// 008c15aa  0fafc1               imul eax, ecx
// 008c15ad  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008c15b0  0fafcf               imul ecx, edi
// 008c15b3  41                   inc ecx
// 008c15b4  51                   push ecx
// 008c15b5  40                   inc eax
// 008c15b6  50                   push eax
// 008c15b7  a180d79800           mov eax, dword ptr [0x98d780]
// 008c15bc  52                   push edx
// 008c15bd  53                   push ebx
// 008c15be  50                   push eax
// 008c15bf  8bce                 mov ecx, esi
// 008c15c1  e86626f3ff           call 0x7f3c2c
// 008c15c6  6a00                 push 0
// 008c15c8  ff1554b19800         call dword ptr [0x98b154]
// 008c15ce  50                   push eax
// 008c15cf  8d4e68               lea ecx, [esi + 0x68]
// 008c15d2  e8c54e0600           call 0x92649c
// 008c15d7  5f                   pop edi
// 008c15d8  5e                   pop esi
// 008c15d9  5d                   pop ebp
// 008c15da  5b                   pop ebx
// 008c15db  83c410               add esp, 0x10
// 008c15de  c20800               ret 8
// copied from an identical function in another client (function ?Init@CXTPImageEditorPicture@@QAEXIPAVCXTPImageEditorDlg@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPImageEditor.cpp