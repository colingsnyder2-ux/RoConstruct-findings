// from server: 100% by auto
// roc 2008-06 005264b0  unit: G3D::Line  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005264b0
//
// 005264b0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005264b4  8b8110010000         mov eax, dword ptr [ecx + 0x110]
// 005264ba  8bd0                 mov edx, eax
// 005264bc  c1ea18               shr edx, 0x18
// 005264bf  88542404             mov byte ptr [esp + 4], dl
// 005264c3  8bd0                 mov edx, eax
// 005264c5  c1ea10               shr edx, 0x10
// 005264c8  88542405             mov byte ptr [esp + 5], dl
// 005264cc  8bd0                 mov edx, eax
// 005264ce  88442407             mov byte ptr [esp + 7], al
// 005264d2  6a04                 push 4
// 005264d4  8d442408             lea eax, [esp + 8]
// 005264d8  50                   push eax
// 005264d9  c1ea08               shr edx, 8
// 005264dc  51                   push ecx
// 005264dd  88542412             mov byte ptr [esp + 0x12], dl
// 005264e1  e8ca75ffff           call 0x51dab0
// 005264e6  83c40c               add esp, 0xc
// 005264e9  c3                   ret 
// library libpng-1.2.5/pngwutil.c (function _png_write_chunk_end)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwutil.c
