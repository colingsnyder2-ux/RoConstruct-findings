// roc 2009-06 0056d380  unit: G3D::Log  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056d380
//
// 0056d380  8b442404             mov eax, dword ptr [esp + 4]
// 0056d384  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0056d387  c6412401             mov byte ptr [ecx + 0x24], 1
// 0056d38b  c3                   ret 
// library jpeg-6b/jdatasrc.c (function _init_source)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdatasrc.c
