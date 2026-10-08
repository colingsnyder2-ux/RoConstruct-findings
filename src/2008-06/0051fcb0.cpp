// from server: 100% by auto
// roc 2008-06 0051fcb0  unit: seg_00510000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051fcb0
//
// 0051fcb0  8b442404             mov eax, dword ptr [esp + 4]
// 0051fcb4  80b82301000000       cmp byte ptr [eax + 0x123], 0
// 0051fcbb  740a                 je 0x51fcc7
// 0051fcbd  83487002             or dword ptr [eax + 0x70], 2
// 0051fcc1  b807000000           mov eax, 7
// 0051fcc6  c3                   ret 
// 0051fcc7  b801000000           mov eax, 1
// 0051fccc  c3                   ret 
// library libpng-1.2.5/pngtrans.c (function _png_set_interlace_handling)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngtrans.c
