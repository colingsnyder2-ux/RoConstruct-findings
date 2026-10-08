// roc 2009-12 005f68a0  unit: G3D::BinaryInput  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f68a0
//
// 005f68a0  8b442404             mov eax, dword ptr [esp + 4]
// 005f68a4  d90560239b00         fld dword ptr [0x9b2360]
// 005f68aa  0fb610               movzx edx, byte ptr [eax]
// 005f68ad  f30f2ac2             cvtsi2ss xmm0, edx
// 005f68b1  f30f1101             movss dword ptr [ecx], xmm0
// 005f68b5  0fb65001             movzx edx, byte ptr [eax + 1]
// 005f68b9  f30f2ac2             cvtsi2ss xmm0, edx
// 005f68bd  f30f114104           movss dword ptr [ecx + 4], xmm0
// 005f68c2  0fb65002             movzx edx, byte ptr [eax + 2]
// 005f68c6  f30f2ac2             cvtsi2ss xmm0, edx
// 005f68ca  f30f114108           movss dword ptr [ecx + 8], xmm0
// 005f68cf  0fb64003             movzx eax, byte ptr [eax + 3]
// 005f68d3  51                   push ecx
// 005f68d4  f30f2ac0             cvtsi2ss xmm0, eax
// 005f68d8  f30f11410c           movss dword ptr [ecx + 0xc], xmm0
// 005f68dd  d91c24               fstp dword ptr [esp]
// 005f68e0  e87bfeffff           call 0x5f6760
// 005f68e5  8bc1                 mov eax, ecx
// 005f68e7  c20400               ret 4
// library g3d-6.09/G3Dcpp\Color4.cpp (function ??0Color4@G3D@@QAE@ABVColor4uint8@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
