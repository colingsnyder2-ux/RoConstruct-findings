// roc 2010-06 00582990  unit: seg_00580000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00582990
//
// 00582990  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00582994  8b81a0010000         mov eax, dword ptr [ecx + 0x1a0]
// 0058299a  c6402400             mov byte ptr [eax + 0x24], 0
// 0058299e  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 005829a1  89482c               mov dword ptr [eax + 0x2c], ecx
// 005829a4  c3                   ret 
// library jpeg-6b/jdmerge.c (function _start_pass_merged_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
