// from server: 100% by auto
// roc 2007-08 0056cff0  unit: RBX::Lua::FunctionRef  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056cff0
//
// 0056cff0  51                   push ecx
// 0056cff1  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056cff5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056cff9  56                   push esi
// 0056cffa  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0056cffe  50                   push eax
// 0056cfff  51                   push ecx
// 0056d000  8bce                 mov ecx, esi
// 0056d002  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0056d00a  e801feffff           call 0x56ce10
// 0056d00f  8bc6                 mov eax, esi
// 0056d011  5e                   pop esi
// 0056d012  59                   pop ecx
// 0056d013  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?fromPointAndDirection@Line@G3D@@SA?AV12@ABVVector3@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
