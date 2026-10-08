// roc 2009-12 00601f70  unit: G3D::_internal::DialogTemplate  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00601f70
//
// 00601f70  8b442410             mov eax, dword ptr [esp + 0x10]
// 00601f74  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00601f78  8b542408             mov edx, dword ptr [esp + 8]
// 00601f7c  6a00                 push 0
// 00601f7e  6a00                 push 0
// 00601f80  6a00                 push 0
// 00601f82  50                   push eax
// 00601f83  8b442414             mov eax, dword ptr [esp + 0x14]
// 00601f87  51                   push ecx
// 00601f88  52                   push edx
// 00601f89  50                   push eax
// 00601f8a  e8d1fcffff           call 0x601c60
// 00601f8f  83c41c               add esp, 0x1c
// 00601f92  c3                   ret 
// library libpng-1.2.5/pngread.c (function _png_create_read_struct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngread.c
