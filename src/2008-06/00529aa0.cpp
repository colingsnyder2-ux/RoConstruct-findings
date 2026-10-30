// from server: 100% by auto
// roc 2008-06 00529aa0  unit: G3D::Line  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00529aa0
//
// 00529aa0  8b542408             mov edx, dword ptr [esp + 8]
// 00529aa4  83ec54               sub esp, 0x54
// 00529aa7  56                   push esi
// 00529aa8  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 00529aac  56                   push esi
// 00529aad  8d442408             lea eax, [esp + 8]
// 00529ab1  e81afcffff           call 0x5296d0
// 00529ab6  83c404               add esp, 4
// 00529ab9  8d442404             lea eax, [esp + 4]
// 00529abd  50                   push eax
// 00529abe  56                   push esi
// 00529abf  e8ecfeffff           call 0x5299b0
// 00529ac4  5e                   pop esi
// library libpng-1.2.6/pngerror.c (function _png_chunk_error)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngerror.c
