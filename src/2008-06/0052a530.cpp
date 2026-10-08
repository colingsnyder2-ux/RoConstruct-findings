// from server: 100% by auto
// roc 2008-06 0052a530  unit: seg_00520000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052a530
//
// 0052a530  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0052a534  56                   push esi
// 0052a535  8b742408             mov esi, dword ptr [esp + 8]
// 0052a539  57                   push edi
// 0052a53a  8b7e6c               mov edi, dword ptr [esi + 0x6c]
// 0052a53d  8bc7                 mov eax, edi
// 0052a53f  51                   push ecx
// 0052a540  0d00001000           or eax, 0x100000
// 0052a545  56                   push esi
// 0052a546  89466c               mov dword ptr [esi + 0x6c], eax
// 0052a549  e852ffffff           call 0x52a4a0
// 0052a54e  83c408               add esp, 8
// 0052a551  897e6c               mov dword ptr [esi + 0x6c], edi
// 0052a554  5f                   pop edi
// 0052a555  5e                   pop esi
// 0052a556  c3                   ret 
// library libpng-1.2.5/pngmem.c (function _png_malloc_warn)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngmem.c
