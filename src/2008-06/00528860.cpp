// roc 2008-06 00528860  unit: G3D::Line  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00528860
//
// 00528860  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00528864  8a4102               mov al, byte ptr [ecx + 2]
// 00528867  83ec08               sub esp, 8
// 0052886a  3c0c                 cmp al, 0xc
// 0052886c  776d                 ja 0x5288db
// 0052886e  3c01                 cmp al, 1
// 00528870  7269                 jb 0x5288db
// 00528872  8a4103               mov al, byte ptr [ecx + 3]
// 00528875  3c1f                 cmp al, 0x1f
// 00528877  7762                 ja 0x5288db
// 00528879  3c01                 cmp al, 1
// 0052887b  725e                 jb 0x5288db
// 0052887d  80790417             cmp byte ptr [ecx + 4], 0x17
// 00528881  7758                 ja 0x5288db
// 00528883  8a5106               mov dl, byte ptr [ecx + 6]
// 00528886  80fa3c               cmp dl, 0x3c
// 00528889  7750                 ja 0x5288db
// 0052888b  0fb701               movzx eax, word ptr [ecx]
// 0052888e  53                   push ebx
// 0052888f  8bd8                 mov ebx, eax
// 00528891  88442405             mov byte ptr [esp + 5], al
// 00528895  8a4102               mov al, byte ptr [ecx + 2]
// 00528898  88442406             mov byte ptr [esp + 6], al
// 0052889c  8a4103               mov al, byte ptr [ecx + 3]
// 0052889f  88442407             mov byte ptr [esp + 7], al
// 005288a3  8a4104               mov al, byte ptr [ecx + 4]
// 005288a6  88442408             mov byte ptr [esp + 8], al
// 005288aa  0fb64105             movzx eax, byte ptr [ecx + 5]
// 005288ae  6a07                 push 7
// 005288b0  8d4c2408             lea ecx, [esp + 8]
// 005288b4  51                   push ecx
// 005288b5  88542412             mov byte ptr [esp + 0x12], dl
// 005288b9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005288bd  68d4948200           push 0x8294d4
// 005288c2  c1eb08               shr ebx, 8
// 005288c5  52                   push edx
// 005288c6  885c2414             mov byte ptr [esp + 0x14], bl
// 005288ca  88442419             mov byte ptr [esp + 0x19], al
// 005288ce  e8ddecffff           call 0x5275b0
// 005288d3  83c410               add esp, 0x10
// 005288d6  5b                   pop ebx
// 005288d7  83c408               add esp, 8
// 005288da  c3                   ret 
// 005288db  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005288df  688cba8200           push 0x82ba8c
// 005288e4  50                   push eax
// 005288e5  e866110000           call 0x529a50
// 005288ea  83c408               add esp, 8
// 005288ed  83c408               add esp, 8
// 005288f0  c3                   ret 
// library libpng-1.2.5/pngwutil.c (function _png_write_tIME)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwutil.c
