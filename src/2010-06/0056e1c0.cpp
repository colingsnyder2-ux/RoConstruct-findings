// from server: 100% by auto
// roc 2010-06 0056e1c0  unit: G3D::LineSegment  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0056e1c0
//
// 0056e1c0  83ec08               sub esp, 8
// 0056e1c3  56                   push esi
// 0056e1c4  8b742410             mov esi, dword ptr [esp + 0x10]
// 0056e1c8  b00a                 mov al, 0xa
// 0056e1ca  88442409             mov byte ptr [esp + 9], al
// 0056e1ce  8844240b             mov byte ptr [esp + 0xb], al
// 0056e1d2  0fb6862c010000       movzx eax, byte ptr [esi + 0x12c]
// 0056e1d9  b908000000           mov ecx, 8
// 0056e1de  2bc8                 sub ecx, eax
// 0056e1e0  51                   push ecx
// 0056e1e1  8d540408             lea edx, [esp + eax + 8]
// 0056e1e5  52                   push edx
// 0056e1e6  56                   push esi
// 0056e1e7  c644241089           mov byte ptr [esp + 0x10], 0x89
// 0056e1ec  c644241150           mov byte ptr [esp + 0x11], 0x50
// 0056e1f1  c64424124e           mov byte ptr [esp + 0x12], 0x4e
// 0056e1f6  c644241347           mov byte ptr [esp + 0x13], 0x47
// 0056e1fb  c64424140d           mov byte ptr [esp + 0x14], 0xd
// 0056e200  c64424161a           mov byte ptr [esp + 0x16], 0x1a
// 0056e205  e8f66affff           call 0x564d00
// 0056e20a  83c40c               add esp, 0xc
// 0056e20d  80be2c01000003       cmp byte ptr [esi + 0x12c], 3
// 0056e214  7307                 jae 0x56e21d
// 0056e216  814e6800100000       or dword ptr [esi + 0x68], 0x1000
// 0056e21d  5e                   pop esi
// 0056e21e  83c408               add esp, 8
// 0056e221  c3                   ret 
// library libpng-1.2.5/pngwutil.c (function _png_write_sig)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwutil.c
