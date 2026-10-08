// from server: 100% by auto
// roc 2012-06 008545f0  unit: lua_exception  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008545f0
//
// 008545f0  8b4108               mov eax, dword ptr [ecx + 8]
// 008545f3  2bc2                 sub eax, edx
// 008545f5  c1f804               sar eax, 4
// 008545f8  c1e004               shl eax, 4
// 008545fb  034120               add eax, dword ptr [ecx + 0x20]
// 008545fe  56                   push esi
// 008545ff  894108               mov dword ptr [ecx + 8], eax
// 00854602  8b4168               mov eax, dword ptr [ecx + 0x68]
// 00854605  85c0                 test eax, eax
// 00854607  741e                 je 0x854627
// 00854609  8da42400000000       lea esp, [esp]
// 00854610  8b7008               mov esi, dword ptr [eax + 8]
// 00854613  2bf2                 sub esi, edx
// 00854615  c1fe04               sar esi, 4
// 00854618  c1e604               shl esi, 4
// 0085461b  037120               add esi, dword ptr [ecx + 0x20]
// 0085461e  897008               mov dword ptr [eax + 8], esi
// 00854621  8b00                 mov eax, dword ptr [eax]
// 00854623  85c0                 test eax, eax
// 00854625  75e9                 jne 0x854610
// 00854627  8b4128               mov eax, dword ptr [ecx + 0x28]
// 0085462a  3b4114               cmp eax, dword ptr [ecx + 0x14]
// 0085462d  773c                 ja 0x85466b
// 0085462f  90                   nop 
// 00854630  8b7008               mov esi, dword ptr [eax + 8]
// 00854633  2bf2                 sub esi, edx
// 00854635  c1fe04               sar esi, 4
// 00854638  c1e604               shl esi, 4
// 0085463b  037120               add esi, dword ptr [ecx + 0x20]
// 0085463e  83c018               add eax, 0x18
// 00854641  8970f0               mov dword ptr [eax - 0x10], esi
// 00854644  8b70e8               mov esi, dword ptr [eax - 0x18]
// 00854647  2bf2                 sub esi, edx
// 00854649  c1fe04               sar esi, 4
// 0085464c  c1e604               shl esi, 4
// 0085464f  037120               add esi, dword ptr [ecx + 0x20]
// 00854652  8970e8               mov dword ptr [eax - 0x18], esi
// 00854655  8b70ec               mov esi, dword ptr [eax - 0x14]
// 00854658  2bf2                 sub esi, edx
// 0085465a  c1fe04               sar esi, 4
// 0085465d  c1e604               shl esi, 4
// 00854660  037120               add esi, dword ptr [ecx + 0x20]
// 00854663  8970ec               mov dword ptr [eax - 0x14], esi
// 00854666  3b4114               cmp eax, dword ptr [ecx + 0x14]
// 00854669  76c5                 jbe 0x854630
// 0085466b  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0085466e  2bc2                 sub eax, edx
// 00854670  c1f804               sar eax, 4
// 00854673  c1e004               shl eax, 4
// 00854676  034120               add eax, dword ptr [ecx + 0x20]
// 00854679  5e                   pop esi
// 0085467a  89410c               mov dword ptr [ecx + 0xc], eax
// 0085467d  c3                   ret 
// library lua-5.1.4/ldo.c (function _correctstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
