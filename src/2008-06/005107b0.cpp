// roc 2008-06 005107b0  unit: G3D::Ray  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005107b0
//
// 005107b0  56                   push esi
// 005107b1  57                   push edi
// 005107b2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005107b6  8d7114               lea esi, [ecx + 0x14]
// 005107b9  56                   push esi
// 005107ba  8bcf                 mov ecx, edi
// 005107bc  e85f2a0000           call 0x513220
// 005107c1  d94624               fld dword ptr [esi + 0x24]
// 005107c4  d95f24               fstp dword ptr [edi + 0x24]
// 005107c7  8bc7                 mov eax, edi
// 005107c9  d94628               fld dword ptr [esi + 0x28]
// 005107cc  d95f28               fstp dword ptr [edi + 0x28]
// 005107cf  d9462c               fld dword ptr [esi + 0x2c]
// 005107d2  d95f2c               fstp dword ptr [edi + 0x2c]
// 005107d5  5f                   pop edi
// 005107d6  5e                   pop esi
// 005107d7  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?getCoordinateFrame@GCamera@G3D@@QBE?AVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
