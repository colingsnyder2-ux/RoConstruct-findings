// roc 2011-06 00556e60  unit: seg_00550000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00556e60
//
// 00556e60  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00556e64  8b8194010000         mov eax, dword ptr [ecx + 0x194]
// 00556e6a  33d2                 xor edx, edx
// 00556e6c  8991c4000000         mov dword ptr [ecx + 0xc4], edx
// 00556e72  89517c               mov dword ptr [ecx + 0x7c], edx
// 00556e75  89917c010000         mov dword ptr [ecx + 0x17c], edx
// 00556e7b  88500c               mov byte ptr [eax + 0xc], dl
// 00556e7e  88500d               mov byte ptr [eax + 0xd], dl
// 00556e81  895014               mov dword ptr [eax + 0x14], edx
// 00556e84  8990a0000000         mov dword ptr [eax + 0xa0], edx
// 00556e8a  c3                   ret 
// library jpeg-6b/jdmarker.c (function _reset_marker_reader)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
