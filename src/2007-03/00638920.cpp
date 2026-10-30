// roc 2007-03 00638920  unit: seg_00630000  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00638920
//
// 00638920  8b542410             mov edx, dword ptr [esp + 0x10]
// 00638924  8b442408             mov eax, dword ptr [esp + 8]
// 00638928  03c2                 add eax, edx
// 0063892a  99                   cdq 
// 0063892b  2bc2                 sub eax, edx
// 0063892d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00638931  53                   push ebx
// 00638932  56                   push esi
// 00638933  8bf0                 mov esi, eax
// 00638935  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00638939  03c2                 add eax, edx
// 0063893b  99                   cdq 
// 0063893c  2bc2                 sub eax, edx
// 0063893e  d1f8                 sar eax, 1
// 00638940  57                   push edi
// 00638941  8d78fd               lea edi, [eax - 3]
// 00638944  8d5803               lea ebx, [eax + 3]
// 00638947  8b442424             mov eax, dword ptr [esp + 0x24]
// 0063894b  50                   push eax
// 0063894c  50                   push eax
// 0063894d  83ec10               sub esp, 0x10
// 00638950  8bc4                 mov eax, esp
// 00638952  d1fe                 sar esi, 1
// 00638954  8d56fd               lea edx, [esi - 3]
// 00638957  8910                 mov dword ptr [eax], edx
// 00638959  897804               mov dword ptr [eax + 4], edi
// 0063895c  83c603               add esi, 3
// 0063895f  897008               mov dword ptr [eax + 8], esi
// 00638962  89580c               mov dword ptr [eax + 0xc], ebx
// 00638965  8b442428             mov eax, dword ptr [esp + 0x28]
// 00638969  50                   push eax
// 0063896a  e841feffff           call 0x6387b0
// 0063896f  5f                   pop edi
// 00638970  5e                   pop esi
// 00638971  5b                   pop ebx
// 00638972  c21800               ret 0x18
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?DrawRadioMark@CXTPPaintManager@@UAEXPAVCDC@@VCRect@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
