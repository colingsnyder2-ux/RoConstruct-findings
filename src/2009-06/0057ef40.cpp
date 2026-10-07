// roc 2009-06 0057ef40  unit: G3D::_internal::DialogTemplate  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057ef40
//
// 0057ef40  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0057ef44  8b8194010000         mov eax, dword ptr [ecx + 0x194]
// 0057ef4a  33d2                 xor edx, edx
// 0057ef4c  8991c4000000         mov dword ptr [ecx + 0xc4], edx
// 0057ef52  89517c               mov dword ptr [ecx + 0x7c], edx
// 0057ef55  89917c010000         mov dword ptr [ecx + 0x17c], edx
// 0057ef5b  88500c               mov byte ptr [eax + 0xc], dl
// 0057ef5e  88500d               mov byte ptr [eax + 0xd], dl
// 0057ef61  895014               mov dword ptr [eax + 0x14], edx
// 0057ef64  8990a0000000         mov dword ptr [eax + 0xa0], edx
// 0057ef6a  c3                   ret 
// library jpeg-6b/jdmarker.c (function _reset_marker_reader)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
