// from server: 100% by auto
// roc 2011-06 0054e970  unit: G3D::_internal::DialogTemplate  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0054e970
//
// 0054e970  8b442404             mov eax, dword ptr [esp + 4]
// 0054e974  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0054e977  c6412401             mov byte ptr [ecx + 0x24], 1
// 0054e97b  c3                   ret 
// library jpeg-6b/jdatasrc.c (function _init_source)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdatasrc.c
