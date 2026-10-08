// from server: 100% by auto
// roc 2009-06 0059e0a0  unit: seg_00590000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059e0a0
//
// 0059e0a0  8b442404             mov eax, dword ptr [esp + 4]
// 0059e0a4  8b88a0010000         mov ecx, dword ptr [eax + 0x1a0]
// 0059e0aa  8b9014010000         mov edx, dword ptr [eax + 0x114]
// 0059e0b0  89515c               mov dword ptr [ecx + 0x5c], edx
// 0059e0b3  8b4060               mov eax, dword ptr [eax + 0x60]
// 0059e0b6  894160               mov dword ptr [ecx + 0x60], eax
// 0059e0b9  c3                   ret 
// library jpeg-6b/jdsample.c (function _start_pass_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
