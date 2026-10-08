// from server: 100% by auto
// roc 2009-06 005658c0  unit: RBX::RbxG3D::RenderScene  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005658c0
//
// 005658c0  8b11                 mov edx, dword ptr [ecx]
// 005658c2  56                   push esi
// 005658c3  8b742408             mov esi, dword ptr [esp + 8]
// 005658c7  3bf2                 cmp esi, edx
// 005658c9  7216                 jb 0x5658e1
// 005658cb  8b4104               mov eax, dword ptr [ecx + 4]
// 005658ce  8d0440               lea eax, [eax + eax*2]
// 005658d1  8d0c82               lea ecx, [edx + eax*4]
// 005658d4  3bf1                 cmp esi, ecx
// 005658d6  7309                 jae 0x5658e1
// 005658d8  b801000000           mov eax, 1
// 005658dd  5e                   pop esi
// 005658de  c20400               ret 4
// 005658e1  33c0                 xor eax, eax
// 005658e3  5e                   pop esi
// 005658e4  c20400               ret 4
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?inArray@?$Array@VVector3@G3D@@@G3D@@AAE_NPBVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
