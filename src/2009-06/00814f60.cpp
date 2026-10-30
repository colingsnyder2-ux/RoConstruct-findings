// roc 2009-06 00814f60  unit: CXTPRibbonControlTab  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00814f60
//
// 00814f60  83ec10               sub esp, 0x10
// 00814f63  53                   push ebx
// 00814f64  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00814f68  56                   push esi
// 00814f69  57                   push edi
// 00814f6a  8bf1                 mov esi, ecx
// 00814f6c  85db                 test ebx, ebx
// 00814f6e  7513                 jne 0x814f83
// 00814f70  8b06                 mov eax, dword ptr [esi]
// 00814f72  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00814f75  ffd2                 call edx
// 00814f77  8b4024               mov eax, dword ptr [eax + 0x24]
// 00814f7a  5f                   pop edi
// 00814f7b  5e                   pop esi
// 00814f7c  5b                   pop ebx
// 00814f7d  83c410               add esp, 0x10
// 00814f80  c21800               ret 0x18
// 00814f83  837b28ff             cmp dword ptr [ebx + 0x28], -1
// 00814f87  0f8487000000         je 0x815014
// 00814f8d  8b06                 mov eax, dword ptr [esi]
// 00814f8f  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00814f92  ffd2                 call edx
// 00814f94  83782400             cmp dword ptr [eax + 0x24], 0
// 00814f98  747a                 je 0x815014
// 00814f9a  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00814f9e  8b0f                 mov ecx, dword ptr [edi]
// 00814fa0  8b4328               mov eax, dword ptr [ebx + 0x28]
// 00814fa3  51                   push ecx
// 00814fa4  50                   push eax
// 00814fa5  8d8e7cfeffff         lea ecx, [esi - 0x184]
// 00814fab  e840a9f0ff           call 0x71f8f0
// 00814fb0  8bc8                 mov ecx, eax
// 00814fb2  e8d93af2ff           call 0x738a90
// 00814fb7  8bf0                 mov esi, eax
// 00814fb9  85f6                 test esi, esi
// 00814fbb  7457                 je 0x815014
// 00814fbd  837c243000           cmp dword ptr [esp + 0x30], 0
// 00814fc2  7442                 je 0x815006
// 00814fc4  8b5704               mov edx, dword ptr [edi + 4]
// 00814fc7  8b07                 mov eax, dword ptr [edi]
// 00814fc9  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00814fcd  52                   push edx
// 00814fce  8b542428             mov edx, dword ptr [esp + 0x28]
// 00814fd2  50                   push eax
// 00814fd3  51                   push ecx
// 00814fd4  52                   push edx
// 00814fd5  8d4c241c             lea ecx, [esp + 0x1c]
// 00814fd9  e88270c3ff           call 0x44c060
// 00814fde  8b10                 mov edx, dword ptr [eax]
// 00814fe0  56                   push esi
// 00814fe1  83ec10               sub esp, 0x10
// 00814fe4  8bcc                 mov ecx, esp
// 00814fe6  8911                 mov dword ptr [ecx], edx
// 00814fe8  8b5004               mov edx, dword ptr [eax + 4]
// 00814feb  895104               mov dword ptr [ecx + 4], edx
// 00814fee  8b5008               mov edx, dword ptr [eax + 8]
// 00814ff1  8b400c               mov eax, dword ptr [eax + 0xc]
// 00814ff4  895108               mov dword ptr [ecx + 8], edx
// 00814ff7  89410c               mov dword ptr [ecx + 0xc], eax
// 00814ffa  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00814ffe  51                   push ecx
// 00814fff  8bcb                 mov ecx, ebx
// 00815001  e86aebfdff           call 0x7f3b70
// 00815006  b801000000           mov eax, 1
// 0081500b  5f                   pop edi
// 0081500c  5e                   pop esi
// 0081500d  5b                   pop ebx
// 0081500e  83c410               add esp, 0x10
// 00815011  c21800               ret 0x18
// 00815014  5f                   pop edi
// 00815015  5e                   pop esi
// 00815016  33c0                 xor eax, eax
// 00815018  5b                   pop ebx
// 00815019  83c410               add esp, 0x10
// 0081501c  c21800               ret 0x18
// library xtp-11.2.2/Source\Ribbon\XTPRibbonControlTab.cpp (function ?DrawIcon@CXTPRibbonControlTab@@MBEHPAVCDC@@VCPoint@@PAVCXTPTabManagerItem@@HAAVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonControlTab.cpp
