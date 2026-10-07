// roc 2009-06 005801a0  unit: G3D::_internal::DialogTemplate  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005801a0
//
// 005801a0  8b442410             mov eax, dword ptr [esp + 0x10]
// 005801a4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005801a8  8b542408             mov edx, dword ptr [esp + 8]
// 005801ac  6a00                 push 0
// 005801ae  6a00                 push 0
// 005801b0  6a00                 push 0
// 005801b2  50                   push eax
// 005801b3  8b442414             mov eax, dword ptr [esp + 0x14]
// 005801b7  51                   push ecx
// 005801b8  52                   push edx
// 005801b9  50                   push eax
// 005801ba  e8d1fcffff           call 0x57fe90
// 005801bf  83c41c               add esp, 0x1c
// 005801c2  c3                   ret 
// library libpng-1.2.5/pngread.c (function _png_create_read_struct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngread.c
