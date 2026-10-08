// roc 2011-06 008f4ff0  unit: CXTPTabPaintManager::CColorSetDefault  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f4ff0
//
// 008f4ff0  53                   push ebx
// 008f4ff1  55                   push ebp
// 008f4ff2  56                   push esi
// 008f4ff3  57                   push edi
// 008f4ff4  8bf9                 mov edi, ecx
// 008f4ff6  8b6f10               mov ebp, dword ptr [edi + 0x10]
// 008f4ff9  83fdff               cmp ebp, -1
// 008f4ffc  7503                 jne 0x8f5001
// 008f4ffe  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 008f5001  8b5f1c               mov ebx, dword ptr [edi + 0x1c]
// 008f5004  83fbff               cmp ebx, -1
// 008f5007  7503                 jne 0x8f500c
// 008f5009  8b5f18               mov ebx, dword ptr [edi + 0x18]
// 008f500c  8b742428             mov esi, dword ptr [esp + 0x28]
// 008f5010  3beb                 cmp ebp, ebx
// 008f5012  7544                 jne 0x8f5058
// 008f5014  e8c703f5ff           call 0x8453e0
// 008f5019  6a0f                 push 0xf
// 008f501b  8bc8                 mov ecx, eax
// 008f501d  e88efbf4ff           call 0x844bb0
// 008f5022  3be8                 cmp ebp, eax
// 008f5024  7532                 jne 0x8f5058
// 008f5026  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008f502a  8b16                 mov edx, dword ptr [esi]
// 008f502c  8b5258               mov edx, dword ptr [edx + 0x58]
// 008f502f  83ec10               sub esp, 0x10
// 008f5032  8bc4                 mov eax, esp
// 008f5034  8908                 mov dword ptr [eax], ecx
// 008f5036  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008f503a  894804               mov dword ptr [eax + 4], ecx
// 008f503d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008f5041  894808               mov dword ptr [eax + 8], ecx
// 008f5044  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008f5048  89480c               mov dword ptr [eax + 0xc], ecx
// 008f504b  8b442424             mov eax, dword ptr [esp + 0x24]
// 008f504f  50                   push eax
// 008f5050  8bce                 mov ecx, esi
// 008f5052  ffd2                 call edx
// 008f5054  85c0                 test eax, eax
// 008f5056  7538                 jne 0x8f5090
// 008f5058  8b06                 mov eax, dword ptr [esi]
// 008f505a  8b5048               mov edx, dword ptr [eax + 0x48]
// 008f505d  8bce                 mov ecx, esi
// 008f505f  ffd2                 call edx
// 008f5061  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008f5065  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008f5069  50                   push eax
// 008f506a  53                   push ebx
// 008f506b  55                   push ebp
// 008f506c  83ec10               sub esp, 0x10
// 008f506f  8bc4                 mov eax, esp
// 008f5071  8908                 mov dword ptr [eax], ecx
// 008f5073  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008f5077  895004               mov dword ptr [eax + 4], edx
// 008f507a  8b542440             mov edx, dword ptr [esp + 0x40]
// 008f507e  894808               mov dword ptr [eax + 8], ecx
// 008f5081  89500c               mov dword ptr [eax + 0xc], edx
// 008f5084  8b442430             mov eax, dword ptr [esp + 0x30]
// 008f5088  50                   push eax
// 008f5089  8bcf                 mov ecx, edi
// 008f508b  e860fdffff           call 0x8f4df0
// 008f5090  5f                   pop edi
// 008f5091  5e                   pop esi
// 008f5092  5d                   pop ebp
// 008f5093  5b                   pop ebx
// 008f5094  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillHeader@CColorSet@CXTPTabPaintManager@@UAEXPAVCDC@@VCRect@@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
