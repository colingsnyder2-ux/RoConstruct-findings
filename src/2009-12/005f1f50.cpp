// roc 2009-12 005f1f50  unit: seg_005f0000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f1f50
//
// 005f1f50  56                   push esi
// 005f1f51  57                   push edi
// 005f1f52  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005f1f56  8d7114               lea esi, [ecx + 0x14]
// 005f1f59  56                   push esi
// 005f1f5a  8bcf                 mov ecx, edi
// 005f1f5c  e89f190000           call 0x5f3900
// 005f1f61  d94624               fld dword ptr [esi + 0x24]
// 005f1f64  d95f24               fstp dword ptr [edi + 0x24]
// 005f1f67  8bc7                 mov eax, edi
// 005f1f69  d94628               fld dword ptr [esi + 0x28]
// 005f1f6c  d95f28               fstp dword ptr [edi + 0x28]
// 005f1f6f  d9462c               fld dword ptr [esi + 0x2c]
// 005f1f72  d95f2c               fstp dword ptr [edi + 0x2c]
// 005f1f75  5f                   pop edi
// 005f1f76  5e                   pop esi
// 005f1f77  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?getCoordinateFrame@GCamera@G3D@@QBE?AVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
