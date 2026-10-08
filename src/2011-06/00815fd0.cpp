// roc 2011-06 00815fd0  unit: CXTPPaintManager  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00815fd0
//
// 00815fd0  8b542410             mov edx, dword ptr [esp + 0x10]
// 00815fd4  8b442408             mov eax, dword ptr [esp + 8]
// 00815fd8  03c2                 add eax, edx
// 00815fda  99                   cdq 
// 00815fdb  2bc2                 sub eax, edx
// 00815fdd  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00815fe1  53                   push ebx
// 00815fe2  56                   push esi
// 00815fe3  8bf0                 mov esi, eax
// 00815fe5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00815fe9  03c2                 add eax, edx
// 00815feb  99                   cdq 
// 00815fec  2bc2                 sub eax, edx
// 00815fee  d1f8                 sar eax, 1
// 00815ff0  57                   push edi
// 00815ff1  8d78fd               lea edi, [eax - 3]
// 00815ff4  8d5803               lea ebx, [eax + 3]
// 00815ff7  8b442424             mov eax, dword ptr [esp + 0x24]
// 00815ffb  50                   push eax
// 00815ffc  50                   push eax
// 00815ffd  83ec10               sub esp, 0x10
// 00816000  8bc4                 mov eax, esp
// 00816002  d1fe                 sar esi, 1
// 00816004  8d56fd               lea edx, [esi - 3]
// 00816007  8910                 mov dword ptr [eax], edx
// 00816009  897804               mov dword ptr [eax + 4], edi
// 0081600c  83c603               add esi, 3
// 0081600f  897008               mov dword ptr [eax + 8], esi
// 00816012  89580c               mov dword ptr [eax + 0xc], ebx
// 00816015  8b442428             mov eax, dword ptr [esp + 0x28]
// 00816019  50                   push eax
// 0081601a  e841feffff           call 0x815e60
// 0081601f  5f                   pop edi
// 00816020  5e                   pop esi
// 00816021  5b                   pop ebx
// 00816022  c21800               ret 0x18
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?DrawRadioMark@CXTPPaintManager@@UAEXPAVCDC@@VCRect@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
