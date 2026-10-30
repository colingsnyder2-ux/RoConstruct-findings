// from server: 100% by auto
// roc 2007-08 0063e050  unit: CXTPPaintManager  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063e050
//
// 0063e050  53                   push ebx
// 0063e051  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0063e055  56                   push esi
// 0063e056  8b742418             mov esi, dword ptr [esp + 0x18]
// 0063e05a  8d041e               lea eax, [esi + ebx]
// 0063e05d  99                   cdq 
// 0063e05e  2bc2                 sub eax, edx
// 0063e060  8b542414             mov edx, dword ptr [esp + 0x14]
// 0063e064  8bc8                 mov ecx, eax
// 0063e066  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0063e06a  03c2                 add eax, edx
// 0063e06c  99                   cdq 
// 0063e06d  2bc2                 sub eax, edx
// 0063e06f  57                   push edi
// 0063e070  8bf8                 mov edi, eax
// 0063e072  8bc6                 mov eax, esi
// 0063e074  2bc3                 sub eax, ebx
// 0063e076  99                   cdq 
// 0063e077  2bc2                 sub eax, edx
// 0063e079  d1f8                 sar eax, 1
// 0063e07b  8d70fc               lea esi, [eax - 4]
// 0063e07e  d1f9                 sar ecx, 1
// 0063e080  d1ff                 sar edi, 1
// 0063e082  83fe02               cmp esi, 2
// 0063e085  7d05                 jge 0x63e08c
// 0063e087  be02000000           mov esi, 2
// 0063e08c  8bc6                 mov eax, esi
// 0063e08e  99                   cdq 
// 0063e08f  2bc2                 sub eax, edx
// 0063e091  8bd0                 mov edx, eax
// 0063e093  d1fa                 sar edx, 1
// 0063e095  8bc7                 mov eax, edi
// 0063e097  2bc2                 sub eax, edx
// 0063e099  8d3c30               lea edi, [eax + esi]
// 0063e09c  8bd1                 mov edx, ecx
// 0063e09e  8d1c31               lea ebx, [ecx + esi]
// 0063e0a1  2bd6                 sub edx, esi
// 0063e0a3  8b742424             mov esi, dword ptr [esp + 0x24]
// 0063e0a7  56                   push esi
// 0063e0a8  57                   push edi
// 0063e0a9  51                   push ecx
// 0063e0aa  50                   push eax
// 0063e0ab  53                   push ebx
// 0063e0ac  50                   push eax
// 0063e0ad  8b442428             mov eax, dword ptr [esp + 0x28]
// 0063e0b1  52                   push edx
// 0063e0b2  50                   push eax
// 0063e0b3  e8b82f0400           call 0x681070
// 0063e0b8  83c420               add esp, 0x20
// 0063e0bb  5f                   pop edi
// 0063e0bc  5e                   pop esi
// 0063e0bd  5b                   pop ebx
// 0063e0be  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\CommandBars\XTPPaintManager.cpp (function ?DrawComboExpandMark@CXTPPaintManager@@UAEXPAVCDC@@VCRect@@K@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPPaintManager.cpp
