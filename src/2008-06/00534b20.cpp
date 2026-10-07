// roc 2008-06 00534b20  unit: seg_00530000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00534b20
//
// 00534b20  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00534b24  8b81a0010000         mov eax, dword ptr [ecx + 0x1a0]
// 00534b2a  c6402400             mov byte ptr [eax + 0x24], 0
// 00534b2e  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 00534b31  89482c               mov dword ptr [eax + 0x2c], ecx
// 00534b34  c3                   ret 
// library jpeg-6b/jdmerge.c (function _start_pass_merged_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
