// from server: 100% by auto
// roc 2011-06 00578c40  unit: seg_00570000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00578c40
//
// 00578c40  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00578c44  8b81a0010000         mov eax, dword ptr [ecx + 0x1a0]
// 00578c4a  c6402400             mov byte ptr [eax + 0x24], 0
// 00578c4e  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 00578c51  89482c               mov dword ptr [eax + 0x2c], ecx
// 00578c54  c3                   ret 
// library jpeg-6b/jdmerge.c (function _start_pass_merged_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
