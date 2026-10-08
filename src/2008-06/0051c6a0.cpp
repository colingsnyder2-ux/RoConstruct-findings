// from server: 100% by auto
// roc 2008-06 0051c6a0  unit: G3D::_internal::DialogTemplate  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051c6a0
//
// 0051c6a0  8b442404             mov eax, dword ptr [esp + 4]
// 0051c6a4  53                   push ebx
// 0051c6a5  55                   push ebp
// 0051c6a6  56                   push esi
// 0051c6a7  33f6                 xor esi, esi
// 0051c6a9  33db                 xor ebx, ebx
// 0051c6ab  33ed                 xor ebp, ebp
// 0051c6ad  85c0                 test eax, eax
// 0051c6af  740e                 je 0x51c6bf
// 0051c6b1  8b30                 mov esi, dword ptr [eax]
// 0051c6b3  8b9e4c020000         mov ebx, dword ptr [esi + 0x24c]
// 0051c6b9  8bae44020000         mov ebp, dword ptr [esi + 0x244]
// 0051c6bf  8b442414             mov eax, dword ptr [esp + 0x14]
// 0051c6c3  85c0                 test eax, eax
// 0051c6c5  7455                 je 0x51c71c
// 0051c6c7  57                   push edi
// 0051c6c8  8b38                 mov edi, dword ptr [eax]
// 0051c6ca  85ff                 test edi, edi
// 0051c6cc  744d                 je 0x51c71b
// 0051c6ce  6aff                 push -1
// 0051c6d0  68ff7f0000           push 0x7fff
// 0051c6d5  57                   push edi
// 0051c6d6  56                   push esi
// 0051c6d7  e8f4160000           call 0x51ddd0
// 0051c6dc  83c410               add esp, 0x10
// 0051c6df  83be2002000000       cmp dword ptr [esi + 0x220], 0
// 0051c6e6  741e                 je 0x51c706
// 0051c6e8  8b8624020000         mov eax, dword ptr [esi + 0x224]
// 0051c6ee  50                   push eax
// 0051c6ef  56                   push esi
// 0051c6f0  e80bde0000           call 0x52a500
// 0051c6f5  83c408               add esp, 8
// 0051c6f8  33c0                 xor eax, eax
// 0051c6fa  898624020000         mov dword ptr [esi + 0x224], eax
// 0051c700  898620020000         mov dword ptr [esi + 0x220], eax
// 0051c706  55                   push ebp
// 0051c707  53                   push ebx
// 0051c708  57                   push edi
// 0051c709  e8b2dc0000           call 0x52a3c0
// 0051c70e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0051c712  83c40c               add esp, 0xc
// 0051c715  c70100000000         mov dword ptr [ecx], 0
// 0051c71b  5f                   pop edi
// 0051c71c  85f6                 test esi, esi
// 0051c71e  741b                 je 0x51c73b
// 0051c720  56                   push esi
// 0051c721  e82af9ffff           call 0x51c050
// 0051c726  55                   push ebp
// 0051c727  53                   push ebx
// 0051c728  56                   push esi
// 0051c729  e892dc0000           call 0x52a3c0
// 0051c72e  8b542420             mov edx, dword ptr [esp + 0x20]
// 0051c732  83c410               add esp, 0x10
// 0051c735  c70200000000         mov dword ptr [edx], 0
// 0051c73b  5e                   pop esi
// 0051c73c  5d                   pop ebp
// 0051c73d  5b                   pop ebx
// 0051c73e  c3                   ret 
// library libpng-1.2.5/pngwrite.c (function _png_destroy_write_struct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwrite.c
