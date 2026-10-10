// roc 2008-06 0079d0b0  unit: CXTPTabPaintManager::CColorSetOffice2003  size: 302 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079d0b0
//
// 0079d0b0  8b442408             mov eax, dword ptr [esp + 8]
// 0079d0b4  83782000             cmp dword ptr [eax + 0x20], 0
// 0079d0b8  53                   push ebx
// 0079d0b9  55                   push ebp
// 0079d0ba  56                   push esi
// 0079d0bb  57                   push edi
// 0079d0bc  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0079d0c0  8bf1                 mov esi, ecx
// 0079d0c2  bd12000000           mov ebp, 0x12
// 0079d0c7  0f84f3000000         je 0x79d1c0
// 0079d0cd  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0079d0d0  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 0079d0d3  3bc8                 cmp ecx, eax
// 0079d0d5  7552                 jne 0x79d129
// 0079d0d7  83782400             cmp dword ptr [eax + 0x24], 0
// 0079d0db  7452                 je 0x79d12f
// 0079d0dd  83be1402000000       cmp dword ptr [esi + 0x214], 0
// 0079d0e4  7535                 jne 0x79d11b
// 0079d0e6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0079d0ea  8b11                 mov edx, dword ptr [ecx]
// 0079d0ec  6a21                 push 0x21
// 0079d0ee  6a32                 push 0x32
// 0079d0f0  83ec10               sub esp, 0x10
// 0079d0f3  8bc4                 mov eax, esp
// 0079d0f5  8910                 mov dword ptr [eax], edx
// 0079d0f7  8b5104               mov edx, dword ptr [ecx + 4]
// 0079d0fa  895004               mov dword ptr [eax + 4], edx
// 0079d0fd  8b5108               mov edx, dword ptr [ecx + 8]
// 0079d100  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0079d103  895008               mov dword ptr [eax + 8], edx
// 0079d106  89480c               mov dword ptr [eax + 0xc], ecx
// 0079d109  57                   push edi
// 0079d10a  8bce                 mov ecx, esi
// 0079d10c  e83fffffff           call 0x79d050
// 0079d111  bd2f000000           mov ebp, 0x2f
// 0079d116  e9a5000000           jmp 0x79d1c0
// 0079d11b  6a00                 push 0
// 0079d11d  68ffcf8b00           push 0x8bcfff
// 0079d122  68fe8e4b00           push 0x4b8efe
// 0079d127  eb55                 jmp 0x79d17e
// 0079d129  83782400             cmp dword ptr [eax + 0x24], 0
// 0079d12d  7508                 jne 0x79d137
// 0079d12f  3bc8                 cmp ecx, eax
// 0079d131  0f8589000000         jne 0x79d1c0
// 0079d137  83be1402000000       cmp dword ptr [esi + 0x214], 0
// 0079d13e  7532                 jne 0x79d172
// 0079d140  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0079d144  8b11                 mov edx, dword ptr [ecx]
// 0079d146  6a1f                 push 0x1f
// 0079d148  6a20                 push 0x20
// 0079d14a  83ec10               sub esp, 0x10
// 0079d14d  8bc4                 mov eax, esp
// 0079d14f  8910                 mov dword ptr [eax], edx
// 0079d151  8b5104               mov edx, dword ptr [ecx + 4]
// 0079d154  895004               mov dword ptr [eax + 4], edx
// 0079d157  8b5108               mov edx, dword ptr [ecx + 8]
// 0079d15a  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0079d15d  895008               mov dword ptr [eax + 8], edx
// 0079d160  89480c               mov dword ptr [eax + 0xc], ecx
// 0079d163  57                   push edi
// 0079d164  8bce                 mov ecx, esi
// 0079d166  e8e5feffff           call 0x79d050
// 0079d16b  bd2d000000           mov ebp, 0x2d
// 0079d170  eb4e                 jmp 0x79d1c0
// 0079d172  6a00                 push 0
// 0079d174  68ffd49700           push 0x97d4ff
// 0079d179  68fff2c800           push 0xc8f2ff
// 0079d17e  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0079d182  53                   push ebx
// 0079d183  57                   push edi
// 0079d184  e847caf5ff           call 0x6f9bd0
// 0079d189  8bc8                 mov ecx, eax
// 0079d18b  e870caf5ff           call 0x6f9c00
// 0079d190  8b8610020000         mov eax, dword ptr [esi + 0x210]
// 0079d196  83f8ff               cmp eax, -1
// 0079d199  7506                 jne 0x79d1a1
// 0079d19b  8b860c020000         mov eax, dword ptr [esi + 0x20c]
// 0079d1a1  8b8e10020000         mov ecx, dword ptr [esi + 0x210]
// 0079d1a7  83f9ff               cmp ecx, -1
// 0079d1aa  7508                 jne 0x79d1b4
// 0079d1ac  8bb60c020000         mov esi, dword ptr [esi + 0x20c]
// 0079d1b2  eb02                 jmp 0x79d1b6
// 0079d1b4  8bf1                 mov esi, ecx
// 0079d1b6  50                   push eax
// 0079d1b7  56                   push esi
// 0079d1b8  53                   push ebx
// 0079d1b9  8bcf                 mov ecx, edi
// 0079d1bb  e89841f0ff           call 0x6a1358
// 0079d1c0  e87b2bf4ff           call 0x6dfd40
// 0079d1c5  55                   push ebp
// 0079d1c6  8bc8                 mov ecx, eax
// 0079d1c8  e85323f4ff           call 0x6df520
// 0079d1cd  8b17                 mov edx, dword ptr [edi]
// 0079d1cf  50                   push eax
// 0079d1d0  8b4238               mov eax, dword ptr [edx + 0x38]
// 0079d1d3  8bcf                 mov ecx, edi
// 0079d1d5  ffd0                 call eax
// 0079d1d7  5f                   pop edi
// 0079d1d8  5e                   pop esi
// 0079d1d9  5d                   pop ebp
// 0079d1da  5b                   pop ebx
// 0079d1db  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillNavigateButton@CColorSetOffice2003@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerNavigateButton@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerColors.cpp
