// roc 2009-12 0086f800  unit: CXTPDockingPaneAutoHidePanel  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086f800
//
// 0086f800  6aff                 push -1
// 0086f802  6854fb9500           push 0x95fb54
// 0086f807  64a100000000         mov eax, dword ptr fs:[0]
// 0086f80d  50                   push eax
// 0086f80e  51                   push ecx
// 0086f80f  56                   push esi
// 0086f810  57                   push edi
// 0086f811  a10052b600           mov eax, dword ptr [0xb65200]
// 0086f816  33c4                 xor eax, esp
// 0086f818  50                   push eax
// 0086f819  8d442410             lea eax, [esp + 0x10]
// 0086f81d  64a300000000         mov dword ptr fs:[0], eax
// 0086f823  8bf1                 mov esi, ecx
// 0086f825  8974240c             mov dword ptr [esp + 0xc], esi
// 0086f829  e86c710b00           call 0x92699a
// 0086f82e  8d7e78               lea edi, [esi + 0x78]
// 0086f831  8bcf                 mov ecx, edi
// 0086f833  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0086f83b  c706b40ba000         mov dword ptr [esi], 0xa00bb4
// 0086f841  ff1574de9800         call dword ptr [0x98de74]
// 0086f847  8b442428             mov eax, dword ptr [esp + 0x28]
// 0086f84b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0086f84f  c644241801           mov byte ptr [esp + 0x18], 1
// 0086f854  89467c               mov dword ptr [esi + 0x7c], eax
// 0086f857  898e80000000         mov dword ptr [esi + 0x80], ecx
// 0086f85d  e83ef0ffff           call 0x86e8a0
// 0086f862  8b542420             mov edx, dword ptr [esp + 0x20]
// 0086f866  6a00                 push 0
// 0086f868  52                   push edx
// 0086f869  8b10                 mov edx, dword ptr [eax]
// 0086f86b  8bc8                 mov ecx, eax
// 0086f86d  8b421c               mov eax, dword ptr [edx + 0x1c]
// 0086f870  68a0230000           push 0x23a0
// 0086f875  ffd0                 call eax
// 0086f877  50                   push eax
// 0086f878  8bce                 mov ecx, esi
// 0086f87a  e80f740b00           call 0x926c8e
// 0086f87f  6856fd9900           push 0x99fd56
// 0086f884  8bcf                 mov ecx, edi
// 0086f886  ff155cde9800         call dword ptr [0x98de5c]
// 0086f88c  c7467400000000       mov dword ptr [esi + 0x74], 0
// 0086f893  8bc6                 mov eax, esi
// 0086f895  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0086f899  64890d00000000       mov dword ptr fs:[0], ecx
// 0086f8a0  59                   pop ecx
// 0086f8a1  5f                   pop edi
// 0086f8a2  5e                   pop esi
// 0086f8a3  83c410               add esp, 0x10
// 0086f8a6  c20c00               ret 0xc
// copied from an identical function in another client (function ??0CXTPNewToolbarDlg@@QAE@PAVCWnd@@PAVCXTPCommandBars@@PAVCXTPCommandBar@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPCustomizeTools.cpp