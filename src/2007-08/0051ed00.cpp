// roc 2007-08 0051ed00  unit: seg_00510000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051ed00
//
// 0051ed00  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0051ed04  56                   push esi
// 0051ed05  8b742408             mov esi, dword ptr [esp + 8]
// 0051ed09  57                   push edi
// 0051ed0a  8b7e6c               mov edi, dword ptr [esi + 0x6c]
// 0051ed0d  8bc7                 mov eax, edi
// 0051ed0f  51                   push ecx
// 0051ed10  0d00001000           or eax, 0x100000
// 0051ed15  56                   push esi
// 0051ed16  89466c               mov dword ptr [esi + 0x6c], eax
// 0051ed19  e862ffffff           call 0x51ec80
// 0051ed1e  83c408               add esp, 8
// 0051ed21  897e6c               mov dword ptr [esi + 0x6c], edi
// 0051ed24  5f                   pop edi
// 0051ed25  5e                   pop esi
// 0051ed26  c3                   ret 
// library libpng-1.2.5/pngmem.c (function _png_malloc_warn)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngmem.c
