// roc 2007-08 00506e50  unit: G3D::GCamera  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00506e50
//
// 00506e50  8b542404             mov edx, dword ptr [esp + 4]
// 00506e54  56                   push esi
// 00506e55  8d4114               lea eax, [ecx + 0x14]
// 00506e58  57                   push edi
// 00506e59  b909000000           mov ecx, 9
// 00506e5e  8bf0                 mov esi, eax
// 00506e60  8bfa                 mov edi, edx
// 00506e62  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00506e64  d94024               fld dword ptr [eax + 0x24]
// 00506e67  d95a24               fstp dword ptr [edx + 0x24]
// 00506e6a  d94028               fld dword ptr [eax + 0x28]
// 00506e6d  d95a28               fstp dword ptr [edx + 0x28]
// 00506e70  d9402c               fld dword ptr [eax + 0x2c]
// 00506e73  d95a2c               fstp dword ptr [edx + 0x2c]
// 00506e76  5f                   pop edi
// 00506e77  5e                   pop esi
// 00506e78  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?getCoordinateFrame@GCamera@G3D@@QBEXAAVCoordinateFrame@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
