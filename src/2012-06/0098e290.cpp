// roc 2012-06 0098e290  unit: CXTPPaintManager  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098e290
//
// 0098e290  8b542410             mov edx, dword ptr [esp + 0x10]
// 0098e294  8b442408             mov eax, dword ptr [esp + 8]
// 0098e298  03c2                 add eax, edx
// 0098e29a  99                   cdq 
// 0098e29b  2bc2                 sub eax, edx
// 0098e29d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0098e2a1  53                   push ebx
// 0098e2a2  56                   push esi
// 0098e2a3  8bf0                 mov esi, eax
// 0098e2a5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0098e2a9  03c2                 add eax, edx
// 0098e2ab  99                   cdq 
// 0098e2ac  2bc2                 sub eax, edx
// 0098e2ae  d1f8                 sar eax, 1
// 0098e2b0  57                   push edi
// 0098e2b1  8d78fd               lea edi, [eax - 3]
// 0098e2b4  8d5803               lea ebx, [eax + 3]
// 0098e2b7  8b442424             mov eax, dword ptr [esp + 0x24]
// 0098e2bb  50                   push eax
// 0098e2bc  50                   push eax
// 0098e2bd  83ec10               sub esp, 0x10
// 0098e2c0  8bc4                 mov eax, esp
// 0098e2c2  d1fe                 sar esi, 1
// 0098e2c4  8d56fd               lea edx, [esi - 3]
// 0098e2c7  8910                 mov dword ptr [eax], edx
// 0098e2c9  897804               mov dword ptr [eax + 4], edi
// 0098e2cc  83c603               add esi, 3
// 0098e2cf  897008               mov dword ptr [eax + 8], esi
// 0098e2d2  89580c               mov dword ptr [eax + 0xc], ebx
// 0098e2d5  8b442428             mov eax, dword ptr [esp + 0x28]
// 0098e2d9  50                   push eax
// 0098e2da  e841feffff           call 0x98e120
// 0098e2df  5f                   pop edi
// 0098e2e0  5e                   pop esi
// 0098e2e1  5b                   pop ebx
// 0098e2e2  c21800               ret 0x18
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?DrawRadioMark@CXTPPaintManager@@UAEXPAVCDC@@VCRect@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
