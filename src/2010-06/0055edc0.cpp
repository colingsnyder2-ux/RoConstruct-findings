// from server: 100% by auto
// roc 2010-06 0055edc0  unit: G3D::TextInput::WrongSymbol  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055edc0
//
// 0055edc0  51                   push ecx
// 0055edc1  8b442410             mov eax, dword ptr [esp + 0x10]
// 0055edc5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0055edc9  56                   push esi
// 0055edca  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0055edce  50                   push eax
// 0055edcf  51                   push ecx
// 0055edd0  8bce                 mov ecx, esi
// 0055edd2  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0055edda  e8f1ea0000           call 0x56d8d0
// 0055eddf  8bc6                 mov eax, esi
// 0055ede1  5e                   pop esi
// 0055ede2  59                   pop ecx
// 0055ede3  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?fromPointAndDirection@Line@G3D@@SA?AV12@ABVVector3@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
