// from server: 100% by auto
// roc 2010-06 005638e0  unit: G3D::_internal::DialogTemplate  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005638e0
//
// 005638e0  8b442410             mov eax, dword ptr [esp + 0x10]
// 005638e4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005638e8  8b542408             mov edx, dword ptr [esp + 8]
// 005638ec  6a00                 push 0
// 005638ee  6a00                 push 0
// 005638f0  6a00                 push 0
// 005638f2  50                   push eax
// 005638f3  8b442414             mov eax, dword ptr [esp + 0x14]
// 005638f7  51                   push ecx
// 005638f8  52                   push edx
// 005638f9  50                   push eax
// 005638fa  e8d1fcffff           call 0x5635d0
// 005638ff  83c41c               add esp, 0x1c
// 00563902  c3                   ret 
// library libpng-1.2.5/pngread.c (function _png_create_read_struct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngread.c
