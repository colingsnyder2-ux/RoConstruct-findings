// roc 2011-06 0062bad0  unit: RBX::Lua::WeakFunctionRef  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0062bad0
//
// 0062bad0  51                   push ecx
// 0062bad1  8b442410             mov eax, dword ptr [esp + 0x10]
// 0062bad5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062bad9  56                   push esi
// 0062bada  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062bade  50                   push eax
// 0062badf  51                   push ecx
// 0062bae0  8bce                 mov ecx, esi
// 0062bae2  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0062baea  e871ffffff           call 0x62ba60
// 0062baef  8bc6                 mov eax, esi
// 0062baf1  5e                   pop esi
// 0062baf2  59                   pop ecx
// 0062baf3  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?fromPointAndDirection@Line@G3D@@SA?AV12@ABVVector3@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
