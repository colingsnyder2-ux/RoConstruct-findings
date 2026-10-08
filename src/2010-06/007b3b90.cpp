// roc 2010-06 007b3b90  unit: CXTPPaintManager  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b3b90
//
// 007b3b90  8b542410             mov edx, dword ptr [esp + 0x10]
// 007b3b94  8b442408             mov eax, dword ptr [esp + 8]
// 007b3b98  03c2                 add eax, edx
// 007b3b9a  99                   cdq 
// 007b3b9b  2bc2                 sub eax, edx
// 007b3b9d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007b3ba1  53                   push ebx
// 007b3ba2  56                   push esi
// 007b3ba3  8bf0                 mov esi, eax
// 007b3ba5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007b3ba9  03c2                 add eax, edx
// 007b3bab  99                   cdq 
// 007b3bac  2bc2                 sub eax, edx
// 007b3bae  d1f8                 sar eax, 1
// 007b3bb0  57                   push edi
// 007b3bb1  8d78fd               lea edi, [eax - 3]
// 007b3bb4  8d5803               lea ebx, [eax + 3]
// 007b3bb7  8b442424             mov eax, dword ptr [esp + 0x24]
// 007b3bbb  50                   push eax
// 007b3bbc  50                   push eax
// 007b3bbd  83ec10               sub esp, 0x10
// 007b3bc0  8bc4                 mov eax, esp
// 007b3bc2  d1fe                 sar esi, 1
// 007b3bc4  8d56fd               lea edx, [esi - 3]
// 007b3bc7  8910                 mov dword ptr [eax], edx
// 007b3bc9  897804               mov dword ptr [eax + 4], edi
// 007b3bcc  83c603               add esi, 3
// 007b3bcf  897008               mov dword ptr [eax + 8], esi
// 007b3bd2  89580c               mov dword ptr [eax + 0xc], ebx
// 007b3bd5  8b442428             mov eax, dword ptr [esp + 0x28]
// 007b3bd9  50                   push eax
// 007b3bda  e841feffff           call 0x7b3a20
// 007b3bdf  5f                   pop edi
// 007b3be0  5e                   pop esi
// 007b3be1  5b                   pop ebx
// 007b3be2  c21800               ret 0x18
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?DrawRadioMark@CXTPPaintManager@@UAEXPAVCDC@@VCRect@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
