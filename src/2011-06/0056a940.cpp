// roc 2011-06 0056a940  unit: seg_00560000  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0056a940
//
// 0056a940  83ec08               sub esp, 8
// 0056a943  56                   push esi
// 0056a944  8b742410             mov esi, dword ptr [esp + 0x10]
// 0056a948  b00a                 mov al, 0xa
// 0056a94a  88442409             mov byte ptr [esp + 9], al
// 0056a94e  8844240b             mov byte ptr [esp + 0xb], al
// 0056a952  0fb6862c010000       movzx eax, byte ptr [esi + 0x12c]
// 0056a959  b908000000           mov ecx, 8
// 0056a95e  2bc8                 sub ecx, eax
// 0056a960  51                   push ecx
// 0056a961  8d540408             lea edx, [esp + eax + 8]
// 0056a965  52                   push edx
// 0056a966  56                   push esi
// 0056a967  c644241089           mov byte ptr [esp + 0x10], 0x89
// 0056a96c  c644241150           mov byte ptr [esp + 0x11], 0x50
// 0056a971  c64424124e           mov byte ptr [esp + 0x12], 0x4e
// 0056a976  c644241347           mov byte ptr [esp + 0x13], 0x47
// 0056a97b  c64424140d           mov byte ptr [esp + 0x14], 0xd
// 0056a980  c64424161a           mov byte ptr [esp + 0x16], 0x1a
// 0056a985  e8b6fefeff           call 0x55a840
// 0056a98a  83c40c               add esp, 0xc
// 0056a98d  80be2c01000003       cmp byte ptr [esi + 0x12c], 3
// 0056a994  7307                 jae 0x56a99d
// 0056a996  814e6800100000       or dword ptr [esi + 0x68], 0x1000
// 0056a99d  5e                   pop esi
// 0056a99e  83c408               add esp, 8
// 0056a9a1  c3                   ret 
// library libpng-1.2.5/pngwutil.c (function _png_write_sig)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwutil.c
