// roc 2011-06 0077e160  unit: lua_exception  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077e160
//
// 0077e160  8b4108               mov eax, dword ptr [ecx + 8]
// 0077e163  2bc2                 sub eax, edx
// 0077e165  c1f804               sar eax, 4
// 0077e168  c1e004               shl eax, 4
// 0077e16b  034120               add eax, dword ptr [ecx + 0x20]
// 0077e16e  56                   push esi
// 0077e16f  894108               mov dword ptr [ecx + 8], eax
// 0077e172  8b4168               mov eax, dword ptr [ecx + 0x68]
// 0077e175  85c0                 test eax, eax
// 0077e177  741e                 je 0x77e197
// 0077e179  8da42400000000       lea esp, [esp]
// 0077e180  8b7008               mov esi, dword ptr [eax + 8]
// 0077e183  2bf2                 sub esi, edx
// 0077e185  c1fe04               sar esi, 4
// 0077e188  c1e604               shl esi, 4
// 0077e18b  037120               add esi, dword ptr [ecx + 0x20]
// 0077e18e  897008               mov dword ptr [eax + 8], esi
// 0077e191  8b00                 mov eax, dword ptr [eax]
// 0077e193  85c0                 test eax, eax
// 0077e195  75e9                 jne 0x77e180
// 0077e197  8b4128               mov eax, dword ptr [ecx + 0x28]
// 0077e19a  3b4114               cmp eax, dword ptr [ecx + 0x14]
// 0077e19d  773c                 ja 0x77e1db
// 0077e19f  90                   nop 
// 0077e1a0  8b7008               mov esi, dword ptr [eax + 8]
// 0077e1a3  2bf2                 sub esi, edx
// 0077e1a5  c1fe04               sar esi, 4
// 0077e1a8  c1e604               shl esi, 4
// 0077e1ab  037120               add esi, dword ptr [ecx + 0x20]
// 0077e1ae  83c018               add eax, 0x18
// 0077e1b1  8970f0               mov dword ptr [eax - 0x10], esi
// 0077e1b4  8b70e8               mov esi, dword ptr [eax - 0x18]
// 0077e1b7  2bf2                 sub esi, edx
// 0077e1b9  c1fe04               sar esi, 4
// 0077e1bc  c1e604               shl esi, 4
// 0077e1bf  037120               add esi, dword ptr [ecx + 0x20]
// 0077e1c2  8970e8               mov dword ptr [eax - 0x18], esi
// 0077e1c5  8b70ec               mov esi, dword ptr [eax - 0x14]
// 0077e1c8  2bf2                 sub esi, edx
// 0077e1ca  c1fe04               sar esi, 4
// 0077e1cd  c1e604               shl esi, 4
// 0077e1d0  037120               add esi, dword ptr [ecx + 0x20]
// 0077e1d3  8970ec               mov dword ptr [eax - 0x14], esi
// 0077e1d6  3b4114               cmp eax, dword ptr [ecx + 0x14]
// 0077e1d9  76c5                 jbe 0x77e1a0
// 0077e1db  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0077e1de  2bc2                 sub eax, edx
// 0077e1e0  c1f804               sar eax, 4
// 0077e1e3  c1e004               shl eax, 4
// 0077e1e6  034120               add eax, dword ptr [ecx + 0x20]
// 0077e1e9  5e                   pop esi
// 0077e1ea  89410c               mov dword ptr [ecx + 0xc], eax
// 0077e1ed  c3                   ret 
// library lua-5.1.4/ldo.c (function _correctstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
