// from server: 100% by auto
// roc 2009-06 006c2c50  unit: lua_exception  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c2c50
//
// 006c2c50  8b4108               mov eax, dword ptr [ecx + 8]
// 006c2c53  2bc2                 sub eax, edx
// 006c2c55  c1f804               sar eax, 4
// 006c2c58  c1e004               shl eax, 4
// 006c2c5b  034120               add eax, dword ptr [ecx + 0x20]
// 006c2c5e  56                   push esi
// 006c2c5f  894108               mov dword ptr [ecx + 8], eax
// 006c2c62  8b4168               mov eax, dword ptr [ecx + 0x68]
// 006c2c65  85c0                 test eax, eax
// 006c2c67  741e                 je 0x6c2c87
// 006c2c69  8da42400000000       lea esp, [esp]
// 006c2c70  8b7008               mov esi, dword ptr [eax + 8]
// 006c2c73  2bf2                 sub esi, edx
// 006c2c75  c1fe04               sar esi, 4
// 006c2c78  c1e604               shl esi, 4
// 006c2c7b  037120               add esi, dword ptr [ecx + 0x20]
// 006c2c7e  897008               mov dword ptr [eax + 8], esi
// 006c2c81  8b00                 mov eax, dword ptr [eax]
// 006c2c83  85c0                 test eax, eax
// 006c2c85  75e9                 jne 0x6c2c70
// 006c2c87  8b4128               mov eax, dword ptr [ecx + 0x28]
// 006c2c8a  3b4114               cmp eax, dword ptr [ecx + 0x14]
// 006c2c8d  773c                 ja 0x6c2ccb
// 006c2c8f  90                   nop 
// 006c2c90  8b7008               mov esi, dword ptr [eax + 8]
// 006c2c93  2bf2                 sub esi, edx
// 006c2c95  c1fe04               sar esi, 4
// 006c2c98  c1e604               shl esi, 4
// 006c2c9b  037120               add esi, dword ptr [ecx + 0x20]
// 006c2c9e  83c018               add eax, 0x18
// 006c2ca1  8970f0               mov dword ptr [eax - 0x10], esi
// 006c2ca4  8b70e8               mov esi, dword ptr [eax - 0x18]
// 006c2ca7  2bf2                 sub esi, edx
// 006c2ca9  c1fe04               sar esi, 4
// 006c2cac  c1e604               shl esi, 4
// 006c2caf  037120               add esi, dword ptr [ecx + 0x20]
// 006c2cb2  8970e8               mov dword ptr [eax - 0x18], esi
// 006c2cb5  8b70ec               mov esi, dword ptr [eax - 0x14]
// 006c2cb8  2bf2                 sub esi, edx
// 006c2cba  c1fe04               sar esi, 4
// 006c2cbd  c1e604               shl esi, 4
// 006c2cc0  037120               add esi, dword ptr [ecx + 0x20]
// 006c2cc3  8970ec               mov dword ptr [eax - 0x14], esi
// 006c2cc6  3b4114               cmp eax, dword ptr [ecx + 0x14]
// 006c2cc9  76c5                 jbe 0x6c2c90
// 006c2ccb  8b410c               mov eax, dword ptr [ecx + 0xc]
// 006c2cce  2bc2                 sub eax, edx
// 006c2cd0  c1f804               sar eax, 4
// 006c2cd3  c1e004               shl eax, 4
// 006c2cd6  034120               add eax, dword ptr [ecx + 0x20]
// 006c2cd9  5e                   pop esi
// 006c2cda  89410c               mov dword ptr [ecx + 0xc], eax
// 006c2cdd  c3                   ret 
// library lua-5.1.4/ldo.c (function _correctstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
