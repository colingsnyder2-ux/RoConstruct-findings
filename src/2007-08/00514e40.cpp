// roc 2007-08 00514e40  unit: G3D::_internal::DialogTemplate  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00514e40
//
// 00514e40  8b442408             mov eax, dword ptr [esp + 8]
// 00514e44  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00514e48  50                   push eax
// 00514e49  6a00                 push 0
// 00514e4b  51                   push ecx
// 00514e4c  e8bffeffff           call 0x514d10
// 00514e51  83c40c               add esp, 0xc
// 00514e54  f7d8                 neg eax
// 00514e56  1bc0                 sbb eax, eax
// 00514e58  83c001               add eax, 1
// 00514e5b  c3                   ret 
// library libpng-1.2.5/png.c (function _png_check_sig)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 png.c
