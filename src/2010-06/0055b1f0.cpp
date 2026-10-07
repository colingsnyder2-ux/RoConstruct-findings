// roc 2010-06 0055b1f0  unit: G3D::GCamera  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055b1f0
//
// 0055b1f0  8b542404             mov edx, dword ptr [esp + 4]
// 0055b1f4  56                   push esi
// 0055b1f5  8d4114               lea eax, [ecx + 0x14]
// 0055b1f8  57                   push edi
// 0055b1f9  b909000000           mov ecx, 9
// 0055b1fe  8bf0                 mov esi, eax
// 0055b200  8bfa                 mov edi, edx
// 0055b202  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0055b204  d94024               fld dword ptr [eax + 0x24]
// 0055b207  d95a24               fstp dword ptr [edx + 0x24]
// 0055b20a  d94028               fld dword ptr [eax + 0x28]
// 0055b20d  d95a28               fstp dword ptr [edx + 0x28]
// 0055b210  d9402c               fld dword ptr [eax + 0x2c]
// 0055b213  d95a2c               fstp dword ptr [edx + 0x2c]
// 0055b216  5f                   pop edi
// 0055b217  5e                   pop esi
// 0055b218  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?getCoordinateFrame@GCamera@G3D@@QBEXAAVCoordinateFrame@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
