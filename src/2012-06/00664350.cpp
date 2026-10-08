// from server: 100% by auto
// roc 2012-06 00664350  unit: seg_00660000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00664350
//
// 00664350  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00664354  8b81a0010000         mov eax, dword ptr [ecx + 0x1a0]
// 0066435a  c6402400             mov byte ptr [eax + 0x24], 0
// 0066435e  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 00664361  89482c               mov dword ptr [eax + 0x2c], ecx
// 00664364  c3                   ret 
// library jpeg-6b/jdmerge.c (function _start_pass_merged_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
