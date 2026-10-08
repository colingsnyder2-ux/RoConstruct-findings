// from server: 100% by auto
// roc 2008-06 00524b10  unit: seg_00520000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00524b10
//
// 00524b10  8b442408             mov eax, dword ptr [esp + 8]
// 00524b14  56                   push esi
// 00524b15  8b742408             mov esi, dword ptr [esp + 8]
// 00524b19  894654               mov dword ptr [esi + 0x54], eax
// 00524b1c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00524b20  85c0                 test eax, eax
// 00524b22  7405                 je 0x524b29
// 00524b24  894650               mov dword ptr [esi + 0x50], eax
// 00524b27  eb07                 jmp 0x524b30
// 00524b29  c74650d04a5200       mov dword ptr [esi + 0x50], 0x524ad0
// 00524b30  837e4c00             cmp dword ptr [esi + 0x4c], 0
// 00524b34  7420                 je 0x524b56
// 00524b36  68a0ad8200           push 0x82ada0
// 00524b3b  56                   push esi
// 00524b3c  c7464c00000000       mov dword ptr [esi + 0x4c], 0
// 00524b43  e8084f0000           call 0x529a50
// 00524b48  6868ad8200           push 0x82ad68
// 00524b4d  56                   push esi
// 00524b4e  e8fd4e0000           call 0x529a50
// 00524b53  83c410               add esp, 0x10
// 00524b56  c7864c01000000000000 mov dword ptr [esi + 0x14c], 0
// 00524b60  5e                   pop esi
// 00524b61  c3                   ret 
// library libpng-1.2.5/pngrio.c (function _png_set_read_fn)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrio.c
