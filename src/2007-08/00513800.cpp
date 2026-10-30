// from server: 100% by auto
// roc 2007-08 00513800  unit: G3D::_internal::DialogTemplate  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00513800
//
// 00513800  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00513804  8b8194010000         mov eax, dword ptr [ecx + 0x194]
// 0051380a  33d2                 xor edx, edx
// 0051380c  8991c4000000         mov dword ptr [ecx + 0xc4], edx
// 00513812  89517c               mov dword ptr [ecx + 0x7c], edx
// 00513815  89917c010000         mov dword ptr [ecx + 0x17c], edx
// 0051381b  88500c               mov byte ptr [eax + 0xc], dl
// 0051381e  88500d               mov byte ptr [eax + 0xd], dl
// 00513821  895014               mov dword ptr [eax + 0x14], edx
// 00513824  8990a0000000         mov dword ptr [eax + 0xa0], edx
// 0051382a  c3                   ret 
// library jpeg-6b/jdmarker.c (function _reset_marker_reader)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
