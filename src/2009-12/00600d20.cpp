// roc 2009-12 00600d20  unit: G3D::_internal::DialogTemplate  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00600d20
//
// 00600d20  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00600d24  8b8194010000         mov eax, dword ptr [ecx + 0x194]
// 00600d2a  33d2                 xor edx, edx
// 00600d2c  8991c4000000         mov dword ptr [ecx + 0xc4], edx
// 00600d32  89517c               mov dword ptr [ecx + 0x7c], edx
// 00600d35  89917c010000         mov dword ptr [ecx + 0x17c], edx
// 00600d3b  88500c               mov byte ptr [eax + 0xc], dl
// 00600d3e  88500d               mov byte ptr [eax + 0xd], dl
// 00600d41  895014               mov dword ptr [eax + 0x14], edx
// 00600d44  8990a0000000         mov dword ptr [eax + 0xa0], edx
// 00600d4a  c3                   ret 
// library jpeg-6b/jdmarker.c (function _reset_marker_reader)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
