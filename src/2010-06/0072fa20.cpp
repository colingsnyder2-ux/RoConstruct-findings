// roc 2010-06 0072fa20  unit: lua_exception  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0072fa20
//
// 0072fa20  8b4108               mov eax, dword ptr [ecx + 8]
// 0072fa23  2bc2                 sub eax, edx
// 0072fa25  c1f804               sar eax, 4
// 0072fa28  c1e004               shl eax, 4
// 0072fa2b  034120               add eax, dword ptr [ecx + 0x20]
// 0072fa2e  56                   push esi
// 0072fa2f  894108               mov dword ptr [ecx + 8], eax
// 0072fa32  8b4168               mov eax, dword ptr [ecx + 0x68]
// 0072fa35  85c0                 test eax, eax
// 0072fa37  741e                 je 0x72fa57
// 0072fa39  8da42400000000       lea esp, [esp]
// 0072fa40  8b7008               mov esi, dword ptr [eax + 8]
// 0072fa43  2bf2                 sub esi, edx
// 0072fa45  c1fe04               sar esi, 4
// 0072fa48  c1e604               shl esi, 4
// 0072fa4b  037120               add esi, dword ptr [ecx + 0x20]
// 0072fa4e  897008               mov dword ptr [eax + 8], esi
// 0072fa51  8b00                 mov eax, dword ptr [eax]
// 0072fa53  85c0                 test eax, eax
// 0072fa55  75e9                 jne 0x72fa40
// 0072fa57  8b4128               mov eax, dword ptr [ecx + 0x28]
// 0072fa5a  3b4114               cmp eax, dword ptr [ecx + 0x14]
// 0072fa5d  773c                 ja 0x72fa9b
// 0072fa5f  90                   nop 
// 0072fa60  8b7008               mov esi, dword ptr [eax + 8]
// 0072fa63  2bf2                 sub esi, edx
// 0072fa65  c1fe04               sar esi, 4
// 0072fa68  c1e604               shl esi, 4
// 0072fa6b  037120               add esi, dword ptr [ecx + 0x20]
// 0072fa6e  83c018               add eax, 0x18
// 0072fa71  8970f0               mov dword ptr [eax - 0x10], esi
// 0072fa74  8b70e8               mov esi, dword ptr [eax - 0x18]
// 0072fa77  2bf2                 sub esi, edx
// 0072fa79  c1fe04               sar esi, 4
// 0072fa7c  c1e604               shl esi, 4
// 0072fa7f  037120               add esi, dword ptr [ecx + 0x20]
// 0072fa82  8970e8               mov dword ptr [eax - 0x18], esi
// 0072fa85  8b70ec               mov esi, dword ptr [eax - 0x14]
// 0072fa88  2bf2                 sub esi, edx
// 0072fa8a  c1fe04               sar esi, 4
// 0072fa8d  c1e604               shl esi, 4
// 0072fa90  037120               add esi, dword ptr [ecx + 0x20]
// 0072fa93  8970ec               mov dword ptr [eax - 0x14], esi
// 0072fa96  3b4114               cmp eax, dword ptr [ecx + 0x14]
// 0072fa99  76c5                 jbe 0x72fa60
// 0072fa9b  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0072fa9e  2bc2                 sub eax, edx
// 0072faa0  c1f804               sar eax, 4
// 0072faa3  c1e004               shl eax, 4
// 0072faa6  034120               add eax, dword ptr [ecx + 0x20]
// 0072faa9  5e                   pop esi
// 0072faaa  89410c               mov dword ptr [ecx + 0xc], eax
// 0072faad  c3                   ret 
// library lua-5.1.4/ldo.c (function _correctstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
