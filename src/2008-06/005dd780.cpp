// roc 2008-06 005dd780  unit: RBX::Message  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dd780
//
// 005dd780  51                   push ecx
// 005dd781  8b442410             mov eax, dword ptr [esp + 0x10]
// 005dd785  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005dd789  56                   push esi
// 005dd78a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005dd78e  50                   push eax
// 005dd78f  51                   push ecx
// 005dd790  8bce                 mov ecx, esi
// 005dd792  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005dd79a  e8a187f4ff           call 0x525f40
// 005dd79f  8bc6                 mov eax, esi
// 005dd7a1  5e                   pop esi
// 005dd7a2  59                   pop ecx
// 005dd7a3  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?fromPointAndDirection@Line@G3D@@SA?AV12@ABVVector3@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
