// roc 2009-12 005f7180  unit: G3D::BinaryInput  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f7180
//
// 005f7180  f30f1005d8689a00     movss xmm0, dword ptr [0x9a68d8]
// 005f7188  8bc1                 mov eax, ecx
// 005f718a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005f718e  0fb611               movzx edx, byte ptr [ecx]
// 005f7191  f30f2aca             cvtsi2ss xmm1, edx
// 005f7195  f30f59c8             mulss xmm1, xmm0
// 005f7199  f30f1108             movss dword ptr [eax], xmm1
// 005f719d  0fb65101             movzx edx, byte ptr [ecx + 1]
// 005f71a1  f30f2aca             cvtsi2ss xmm1, edx
// 005f71a5  f30f59c8             mulss xmm1, xmm0
// 005f71a9  f30f114804           movss dword ptr [eax + 4], xmm1
// 005f71ae  0fb64902             movzx ecx, byte ptr [ecx + 2]
// 005f71b2  f30f2ac9             cvtsi2ss xmm1, ecx
// 005f71b6  f30f59c8             mulss xmm1, xmm0
// 005f71ba  f30f114808           movss dword ptr [eax + 8], xmm1
// 005f71bf  c20400               ret 4
// library g3d-6.09/G3Dcpp\Color3.cpp (function ??0Color3@G3D@@QAE@ABVColor3uint8@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Color3.cpp
