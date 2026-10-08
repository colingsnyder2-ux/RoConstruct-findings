// from server: 100% by auto
// roc 2010-06 0055ac50  unit: G3D::Plane  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055ac50
//
// 0055ac50  56                   push esi
// 0055ac51  57                   push edi
// 0055ac52  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0055ac56  8d7114               lea esi, [ecx + 0x14]
// 0055ac59  56                   push esi
// 0055ac5a  8bcf                 mov ecx, edi
// 0055ac5c  e80fb4ffff           call 0x556070
// 0055ac61  d94624               fld dword ptr [esi + 0x24]
// 0055ac64  d95f24               fstp dword ptr [edi + 0x24]
// 0055ac67  8bc7                 mov eax, edi
// 0055ac69  d94628               fld dword ptr [esi + 0x28]
// 0055ac6c  d95f28               fstp dword ptr [edi + 0x28]
// 0055ac6f  d9462c               fld dword ptr [esi + 0x2c]
// 0055ac72  d95f2c               fstp dword ptr [edi + 0x2c]
// 0055ac75  5f                   pop edi
// 0055ac76  5e                   pop esi
// 0055ac77  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?getCoordinateFrame@GCamera@G3D@@QBE?AVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
