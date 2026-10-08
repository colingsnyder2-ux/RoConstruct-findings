// from server: 100% by auto
// roc 2012-06 0070a8a0  unit: RBX::Lua::WeakFunctionRef  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0070a8a0
//
// 0070a8a0  51                   push ecx
// 0070a8a1  8b442410             mov eax, dword ptr [esp + 0x10]
// 0070a8a5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0070a8a9  56                   push esi
// 0070a8aa  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0070a8ae  50                   push eax
// 0070a8af  51                   push ecx
// 0070a8b0  8bce                 mov ecx, esi
// 0070a8b2  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0070a8ba  e871ffffff           call 0x70a830
// 0070a8bf  8bc6                 mov eax, esi
// 0070a8c1  5e                   pop esi
// 0070a8c2  59                   pop ecx
// 0070a8c3  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?fromPointAndDirection@Line@G3D@@SA?AV12@ABVVector3@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
