// from server: 100% by auto
// roc 2009-06 004a9730  unit: G3D::Win32Window  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a9730
//
// 004a9730  8b01                 mov eax, dword ptr [ecx]
// 004a9732  8b542404             mov edx, dword ptr [esp + 4]
// 004a9736  3bd0                 cmp edx, eax
// 004a9738  7212                 jb 0x4a974c
// 004a973a  8b4904               mov ecx, dword ptr [ecx + 4]
// 004a973d  8d0488               lea eax, [eax + ecx*4]
// 004a9740  3bd0                 cmp edx, eax
// 004a9742  7308                 jae 0x4a974c
// 004a9744  b801000000           mov eax, 1
// 004a9749  c20400               ret 4
// 004a974c  33c0                 xor eax, eax
// 004a974e  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?inArray@?$Array@PBX@G3D@@AAE_NPBQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
