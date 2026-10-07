// roc 2011-06 0052e7b0  unit: RBX::Network::ProfiledRakPeer  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052e7b0
//
// 0052e7b0  56                   push esi
// 0052e7b1  8bf1                 mov esi, ecx
// 0052e7b3  8b4608               mov eax, dword ptr [esi + 8]
// 0052e7b6  394604               cmp dword ptr [esi + 4], eax
// 0052e7b9  7551                 jne 0x52e80c
// 0052e7bb  85c0                 test eax, eax
// 0052e7bd  7509                 jne 0x52e7c8
// 0052e7bf  c7460810000000       mov dword ptr [esi + 8], 0x10
// 0052e7c6  eb05                 jmp 0x52e7cd
// 0052e7c8  03c0                 add eax, eax
// 0052e7ca  894608               mov dword ptr [esi + 8], eax
// 0052e7cd  8b4608               mov eax, dword ptr [esi + 8]
// 0052e7d0  57                   push edi
// 0052e7d1  85c0                 test eax, eax
// 0052e7d3  7504                 jne 0x52e7d9
// 0052e7d5  33ff                 xor edi, edi
// 0052e7d7  eb0b                 jmp 0x52e7e4
// 0052e7d9  50                   push eax
// 0052e7da  e861bb2d00           call 0x80a340
// 0052e7df  83c404               add esp, 4
// 0052e7e2  8bf8                 mov edi, eax
// 0052e7e4  833e00               cmp dword ptr [esi], 0
// 0052e7e7  7420                 je 0x52e809
// 0052e7e9  33c0                 xor eax, eax
// 0052e7eb  394604               cmp dword ptr [esi + 4], eax
// 0052e7ee  760e                 jbe 0x52e7fe
// 0052e7f0  8b0e                 mov ecx, dword ptr [esi]
// 0052e7f2  8a1408               mov dl, byte ptr [eax + ecx]
// 0052e7f5  881438               mov byte ptr [eax + edi], dl
// 0052e7f8  40                   inc eax
// 0052e7f9  3b4604               cmp eax, dword ptr [esi + 4]
// 0052e7fc  72f2                 jb 0x52e7f0
// 0052e7fe  8b06                 mov eax, dword ptr [esi]
// 0052e800  50                   push eax
// 0052e801  e8feba2d00           call 0x80a304
// 0052e806  83c404               add esp, 4
// 0052e809  893e                 mov dword ptr [esi], edi
// 0052e80b  5f                   pop edi
// 0052e80c  8b4e04               mov ecx, dword ptr [esi + 4]
// 0052e80f  8b442408             mov eax, dword ptr [esp + 8]
// 0052e813  8b16                 mov edx, dword ptr [esi]
// 0052e815  8a00                 mov al, byte ptr [eax]
// 0052e817  880411               mov byte ptr [ecx + edx], al
// 0052e81a  ff4604               inc dword ptr [esi + 4]
// 0052e81d  5e                   pop esi
// 0052e81e  c20c00               ret 0xc
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?Insert@?$List@_N@DataStructures@@QAEXAB_NPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
