// from server: 100% by auto
// roc 2012-06 00656050  unit: seg_00650000  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00656050
//
// 00656050  83ec08               sub esp, 8
// 00656053  56                   push esi
// 00656054  8b742410             mov esi, dword ptr [esp + 0x10]
// 00656058  b00a                 mov al, 0xa
// 0065605a  88442409             mov byte ptr [esp + 9], al
// 0065605e  8844240b             mov byte ptr [esp + 0xb], al
// 00656062  0fb6862c010000       movzx eax, byte ptr [esi + 0x12c]
// 00656069  b908000000           mov ecx, 8
// 0065606e  2bc8                 sub ecx, eax
// 00656070  51                   push ecx
// 00656071  8d540408             lea edx, [esp + eax + 8]
// 00656075  52                   push edx
// 00656076  56                   push esi
// 00656077  c644241089           mov byte ptr [esp + 0x10], 0x89
// 0065607c  c644241150           mov byte ptr [esp + 0x11], 0x50
// 00656081  c64424124e           mov byte ptr [esp + 0x12], 0x4e
// 00656086  c644241347           mov byte ptr [esp + 0x13], 0x47
// 0065608b  c64424140d           mov byte ptr [esp + 0x14], 0xd
// 00656090  c64424161a           mov byte ptr [esp + 0x16], 0x1a
// 00656095  e82616ffff           call 0x6476c0
// 0065609a  83c40c               add esp, 0xc
// 0065609d  80be2c01000003       cmp byte ptr [esi + 0x12c], 3
// 006560a4  7307                 jae 0x6560ad
// 006560a6  814e6800100000       or dword ptr [esi + 0x68], 0x1000
// 006560ad  5e                   pop esi
// 006560ae  83c408               add esp, 8
// 006560b1  c3                   ret 
// library libpng-1.2.5/pngwutil.c (function _png_write_sig)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwutil.c
