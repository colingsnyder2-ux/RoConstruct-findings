// roc 2010-06 00979f60  unit: seg_00970000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00979f60
//
// 00979f60  8b442404             mov eax, dword ptr [esp + 4]
// 00979f64  d90548f4a100         fld dword ptr [0xa1f448]
// 00979f6a  0fb610               movzx edx, byte ptr [eax]
// 00979f6d  f30f2ac2             cvtsi2ss xmm0, edx
// 00979f71  f30f1101             movss dword ptr [ecx], xmm0
// 00979f75  0fb65001             movzx edx, byte ptr [eax + 1]
// 00979f79  f30f2ac2             cvtsi2ss xmm0, edx
// 00979f7d  f30f114104           movss dword ptr [ecx + 4], xmm0
// 00979f82  0fb65002             movzx edx, byte ptr [eax + 2]
// 00979f86  f30f2ac2             cvtsi2ss xmm0, edx
// 00979f8a  f30f114108           movss dword ptr [ecx + 8], xmm0
// 00979f8f  0fb64003             movzx eax, byte ptr [eax + 3]
// 00979f93  51                   push ecx
// 00979f94  f30f2ac0             cvtsi2ss xmm0, eax
// 00979f98  f30f11410c           movss dword ptr [ecx + 0xc], xmm0
// 00979f9d  d91c24               fstp dword ptr [esp]
// 00979fa0  e87bfeffff           call 0x979e20
// 00979fa5  8bc1                 mov eax, ecx
// 00979fa7  c20400               ret 4
// library g3d-6.09/G3Dcpp\Color4.cpp (function ??0Color4@G3D@@QAE@ABVColor4uint8@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
