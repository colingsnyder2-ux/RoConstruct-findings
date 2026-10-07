// roc 2007-08 0051e990  unit: seg_00510000  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051e990
//
// 0051e990  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0051e994  56                   push esi
// 0051e995  8b742408             mov esi, dword ptr [esp + 8]
// 0051e999  33c0                 xor eax, eax
// 0051e99b  f7466c00000c00       test dword ptr [esi + 0x6c], 0xc0000
// 0051e9a2  7424                 je 0x51e9c8
// 0051e9a4  803923               cmp byte ptr [ecx], 0x23
// 0051e9a7  751f                 jne 0x51e9c8
// 0051e9a9  b801000000           mov eax, 1
// 0051e9ae  b220                 mov dl, 0x20
// 0051e9b0  381408               cmp byte ptr [eax + ecx], dl
// 0051e9b3  7413                 je 0x51e9c8
// 0051e9b5  38540801             cmp byte ptr [eax + ecx + 1], dl
// 0051e9b9  740a                 je 0x51e9c5
// 0051e9bb  83c002               add eax, 2
// 0051e9be  83f80f               cmp eax, 0xf
// 0051e9c1  7ced                 jl 0x51e9b0
// 0051e9c3  eb03                 jmp 0x51e9c8
// 0051e9c5  83c001               add eax, 1
// 0051e9c8  8b5644               mov edx, dword ptr [esi + 0x44]
// 0051e9cb  03c1                 add eax, ecx
// 0051e9cd  85d2                 test edx, edx
// 0051e9cf  50                   push eax
// 0051e9d0  7408                 je 0x51e9da
// 0051e9d2  56                   push esi
// 0051e9d3  ffd2                 call edx
// 0051e9d5  83c408               add esp, 8
// 0051e9d8  5e                   pop esi
// 0051e9d9  c3                   ret 
// 0051e9da  e881fdffff           call 0x51e760
// 0051e9df  83c404               add esp, 4
// 0051e9e2  5e                   pop esi
// 0051e9e3  c3                   ret 
// library libpng-1.2.7/pngerror.c (function _png_warning)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS /MD
// roc-lib: libpng-1.2.7 pngerror.c
