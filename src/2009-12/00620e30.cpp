// roc 2009-12 00620e30  unit: seg_00620000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00620e30
//
// 00620e30  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00620e34  8b81a0010000         mov eax, dword ptr [ecx + 0x1a0]
// 00620e3a  c6402400             mov byte ptr [eax + 0x24], 0
// 00620e3e  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 00620e41  89482c               mov dword ptr [eax + 0x2c], ecx
// 00620e44  c3                   ret 
// library jpeg-6b/jdmerge.c (function _start_pass_merged_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
