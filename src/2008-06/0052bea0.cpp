// roc 2008-06 0052bea0  unit: seg_00520000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052bea0
//
// 0052bea0  53                   push ebx
// 0052bea1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0052bea5  56                   push esi
// 0052bea6  8b742414             mov esi, dword ptr [esp + 0x14]
// 0052beaa  57                   push edi
// 0052beab  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0052beaf  56                   push esi
// 0052beb0  57                   push edi
// 0052beb1  53                   push ebx
// 0052beb2  e8f98bffff           call 0x524ab0
// 0052beb7  56                   push esi
// 0052beb8  57                   push edi
// 0052beb9  53                   push ebx
// 0052beba  e8c11effff           call 0x51dd80
// 0052bebf  83c418               add esp, 0x18
// 0052bec2  5f                   pop edi
// 0052bec3  5e                   pop esi
// 0052bec4  5b                   pop ebx
// 0052bec5  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_crc_read)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
