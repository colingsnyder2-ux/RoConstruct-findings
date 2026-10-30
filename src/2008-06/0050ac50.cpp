// from server: 100% by auto
// roc 2008-06 0050ac50  unit: G3D::Log  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050ac50
//
// 0050ac50  8b442404             mov eax, dword ptr [esp + 4]
// 0050ac54  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0050ac57  c6412401             mov byte ptr [ecx + 0x24], 1
// 0050ac5b  c3                   ret 
// library jpeg-6b/jdatasrc.c (function _init_source)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdatasrc.c
