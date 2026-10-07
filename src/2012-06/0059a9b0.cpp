// roc 2012-06 0059a9b0  unit: VAuthoringSettings::?$FactoryProduct  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059a9b0
//
// 0059a9b0  56                   push esi
// 0059a9b1  8bf1                 mov esi, ecx
// 0059a9b3  8b4608               mov eax, dword ptr [esi + 8]
// 0059a9b6  394604               cmp dword ptr [esi + 4], eax
// 0059a9b9  7551                 jne 0x59aa0c
// 0059a9bb  85c0                 test eax, eax
// 0059a9bd  7509                 jne 0x59a9c8
// 0059a9bf  c7460810000000       mov dword ptr [esi + 8], 0x10
// 0059a9c6  eb05                 jmp 0x59a9cd
// 0059a9c8  03c0                 add eax, eax
// 0059a9ca  894608               mov dword ptr [esi + 8], eax
// 0059a9cd  8b4608               mov eax, dword ptr [esi + 8]
// 0059a9d0  57                   push edi
// 0059a9d1  85c0                 test eax, eax
// 0059a9d3  7504                 jne 0x59a9d9
// 0059a9d5  33ff                 xor edi, edi
// 0059a9d7  eb0b                 jmp 0x59a9e4
// 0059a9d9  50                   push eax
// 0059a9da  e8117a3e00           call 0x9823f0
// 0059a9df  83c404               add esp, 4
// 0059a9e2  8bf8                 mov edi, eax
// 0059a9e4  833e00               cmp dword ptr [esi], 0
// 0059a9e7  7420                 je 0x59aa09
// 0059a9e9  33c0                 xor eax, eax
// 0059a9eb  394604               cmp dword ptr [esi + 4], eax
// 0059a9ee  760e                 jbe 0x59a9fe
// 0059a9f0  8b0e                 mov ecx, dword ptr [esi]
// 0059a9f2  8a1408               mov dl, byte ptr [eax + ecx]
// 0059a9f5  881438               mov byte ptr [eax + edi], dl
// 0059a9f8  40                   inc eax
// 0059a9f9  3b4604               cmp eax, dword ptr [esi + 4]
// 0059a9fc  72f2                 jb 0x59a9f0
// 0059a9fe  8b06                 mov eax, dword ptr [esi]
// 0059aa00  50                   push eax
// 0059aa01  e8b4793e00           call 0x9823ba
// 0059aa06  83c404               add esp, 4
// 0059aa09  893e                 mov dword ptr [esi], edi
// 0059aa0b  5f                   pop edi
// 0059aa0c  8b4e04               mov ecx, dword ptr [esi + 4]
// 0059aa0f  8b442408             mov eax, dword ptr [esp + 8]
// 0059aa13  8b16                 mov edx, dword ptr [esi]
// 0059aa15  8a00                 mov al, byte ptr [eax]
// 0059aa17  880411               mov byte ptr [ecx + edx], al
// 0059aa1a  ff4604               inc dword ptr [esi + 4]
// 0059aa1d  5e                   pop esi
// 0059aa1e  c20c00               ret 0xc
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?Insert@?$List@_N@DataStructures@@QAEXAB_NPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
