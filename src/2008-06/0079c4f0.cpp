// from server: 100% by auto
// roc 2008-06 0079c4f0  unit: CXTPTabPaintManager::CColorSetDefault  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079c4f0
//
// 0079c4f0  53                   push ebx
// 0079c4f1  55                   push ebp
// 0079c4f2  56                   push esi
// 0079c4f3  57                   push edi
// 0079c4f4  8bf9                 mov edi, ecx
// 0079c4f6  8b6f10               mov ebp, dword ptr [edi + 0x10]
// 0079c4f9  83fdff               cmp ebp, -1
// 0079c4fc  7503                 jne 0x79c501
// 0079c4fe  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 0079c501  8b5f1c               mov ebx, dword ptr [edi + 0x1c]
// 0079c504  83fbff               cmp ebx, -1
// 0079c507  7503                 jne 0x79c50c
// 0079c509  8b5f18               mov ebx, dword ptr [edi + 0x18]
// 0079c50c  8b742428             mov esi, dword ptr [esp + 0x28]
// 0079c510  3beb                 cmp ebp, ebx
// 0079c512  7544                 jne 0x79c558
// 0079c514  e82738f4ff           call 0x6dfd40
// 0079c519  6a0f                 push 0xf
// 0079c51b  8bc8                 mov ecx, eax
// 0079c51d  e8fe2ff4ff           call 0x6df520
// 0079c522  3be8                 cmp ebp, eax
// 0079c524  7532                 jne 0x79c558
// 0079c526  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0079c52a  8b16                 mov edx, dword ptr [esi]
// 0079c52c  8b5258               mov edx, dword ptr [edx + 0x58]
// 0079c52f  83ec10               sub esp, 0x10
// 0079c532  8bc4                 mov eax, esp
// 0079c534  8908                 mov dword ptr [eax], ecx
// 0079c536  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0079c53a  894804               mov dword ptr [eax + 4], ecx
// 0079c53d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0079c541  894808               mov dword ptr [eax + 8], ecx
// 0079c544  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0079c548  89480c               mov dword ptr [eax + 0xc], ecx
// 0079c54b  8b442424             mov eax, dword ptr [esp + 0x24]
// 0079c54f  50                   push eax
// 0079c550  8bce                 mov ecx, esi
// 0079c552  ffd2                 call edx
// 0079c554  85c0                 test eax, eax
// 0079c556  7538                 jne 0x79c590
// 0079c558  8b06                 mov eax, dword ptr [esi]
// 0079c55a  8b5048               mov edx, dword ptr [eax + 0x48]
// 0079c55d  8bce                 mov ecx, esi
// 0079c55f  ffd2                 call edx
// 0079c561  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0079c565  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0079c569  50                   push eax
// 0079c56a  53                   push ebx
// 0079c56b  55                   push ebp
// 0079c56c  83ec10               sub esp, 0x10
// 0079c56f  8bc4                 mov eax, esp
// 0079c571  8908                 mov dword ptr [eax], ecx
// 0079c573  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0079c577  895004               mov dword ptr [eax + 4], edx
// 0079c57a  8b542440             mov edx, dword ptr [esp + 0x40]
// 0079c57e  894808               mov dword ptr [eax + 8], ecx
// 0079c581  89500c               mov dword ptr [eax + 0xc], edx
// 0079c584  8b442430             mov eax, dword ptr [esp + 0x30]
// 0079c588  50                   push eax
// 0079c589  8bcf                 mov ecx, edi
// 0079c58b  e860fdffff           call 0x79c2f0
// 0079c590  5f                   pop edi
// 0079c591  5e                   pop esi
// 0079c592  5d                   pop ebp
// 0079c593  5b                   pop ebx
// 0079c594  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillHeader@CColorSet@CXTPTabPaintManager@@UAEXPAVCDC@@VCRect@@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
