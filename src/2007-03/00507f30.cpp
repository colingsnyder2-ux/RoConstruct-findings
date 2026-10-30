// roc 2007-03 00507f30  unit: seg_00500000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00507f30
//
// 00507f30  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00507f34  8b8194010000         mov eax, dword ptr [ecx + 0x194]
// 00507f3a  33d2                 xor edx, edx
// 00507f3c  8991c4000000         mov dword ptr [ecx + 0xc4], edx
// 00507f42  89517c               mov dword ptr [ecx + 0x7c], edx
// 00507f45  89917c010000         mov dword ptr [ecx + 0x17c], edx
// 00507f4b  88500c               mov byte ptr [eax + 0xc], dl
// 00507f4e  88500d               mov byte ptr [eax + 0xd], dl
// 00507f51  895014               mov dword ptr [eax + 0x14], edx
// 00507f54  8990a0000000         mov dword ptr [eax + 0xa0], edx
// 00507f5a  c3                   ret 
// library jpeg-6b/jdmarker.c (function _reset_marker_reader)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
