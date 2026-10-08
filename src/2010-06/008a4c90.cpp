// roc 2010-06 008a4c90  unit: CXTPRibbonControlTab  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a4c90
//
// 008a4c90  83ec10               sub esp, 0x10
// 008a4c93  53                   push ebx
// 008a4c94  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 008a4c98  56                   push esi
// 008a4c99  57                   push edi
// 008a4c9a  8bf1                 mov esi, ecx
// 008a4c9c  85db                 test ebx, ebx
// 008a4c9e  7513                 jne 0x8a4cb3
// 008a4ca0  8b06                 mov eax, dword ptr [esi]
// 008a4ca2  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008a4ca5  ffd2                 call edx
// 008a4ca7  8b4024               mov eax, dword ptr [eax + 0x24]
// 008a4caa  5f                   pop edi
// 008a4cab  5e                   pop esi
// 008a4cac  5b                   pop ebx
// 008a4cad  83c410               add esp, 0x10
// 008a4cb0  c21800               ret 0x18
// 008a4cb3  837b28ff             cmp dword ptr [ebx + 0x28], -1
// 008a4cb7  0f8487000000         je 0x8a4d44
// 008a4cbd  8b06                 mov eax, dword ptr [esi]
// 008a4cbf  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008a4cc2  ffd2                 call edx
// 008a4cc4  83782400             cmp dword ptr [eax + 0x24], 0
// 008a4cc8  747a                 je 0x8a4d44
// 008a4cca  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 008a4cce  8b0f                 mov ecx, dword ptr [edi]
// 008a4cd0  8b4328               mov eax, dword ptr [ebx + 0x28]
// 008a4cd3  51                   push ecx
// 008a4cd4  50                   push eax
// 008a4cd5  8d8e7cfeffff         lea ecx, [esi - 0x184]
// 008a4cdb  e87053f0ff           call 0x7aa050
// 008a4ce0  8bc8                 mov ecx, eax
// 008a4ce2  e839eff1ff           call 0x7c3c20
// 008a4ce7  8bf0                 mov esi, eax
// 008a4ce9  85f6                 test esi, esi
// 008a4ceb  7457                 je 0x8a4d44
// 008a4ced  837c243000           cmp dword ptr [esp + 0x30], 0
// 008a4cf2  7442                 je 0x8a4d36
// 008a4cf4  8b5704               mov edx, dword ptr [edi + 4]
// 008a4cf7  8b07                 mov eax, dword ptr [edi]
// 008a4cf9  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008a4cfd  52                   push edx
// 008a4cfe  8b542428             mov edx, dword ptr [esp + 0x28]
// 008a4d02  50                   push eax
// 008a4d03  51                   push ecx
// 008a4d04  52                   push edx
// 008a4d05  8d4c241c             lea ecx, [esp + 0x1c]
// 008a4d09  e872e9baff           call 0x453680
// 008a4d0e  8b10                 mov edx, dword ptr [eax]
// 008a4d10  56                   push esi
// 008a4d11  83ec10               sub esp, 0x10
// 008a4d14  8bcc                 mov ecx, esp
// 008a4d16  8911                 mov dword ptr [ecx], edx
// 008a4d18  8b5004               mov edx, dword ptr [eax + 4]
// 008a4d1b  895104               mov dword ptr [ecx + 4], edx
// 008a4d1e  8b5008               mov edx, dword ptr [eax + 8]
// 008a4d21  8b400c               mov eax, dword ptr [eax + 0xc]
// 008a4d24  895108               mov dword ptr [ecx + 8], edx
// 008a4d27  89410c               mov dword ptr [ecx + 0xc], eax
// 008a4d2a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008a4d2e  51                   push ecx
// 008a4d2f  8bcb                 mov ecx, ebx
// 008a4d31  e8cadbfdff           call 0x882900
// 008a4d36  b801000000           mov eax, 1
// 008a4d3b  5f                   pop edi
// 008a4d3c  5e                   pop esi
// 008a4d3d  5b                   pop ebx
// 008a4d3e  83c410               add esp, 0x10
// 008a4d41  c21800               ret 0x18
// 008a4d44  5f                   pop edi
// 008a4d45  5e                   pop esi
// 008a4d46  33c0                 xor eax, eax
// 008a4d48  5b                   pop ebx
// 008a4d49  83c410               add esp, 0x10
// 008a4d4c  c21800               ret 0x18
// library xtp-11.2.2/Source\Ribbon\XTPRibbonControlTab.cpp (function ?DrawIcon@CXTPRibbonControlTab@@MBEHPAVCDC@@VCPoint@@PAVCXTPTabManagerItem@@HAAVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonControlTab.cpp
