// roc 2009-06 0080cb80  unit: CXTPTabPaintManager::CColorSetDefault  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080cb80
//
// 0080cb80  53                   push ebx
// 0080cb81  55                   push ebp
// 0080cb82  56                   push esi
// 0080cb83  57                   push edi
// 0080cb84  8bf9                 mov edi, ecx
// 0080cb86  8b6f10               mov ebp, dword ptr [edi + 0x10]
// 0080cb89  83fdff               cmp ebp, -1
// 0080cb8c  7503                 jne 0x80cb91
// 0080cb8e  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 0080cb91  8b5f1c               mov ebx, dword ptr [edi + 0x1c]
// 0080cb94  83fbff               cmp ebx, -1
// 0080cb97  7503                 jne 0x80cb9c
// 0080cb99  8b5f18               mov ebx, dword ptr [edi + 0x18]
// 0080cb9c  8b742428             mov esi, dword ptr [esp + 0x28]
// 0080cba0  3beb                 cmp ebp, ebx
// 0080cba2  7544                 jne 0x80cbe8
// 0080cba4  e8777ff4ff           call 0x754b20
// 0080cba9  6a0f                 push 0xf
// 0080cbab  8bc8                 mov ecx, eax
// 0080cbad  e8ee76f4ff           call 0x7542a0
// 0080cbb2  3be8                 cmp ebp, eax
// 0080cbb4  7532                 jne 0x80cbe8
// 0080cbb6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0080cbba  8b16                 mov edx, dword ptr [esi]
// 0080cbbc  8b5258               mov edx, dword ptr [edx + 0x58]
// 0080cbbf  83ec10               sub esp, 0x10
// 0080cbc2  8bc4                 mov eax, esp
// 0080cbc4  8908                 mov dword ptr [eax], ecx
// 0080cbc6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0080cbca  894804               mov dword ptr [eax + 4], ecx
// 0080cbcd  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0080cbd1  894808               mov dword ptr [eax + 8], ecx
// 0080cbd4  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0080cbd8  89480c               mov dword ptr [eax + 0xc], ecx
// 0080cbdb  8b442424             mov eax, dword ptr [esp + 0x24]
// 0080cbdf  50                   push eax
// 0080cbe0  8bce                 mov ecx, esi
// 0080cbe2  ffd2                 call edx
// 0080cbe4  85c0                 test eax, eax
// 0080cbe6  7538                 jne 0x80cc20
// 0080cbe8  8b06                 mov eax, dword ptr [esi]
// 0080cbea  8b5048               mov edx, dword ptr [eax + 0x48]
// 0080cbed  8bce                 mov ecx, esi
// 0080cbef  ffd2                 call edx
// 0080cbf1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0080cbf5  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0080cbf9  50                   push eax
// 0080cbfa  53                   push ebx
// 0080cbfb  55                   push ebp
// 0080cbfc  83ec10               sub esp, 0x10
// 0080cbff  8bc4                 mov eax, esp
// 0080cc01  8908                 mov dword ptr [eax], ecx
// 0080cc03  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0080cc07  895004               mov dword ptr [eax + 4], edx
// 0080cc0a  8b542440             mov edx, dword ptr [esp + 0x40]
// 0080cc0e  894808               mov dword ptr [eax + 8], ecx
// 0080cc11  89500c               mov dword ptr [eax + 0xc], edx
// 0080cc14  8b442430             mov eax, dword ptr [esp + 0x30]
// 0080cc18  50                   push eax
// 0080cc19  8bcf                 mov ecx, edi
// 0080cc1b  e860fdffff           call 0x80c980
// 0080cc20  5f                   pop edi
// 0080cc21  5e                   pop esi
// 0080cc22  5d                   pop ebp
// 0080cc23  5b                   pop ebx
// 0080cc24  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillHeader@CColorSet@CXTPTabPaintManager@@UAEXPAVCDC@@VCRect@@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
