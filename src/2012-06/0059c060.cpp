// roc 2012-06 0059c060  unit: VAuthoringSettings::?$FactoryProduct  size: 286 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059c060
//
// 0059c060  83ec10               sub esp, 0x10
// 0059c063  53                   push ebx
// 0059c064  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0059c068  56                   push esi
// 0059c069  8bf1                 mov esi, ecx
// 0059c06b  8b84de88080000       mov eax, dword ptr [esi + ebx*8 + 0x888]
// 0059c072  33c9                 xor ecx, ecx
// 0059c074  57                   push edi
// 0059c075  8bbcde8c080000       mov edi, dword ptr [esi + ebx*8 + 0x88c]
// 0059c07c  89442414             mov dword ptr [esp + 0x14], eax
// 0059c080  398e78080000         cmp dword ptr [esi + 0x878], ecx
// 0059c086  0f86ab000000         jbe 0x59c137
// 0059c08c  8b8674080000         mov eax, dword ptr [esi + 0x874]
// 0059c092  8b4008               mov eax, dword ptr [eax + 8]
// 0059c095  8b4848               mov ecx, dword ptr [eax + 0x48]
// 0059c098  b801000000           mov eax, 1
// 0059c09d  d3e0                 shl eax, cl
// 0059c09f  55                   push ebp
// 0059c0a0  0fafc1               imul eax, ecx
// 0059c0a3  99                   cdq 
// 0059c0a4  89442424             mov dword ptr [esp + 0x24], eax
// 0059c0a8  8bc1                 mov eax, ecx
// 0059c0aa  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0059c0ae  89542410             mov dword ptr [esp + 0x10], edx
// 0059c0b2  99                   cdq 
// 0059c0b3  2bc1                 sub eax, ecx
// 0059c0b5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0059c0b9  8bea                 mov ebp, edx
// 0059c0bb  1be9                 sbb ebp, ecx
// 0059c0bd  8b8e74080000         mov ecx, dword ptr [esi + 0x874]
// 0059c0c3  0301                 add eax, dword ptr [ecx]
// 0059c0c5  136904               adc ebp, dword ptr [ecx + 4]
// 0059c0c8  89442410             mov dword ptr [esp + 0x10], eax
// 0059c0cc  3bfd                 cmp edi, ebp
// 0059c0ce  772a                 ja 0x59c0fa
// 0059c0d0  7206                 jb 0x59c0d8
// 0059c0d2  39442418             cmp dword ptr [esp + 0x18], eax
// 0059c0d6  7322                 jae 0x59c0fa
// 0059c0d8  8bcb                 mov ecx, ebx
// 0059c0da  b801000000           mov eax, 1
// 0059c0df  d3e0                 shl eax, cl
// 0059c0e1  0fafc3               imul eax, ebx
// 0059c0e4  99                   cdq 
// 0059c0e5  8bc8                 mov ecx, eax
// 0059c0e7  8bfa                 mov edi, edx
// 0059c0e9  8bc3                 mov eax, ebx
// 0059c0eb  99                   cdq 
// 0059c0ec  03c8                 add ecx, eax
// 0059c0ee  13fa                 adc edi, edx
// 0059c0f0  034c2410             add ecx, dword ptr [esp + 0x10]
// 0059c0f4  894c2418             mov dword ptr [esp + 0x18], ecx
// 0059c0f8  13fd                 adc edi, ebp
// 0059c0fa  8bcb                 mov ecx, ebx
// 0059c0fc  b801000000           mov eax, 1
// 0059c101  d3e0                 shl eax, cl
// 0059c103  8d4b01               lea ecx, [ebx + 1]
// 0059c106  0fafc1               imul eax, ecx
// 0059c109  99                   cdq 
// 0059c10a  8bc8                 mov ecx, eax
// 0059c10c  8bea                 mov ebp, edx
// 0059c10e  8bc3                 mov eax, ebx
// 0059c110  99                   cdq 
// 0059c111  03c8                 add ecx, eax
// 0059c113  8b442418             mov eax, dword ptr [esp + 0x18]
// 0059c117  13ea                 adc ebp, edx
// 0059c119  03c8                 add ecx, eax
// 0059c11b  13ef                 adc ebp, edi
// 0059c11d  89acde8c080000       mov dword ptr [esi + ebx*8 + 0x88c], ebp
// 0059c124  5d                   pop ebp
// 0059c125  8bd7                 mov edx, edi
// 0059c127  5f                   pop edi
// 0059c128  898cde88080000       mov dword ptr [esi + ebx*8 + 0x888], ecx
// 0059c12f  5e                   pop esi
// 0059c130  5b                   pop ebx
// 0059c131  83c410               add esp, 0x10
// 0059c134  c20400               ret 4
// 0059c137  8bd7                 mov edx, edi
// 0059c139  5f                   pop edi
// 0059c13a  898e88080000         mov dword ptr [esi + 0x888], ecx
// 0059c140  898e8c080000         mov dword ptr [esi + 0x88c], ecx
// 0059c146  c7869008000003000000 mov dword ptr [esi + 0x890], 3
// 0059c150  898e94080000         mov dword ptr [esi + 0x894], ecx
// 0059c156  c786980800000a000000 mov dword ptr [esi + 0x898], 0xa
// 0059c160  898e9c080000         mov dword ptr [esi + 0x89c], ecx
// 0059c166  c786a00800001b000000 mov dword ptr [esi + 0x8a0], 0x1b
// 0059c170  898ea4080000         mov dword ptr [esi + 0x8a4], ecx
// 0059c176  5e                   pop esi
// 0059c177  5b                   pop ebx
// 0059c178  83c410               add esp, 0x10
// 0059c17b  c20400               ret 4
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?GetNextWeight@ReliabilityLayer@RakNet@@AAE_KH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
