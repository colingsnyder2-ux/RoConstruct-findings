// roc 2009-12 005f69d0  unit: G3D::BinaryInput  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f69d0
//
// 005f69d0  8b442404             mov eax, dword ptr [esp + 4]
// 005f69d4  0f57c0               xorps xmm0, xmm0
// 005f69d7  56                   push esi
// 005f69d8  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005f69dc  33d2                 xor edx, edx
// 005f69de  f30f1100             movss dword ptr [eax], xmm0
// 005f69e2  f30f114004           movss dword ptr [eax + 4], xmm0
// 005f69e7  f30f114008           movss dword ptr [eax + 8], xmm0
// 005f69ec  f30f11400c           movss dword ptr [eax + 0xc], xmm0
// 005f69f1  83c108               add ecx, 8
// 005f69f4  eb0a                 jmp 0x5f6a00
// 005f69f6  8da42400000000       lea esp, [esp]
// 005f69fd  8d4900               lea ecx, [ecx]
// 005f6a00  f30f1041f8           movss xmm0, dword ptr [ecx - 8]
// 005f6a05  f30f5906             mulss xmm0, dword ptr [esi]
// 005f6a09  f30f580490           addss xmm0, dword ptr [eax + edx*4]
// 005f6a0e  f30f110490           movss dword ptr [eax + edx*4], xmm0
// 005f6a13  f30f1049fc           movss xmm1, dword ptr [ecx - 4]
// 005f6a18  f30f594e04           mulss xmm1, dword ptr [esi + 4]
// 005f6a1d  f30f58c8             addss xmm1, xmm0
// 005f6a21  f30f110c90           movss dword ptr [eax + edx*4], xmm1
// 005f6a26  f30f1001             movss xmm0, dword ptr [ecx]
// 005f6a2a  f30f594608           mulss xmm0, dword ptr [esi + 8]
// 005f6a2f  f30f58c1             addss xmm0, xmm1
// 005f6a33  f30f110490           movss dword ptr [eax + edx*4], xmm0
// 005f6a38  f30f104904           movss xmm1, dword ptr [ecx + 4]
// 005f6a3d  f30f594e0c           mulss xmm1, dword ptr [esi + 0xc]
// 005f6a42  f30f58c8             addss xmm1, xmm0
// 005f6a46  f30f110c90           movss dword ptr [eax + edx*4], xmm1
// 005f6a4b  42                   inc edx
// 005f6a4c  83c110               add ecx, 0x10
// 005f6a4f  83fa04               cmp edx, 4
// 005f6a52  7cac                 jl 0x5f6a00
// 005f6a54  5e                   pop esi
// 005f6a55  c20800               ret 8
// library g3d-6.09/G3Dcpp\Matrix4.cpp (function ??DMatrix4@G3D@@QBE?AVVector4@1@ABV21@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Matrix4.cpp
