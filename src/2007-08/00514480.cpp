// from server: 100% by auto
// roc 2007-08 00514480  unit: G3D::_internal::DialogTemplate  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00514480
//
// 00514480  837c240400           cmp dword ptr [esp + 4], 0
// 00514485  742d                 je 0x5144b4
// 00514487  8b442408             mov eax, dword ptr [esp + 8]
// 0051448b  85c0                 test eax, eax
// 0051448d  7425                 je 0x5144b4
// 0051448f  dd442410             fld qword ptr [esp + 0x10]
// 00514493  8a4c240c             mov cl, byte ptr [esp + 0xc]
// 00514497  81480800400000       or dword ptr [eax + 8], 0x4000
// 0051449e  dd98e0000000         fstp qword ptr [eax + 0xe0]
// 005144a4  dd442418             fld qword ptr [esp + 0x18]
// 005144a8  8888dc000000         mov byte ptr [eax + 0xdc], cl
// 005144ae  dd98e8000000         fstp qword ptr [eax + 0xe8]
// 005144b4  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_sCAL)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
