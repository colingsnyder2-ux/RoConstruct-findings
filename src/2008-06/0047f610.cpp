// from server: 100% by auto
// roc 2008-06 0047f610  unit: G3D::Win32Window  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047f610
//
// 0047f610  8b01                 mov eax, dword ptr [ecx]
// 0047f612  8b542404             mov edx, dword ptr [esp + 4]
// 0047f616  3bd0                 cmp edx, eax
// 0047f618  7212                 jb 0x47f62c
// 0047f61a  8b4904               mov ecx, dword ptr [ecx + 4]
// 0047f61d  8d0488               lea eax, [eax + ecx*4]
// 0047f620  3bd0                 cmp edx, eax
// 0047f622  7308                 jae 0x47f62c
// 0047f624  b801000000           mov eax, 1
// 0047f629  c20400               ret 4
// 0047f62c  33c0                 xor eax, eax
// 0047f62e  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?inArray@?$Array@PBX@G3D@@AAE_NPBQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
