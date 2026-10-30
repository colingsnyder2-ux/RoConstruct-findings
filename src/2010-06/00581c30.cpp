// from server: 100% by auto
// roc 2010-06 00581c30  unit: seg_00580000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00581c30
//
// 00581c30  8b442404             mov eax, dword ptr [esp + 4]
// 00581c34  8b88a0010000         mov ecx, dword ptr [eax + 0x1a0]
// 00581c3a  8b9014010000         mov edx, dword ptr [eax + 0x114]
// 00581c40  89515c               mov dword ptr [ecx + 0x5c], edx
// 00581c43  8b4060               mov eax, dword ptr [eax + 0x60]
// 00581c46  894160               mov dword ptr [ecx + 0x60], eax
// 00581c49  c3                   ret 
// library jpeg-6b/jdsample.c (function _start_pass_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
