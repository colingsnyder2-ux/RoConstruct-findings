// roc 2009-06 00576890  unit: G3D::BinaryInput  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00576890
//
// 00576890  8b442408             mov eax, dword ptr [esp + 8]
// 00576894  56                   push esi
// 00576895  8b742408             mov esi, dword ptr [esp + 8]
// 00576899  50                   push eax
// 0057689a  56                   push esi
// 0057689b  e88073f2ff           call 0x49dc20
// 005768a0  8bc6                 mov eax, esi
// 005768a2  5e                   pop esi
// 005768a3  c20800               ret 8
// library g3d-6.09/G3Dcpp\Capsule.cpp (function ?normalToWorldSpace@CoordinateFrame@G3D@@QBE?AVVector3@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Capsule.cpp
