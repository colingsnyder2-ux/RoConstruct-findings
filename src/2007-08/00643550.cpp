// from server: 100% by auto
// roc 2007-08 00643550  unit: CXTPPaintManager  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00643550
//
// 00643550  8b542410             mov edx, dword ptr [esp + 0x10]
// 00643554  8b442408             mov eax, dword ptr [esp + 8]
// 00643558  03c2                 add eax, edx
// 0064355a  99                   cdq 
// 0064355b  2bc2                 sub eax, edx
// 0064355d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00643561  53                   push ebx
// 00643562  56                   push esi
// 00643563  8bf0                 mov esi, eax
// 00643565  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00643569  03c2                 add eax, edx
// 0064356b  99                   cdq 
// 0064356c  2bc2                 sub eax, edx
// 0064356e  d1f8                 sar eax, 1
// 00643570  57                   push edi
// 00643571  8d78fd               lea edi, [eax - 3]
// 00643574  8d5803               lea ebx, [eax + 3]
// 00643577  8b442424             mov eax, dword ptr [esp + 0x24]
// 0064357b  50                   push eax
// 0064357c  50                   push eax
// 0064357d  83ec10               sub esp, 0x10
// 00643580  8bc4                 mov eax, esp
// 00643582  d1fe                 sar esi, 1
// 00643584  8d56fd               lea edx, [esi - 3]
// 00643587  8910                 mov dword ptr [eax], edx
// 00643589  897804               mov dword ptr [eax + 4], edi
// 0064358c  83c603               add esi, 3
// 0064358f  897008               mov dword ptr [eax + 8], esi
// 00643592  89580c               mov dword ptr [eax + 0xc], ebx
// 00643595  8b442428             mov eax, dword ptr [esp + 0x28]
// 00643599  50                   push eax
// 0064359a  e841feffff           call 0x6433e0
// 0064359f  5f                   pop edi
// 006435a0  5e                   pop esi
// 006435a1  5b                   pop ebx
// 006435a2  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\CommandBars\XTPPaintManager.cpp (function ?DrawRadioMark@CXTPPaintManager@@UAEXPAVCDC@@VCRect@@K@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPPaintManager.cpp
