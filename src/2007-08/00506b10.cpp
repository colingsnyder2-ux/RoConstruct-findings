// roc 2007-08 00506b10  unit: G3D::Ray  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00506b10
//
// 00506b10  8b542404             mov edx, dword ptr [esp + 4]
// 00506b14  56                   push esi
// 00506b15  8d4114               lea eax, [ecx + 0x14]
// 00506b18  57                   push edi
// 00506b19  b909000000           mov ecx, 9
// 00506b1e  8bf2                 mov esi, edx
// 00506b20  8bf8                 mov edi, eax
// 00506b22  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00506b24  d94224               fld dword ptr [edx + 0x24]
// 00506b27  d95824               fstp dword ptr [eax + 0x24]
// 00506b2a  d94228               fld dword ptr [edx + 0x28]
// 00506b2d  d95828               fstp dword ptr [eax + 0x28]
// 00506b30  d9422c               fld dword ptr [edx + 0x2c]
// 00506b33  d9582c               fstp dword ptr [eax + 0x2c]
// 00506b36  5f                   pop edi
// 00506b37  5e                   pop esi
// 00506b38  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?setCoordinateFrame@GCamera@G3D@@QAEXABVCoordinateFrame@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
