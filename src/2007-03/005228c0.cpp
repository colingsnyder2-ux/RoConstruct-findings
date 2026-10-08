// roc 2007-03 005228c0  unit: seg_00520000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005228c0
//
// 005228c0  8b442404             mov eax, dword ptr [esp + 4]
// 005228c4  8b88a0010000         mov ecx, dword ptr [eax + 0x1a0]
// 005228ca  8b9014010000         mov edx, dword ptr [eax + 0x114]
// 005228d0  89515c               mov dword ptr [ecx + 0x5c], edx
// 005228d3  8b4060               mov eax, dword ptr [eax + 0x60]
// 005228d6  894160               mov dword ptr [ecx + 0x60], eax
// 005228d9  c3                   ret 
// library jpeg-6b/jdsample.c (function _start_pass_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
