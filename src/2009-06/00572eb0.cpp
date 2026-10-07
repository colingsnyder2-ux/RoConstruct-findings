// roc 2009-06 00572eb0  unit: G3D::Ray  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00572eb0
//
// 00572eb0  56                   push esi
// 00572eb1  57                   push edi
// 00572eb2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00572eb6  8d7114               lea esi, [ecx + 0x14]
// 00572eb9  56                   push esi
// 00572eba  8bcf                 mov ecx, edi
// 00572ebc  e8bf70f2ff           call 0x499f80
// 00572ec1  d94624               fld dword ptr [esi + 0x24]
// 00572ec4  d95f24               fstp dword ptr [edi + 0x24]
// 00572ec7  8bc7                 mov eax, edi
// 00572ec9  d94628               fld dword ptr [esi + 0x28]
// 00572ecc  d95f28               fstp dword ptr [edi + 0x28]
// 00572ecf  d9462c               fld dword ptr [esi + 0x2c]
// 00572ed2  d95f2c               fstp dword ptr [edi + 0x2c]
// 00572ed5  5f                   pop edi
// 00572ed6  5e                   pop esi
// 00572ed7  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?getCoordinateFrame@GCamera@G3D@@QBE?AVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
