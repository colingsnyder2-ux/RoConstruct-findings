// roc 2011-06 005596d0  unit: seg_00550000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005596d0
//
// 005596d0  8b442410             mov eax, dword ptr [esp + 0x10]
// 005596d4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005596d8  8b542408             mov edx, dword ptr [esp + 8]
// 005596dc  6a00                 push 0
// 005596de  6a00                 push 0
// 005596e0  6a00                 push 0
// 005596e2  50                   push eax
// 005596e3  8b442414             mov eax, dword ptr [esp + 0x14]
// 005596e7  51                   push ecx
// 005596e8  52                   push edx
// 005596e9  50                   push eax
// 005596ea  e8d1fcffff           call 0x5593c0
// 005596ef  83c41c               add esp, 0x1c
// 005596f2  c3                   ret 
// library libpng-1.2.5/pngread.c (function _png_create_read_struct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngread.c
