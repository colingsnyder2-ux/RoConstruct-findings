// roc 2008-06 0051c740  unit: G3D::_internal::DialogTemplate  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051c740
//
// 0051c740  8b442410             mov eax, dword ptr [esp + 0x10]
// 0051c744  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0051c748  8b542408             mov edx, dword ptr [esp + 8]
// 0051c74c  6a00                 push 0
// 0051c74e  6a00                 push 0
// 0051c750  6a00                 push 0
// 0051c752  50                   push eax
// 0051c753  8b442414             mov eax, dword ptr [esp + 0x14]
// 0051c757  51                   push ecx
// 0051c758  52                   push edx
// 0051c759  50                   push eax
// 0051c75a  e841fdffff           call 0x51c4a0
// 0051c75f  83c41c               add esp, 0x1c
// 0051c762  c3                   ret 
// library libpng-1.2.5/pngread.c (function _png_create_read_struct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngread.c
