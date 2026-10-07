// roc 2009-06 0059ee00  unit: seg_00590000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059ee00
//
// 0059ee00  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0059ee04  8b81a0010000         mov eax, dword ptr [ecx + 0x1a0]
// 0059ee0a  c6402400             mov byte ptr [eax + 0x24], 0
// 0059ee0e  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 0059ee11  89482c               mov dword ptr [eax + 0x2c], ecx
// 0059ee14  c3                   ret 
// library jpeg-6b/jdmerge.c (function _start_pass_merged_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
