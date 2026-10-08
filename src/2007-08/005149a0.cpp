// from server: 100% by auto
// roc 2007-08 005149a0  unit: G3D::_internal::DialogTemplate  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005149a0
//
// 005149a0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005149a4  85c9                 test ecx, ecx
// 005149a6  7426                 je 0x5149ce
// 005149a8  8b442408             mov eax, dword ptr [esp + 8]
// 005149ac  85c0                 test eax, eax
// 005149ae  741e                 je 0x5149ce
// 005149b0  ba00020000           mov edx, 0x200
// 005149b5  855168               test dword ptr [ecx + 0x68], edx
// 005149b8  7514                 jne 0x5149ce
// 005149ba  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005149be  56                   push esi
// 005149bf  8b31                 mov esi, dword ptr [ecx]
// 005149c1  89703c               mov dword ptr [eax + 0x3c], esi
// 005149c4  8b4904               mov ecx, dword ptr [ecx + 4]
// 005149c7  095008               or dword ptr [eax + 8], edx
// 005149ca  894840               mov dword ptr [eax + 0x40], ecx
// 005149cd  5e                   pop esi
// 005149ce  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_tIME)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
