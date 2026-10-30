// from server: 100% by auto
// roc 2008-06 0051b5a0  unit: G3D::_internal::DialogTemplate  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051b5a0
//
// 0051b5a0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0051b5a4  8b8194010000         mov eax, dword ptr [ecx + 0x194]
// 0051b5aa  33d2                 xor edx, edx
// 0051b5ac  8991c4000000         mov dword ptr [ecx + 0xc4], edx
// 0051b5b2  89517c               mov dword ptr [ecx + 0x7c], edx
// 0051b5b5  89917c010000         mov dword ptr [ecx + 0x17c], edx
// 0051b5bb  88500c               mov byte ptr [eax + 0xc], dl
// 0051b5be  88500d               mov byte ptr [eax + 0xd], dl
// 0051b5c1  895014               mov dword ptr [eax + 0x14], edx
// 0051b5c4  8990a0000000         mov dword ptr [eax + 0xa0], edx
// 0051b5ca  c3                   ret 
// library jpeg-6b/jdmarker.c (function _reset_marker_reader)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
