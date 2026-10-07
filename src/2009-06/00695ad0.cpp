// roc 2009-06 00695ad0  unit: RBX::Lua::FunctionRef  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00695ad0
//
// 00695ad0  51                   push ecx
// 00695ad1  8b442410             mov eax, dword ptr [esp + 0x10]
// 00695ad5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00695ad9  56                   push esi
// 00695ada  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00695ade  50                   push eax
// 00695adf  51                   push ecx
// 00695ae0  8bce                 mov ecx, esi
// 00695ae2  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00695aea  e8c1fdffff           call 0x6958b0
// 00695aef  8bc6                 mov eax, esi
// 00695af1  5e                   pop esi
// 00695af2  59                   pop ecx
// 00695af3  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?fromPointAndDirection@Line@G3D@@SA?AV12@ABVVector3@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
