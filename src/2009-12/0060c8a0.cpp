// roc 2009-12 0060c8a0  unit: seg_00600000  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0060c8a0
//
// 0060c8a0  83ec08               sub esp, 8
// 0060c8a3  56                   push esi
// 0060c8a4  8b742410             mov esi, dword ptr [esp + 0x10]
// 0060c8a8  b00a                 mov al, 0xa
// 0060c8aa  88442409             mov byte ptr [esp + 9], al
// 0060c8ae  8844240b             mov byte ptr [esp + 0xb], al
// 0060c8b2  0fb6862c010000       movzx eax, byte ptr [esi + 0x12c]
// 0060c8b9  b908000000           mov ecx, 8
// 0060c8be  2bc8                 sub ecx, eax
// 0060c8c0  51                   push ecx
// 0060c8c1  8d540408             lea edx, [esp + eax + 8]
// 0060c8c5  52                   push edx
// 0060c8c6  56                   push esi
// 0060c8c7  c644241089           mov byte ptr [esp + 0x10], 0x89
// 0060c8cc  c644241150           mov byte ptr [esp + 0x11], 0x50
// 0060c8d1  c64424124e           mov byte ptr [esp + 0x12], 0x4e
// 0060c8d6  c644241347           mov byte ptr [esp + 0x13], 0x47
// 0060c8db  c64424140d           mov byte ptr [esp + 0x14], 0xd
// 0060c8e0  c64424161a           mov byte ptr [esp + 0x16], 0x1a
// 0060c8e5  e8a66affff           call 0x603390
// 0060c8ea  83c40c               add esp, 0xc
// 0060c8ed  80be2c01000003       cmp byte ptr [esi + 0x12c], 3
// 0060c8f4  7307                 jae 0x60c8fd
// 0060c8f6  814e6800100000       or dword ptr [esi + 0x68], 0x1000
// 0060c8fd  5e                   pop esi
// 0060c8fe  83c408               add esp, 8
// 0060c901  c3                   ret 
// library libpng-1.2.5/pngwutil.c (function _png_write_sig)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwutil.c
