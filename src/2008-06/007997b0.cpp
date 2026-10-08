// from server: 100% by auto
// roc 2008-06 007997b0  unit: CXTPRibbonControlTab  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007997b0
//
// 007997b0  83ec10               sub esp, 0x10
// 007997b3  53                   push ebx
// 007997b4  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 007997b8  56                   push esi
// 007997b9  57                   push edi
// 007997ba  8bf1                 mov esi, ecx
// 007997bc  85db                 test ebx, ebx
// 007997be  7513                 jne 0x7997d3
// 007997c0  8b06                 mov eax, dword ptr [esi]
// 007997c2  8b502c               mov edx, dword ptr [eax + 0x2c]
// 007997c5  ffd2                 call edx
// 007997c7  8b4024               mov eax, dword ptr [eax + 0x24]
// 007997ca  5f                   pop edi
// 007997cb  5e                   pop esi
// 007997cc  5b                   pop ebx
// 007997cd  83c410               add esp, 0x10
// 007997d0  c21800               ret 0x18
// 007997d3  837b28ff             cmp dword ptr [ebx + 0x28], -1
// 007997d7  0f8487000000         je 0x799864
// 007997dd  8b06                 mov eax, dword ptr [esi]
// 007997df  8b502c               mov edx, dword ptr [eax + 0x2c]
// 007997e2  ffd2                 call edx
// 007997e4  83782400             cmp dword ptr [eax + 0x24], 0
// 007997e8  747a                 je 0x799864
// 007997ea  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 007997ee  8b0f                 mov ecx, dword ptr [edi]
// 007997f0  8b4328               mov eax, dword ptr [ebx + 0x28]
// 007997f3  51                   push ecx
// 007997f4  50                   push eax
// 007997f5  8d8e7cfeffff         lea ecx, [esi - 0x184]
// 007997fb  e8101af1ff           call 0x6ab210
// 00799800  8bc8                 mov ecx, eax
// 00799802  e8496df2ff           call 0x6c0550
// 00799807  8bf0                 mov esi, eax
// 00799809  85f6                 test esi, esi
// 0079980b  7457                 je 0x799864
// 0079980d  837c243000           cmp dword ptr [esp + 0x30], 0
// 00799812  7442                 je 0x799856
// 00799814  8b5704               mov edx, dword ptr [edi + 4]
// 00799817  8b07                 mov eax, dword ptr [edi]
// 00799819  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0079981d  52                   push edx
// 0079981e  8b542428             mov edx, dword ptr [esp + 0x28]
// 00799822  50                   push eax
// 00799823  51                   push ecx
// 00799824  52                   push edx
// 00799825  8d4c241c             lea ecx, [esp + 0x1c]
// 00799829  e80247cbff           call 0x44df30
// 0079982e  8b10                 mov edx, dword ptr [eax]
// 00799830  56                   push esi
// 00799831  83ec10               sub esp, 0x10
// 00799834  8bcc                 mov ecx, esp
// 00799836  8911                 mov dword ptr [ecx], edx
// 00799838  8b5004               mov edx, dword ptr [eax + 4]
// 0079983b  895104               mov dword ptr [ecx + 4], edx
// 0079983e  8b5008               mov edx, dword ptr [eax + 8]
// 00799841  8b400c               mov eax, dword ptr [eax + 0xc]
// 00799844  895108               mov dword ptr [ecx + 8], edx
// 00799847  89410c               mov dword ptr [ecx + 0xc], eax
// 0079984a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0079984e  51                   push ecx
// 0079984f  8bcb                 mov ecx, ebx
// 00799851  e8ca1bfeff           call 0x77b420
// 00799856  b801000000           mov eax, 1
// 0079985b  5f                   pop edi
// 0079985c  5e                   pop esi
// 0079985d  5b                   pop ebx
// 0079985e  83c410               add esp, 0x10
// 00799861  c21800               ret 0x18
// 00799864  5f                   pop edi
// 00799865  5e                   pop esi
// 00799866  33c0                 xor eax, eax
// 00799868  5b                   pop ebx
// 00799869  83c410               add esp, 0x10
// 0079986c  c21800               ret 0x18
// library xtp-11.2.2/Source\Ribbon\XTPRibbonControlTab.cpp (function ?DrawIcon@CXTPRibbonControlTab@@MBEHPAVCDC@@VCPoint@@PAVCXTPTabManagerItem@@HAAVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonControlTab.cpp
