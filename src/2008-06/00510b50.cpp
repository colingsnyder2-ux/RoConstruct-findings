// from server: 100% by auto
// roc 2008-06 00510b50  unit: G3D::GCamera  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00510b50
//
// 00510b50  8b542404             mov edx, dword ptr [esp + 4]
// 00510b54  56                   push esi
// 00510b55  8d4114               lea eax, [ecx + 0x14]
// 00510b58  57                   push edi
// 00510b59  b909000000           mov ecx, 9
// 00510b5e  8bf0                 mov esi, eax
// 00510b60  8bfa                 mov edi, edx
// 00510b62  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00510b64  d94024               fld dword ptr [eax + 0x24]
// 00510b67  d95a24               fstp dword ptr [edx + 0x24]
// 00510b6a  d94028               fld dword ptr [eax + 0x28]
// 00510b6d  d95a28               fstp dword ptr [edx + 0x28]
// 00510b70  d9402c               fld dword ptr [eax + 0x2c]
// 00510b73  d95a2c               fstp dword ptr [edx + 0x2c]
// 00510b76  5f                   pop edi
// 00510b77  5e                   pop esi
// 00510b78  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?getCoordinateFrame@GCamera@G3D@@QBEXAAVCoordinateFrame@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
