// roc 2009-12 006200d0  unit: seg_00620000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006200d0
//
// 006200d0  8b442404             mov eax, dword ptr [esp + 4]
// 006200d4  8b88a0010000         mov ecx, dword ptr [eax + 0x1a0]
// 006200da  8b9014010000         mov edx, dword ptr [eax + 0x114]
// 006200e0  89515c               mov dword ptr [ecx + 0x5c], edx
// 006200e3  8b4060               mov eax, dword ptr [eax + 0x60]
// 006200e6  894160               mov dword ptr [ecx + 0x60], eax
// 006200e9  c3                   ret 
// library jpeg-6b/jdsample.c (function _start_pass_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
