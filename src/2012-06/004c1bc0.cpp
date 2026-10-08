// from server: 100% by auto
// roc 2012-06 004c1bc0  unit: RBX::AdornRbxGfx  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004c1bc0
//
// 004c1bc0  8b542404             mov edx, dword ptr [esp + 4]
// 004c1bc4  56                   push esi
// 004c1bc5  8bc1                 mov eax, ecx
// 004c1bc7  57                   push edi
// 004c1bc8  b909000000           mov ecx, 9
// 004c1bcd  8bf2                 mov esi, edx
// 004c1bcf  8bf8                 mov edi, eax
// 004c1bd1  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004c1bd3  d94224               fld dword ptr [edx + 0x24]
// 004c1bd6  d95824               fstp dword ptr [eax + 0x24]
// 004c1bd9  d94228               fld dword ptr [edx + 0x28]
// 004c1bdc  d95828               fstp dword ptr [eax + 0x28]
// 004c1bdf  d9422c               fld dword ptr [edx + 0x2c]
// 004c1be2  d9582c               fstp dword ptr [eax + 0x2c]
// 004c1be5  5f                   pop edi
// 004c1be6  5e                   pop esi
// 004c1be7  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ??4CoordinateFrame@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
