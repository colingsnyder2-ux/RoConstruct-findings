// from server: 100% by auto
// roc 2008-06 00501ee0  unit: G3D::Sphere  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00501ee0
//
// 00501ee0  8b11                 mov edx, dword ptr [ecx]
// 00501ee2  56                   push esi
// 00501ee3  8b742408             mov esi, dword ptr [esp + 8]
// 00501ee7  3bf2                 cmp esi, edx
// 00501ee9  7216                 jb 0x501f01
// 00501eeb  8b4104               mov eax, dword ptr [ecx + 4]
// 00501eee  8d0440               lea eax, [eax + eax*2]
// 00501ef1  8d0c82               lea ecx, [edx + eax*4]
// 00501ef4  3bf1                 cmp esi, ecx
// 00501ef6  7309                 jae 0x501f01
// 00501ef8  b801000000           mov eax, 1
// 00501efd  5e                   pop esi
// 00501efe  c20400               ret 4
// 00501f01  33c0                 xor eax, eax
// 00501f03  5e                   pop esi
// 00501f04  c20400               ret 4
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?inArray@?$Array@VVector3@G3D@@@G3D@@AAE_NPBVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
