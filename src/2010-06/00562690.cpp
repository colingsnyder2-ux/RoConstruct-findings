// from server: 100% by auto
// roc 2010-06 00562690  unit: G3D::_internal::DialogTemplate  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00562690
//
// 00562690  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00562694  8b8194010000         mov eax, dword ptr [ecx + 0x194]
// 0056269a  33d2                 xor edx, edx
// 0056269c  8991c4000000         mov dword ptr [ecx + 0xc4], edx
// 005626a2  89517c               mov dword ptr [ecx + 0x7c], edx
// 005626a5  89917c010000         mov dword ptr [ecx + 0x17c], edx
// 005626ab  88500c               mov byte ptr [eax + 0xc], dl
// 005626ae  88500d               mov byte ptr [eax + 0xd], dl
// 005626b1  895014               mov dword ptr [eax + 0x14], edx
// 005626b4  8990a0000000         mov dword ptr [eax + 0xa0], edx
// 005626ba  c3                   ret 
// library jpeg-6b/jdmarker.c (function _reset_marker_reader)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
