// roc 2009-12 0085a230  unit: CXTThemeManagerStyle  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085a230
//
// 0085a230  6aff                 push -1
// 0085a232  684be29500           push 0x95e24b
// 0085a237  64a100000000         mov eax, dword ptr fs:[0]
// 0085a23d  50                   push eax
// 0085a23e  83ec10               sub esp, 0x10
// 0085a241  53                   push ebx
// 0085a242  56                   push esi
// 0085a243  57                   push edi
// 0085a244  a10052b600           mov eax, dword ptr [0xb65200]
// 0085a249  33c4                 xor eax, esp
// 0085a24b  50                   push eax
// 0085a24c  8d442420             lea eax, [esp + 0x20]
// 0085a250  64a300000000         mov dword ptr fs:[0], eax
// 0085a256  8bf1                 mov esi, ecx
// 0085a258  89742418             mov dword ptr [esp + 0x18], esi
// 0085a25c  c706c8d19f00         mov dword ptr [esi], 0x9fd1c8
// 0085a262  8b4610               mov eax, dword ptr [esi + 0x10]
// 0085a265  33ff                 xor edi, edi
// 0085a267  f7d8                 neg eax
// 0085a269  1bc0                 sbb eax, eax
// 0085a26b  897c2428             mov dword ptr [esp + 0x28], edi
// 0085a26f  89442414             mov dword ptr [esp + 0x14], eax
// 0085a273  897c2410             mov dword ptr [esp + 0x10], edi
// 0085a277  3bc7                 cmp eax, edi
// 0085a279  7436                 je 0x85a2b1
// 0085a27b  8d5e04               lea ebx, [esi + 4]
// 0085a27e  8bff                 mov edi, edi
// 0085a280  8d442410             lea eax, [esp + 0x10]
// 0085a284  50                   push eax
// 0085a285  8d4c2420             lea ecx, [esp + 0x20]
// 0085a289  51                   push ecx
// 0085a28a  8d54241c             lea edx, [esp + 0x1c]
// 0085a28e  52                   push edx
// 0085a28f  8bcb                 mov ecx, ebx
// 0085a291  e854c80c00           call 0x926aea
// 0085a296  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0085a29a  3bcf                 cmp ecx, edi
// 0085a29c  740d                 je 0x85a2ab
// 0085a29e  8b01                 mov eax, dword ptr [ecx]
// 0085a2a0  8b5004               mov edx, dword ptr [eax + 4]
// 0085a2a3  6a01                 push 1
// 0085a2a5  ffd2                 call edx
// 0085a2a7  897c2410             mov dword ptr [esp + 0x10], edi
// 0085a2ab  397c2414             cmp dword ptr [esp + 0x14], edi
// 0085a2af  75cf                 jne 0x85a280
// 0085a2b1  8d4e04               lea ecx, [esi + 4]
// 0085a2b4  897e24               mov dword ptr [esi + 0x24], edi
// 0085a2b7  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0085a2bf  e820c80c00           call 0x926ae4
// 0085a2c4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0085a2c8  64890d00000000       mov dword ptr fs:[0], ecx
// 0085a2cf  59                   pop ecx
// 0085a2d0  5f                   pop edi
// 0085a2d1  5e                   pop esi
// 0085a2d2  5b                   pop ebx
// 0085a2d3  83c41c               add esp, 0x1c
// 0085a2d6  c3                   ret 
// copied from an identical function in another client (function ??1CXTThemeManager@@UAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTThemeManager.cpp