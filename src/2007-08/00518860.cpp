// from server: 100% by auto
// roc 2007-08 00518860  unit: seg_00510000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00518860
//
// 00518860  8b442404             mov eax, dword ptr [esp + 4]
// 00518864  b108                 mov cl, 8
// 00518866  388827010000         cmp byte ptr [eax + 0x127], cl
// 0051886c  730a                 jae 0x518878
// 0051886e  83487004             or dword ptr [eax + 0x70], 4
// 00518872  888828010000         mov byte ptr [eax + 0x128], cl
// 00518878  c3                   ret 
// library libpng-1.2.5/pngtrans.c (function _png_set_packing)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngtrans.c
