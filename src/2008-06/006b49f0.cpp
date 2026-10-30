// from server: 100% by auto
// roc 2008-06 006b49f0  unit: CXTPPaintManager  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b49f0
//
// 006b49f0  8b542410             mov edx, dword ptr [esp + 0x10]
// 006b49f4  8b442408             mov eax, dword ptr [esp + 8]
// 006b49f8  03c2                 add eax, edx
// 006b49fa  99                   cdq 
// 006b49fb  2bc2                 sub eax, edx
// 006b49fd  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006b4a01  53                   push ebx
// 006b4a02  56                   push esi
// 006b4a03  8bf0                 mov esi, eax
// 006b4a05  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006b4a09  03c2                 add eax, edx
// 006b4a0b  99                   cdq 
// 006b4a0c  2bc2                 sub eax, edx
// 006b4a0e  d1f8                 sar eax, 1
// 006b4a10  57                   push edi
// 006b4a11  8d78fd               lea edi, [eax - 3]
// 006b4a14  8d5803               lea ebx, [eax + 3]
// 006b4a17  8b442424             mov eax, dword ptr [esp + 0x24]
// 006b4a1b  50                   push eax
// 006b4a1c  50                   push eax
// 006b4a1d  83ec10               sub esp, 0x10
// 006b4a20  8bc4                 mov eax, esp
// 006b4a22  d1fe                 sar esi, 1
// 006b4a24  8d56fd               lea edx, [esi - 3]
// 006b4a27  8910                 mov dword ptr [eax], edx
// 006b4a29  897804               mov dword ptr [eax + 4], edi
// 006b4a2c  83c603               add esi, 3
// 006b4a2f  897008               mov dword ptr [eax + 8], esi
// 006b4a32  89580c               mov dword ptr [eax + 0xc], ebx
// 006b4a35  8b442428             mov eax, dword ptr [esp + 0x28]
// 006b4a39  50                   push eax
// 006b4a3a  e841feffff           call 0x6b4880
// 006b4a3f  5f                   pop edi
// 006b4a40  5e                   pop esi
// 006b4a41  5b                   pop ebx
// 006b4a42  c21800               ret 0x18
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?DrawRadioMark@CXTPPaintManager@@UAEXPAVCDC@@VCRect@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
