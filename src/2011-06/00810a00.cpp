// from server: 100% by auto
// roc 2011-06 00810a00  unit: CXTPPaintManager  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00810a00
//
// 00810a00  53                   push ebx
// 00810a01  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00810a05  56                   push esi
// 00810a06  8b742418             mov esi, dword ptr [esp + 0x18]
// 00810a0a  8d041e               lea eax, [esi + ebx]
// 00810a0d  99                   cdq 
// 00810a0e  2bc2                 sub eax, edx
// 00810a10  8b542414             mov edx, dword ptr [esp + 0x14]
// 00810a14  8bc8                 mov ecx, eax
// 00810a16  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00810a1a  03c2                 add eax, edx
// 00810a1c  99                   cdq 
// 00810a1d  2bc2                 sub eax, edx
// 00810a1f  57                   push edi
// 00810a20  8bf8                 mov edi, eax
// 00810a22  8bc6                 mov eax, esi
// 00810a24  2bc3                 sub eax, ebx
// 00810a26  99                   cdq 
// 00810a27  2bc2                 sub eax, edx
// 00810a29  d1f8                 sar eax, 1
// 00810a2b  8d70fc               lea esi, [eax - 4]
// 00810a2e  d1f9                 sar ecx, 1
// 00810a30  d1ff                 sar edi, 1
// 00810a32  83fe02               cmp esi, 2
// 00810a35  7d05                 jge 0x810a3c
// 00810a37  be02000000           mov esi, 2
// 00810a3c  8bc6                 mov eax, esi
// 00810a3e  99                   cdq 
// 00810a3f  2bc2                 sub eax, edx
// 00810a41  8bd0                 mov edx, eax
// 00810a43  d1fa                 sar edx, 1
// 00810a45  8bc7                 mov eax, edi
// 00810a47  2bc2                 sub eax, edx
// 00810a49  8d3c30               lea edi, [eax + esi]
// 00810a4c  8bd1                 mov edx, ecx
// 00810a4e  8d1c31               lea ebx, [ecx + esi]
// 00810a51  2bd6                 sub edx, esi
// 00810a53  8b742424             mov esi, dword ptr [esp + 0x24]
// 00810a57  56                   push esi
// 00810a58  57                   push edi
// 00810a59  51                   push ecx
// 00810a5a  50                   push eax
// 00810a5b  53                   push ebx
// 00810a5c  50                   push eax
// 00810a5d  8b442428             mov eax, dword ptr [esp + 0x28]
// 00810a61  52                   push edx
// 00810a62  50                   push eax
// 00810a63  e848fbffff           call 0x8105b0
// 00810a68  83c420               add esp, 0x20
// 00810a6b  5f                   pop edi
// 00810a6c  5e                   pop esi
// 00810a6d  5b                   pop ebx
// 00810a6e  c21800               ret 0x18
// library xtp-15.2.1/Source\CommandBars\XTPPaintManager.cpp (function ?DrawComboExpandMark@CXTPPaintManager@@UAEXPAVCDC@@VCRect@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPaintManager.cpp
