// roc 2007-08 005aaa90  unit: RBX::World  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005aaa90
//
// 005aaa90  51                   push ecx
// 005aaa91  8b442410             mov eax, dword ptr [esp + 0x10]
// 005aaa95  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005aaa99  56                   push esi
// 005aaa9a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005aaa9e  50                   push eax
// 005aaa9f  51                   push ecx
// 005aaaa0  8bce                 mov ecx, esi
// 005aaaa2  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005aaaaa  e81194f7ff           call 0x523ec0
// 005aaaaf  8bc6                 mov eax, esi
// 005aaab1  5e                   pop esi
// 005aaab2  59                   pop ecx
// 005aaab3  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?fromPointAndDirection@Line@G3D@@SA?AV12@ABVVector3@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
