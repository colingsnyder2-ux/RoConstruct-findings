// roc 2007-03 004fba90  unit: seg_004f0000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fba90
//
// 004fba90  56                   push esi
// 004fba91  57                   push edi
// 004fba92  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004fba96  8d7114               lea esi, [ecx + 0x14]
// 004fba99  56                   push esi
// 004fba9a  8bcf                 mov ecx, edi
// 004fba9c  e8df2e0000           call 0x4fe980
// 004fbaa1  d94624               fld dword ptr [esi + 0x24]
// 004fbaa4  d95f24               fstp dword ptr [edi + 0x24]
// 004fbaa7  8bc7                 mov eax, edi
// 004fbaa9  d94628               fld dword ptr [esi + 0x28]
// 004fbaac  d95f28               fstp dword ptr [edi + 0x28]
// 004fbaaf  d9462c               fld dword ptr [esi + 0x2c]
// 004fbab2  d95f2c               fstp dword ptr [edi + 0x2c]
// 004fbab5  5f                   pop edi
// 004fbab6  5e                   pop esi
// 004fbab7  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\GCamera.cpp (function ?getCoordinateFrame@GCamera@G3D@@QBE?AVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/GCamera.cpp
