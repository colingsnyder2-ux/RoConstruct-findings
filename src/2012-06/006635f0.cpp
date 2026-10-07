// roc 2012-06 006635f0  unit: seg_00660000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006635f0
//
// 006635f0  8b442404             mov eax, dword ptr [esp + 4]
// 006635f4  8b88a0010000         mov ecx, dword ptr [eax + 0x1a0]
// 006635fa  8b9014010000         mov edx, dword ptr [eax + 0x114]
// 00663600  89515c               mov dword ptr [ecx + 0x5c], edx
// 00663603  8b4060               mov eax, dword ptr [eax + 0x60]
// 00663606  894160               mov dword ptr [ecx + 0x60], eax
// 00663609  c3                   ret 
// library jpeg-6b/jdsample.c (function _start_pass_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
