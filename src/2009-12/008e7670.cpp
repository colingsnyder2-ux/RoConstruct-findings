// roc 2009-12 008e7670  unit: CXTPTabPaintManager::CColorSetDefault  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e7670
//
// 008e7670  53                   push ebx
// 008e7671  55                   push ebp
// 008e7672  56                   push esi
// 008e7673  57                   push edi
// 008e7674  8bf9                 mov edi, ecx
// 008e7676  8b6f10               mov ebp, dword ptr [edi + 0x10]
// 008e7679  83fdff               cmp ebp, -1
// 008e767c  7503                 jne 0x8e7681
// 008e767e  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 008e7681  8b5f1c               mov ebx, dword ptr [edi + 0x1c]
// 008e7684  83fbff               cmp ebx, -1
// 008e7687  7503                 jne 0x8e768c
// 008e7689  8b5f18               mov ebx, dword ptr [edi + 0x18]
// 008e768c  8b742428             mov esi, dword ptr [esp + 0x28]
// 008e7690  3beb                 cmp ebp, ebx
// 008e7692  7544                 jne 0x8e76d8
// 008e7694  e83783f4ff           call 0x82f9d0
// 008e7699  6a0f                 push 0xf
// 008e769b  8bc8                 mov ecx, eax
// 008e769d  e85e7af4ff           call 0x82f100
// 008e76a2  3be8                 cmp ebp, eax
// 008e76a4  7532                 jne 0x8e76d8
// 008e76a6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008e76aa  8b16                 mov edx, dword ptr [esi]
// 008e76ac  8b5258               mov edx, dword ptr [edx + 0x58]
// 008e76af  83ec10               sub esp, 0x10
// 008e76b2  8bc4                 mov eax, esp
// 008e76b4  8908                 mov dword ptr [eax], ecx
// 008e76b6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008e76ba  894804               mov dword ptr [eax + 4], ecx
// 008e76bd  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008e76c1  894808               mov dword ptr [eax + 8], ecx
// 008e76c4  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008e76c8  89480c               mov dword ptr [eax + 0xc], ecx
// 008e76cb  8b442424             mov eax, dword ptr [esp + 0x24]
// 008e76cf  50                   push eax
// 008e76d0  8bce                 mov ecx, esi
// 008e76d2  ffd2                 call edx
// 008e76d4  85c0                 test eax, eax
// 008e76d6  7538                 jne 0x8e7710
// 008e76d8  8b06                 mov eax, dword ptr [esi]
// 008e76da  8b5048               mov edx, dword ptr [eax + 0x48]
// 008e76dd  8bce                 mov ecx, esi
// 008e76df  ffd2                 call edx
// 008e76e1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008e76e5  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008e76e9  50                   push eax
// 008e76ea  53                   push ebx
// 008e76eb  55                   push ebp
// 008e76ec  83ec10               sub esp, 0x10
// 008e76ef  8bc4                 mov eax, esp
// 008e76f1  8908                 mov dword ptr [eax], ecx
// 008e76f3  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008e76f7  895004               mov dword ptr [eax + 4], edx
// 008e76fa  8b542440             mov edx, dword ptr [esp + 0x40]
// 008e76fe  894808               mov dword ptr [eax + 8], ecx
// 008e7701  89500c               mov dword ptr [eax + 0xc], edx
// 008e7704  8b442430             mov eax, dword ptr [esp + 0x30]
// 008e7708  50                   push eax
// 008e7709  8bcf                 mov ecx, edi
// 008e770b  e860fdffff           call 0x8e7470
// 008e7710  5f                   pop edi
// 008e7711  5e                   pop esi
// 008e7712  5d                   pop ebp
// 008e7713  5b                   pop ebx
// 008e7714  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillHeader@CColorSet@CXTPTabPaintManager@@UAEXPAVCDC@@VCRect@@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
