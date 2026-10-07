// roc 2012-06 00988cf0  unit: CXTPPaintManager  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00988cf0
//
// 00988cf0  53                   push ebx
// 00988cf1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00988cf5  56                   push esi
// 00988cf6  8b742418             mov esi, dword ptr [esp + 0x18]
// 00988cfa  8d041e               lea eax, [esi + ebx]
// 00988cfd  99                   cdq 
// 00988cfe  2bc2                 sub eax, edx
// 00988d00  8b542414             mov edx, dword ptr [esp + 0x14]
// 00988d04  8bc8                 mov ecx, eax
// 00988d06  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00988d0a  03c2                 add eax, edx
// 00988d0c  99                   cdq 
// 00988d0d  2bc2                 sub eax, edx
// 00988d0f  57                   push edi
// 00988d10  8bf8                 mov edi, eax
// 00988d12  8bc6                 mov eax, esi
// 00988d14  2bc3                 sub eax, ebx
// 00988d16  99                   cdq 
// 00988d17  2bc2                 sub eax, edx
// 00988d19  d1f8                 sar eax, 1
// 00988d1b  8d70fc               lea esi, [eax - 4]
// 00988d1e  d1f9                 sar ecx, 1
// 00988d20  d1ff                 sar edi, 1
// 00988d22  83fe02               cmp esi, 2
// 00988d25  7d05                 jge 0x988d2c
// 00988d27  be02000000           mov esi, 2
// 00988d2c  8bc6                 mov eax, esi
// 00988d2e  99                   cdq 
// 00988d2f  2bc2                 sub eax, edx
// 00988d31  8bd0                 mov edx, eax
// 00988d33  d1fa                 sar edx, 1
// 00988d35  8bc7                 mov eax, edi
// 00988d37  2bc2                 sub eax, edx
// 00988d39  8d3c30               lea edi, [eax + esi]
// 00988d3c  8bd1                 mov edx, ecx
// 00988d3e  8d1c31               lea ebx, [ecx + esi]
// 00988d41  2bd6                 sub edx, esi
// 00988d43  8b742424             mov esi, dword ptr [esp + 0x24]
// 00988d47  56                   push esi
// 00988d48  57                   push edi
// 00988d49  51                   push ecx
// 00988d4a  50                   push eax
// 00988d4b  53                   push ebx
// 00988d4c  50                   push eax
// 00988d4d  8b442428             mov eax, dword ptr [esp + 0x28]
// 00988d51  52                   push edx
// 00988d52  50                   push eax
// 00988d53  e848fbffff           call 0x9888a0
// 00988d58  83c420               add esp, 0x20
// 00988d5b  5f                   pop edi
// 00988d5c  5e                   pop esi
// 00988d5d  5b                   pop ebx
// 00988d5e  c21800               ret 0x18
// library xtp-15.2.1/Source\CommandBars\XTPPaintManager.cpp (function ?DrawComboExpandMark@CXTPPaintManager@@UAEXPAVCDC@@VCRect@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPaintManager.cpp
