// from server: 100% by auto
// roc 2007-08 00506ae0  unit: G3D::Ray  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00506ae0
//
// 00506ae0  56                   push esi
// 00506ae1  57                   push edi
// 00506ae2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00506ae6  8d7114               lea esi, [ecx + 0x14]
// 00506ae9  56                   push esi
// 00506aea  8bcf                 mov ecx, edi
// 00506aec  e8df2a0000           call 0x5095d0
// 00506af1  d94624               fld dword ptr [esi + 0x24]
// 00506af4  d95f24               fstp dword ptr [edi + 0x24]
// 00506af7  8bc7                 mov eax, edi
// 00506af9  d94628               fld dword ptr [esi + 0x28]
// 00506afc  d95f28               fstp dword ptr [edi + 0x28]
// 00506aff  d9462c               fld dword ptr [esi + 0x2c]
// 00506b02  d95f2c               fstp dword ptr [edi + 0x2c]
// 00506b05  5f                   pop edi
// 00506b06  5e                   pop esi
// 00506b07  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?getCoordinateFrame@GCamera@G3D@@QBE?AVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
