// roc 2007-03 0070c820  unit: seg_00700000  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0070c820
//
// 0070c820  51                   push ecx
// 0070c821  53                   push ebx
// 0070c822  8b5910               mov ebx, dword ptr [ecx + 0x10]
// 0070c825  83fbff               cmp ebx, -1
// 0070c828  55                   push ebp
// 0070c829  56                   push esi
// 0070c82a  57                   push edi
// 0070c82b  894c2410             mov dword ptr [esp + 0x10], ecx
// 0070c82f  7503                 jne 0x70c834
// 0070c831  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 0070c834  8b791c               mov edi, dword ptr [ecx + 0x1c]
// 0070c837  83ffff               cmp edi, -1
// 0070c83a  7503                 jne 0x70c83f
// 0070c83c  8b7918               mov edi, dword ptr [ecx + 0x18]
// 0070c83f  3bdf                 cmp ebx, edi
// 0070c841  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0070c845  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0070c849  7540                 jne 0x70c88b
// 0070c84b  e85087f4ff           call 0x654fa0
// 0070c850  6a0f                 push 0xf
// 0070c852  8bc8                 mov ecx, eax
// 0070c854  e8577ff4ff           call 0x6547b0
// 0070c859  3bd8                 cmp ebx, eax
// 0070c85b  752e                 jne 0x70c88b
// 0070c85d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0070c861  8b16                 mov edx, dword ptr [esi]
// 0070c863  8b5258               mov edx, dword ptr [edx + 0x58]
// 0070c866  83ec10               sub esp, 0x10
// 0070c869  8bc4                 mov eax, esp
// 0070c86b  8908                 mov dword ptr [eax], ecx
// 0070c86d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0070c871  894804               mov dword ptr [eax + 4], ecx
// 0070c874  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0070c878  894808               mov dword ptr [eax + 8], ecx
// 0070c87b  89680c               mov dword ptr [eax + 0xc], ebp
// 0070c87e  8b442428             mov eax, dword ptr [esp + 0x28]
// 0070c882  50                   push eax
// 0070c883  8bce                 mov ecx, esi
// 0070c885  ffd2                 call edx
// 0070c887  85c0                 test eax, eax
// 0070c889  7536                 jne 0x70c8c1
// 0070c88b  8b06                 mov eax, dword ptr [esi]
// 0070c88d  8b5048               mov edx, dword ptr [eax + 0x48]
// 0070c890  8bce                 mov ecx, esi
// 0070c892  ffd2                 call edx
// 0070c894  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0070c898  8b542420             mov edx, dword ptr [esp + 0x20]
// 0070c89c  50                   push eax
// 0070c89d  57                   push edi
// 0070c89e  53                   push ebx
// 0070c89f  83ec10               sub esp, 0x10
// 0070c8a2  8bc4                 mov eax, esp
// 0070c8a4  8908                 mov dword ptr [eax], ecx
// 0070c8a6  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0070c8aa  895004               mov dword ptr [eax + 4], edx
// 0070c8ad  8b542434             mov edx, dword ptr [esp + 0x34]
// 0070c8b1  894808               mov dword ptr [eax + 8], ecx
// 0070c8b4  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0070c8b8  52                   push edx
// 0070c8b9  89680c               mov dword ptr [eax + 0xc], ebp
// 0070c8bc  e86ffdffff           call 0x70c630
// 0070c8c1  5f                   pop edi
// 0070c8c2  5e                   pop esi
// 0070c8c3  5d                   pop ebp
// 0070c8c4  5b                   pop ebx
// 0070c8c5  59                   pop ecx
// 0070c8c6  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillHeader@CColorSet@CXTPTabPaintManager@@UAEXPAVCDC@@VCRect@@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerColors.cpp
