// from server: 100% by auto
// roc 2008-06 0051fc70  unit: seg_00510000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051fc70
//
// 0051fc70  8b442404             mov eax, dword ptr [esp + 4]
// 0051fc74  b910000000           mov ecx, 0x10
// 0051fc79  388827010000         cmp byte ptr [eax + 0x127], cl
// 0051fc7f  7503                 jne 0x51fc84
// 0051fc81  094870               or dword ptr [eax + 0x70], ecx
// 0051fc84  c3                   ret 
// library libpng-1.2.5/pngtrans.c (function _png_set_swap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngtrans.c
