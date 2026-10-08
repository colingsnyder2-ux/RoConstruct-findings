// roc 2012-06 00a75b90  unit: CXTPRibbonControlTab  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a75b90
//
// 00a75b90  83ec10               sub esp, 0x10
// 00a75b93  53                   push ebx
// 00a75b94  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00a75b98  56                   push esi
// 00a75b99  57                   push edi
// 00a75b9a  8bf1                 mov esi, ecx
// 00a75b9c  85db                 test ebx, ebx
// 00a75b9e  7513                 jne 0xa75bb3
// 00a75ba0  8b06                 mov eax, dword ptr [esi]
// 00a75ba2  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00a75ba5  ffd2                 call edx
// 00a75ba7  8b4024               mov eax, dword ptr [eax + 0x24]
// 00a75baa  5f                   pop edi
// 00a75bab  5e                   pop esi
// 00a75bac  5b                   pop ebx
// 00a75bad  83c410               add esp, 0x10
// 00a75bb0  c21800               ret 0x18
// 00a75bb3  837b28ff             cmp dword ptr [ebx + 0x28], -1
// 00a75bb7  0f8487000000         je 0xa75c44
// 00a75bbd  8b06                 mov eax, dword ptr [esi]
// 00a75bbf  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00a75bc2  ffd2                 call edx
// 00a75bc4  83782400             cmp dword ptr [eax + 0x24], 0
// 00a75bc8  747a                 je 0xa75c44
// 00a75bca  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00a75bce  8b0f                 mov ecx, dword ptr [edi]
// 00a75bd0  8b4328               mov eax, dword ptr [ebx + 0x28]
// 00a75bd3  51                   push ecx
// 00a75bd4  50                   push eax
// 00a75bd5  8d8e7cfeffff         lea ecx, [esi - 0x184]
// 00a75bdb  e8e0edf0ff           call 0x9849c0
// 00a75be0  8bc8                 mov ecx, eax
// 00a75be2  e8d984f2ff           call 0x99e0c0
// 00a75be7  8bf0                 mov esi, eax
// 00a75be9  85f6                 test esi, esi
// 00a75beb  7457                 je 0xa75c44
// 00a75bed  837c243000           cmp dword ptr [esp + 0x30], 0
// 00a75bf2  7442                 je 0xa75c36
// 00a75bf4  8b5704               mov edx, dword ptr [edi + 4]
// 00a75bf7  8b07                 mov eax, dword ptr [edi]
// 00a75bf9  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a75bfd  52                   push edx
// 00a75bfe  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a75c02  50                   push eax
// 00a75c03  51                   push ecx
// 00a75c04  52                   push edx
// 00a75c05  8d4c241c             lea ecx, [esp + 0x1c]
// 00a75c09  e86221a0ff           call 0x477d70
// 00a75c0e  8b10                 mov edx, dword ptr [eax]
// 00a75c10  56                   push esi
// 00a75c11  83ec10               sub esp, 0x10
// 00a75c14  8bcc                 mov ecx, esp
// 00a75c16  8911                 mov dword ptr [ecx], edx
// 00a75c18  8b5004               mov edx, dword ptr [eax + 4]
// 00a75c1b  895104               mov dword ptr [ecx + 4], edx
// 00a75c1e  8b5008               mov edx, dword ptr [eax + 8]
// 00a75c21  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a75c24  895108               mov dword ptr [ecx + 8], edx
// 00a75c27  89410c               mov dword ptr [ecx + 0xc], eax
// 00a75c2a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a75c2e  51                   push ecx
// 00a75c2f  8bcb                 mov ecx, ebx
// 00a75c31  e80a5ffdff           call 0xa4bb40
// 00a75c36  b801000000           mov eax, 1
// 00a75c3b  5f                   pop edi
// 00a75c3c  5e                   pop esi
// 00a75c3d  5b                   pop ebx
// 00a75c3e  83c410               add esp, 0x10
// 00a75c41  c21800               ret 0x18
// 00a75c44  5f                   pop edi
// 00a75c45  5e                   pop esi
// 00a75c46  33c0                 xor eax, eax
// 00a75c48  5b                   pop ebx
// 00a75c49  83c410               add esp, 0x10
// 00a75c4c  c21800               ret 0x18
// library xtp-11.2.2/Source\Ribbon\XTPRibbonControlTab.cpp (function ?DrawIcon@CXTPRibbonControlTab@@MBEHPAVCDC@@VCPoint@@PAVCXTPTabManagerItem@@HAAVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonControlTab.cpp
