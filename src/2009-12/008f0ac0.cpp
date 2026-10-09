// roc 2009-12 008f0ac0  unit: CXTPRibbonControlTab  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f0ac0
//
// 008f0ac0  83ec10               sub esp, 0x10
// 008f0ac3  53                   push ebx
// 008f0ac4  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 008f0ac8  56                   push esi
// 008f0ac9  57                   push edi
// 008f0aca  8bf1                 mov esi, ecx
// 008f0acc  85db                 test ebx, ebx
// 008f0ace  7513                 jne 0x8f0ae3
// 008f0ad0  8b06                 mov eax, dword ptr [esi]
// 008f0ad2  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008f0ad5  ffd2                 call edx
// 008f0ad7  8b4024               mov eax, dword ptr [eax + 0x24]
// 008f0ada  5f                   pop edi
// 008f0adb  5e                   pop esi
// 008f0adc  5b                   pop ebx
// 008f0add  83c410               add esp, 0x10
// 008f0ae0  c21800               ret 0x18
// 008f0ae3  837b28ff             cmp dword ptr [ebx + 0x28], -1
// 008f0ae7  0f8487000000         je 0x8f0b74
// 008f0aed  8b06                 mov eax, dword ptr [esi]
// 008f0aef  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008f0af2  ffd2                 call edx
// 008f0af4  83782400             cmp dword ptr [eax + 0x24], 0
// 008f0af8  747a                 je 0x8f0b74
// 008f0afa  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 008f0afe  8b0f                 mov ecx, dword ptr [edi]
// 008f0b00  8b4328               mov eax, dword ptr [ebx + 0x28]
// 008f0b03  51                   push ecx
// 008f0b04  50                   push eax
// 008f0b05  8d8e7cfeffff         lea ecx, [esi - 0x184]
// 008f0b0b  e80054f0ff           call 0x7f5f10
// 008f0b10  8bc8                 mov ecx, eax
// 008f0b12  e869f0f1ff           call 0x80fb80
// 008f0b17  8bf0                 mov esi, eax
// 008f0b19  85f6                 test esi, esi
// 008f0b1b  7457                 je 0x8f0b74
// 008f0b1d  837c243000           cmp dword ptr [esp + 0x30], 0
// 008f0b22  7442                 je 0x8f0b66
// 008f0b24  8b5704               mov edx, dword ptr [edi + 4]
// 008f0b27  8b07                 mov eax, dword ptr [edi]
// 008f0b29  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008f0b2d  52                   push edx
// 008f0b2e  8b542428             mov edx, dword ptr [esp + 0x28]
// 008f0b32  50                   push eax
// 008f0b33  51                   push ecx
// 008f0b34  52                   push edx
// 008f0b35  8d4c241c             lea ecx, [esp + 0x1c]
// 008f0b39  e8421bb6ff           call 0x452680
// 008f0b3e  8b10                 mov edx, dword ptr [eax]
// 008f0b40  56                   push esi
// 008f0b41  83ec10               sub esp, 0x10
// 008f0b44  8bcc                 mov ecx, esp
// 008f0b46  8911                 mov dword ptr [ecx], edx
// 008f0b48  8b5004               mov edx, dword ptr [eax + 4]
// 008f0b4b  895104               mov dword ptr [ecx + 4], edx
// 008f0b4e  8b5008               mov edx, dword ptr [eax + 8]
// 008f0b51  8b400c               mov eax, dword ptr [eax + 0xc]
// 008f0b54  895108               mov dword ptr [ecx + 8], edx
// 008f0b57  89410c               mov dword ptr [ecx + 0xc], eax
// 008f0b5a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008f0b5e  51                   push ecx
// 008f0b5f  8bcb                 mov ecx, ebx
// 008f0b61  e8badbfdff           call 0x8ce720
// 008f0b66  b801000000           mov eax, 1
// 008f0b6b  5f                   pop edi
// 008f0b6c  5e                   pop esi
// 008f0b6d  5b                   pop ebx
// 008f0b6e  83c410               add esp, 0x10
// 008f0b71  c21800               ret 0x18
// 008f0b74  5f                   pop edi
// 008f0b75  5e                   pop esi
// 008f0b76  33c0                 xor eax, eax
// 008f0b78  5b                   pop ebx
// 008f0b79  83c410               add esp, 0x10
// 008f0b7c  c21800               ret 0x18
// library xtp-11.2.2/Source\Ribbon\XTPRibbonControlTab.cpp (function ?DrawIcon@CXTPRibbonControlTab@@MBEHPAVCDC@@VCPoint@@PAVCXTPTabManagerItem@@HAAVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonControlTab.cpp
