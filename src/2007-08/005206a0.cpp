// from server: 100% by auto
// roc 2007-08 005206a0  unit: seg_00520000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005206a0
//
// 005206a0  53                   push ebx
// 005206a1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005206a5  56                   push esi
// 005206a6  8b742414             mov esi, dword ptr [esp + 0x14]
// 005206aa  57                   push edi
// 005206ab  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005206af  56                   push esi
// 005206b0  57                   push edi
// 005206b1  53                   push ebx
// 005206b2  e8d9d0ffff           call 0x51d790
// 005206b7  56                   push esi
// 005206b8  57                   push edi
// 005206b9  53                   push ebx
// 005206ba  e82148ffff           call 0x514ee0
// 005206bf  83c418               add esp, 0x18
// 005206c2  5f                   pop edi
// 005206c3  5e                   pop esi
// 005206c4  5b                   pop ebx
// 005206c5  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_crc_read)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
