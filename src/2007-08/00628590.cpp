// from server: 100% by auto
// roc 2007-08 00628590  unit: RBX::AssemblyStage  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00628590
//
// 00628590  8b13                 mov edx, dword ptr [ebx]
// 00628592  8b520c               mov edx, dword ptr [edx + 0xc]
// 00628595  2bc1                 sub eax, ecx
// 00628597  83e801               sub eax, 1
// 0062859a  56                   push esi
// 0062859b  8bf0                 mov esi, eax
// 0062859d  57                   push edi
// 0062859e  8d3c8a               lea edi, [edx + ecx*4]
// 006285a1  99                   cdq 
// 006285a2  33c2                 xor eax, edx
// 006285a4  2bc2                 sub eax, edx
// 006285a6  3dffff0100           cmp eax, 0x1ffff
// 006285ab  7e11                 jle 0x6285be
// 006285ad  8b430c               mov eax, dword ptr [ebx + 0xc]
// 006285b0  68e04b7c00           push 0x7c4be0
// 006285b5  50                   push eax
// 006285b6  e805f0feff           call 0x6175c0
// 006285bb  83c408               add esp, 8
// 006285be  8b0f                 mov ecx, dword ptr [edi]
// 006285c0  81c6ffff0100         add esi, 0x1ffff
// 006285c6  c1e60e               shl esi, 0xe
// 006285c9  81e1ff3f0000         and ecx, 0x3fff
// 006285cf  33f1                 xor esi, ecx
// 006285d1  8937                 mov dword ptr [edi], esi
// 006285d3  5f                   pop edi
// 006285d4  5e                   pop esi
// 006285d5  c3                   ret 
// library lua-5.1.4/lcode.c (function _fixjump)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
