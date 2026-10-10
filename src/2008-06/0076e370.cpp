// roc 2008-06 0076e370  unit: CXTPImageEditorDlg::CDlgToolBar  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076e370
//
// 0076e370  8b442404             mov eax, dword ptr [esp + 4]
// 0076e374  83ec10               sub esp, 0x10
// 0076e377  53                   push ebx
// 0076e378  55                   push ebp
// 0076e379  56                   push esi
// 0076e37a  57                   push edi
// 0076e37b  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0076e37f  57                   push edi
// 0076e380  8bf1                 mov esi, ecx
// 0076e382  50                   push eax
// 0076e383  897e64               mov dword ptr [esi + 0x64], edi
// 0076e386  e835de0400           call 0x7bc1c0
// 0076e38b  8b8f600a0000         mov ecx, dword ptr [edi + 0xa60]
// 0076e391  894e54               mov dword ptr [esi + 0x54], ecx
// 0076e394  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0076e397  8b97640a0000         mov edx, dword ptr [edi + 0xa64]
// 0076e39d  8d442410             lea eax, [esp + 0x10]
// 0076e3a1  50                   push eax
// 0076e3a2  51                   push ecx
// 0076e3a3  895658               mov dword ptr [esi + 0x58], edx
// 0076e3a6  ff15342e8000         call dword ptr [0x802e34]
// 0076e3ac  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0076e3b0  8b442418             mov eax, dword ptr [esp + 0x18]
// 0076e3b4  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 0076e3b7  2bc3                 sub eax, ebx
// 0076e3b9  99                   cdq 
// 0076e3ba  f7f9                 idiv ecx
// 0076e3bc  8b7e58               mov edi, dword ptr [esi + 0x58]
// 0076e3bf  6a02                 push 2
// 0076e3c1  8be8                 mov ebp, eax
// 0076e3c3  8b442420             mov eax, dword ptr [esp + 0x20]
// 0076e3c7  2b442418             sub eax, dword ptr [esp + 0x18]
// 0076e3cb  896e5c               mov dword ptr [esi + 0x5c], ebp
// 0076e3ce  99                   cdq 
// 0076e3cf  f7ff                 idiv edi
// 0076e3d1  8b542418             mov edx, dword ptr [esp + 0x18]
// 0076e3d5  894660               mov dword ptr [esi + 0x60], eax
// 0076e3d8  8bc5                 mov eax, ebp
// 0076e3da  0fafc1               imul eax, ecx
// 0076e3dd  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 0076e3e0  0fafcf               imul ecx, edi
// 0076e3e3  41                   inc ecx
// 0076e3e4  51                   push ecx
// 0076e3e5  40                   inc eax
// 0076e3e6  50                   push eax
// 0076e3e7  a1443e8000           mov eax, dword ptr [0x803e44]
// 0076e3ec  52                   push edx
// 0076e3ed  53                   push ebx
// 0076e3ee  50                   push eax
// 0076e3ef  8bce                 mov ecx, esi
// 0076e3f1  e85026f3ff           call 0x6a0a46
// 0076e3f6  6a00                 push 0
// 0076e3f8  ff15d0208000         call dword ptr [0x8020d0]
// 0076e3fe  50                   push eax
// 0076e3ff  8d4e68               lea ecx, [esi + 0x68]
// 0076e402  e83fdc0400           call 0x7bc046
// 0076e407  5f                   pop edi
// 0076e408  5e                   pop esi
// 0076e409  5d                   pop ebp
// 0076e40a  5b                   pop ebx
// 0076e40b  83c410               add esp, 0x10
// 0076e40e  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPImageEditor.cpp (function ?Init@CXTPImageEditorPicture@@QAEXIPAVCXTPImageEditorDlg@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPImageEditor.cpp
