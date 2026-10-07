// roc 2011-06 00577ee0  unit: seg_00570000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00577ee0
//
// 00577ee0  8b442404             mov eax, dword ptr [esp + 4]
// 00577ee4  8b88a0010000         mov ecx, dword ptr [eax + 0x1a0]
// 00577eea  8b9014010000         mov edx, dword ptr [eax + 0x114]
// 00577ef0  89515c               mov dword ptr [ecx + 0x5c], edx
// 00577ef3  8b4060               mov eax, dword ptr [eax + 0x60]
// 00577ef6  894160               mov dword ptr [ecx + 0x60], eax
// 00577ef9  c3                   ret 
// library jpeg-6b/jdsample.c (function _start_pass_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
