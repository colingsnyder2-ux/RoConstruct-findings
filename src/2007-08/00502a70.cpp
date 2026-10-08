// from server: 100% by auto
// roc 2007-08 00502a70  unit: G3D::Log  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00502a70
//
// 00502a70  8b442404             mov eax, dword ptr [esp + 4]
// 00502a74  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00502a77  c6412401             mov byte ptr [ecx + 0x24], 1
// 00502a7b  c3                   ret 
// library jpeg-6b/jdatasrc.c (function _init_source)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdatasrc.c
