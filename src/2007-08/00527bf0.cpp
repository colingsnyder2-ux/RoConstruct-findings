// roc 2007-08 00527bf0  unit: G3D::Line  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00527bf0
//
// 00527bf0  8b442404             mov eax, dword ptr [esp + 4]
// 00527bf4  8b88a0010000         mov ecx, dword ptr [eax + 0x1a0]
// 00527bfa  8b9014010000         mov edx, dword ptr [eax + 0x114]
// 00527c00  89515c               mov dword ptr [ecx + 0x5c], edx
// 00527c03  8b4060               mov eax, dword ptr [eax + 0x60]
// 00527c06  894160               mov dword ptr [ecx + 0x60], eax
// 00527c09  c3                   ret 
// library jpeg-6b/jdsample.c (function _start_pass_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
