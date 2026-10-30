// roc 2009-12 008040b0  unit: CXTPPaintManager  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008040b0
//
// 008040b0  8b542410             mov edx, dword ptr [esp + 0x10]
// 008040b4  8b442408             mov eax, dword ptr [esp + 8]
// 008040b8  03c2                 add eax, edx
// 008040ba  99                   cdq 
// 008040bb  2bc2                 sub eax, edx
// 008040bd  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008040c1  53                   push ebx
// 008040c2  56                   push esi
// 008040c3  8bf0                 mov esi, eax
// 008040c5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008040c9  03c2                 add eax, edx
// 008040cb  99                   cdq 
// 008040cc  2bc2                 sub eax, edx
// 008040ce  d1f8                 sar eax, 1
// 008040d0  57                   push edi
// 008040d1  8d78fd               lea edi, [eax - 3]
// 008040d4  8d5803               lea ebx, [eax + 3]
// 008040d7  8b442424             mov eax, dword ptr [esp + 0x24]
// 008040db  50                   push eax
// 008040dc  50                   push eax
// 008040dd  83ec10               sub esp, 0x10
// 008040e0  8bc4                 mov eax, esp
// 008040e2  d1fe                 sar esi, 1
// 008040e4  8d56fd               lea edx, [esi - 3]
// 008040e7  8910                 mov dword ptr [eax], edx
// 008040e9  897804               mov dword ptr [eax + 4], edi
// 008040ec  83c603               add esi, 3
// 008040ef  897008               mov dword ptr [eax + 8], esi
// 008040f2  89580c               mov dword ptr [eax + 0xc], ebx
// 008040f5  8b442428             mov eax, dword ptr [esp + 0x28]
// 008040f9  50                   push eax
// 008040fa  e841feffff           call 0x803f40
// 008040ff  5f                   pop edi
// 00804100  5e                   pop esi
// 00804101  5b                   pop ebx
// 00804102  c21800               ret 0x18
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?DrawRadioMark@CXTPPaintManager@@UAEXPAVCDC@@VCRect@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
