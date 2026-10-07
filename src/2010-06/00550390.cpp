// roc 2010-06 00550390  unit: G3D::Log  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00550390
//
// 00550390  8b442404             mov eax, dword ptr [esp + 4]
// 00550394  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00550397  c6412401             mov byte ptr [ecx + 0x24], 1
// 0055039b  c3                   ret 
// library jpeg-6b/jdatasrc.c (function _init_source)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdatasrc.c
