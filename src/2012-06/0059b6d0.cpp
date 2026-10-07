// roc 2012-06 0059b6d0  unit: VAuthoringSettings::?$FactoryProduct  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059b6d0
//
// 0059b6d0  56                   push esi
// 0059b6d1  8bf1                 mov esi, ecx
// 0059b6d3  8b4608               mov eax, dword ptr [esi + 8]
// 0059b6d6  85c0                 test eax, eax
// 0059b6d8  7505                 jne 0x59b6df
// 0059b6da  b810000000           mov eax, 0x10
// 0059b6df  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059b6e3  3bc1                 cmp eax, ecx
// 0059b6e5  7306                 jae 0x59b6ed
// 0059b6e7  03c0                 add eax, eax
// 0059b6e9  3bc1                 cmp eax, ecx
// 0059b6eb  72fa                 jb 0x59b6e7
// 0059b6ed  394608               cmp dword ptr [esi + 8], eax
// 0059b6f0  734f                 jae 0x59b741
// 0059b6f2  57                   push edi
// 0059b6f3  894608               mov dword ptr [esi + 8], eax
// 0059b6f6  85c0                 test eax, eax
// 0059b6f8  7504                 jne 0x59b6fe
// 0059b6fa  33ff                 xor edi, edi
// 0059b6fc  eb1b                 jmp 0x59b719
// 0059b6fe  33c9                 xor ecx, ecx
// 0059b700  ba04000000           mov edx, 4
// 0059b705  f7e2                 mul edx
// 0059b707  0f90c1               seto cl
// 0059b70a  f7d9                 neg ecx
// 0059b70c  0bc8                 or ecx, eax
// 0059b70e  51                   push ecx
// 0059b70f  e8dc6c3e00           call 0x9823f0
// 0059b714  83c404               add esp, 4
// 0059b717  8bf8                 mov edi, eax
// 0059b719  833e00               cmp dword ptr [esi], 0
// 0059b71c  7420                 je 0x59b73e
// 0059b71e  33c0                 xor eax, eax
// 0059b720  394604               cmp dword ptr [esi + 4], eax
// 0059b723  760e                 jbe 0x59b733
// 0059b725  8b0e                 mov ecx, dword ptr [esi]
// 0059b727  8b1481               mov edx, dword ptr [ecx + eax*4]
// 0059b72a  891487               mov dword ptr [edi + eax*4], edx
// 0059b72d  40                   inc eax
// 0059b72e  3b4604               cmp eax, dword ptr [esi + 4]
// 0059b731  72f2                 jb 0x59b725
// 0059b733  8b06                 mov eax, dword ptr [esi]
// 0059b735  50                   push eax
// 0059b736  e87f6c3e00           call 0x9823ba
// 0059b73b  83c404               add esp, 4
// 0059b73e  893e                 mov dword ptr [esi], edi
// 0059b740  5f                   pop edi
// 0059b741  5e                   pop esi
// 0059b742  c20c00               ret 0xc
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?Preallocate@?$List@PAUInternalPacket@RakNet@@@DataStructures@@QAEXIPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
