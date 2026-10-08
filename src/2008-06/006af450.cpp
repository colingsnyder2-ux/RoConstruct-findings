// from server: 100% by auto
// roc 2008-06 006af450  unit: CXTPPaintManager  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006af450
//
// 006af450  53                   push ebx
// 006af451  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006af455  56                   push esi
// 006af456  8b742418             mov esi, dword ptr [esp + 0x18]
// 006af45a  8d041e               lea eax, [esi + ebx]
// 006af45d  99                   cdq 
// 006af45e  2bc2                 sub eax, edx
// 006af460  8b542414             mov edx, dword ptr [esp + 0x14]
// 006af464  8bc8                 mov ecx, eax
// 006af466  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006af46a  03c2                 add eax, edx
// 006af46c  99                   cdq 
// 006af46d  2bc2                 sub eax, edx
// 006af46f  57                   push edi
// 006af470  8bf8                 mov edi, eax
// 006af472  8bc6                 mov eax, esi
// 006af474  2bc3                 sub eax, ebx
// 006af476  99                   cdq 
// 006af477  2bc2                 sub eax, edx
// 006af479  d1f8                 sar eax, 1
// 006af47b  8d70fc               lea esi, [eax - 4]
// 006af47e  d1f9                 sar ecx, 1
// 006af480  d1ff                 sar edi, 1
// 006af482  83fe02               cmp esi, 2
// 006af485  7d05                 jge 0x6af48c
// 006af487  be02000000           mov esi, 2
// 006af48c  8bc6                 mov eax, esi
// 006af48e  99                   cdq 
// 006af48f  2bc2                 sub eax, edx
// 006af491  8bd0                 mov edx, eax
// 006af493  d1fa                 sar edx, 1
// 006af495  8bc7                 mov eax, edi
// 006af497  2bc2                 sub eax, edx
// 006af499  8d3c30               lea edi, [eax + esi]
// 006af49c  8bd1                 mov edx, ecx
// 006af49e  8d1c31               lea ebx, [ecx + esi]
// 006af4a1  2bd6                 sub edx, esi
// 006af4a3  8b742424             mov esi, dword ptr [esp + 0x24]
// 006af4a7  56                   push esi
// 006af4a8  57                   push edi
// 006af4a9  51                   push ecx
// 006af4aa  50                   push eax
// 006af4ab  53                   push ebx
// 006af4ac  50                   push eax
// 006af4ad  8b442428             mov eax, dword ptr [esp + 0x28]
// 006af4b1  52                   push edx
// 006af4b2  50                   push eax
// 006af4b3  e858950400           call 0x6f8a10
// 006af4b8  83c420               add esp, 0x20
// 006af4bb  5f                   pop edi
// 006af4bc  5e                   pop esi
// 006af4bd  5b                   pop ebx
// 006af4be  c21800               ret 0x18
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?DrawComboExpandMark@CXTPPaintManager@@UAEXPAVCDC@@VCRect@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
