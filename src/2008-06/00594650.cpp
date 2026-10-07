// roc 2008-06 00594650  unit: RBX::Lua::VFunctionRef::?$holder  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00594650
//
// 00594650  51                   push ecx
// 00594651  8b442410             mov eax, dword ptr [esp + 0x10]
// 00594655  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00594659  56                   push esi
// 0059465a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0059465e  50                   push eax
// 0059465f  51                   push ecx
// 00594660  8bce                 mov ecx, esi
// 00594662  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0059466a  e891fdffff           call 0x594400
// 0059466f  8bc6                 mov eax, esi
// 00594671  5e                   pop esi
// 00594672  59                   pop ecx
// 00594673  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?fromPointAndDirection@Line@G3D@@SA?AV12@ABVVector3@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
