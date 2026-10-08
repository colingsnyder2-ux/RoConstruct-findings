// roc 2009-06 00729110  unit: CXTPPaintManager  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00729110
//
// 00729110  8b542410             mov edx, dword ptr [esp + 0x10]
// 00729114  8b442408             mov eax, dword ptr [esp + 8]
// 00729118  03c2                 add eax, edx
// 0072911a  99                   cdq 
// 0072911b  2bc2                 sub eax, edx
// 0072911d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00729121  53                   push ebx
// 00729122  56                   push esi
// 00729123  8bf0                 mov esi, eax
// 00729125  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00729129  03c2                 add eax, edx
// 0072912b  99                   cdq 
// 0072912c  2bc2                 sub eax, edx
// 0072912e  d1f8                 sar eax, 1
// 00729130  57                   push edi
// 00729131  8d78fd               lea edi, [eax - 3]
// 00729134  8d5803               lea ebx, [eax + 3]
// 00729137  8b442424             mov eax, dword ptr [esp + 0x24]
// 0072913b  50                   push eax
// 0072913c  50                   push eax
// 0072913d  83ec10               sub esp, 0x10
// 00729140  8bc4                 mov eax, esp
// 00729142  d1fe                 sar esi, 1
// 00729144  8d56fd               lea edx, [esi - 3]
// 00729147  8910                 mov dword ptr [eax], edx
// 00729149  897804               mov dword ptr [eax + 4], edi
// 0072914c  83c603               add esi, 3
// 0072914f  897008               mov dword ptr [eax + 8], esi
// 00729152  89580c               mov dword ptr [eax + 0xc], ebx
// 00729155  8b442428             mov eax, dword ptr [esp + 0x28]
// 00729159  50                   push eax
// 0072915a  e841feffff           call 0x728fa0
// 0072915f  5f                   pop edi
// 00729160  5e                   pop esi
// 00729161  5b                   pop ebx
// 00729162  c21800               ret 0x18
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?DrawRadioMark@CXTPPaintManager@@UAEXPAVCDC@@VCRect@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
