// from server: 100% by auto
// roc 2008-06 00527b30  unit: G3D::Line  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00527b30
//
// 00527b30  56                   push esi
// 00527b31  8b742408             mov esi, dword ptr [esp + 8]
// 00527b35  6a00                 push 0
// 00527b37  6854948200           push 0x829454
// 00527b3c  56                   push esi
// 00527b3d  e8dee8ffff           call 0x526420
// 00527b42  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 00527b48  8bd0                 mov edx, eax
// 00527b4a  8bc8                 mov ecx, eax
// 00527b4c  c1e918               shr ecx, 0x18
// 00527b4f  c1ea10               shr edx, 0x10
// 00527b52  884c2414             mov byte ptr [esp + 0x14], cl
// 00527b56  88542415             mov byte ptr [esp + 0x15], dl
// 00527b5a  6a04                 push 4
// 00527b5c  8d542418             lea edx, [esp + 0x18]
// 00527b60  8bc8                 mov ecx, eax
// 00527b62  52                   push edx
// 00527b63  c1e908               shr ecx, 8
// 00527b66  56                   push esi
// 00527b67  884c2422             mov byte ptr [esp + 0x22], cl
// 00527b6b  88442423             mov byte ptr [esp + 0x23], al
// 00527b6f  e83c5fffff           call 0x51dab0
// 00527b74  834e6810             or dword ptr [esi + 0x68], 0x10
// 00527b78  83c418               add esp, 0x18
// 00527b7b  5e                   pop esi
// 00527b7c  c3                   ret 
// library libpng-1.2.5/pngwutil.c (function _png_write_IEND)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwutil.c
