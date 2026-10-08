// from server: 100% by auto
// roc 2007-08 0051d7f0  unit: seg_00510000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051d7f0
//
// 0051d7f0  8b442408             mov eax, dword ptr [esp + 8]
// 0051d7f4  56                   push esi
// 0051d7f5  8b742408             mov esi, dword ptr [esp + 8]
// 0051d7f9  894654               mov dword ptr [esi + 0x54], eax
// 0051d7fc  8b442410             mov eax, dword ptr [esp + 0x10]
// 0051d800  85c0                 test eax, eax
// 0051d802  7405                 je 0x51d809
// 0051d804  894650               mov dword ptr [esi + 0x50], eax
// 0051d807  eb07                 jmp 0x51d810
// 0051d809  c74650b0d75100       mov dword ptr [esi + 0x50], 0x51d7b0
// 0051d810  837e4c00             cmp dword ptr [esi + 0x4c], 0
// 0051d814  7420                 je 0x51d836
// 0051d816  68e02e7a00           push 0x7a2ee0
// 0051d81b  56                   push esi
// 0051d81c  c7464c00000000       mov dword ptr [esi + 0x4c], 0
// 0051d823  e868110000           call 0x51e990
// 0051d828  68ac2e7a00           push 0x7a2eac
// 0051d82d  56                   push esi
// 0051d82e  e85d110000           call 0x51e990
// 0051d833  83c410               add esp, 0x10
// 0051d836  c7864c01000000000000 mov dword ptr [esi + 0x14c], 0
// 0051d840  5e                   pop esi
// 0051d841  c3                   ret 
// library libpng-1.2.5/pngrio.c (function _png_set_read_fn)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrio.c
