// roc 2012-06 00a6d350  unit: CXTPTabPaintManager::CColorSetDefault  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6d350
//
// 00a6d350  53                   push ebx
// 00a6d351  55                   push ebp
// 00a6d352  56                   push esi
// 00a6d353  57                   push edi
// 00a6d354  8bf9                 mov edi, ecx
// 00a6d356  8b6f10               mov ebp, dword ptr [edi + 0x10]
// 00a6d359  83fdff               cmp ebp, -1
// 00a6d35c  7503                 jne 0xa6d361
// 00a6d35e  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 00a6d361  8b5f1c               mov ebx, dword ptr [edi + 0x1c]
// 00a6d364  83fbff               cmp ebx, -1
// 00a6d367  7503                 jne 0xa6d36c
// 00a6d369  8b5f18               mov ebx, dword ptr [edi + 0x18]
// 00a6d36c  8b742428             mov esi, dword ptr [esp + 0x28]
// 00a6d370  3beb                 cmp ebp, ebx
// 00a6d372  7544                 jne 0xa6d3b8
// 00a6d374  e8e704f5ff           call 0x9bd860
// 00a6d379  6a0f                 push 0xf
// 00a6d37b  8bc8                 mov ecx, eax
// 00a6d37d  e85efcf4ff           call 0x9bcfe0
// 00a6d382  3be8                 cmp ebp, eax
// 00a6d384  7532                 jne 0xa6d3b8
// 00a6d386  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a6d38a  8b16                 mov edx, dword ptr [esi]
// 00a6d38c  8b5258               mov edx, dword ptr [edx + 0x58]
// 00a6d38f  83ec10               sub esp, 0x10
// 00a6d392  8bc4                 mov eax, esp
// 00a6d394  8908                 mov dword ptr [eax], ecx
// 00a6d396  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a6d39a  894804               mov dword ptr [eax + 4], ecx
// 00a6d39d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a6d3a1  894808               mov dword ptr [eax + 8], ecx
// 00a6d3a4  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a6d3a8  89480c               mov dword ptr [eax + 0xc], ecx
// 00a6d3ab  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a6d3af  50                   push eax
// 00a6d3b0  8bce                 mov ecx, esi
// 00a6d3b2  ffd2                 call edx
// 00a6d3b4  85c0                 test eax, eax
// 00a6d3b6  7538                 jne 0xa6d3f0
// 00a6d3b8  8b06                 mov eax, dword ptr [esi]
// 00a6d3ba  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a6d3bd  8bce                 mov ecx, esi
// 00a6d3bf  ffd2                 call edx
// 00a6d3c1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a6d3c5  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a6d3c9  50                   push eax
// 00a6d3ca  53                   push ebx
// 00a6d3cb  55                   push ebp
// 00a6d3cc  83ec10               sub esp, 0x10
// 00a6d3cf  8bc4                 mov eax, esp
// 00a6d3d1  8908                 mov dword ptr [eax], ecx
// 00a6d3d3  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a6d3d7  895004               mov dword ptr [eax + 4], edx
// 00a6d3da  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a6d3de  894808               mov dword ptr [eax + 8], ecx
// 00a6d3e1  89500c               mov dword ptr [eax + 0xc], edx
// 00a6d3e4  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a6d3e8  50                   push eax
// 00a6d3e9  8bcf                 mov ecx, edi
// 00a6d3eb  e860fdffff           call 0xa6d150
// 00a6d3f0  5f                   pop edi
// 00a6d3f1  5e                   pop esi
// 00a6d3f2  5d                   pop ebp
// 00a6d3f3  5b                   pop ebx
// 00a6d3f4  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillHeader@CColorSet@CXTPTabPaintManager@@UAEXPAVCDC@@VCRect@@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
