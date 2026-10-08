// roc 2010-06 0089c490  unit: CXTPTabPaintManager::CColorSetDefault  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089c490
//
// 0089c490  53                   push ebx
// 0089c491  55                   push ebp
// 0089c492  56                   push esi
// 0089c493  57                   push edi
// 0089c494  8bf9                 mov edi, ecx
// 0089c496  8b6f10               mov ebp, dword ptr [edi + 0x10]
// 0089c499  83fdff               cmp ebp, -1
// 0089c49c  7503                 jne 0x89c4a1
// 0089c49e  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 0089c4a1  8b5f1c               mov ebx, dword ptr [edi + 0x1c]
// 0089c4a4  83fbff               cmp ebx, -1
// 0089c4a7  7503                 jne 0x89c4ac
// 0089c4a9  8b5f18               mov ebx, dword ptr [edi + 0x18]
// 0089c4ac  8b742428             mov esi, dword ptr [esp + 0x28]
// 0089c4b0  3beb                 cmp ebp, ebx
// 0089c4b2  7544                 jne 0x89c4f8
// 0089c4b4  e86776f4ff           call 0x7e3b20
// 0089c4b9  6a0f                 push 0xf
// 0089c4bb  8bc8                 mov ecx, eax
// 0089c4bd  e8ee6df4ff           call 0x7e32b0
// 0089c4c2  3be8                 cmp ebp, eax
// 0089c4c4  7532                 jne 0x89c4f8
// 0089c4c6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089c4ca  8b16                 mov edx, dword ptr [esi]
// 0089c4cc  8b5258               mov edx, dword ptr [edx + 0x58]
// 0089c4cf  83ec10               sub esp, 0x10
// 0089c4d2  8bc4                 mov eax, esp
// 0089c4d4  8908                 mov dword ptr [eax], ecx
// 0089c4d6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0089c4da  894804               mov dword ptr [eax + 4], ecx
// 0089c4dd  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0089c4e1  894808               mov dword ptr [eax + 8], ecx
// 0089c4e4  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0089c4e8  89480c               mov dword ptr [eax + 0xc], ecx
// 0089c4eb  8b442424             mov eax, dword ptr [esp + 0x24]
// 0089c4ef  50                   push eax
// 0089c4f0  8bce                 mov ecx, esi
// 0089c4f2  ffd2                 call edx
// 0089c4f4  85c0                 test eax, eax
// 0089c4f6  7538                 jne 0x89c530
// 0089c4f8  8b06                 mov eax, dword ptr [esi]
// 0089c4fa  8b5048               mov edx, dword ptr [eax + 0x48]
// 0089c4fd  8bce                 mov ecx, esi
// 0089c4ff  ffd2                 call edx
// 0089c501  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089c505  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0089c509  50                   push eax
// 0089c50a  53                   push ebx
// 0089c50b  55                   push ebp
// 0089c50c  83ec10               sub esp, 0x10
// 0089c50f  8bc4                 mov eax, esp
// 0089c511  8908                 mov dword ptr [eax], ecx
// 0089c513  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0089c517  895004               mov dword ptr [eax + 4], edx
// 0089c51a  8b542440             mov edx, dword ptr [esp + 0x40]
// 0089c51e  894808               mov dword ptr [eax + 8], ecx
// 0089c521  89500c               mov dword ptr [eax + 0xc], edx
// 0089c524  8b442430             mov eax, dword ptr [esp + 0x30]
// 0089c528  50                   push eax
// 0089c529  8bcf                 mov ecx, edi
// 0089c52b  e860fdffff           call 0x89c290
// 0089c530  5f                   pop edi
// 0089c531  5e                   pop esi
// 0089c532  5d                   pop ebp
// 0089c533  5b                   pop ebx
// 0089c534  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillHeader@CColorSet@CXTPTabPaintManager@@UAEXPAVCDC@@VCRect@@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
