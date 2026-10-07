// roc 2008-06 00529ad0  unit: G3D::Line  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00529ad0
//
// 00529ad0  8b542408             mov edx, dword ptr [esp + 8]
// 00529ad4  83ec54               sub esp, 0x54
// 00529ad7  56                   push esi
// 00529ad8  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 00529adc  56                   push esi
// 00529add  8d442408             lea eax, [esp + 8]
// 00529ae1  e8eafbffff           call 0x5296d0
// 00529ae6  8d442408             lea eax, [esp + 8]
// 00529aea  50                   push eax
// 00529aeb  56                   push esi
// 00529aec  e85fffffff           call 0x529a50
// 00529af1  83c40c               add esp, 0xc
// 00529af4  5e                   pop esi
// 00529af5  83c454               add esp, 0x54
// 00529af8  c3                   ret 
// library libpng-1.2.6/pngerror.c (function _png_chunk_warning)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngerror.c
