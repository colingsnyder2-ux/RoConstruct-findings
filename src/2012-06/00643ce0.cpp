// from server: 100% by auto
// roc 2012-06 00643ce0  unit: seg_00640000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00643ce0
//
// 00643ce0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00643ce4  8b8194010000         mov eax, dword ptr [ecx + 0x194]
// 00643cea  33d2                 xor edx, edx
// 00643cec  8991c4000000         mov dword ptr [ecx + 0xc4], edx
// 00643cf2  89517c               mov dword ptr [ecx + 0x7c], edx
// 00643cf5  89917c010000         mov dword ptr [ecx + 0x17c], edx
// 00643cfb  88500c               mov byte ptr [eax + 0xc], dl
// 00643cfe  88500d               mov byte ptr [eax + 0xd], dl
// 00643d01  895014               mov dword ptr [eax + 0x14], edx
// 00643d04  8990a0000000         mov dword ptr [eax + 0xa0], edx
// 00643d0a  c3                   ret 
// library jpeg-6b/jdmarker.c (function _reset_marker_reader)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
