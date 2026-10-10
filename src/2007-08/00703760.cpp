// from server: 100% by tester
// roc 2008-06 00781140  unit: CXTPTabPaintManager::CAppearanceSetStateButtons  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00781140
//
// 00781140  53                   push ebx
// 00781141  56                   push esi
// 00781142  8b742410             mov esi, dword ptr [esp + 0x10]
// 00781146  8b5e44               mov ebx, dword ptr [esi + 0x44]
// 00781149  57                   push edi
// 0078114a  8bf9                 mov edi, ecx
// 0078114c  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0078114f  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 00781155  8b11                 mov edx, dword ptr [ecx]
// 00781157  56                   push esi
// 00781158  83ec10               sub esp, 0x10
// 0078115b  8bc4                 mov eax, esp
// 0078115d  8918                 mov dword ptr [eax], ebx
// 0078115f  8b5e48               mov ebx, dword ptr [esi + 0x48]
// 00781162  895804               mov dword ptr [eax + 4], ebx
// 00781165  8b5e4c               mov ebx, dword ptr [esi + 0x4c]
// 00781168  895808               mov dword ptr [eax + 8], ebx
// 0078116b  8b5e50               mov ebx, dword ptr [esi + 0x50]
// 0078116e  89580c               mov dword ptr [eax + 0xc], ebx
// 00781171  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00781175  8b4214               mov eax, dword ptr [edx + 0x14]
// 00781178  53                   push ebx
// 00781179  ffd0                 call eax
// 0078117b  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 0078117e  8b7e44               mov edi, dword ptr [esi + 0x44]
// 00781181  8b11                 mov edx, dword ptr [ecx]
// 00781183  6a01                 push 1
// 00781185  83ec10               sub esp, 0x10
// 00781188  8bc4                 mov eax, esp
// 0078118a  8938                 mov dword ptr [eax], edi
// 0078118c  8b7e48               mov edi, dword ptr [esi + 0x48]
// 0078118f  897804               mov dword ptr [eax + 4], edi
// 00781192  8b7e4c               mov edi, dword ptr [esi + 0x4c]
// 00781195  897808               mov dword ptr [eax + 8], edi
// 00781198  8b7e50               mov edi, dword ptr [esi + 0x50]
// 0078119b  56                   push esi
// 0078119c  89780c               mov dword ptr [eax + 0xc], edi
// 0078119f  8b4268               mov eax, dword ptr [edx + 0x68]
// 007811a2  53                   push ebx
// 007811a3  ffd0                 call eax
// 007811a5  5f                   pop edi
// 007811a6  5e                   pop esi
// 007811a7  5b                   pop ebx
// 007811a8  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?DrawSingleButton@CAppearanceSetStateButtons@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerAppearance.cpp
