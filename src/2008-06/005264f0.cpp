// from server: 100% by auto
// roc 2008-06 005264f0  unit: G3D::Line  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005264f0
//
// 005264f0  83ec08               sub esp, 8
// 005264f3  56                   push esi
// 005264f4  8b742410             mov esi, dword ptr [esp + 0x10]
// 005264f8  b00a                 mov al, 0xa
// 005264fa  88442409             mov byte ptr [esp + 9], al
// 005264fe  8844240b             mov byte ptr [esp + 0xb], al
// 00526502  0fb6862c010000       movzx eax, byte ptr [esi + 0x12c]
// 00526509  b908000000           mov ecx, 8
// 0052650e  2bc8                 sub ecx, eax
// 00526510  51                   push ecx
// 00526511  8d540408             lea edx, [esp + eax + 8]
// 00526515  52                   push edx
// 00526516  56                   push esi
// 00526517  c644241089           mov byte ptr [esp + 0x10], 0x89
// 0052651c  c644241150           mov byte ptr [esp + 0x11], 0x50
// 00526521  c64424124e           mov byte ptr [esp + 0x12], 0x4e
// 00526526  c644241347           mov byte ptr [esp + 0x13], 0x47
// 0052652b  c64424140d           mov byte ptr [esp + 0x14], 0xd
// 00526530  c64424161a           mov byte ptr [esp + 0x16], 0x1a
// 00526535  e87675ffff           call 0x51dab0
// 0052653a  83c40c               add esp, 0xc
// 0052653d  80be2c01000003       cmp byte ptr [esi + 0x12c], 3
// 00526544  7307                 jae 0x52654d
// 00526546  814e6800100000       or dword ptr [esi + 0x68], 0x1000
// 0052654d  5e                   pop esi
// 0052654e  83c408               add esp, 8
// 00526551  c3                   ret 
// library libpng-1.2.5/pngwutil.c (function _png_write_sig)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwutil.c
