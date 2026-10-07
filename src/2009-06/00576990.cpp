// roc 2009-06 00576990  unit: G3D::BinaryInput  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00576990
//
// 00576990  51                   push ecx
// 00576991  8b442410             mov eax, dword ptr [esp + 0x10]
// 00576995  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00576999  56                   push esi
// 0057699a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0057699e  50                   push eax
// 0057699f  51                   push ecx
// 005769a0  8bce                 mov ecx, esi
// 005769a2  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005769aa  e861ffffff           call 0x576910
// 005769af  8bc6                 mov eax, esi
// 005769b1  5e                   pop esi
// 005769b2  59                   pop ecx
// 005769b3  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?fromPointAndDirection@Line@G3D@@SA?AV12@ABVVector3@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
