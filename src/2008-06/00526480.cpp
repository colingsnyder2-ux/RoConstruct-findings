// roc 2008-06 00526480  unit: G3D::Line  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00526480
//
// 00526480  57                   push edi
// 00526481  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00526485  85ff                 test edi, edi
// 00526487  7423                 je 0x5264ac
// 00526489  56                   push esi
// 0052648a  8b742414             mov esi, dword ptr [esp + 0x14]
// 0052648e  85f6                 test esi, esi
// 00526490  7619                 jbe 0x5264ab
// 00526492  53                   push ebx
// 00526493  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00526497  56                   push esi
// 00526498  57                   push edi
// 00526499  53                   push ebx
// 0052649a  e8e178ffff           call 0x51dd80
// 0052649f  56                   push esi
// 005264a0  57                   push edi
// 005264a1  53                   push ebx
// 005264a2  e80976ffff           call 0x51dab0
// 005264a7  83c418               add esp, 0x18
// 005264aa  5b                   pop ebx
// 005264ab  5e                   pop esi
// 005264ac  5f                   pop edi
// 005264ad  c3                   ret 
// library libpng-1.2.5/pngwutil.c (function _png_write_chunk_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwutil.c
