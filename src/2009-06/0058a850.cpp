// from server: 100% by auto
// roc 2009-06 0058a850  unit: seg_00580000  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0058a850
//
// 0058a850  83ec08               sub esp, 8
// 0058a853  56                   push esi
// 0058a854  8b742410             mov esi, dword ptr [esp + 0x10]
// 0058a858  b00a                 mov al, 0xa
// 0058a85a  88442409             mov byte ptr [esp + 9], al
// 0058a85e  8844240b             mov byte ptr [esp + 0xb], al
// 0058a862  0fb6862c010000       movzx eax, byte ptr [esi + 0x12c]
// 0058a869  b908000000           mov ecx, 8
// 0058a86e  2bc8                 sub ecx, eax
// 0058a870  51                   push ecx
// 0058a871  8d540408             lea edx, [esp + eax + 8]
// 0058a875  52                   push edx
// 0058a876  56                   push esi
// 0058a877  c644241089           mov byte ptr [esp + 0x10], 0x89
// 0058a87c  c644241150           mov byte ptr [esp + 0x11], 0x50
// 0058a881  c64424124e           mov byte ptr [esp + 0x12], 0x4e
// 0058a886  c644241347           mov byte ptr [esp + 0x13], 0x47
// 0058a88b  c64424140d           mov byte ptr [esp + 0x14], 0xd
// 0058a890  c64424161a           mov byte ptr [esp + 0x16], 0x1a
// 0058a895  e8466dffff           call 0x5815e0
// 0058a89a  83c40c               add esp, 0xc
// 0058a89d  80be2c01000003       cmp byte ptr [esi + 0x12c], 3
// 0058a8a4  7307                 jae 0x58a8ad
// 0058a8a6  814e6800100000       or dword ptr [esi + 0x68], 0x1000
// 0058a8ad  5e                   pop esi
// 0058a8ae  83c408               add esp, 8
// 0058a8b1  c3                   ret 
// library libpng-1.2.5/pngwutil.c (function _png_write_sig)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwutil.c
