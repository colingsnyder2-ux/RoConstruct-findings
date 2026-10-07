// roc 2012-06 0063bfb0  unit: G3D::_internal::DialogTemplate  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0063bfb0
//
// 0063bfb0  8b442404             mov eax, dword ptr [esp + 4]
// 0063bfb4  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0063bfb7  c6412401             mov byte ptr [ecx + 0x24], 1
// 0063bfbb  c3                   ret 
// library jpeg-6b/jdatasrc.c (function _init_source)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdatasrc.c
