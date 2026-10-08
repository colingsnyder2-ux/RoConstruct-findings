// from server: 100% by auto
// roc 2007-08 00518880  unit: seg_00510000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00518880
//
// 00518880  8b442404             mov eax, dword ptr [esp + 4]
// 00518884  80b82301000000       cmp byte ptr [eax + 0x123], 0
// 0051888b  740a                 je 0x518897
// 0051888d  83487002             or dword ptr [eax + 0x70], 2
// 00518891  b807000000           mov eax, 7
// 00518896  c3                   ret 
// 00518897  b801000000           mov eax, 1
// 0051889c  c3                   ret 
// library libpng-1.2.5/pngtrans.c (function _png_set_interlace_handling)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngtrans.c
