// roc 2011-06 008fd850  unit: CXTPRibbonControlTab  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fd850
//
// 008fd850  83ec10               sub esp, 0x10
// 008fd853  53                   push ebx
// 008fd854  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 008fd858  56                   push esi
// 008fd859  57                   push edi
// 008fd85a  8bf1                 mov esi, ecx
// 008fd85c  85db                 test ebx, ebx
// 008fd85e  7513                 jne 0x8fd873
// 008fd860  8b06                 mov eax, dword ptr [esi]
// 008fd862  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008fd865  ffd2                 call edx
// 008fd867  8b4024               mov eax, dword ptr [eax + 0x24]
// 008fd86a  5f                   pop edi
// 008fd86b  5e                   pop esi
// 008fd86c  5b                   pop ebx
// 008fd86d  83c410               add esp, 0x10
// 008fd870  c21800               ret 0x18
// 008fd873  837b28ff             cmp dword ptr [ebx + 0x28], -1
// 008fd877  0f8487000000         je 0x8fd904
// 008fd87d  8b06                 mov eax, dword ptr [esi]
// 008fd87f  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008fd882  ffd2                 call edx
// 008fd884  83782400             cmp dword ptr [eax + 0x24], 0
// 008fd888  747a                 je 0x8fd904
// 008fd88a  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 008fd88e  8b0f                 mov ecx, dword ptr [edi]
// 008fd890  8b4328               mov eax, dword ptr [ebx + 0x28]
// 008fd893  51                   push ecx
// 008fd894  50                   push eax
// 008fd895  8d8e7cfeffff         lea ecx, [esi - 0x184]
// 008fd89b  e890eef0ff           call 0x80c730
// 008fd8a0  8bc8                 mov ecx, eax
// 008fd8a2  e8e981f2ff           call 0x825a90
// 008fd8a7  8bf0                 mov esi, eax
// 008fd8a9  85f6                 test esi, esi
// 008fd8ab  7457                 je 0x8fd904
// 008fd8ad  837c243000           cmp dword ptr [esp + 0x30], 0
// 008fd8b2  7442                 je 0x8fd8f6
// 008fd8b4  8b5704               mov edx, dword ptr [edi + 4]
// 008fd8b7  8b07                 mov eax, dword ptr [edi]
// 008fd8b9  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008fd8bd  52                   push edx
// 008fd8be  8b542428             mov edx, dword ptr [esp + 0x28]
// 008fd8c2  50                   push eax
// 008fd8c3  51                   push ecx
// 008fd8c4  52                   push edx
// 008fd8c5  8d4c241c             lea ecx, [esp + 0x1c]
// 008fd8c9  e872f5b6ff           call 0x46ce40
// 008fd8ce  8b10                 mov edx, dword ptr [eax]
// 008fd8d0  56                   push esi
// 008fd8d1  83ec10               sub esp, 0x10
// 008fd8d4  8bcc                 mov ecx, esp
// 008fd8d6  8911                 mov dword ptr [ecx], edx
// 008fd8d8  8b5004               mov edx, dword ptr [eax + 4]
// 008fd8db  895104               mov dword ptr [ecx + 4], edx
// 008fd8de  8b5008               mov edx, dword ptr [eax + 8]
// 008fd8e1  8b400c               mov eax, dword ptr [eax + 0xc]
// 008fd8e4  895108               mov dword ptr [ecx + 8], edx
// 008fd8e7  89410c               mov dword ptr [ecx + 0xc], eax
// 008fd8ea  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008fd8ee  51                   push ecx
// 008fd8ef  8bcb                 mov ecx, ebx
// 008fd8f1  e81a5ffdff           call 0x8d3810
// 008fd8f6  b801000000           mov eax, 1
// 008fd8fb  5f                   pop edi
// 008fd8fc  5e                   pop esi
// 008fd8fd  5b                   pop ebx
// 008fd8fe  83c410               add esp, 0x10
// 008fd901  c21800               ret 0x18
// 008fd904  5f                   pop edi
// 008fd905  5e                   pop esi
// 008fd906  33c0                 xor eax, eax
// 008fd908  5b                   pop ebx
// 008fd909  83c410               add esp, 0x10
// 008fd90c  c21800               ret 0x18
// library xtp-11.2.2/Source\Ribbon\XTPRibbonControlTab.cpp (function ?DrawIcon@CXTPRibbonControlTab@@MBEHPAVCDC@@VCPoint@@PAVCXTPTabManagerItem@@HAAVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonControlTab.cpp
