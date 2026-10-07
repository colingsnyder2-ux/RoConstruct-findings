// roc 2008-06 006219e0  unit: lua_exception  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006219e0
//
// 006219e0  8b4108               mov eax, dword ptr [ecx + 8]
// 006219e3  2bc2                 sub eax, edx
// 006219e5  c1f804               sar eax, 4
// 006219e8  c1e004               shl eax, 4
// 006219eb  034120               add eax, dword ptr [ecx + 0x20]
// 006219ee  56                   push esi
// 006219ef  894108               mov dword ptr [ecx + 8], eax
// 006219f2  8b4168               mov eax, dword ptr [ecx + 0x68]
// 006219f5  85c0                 test eax, eax
// 006219f7  741e                 je 0x621a17
// 006219f9  8da42400000000       lea esp, [esp]
// 00621a00  8b7008               mov esi, dword ptr [eax + 8]
// 00621a03  2bf2                 sub esi, edx
// 00621a05  c1fe04               sar esi, 4
// 00621a08  c1e604               shl esi, 4
// 00621a0b  037120               add esi, dword ptr [ecx + 0x20]
// 00621a0e  897008               mov dword ptr [eax + 8], esi
// 00621a11  8b00                 mov eax, dword ptr [eax]
// 00621a13  85c0                 test eax, eax
// 00621a15  75e9                 jne 0x621a00
// 00621a17  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00621a1a  3b4114               cmp eax, dword ptr [ecx + 0x14]
// 00621a1d  773c                 ja 0x621a5b
// 00621a1f  90                   nop 
// 00621a20  8b7008               mov esi, dword ptr [eax + 8]
// 00621a23  2bf2                 sub esi, edx
// 00621a25  c1fe04               sar esi, 4
// 00621a28  c1e604               shl esi, 4
// 00621a2b  037120               add esi, dword ptr [ecx + 0x20]
// 00621a2e  83c018               add eax, 0x18
// 00621a31  8970f0               mov dword ptr [eax - 0x10], esi
// 00621a34  8b70e8               mov esi, dword ptr [eax - 0x18]
// 00621a37  2bf2                 sub esi, edx
// 00621a39  c1fe04               sar esi, 4
// 00621a3c  c1e604               shl esi, 4
// 00621a3f  037120               add esi, dword ptr [ecx + 0x20]
// 00621a42  8970e8               mov dword ptr [eax - 0x18], esi
// 00621a45  8b70ec               mov esi, dword ptr [eax - 0x14]
// 00621a48  2bf2                 sub esi, edx
// 00621a4a  c1fe04               sar esi, 4
// 00621a4d  c1e604               shl esi, 4
// 00621a50  037120               add esi, dword ptr [ecx + 0x20]
// 00621a53  8970ec               mov dword ptr [eax - 0x14], esi
// 00621a56  3b4114               cmp eax, dword ptr [ecx + 0x14]
// 00621a59  76c5                 jbe 0x621a20
// 00621a5b  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00621a5e  2bc2                 sub eax, edx
// 00621a60  c1f804               sar eax, 4
// 00621a63  c1e004               shl eax, 4
// 00621a66  034120               add eax, dword ptr [ecx + 0x20]
// 00621a69  5e                   pop esi
// 00621a6a  89410c               mov dword ptr [ecx + 0xc], eax
// 00621a6d  c3                   ret 
// library lua-5.1.4/ldo.c (function _correctstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
