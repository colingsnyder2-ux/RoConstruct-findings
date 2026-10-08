// roc 2009-12 004cc940  unit: G3D::VARArea  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cc940
//
// 004cc940  0f57c0               xorps xmm0, xmm0
// 004cc943  56                   push esi
// 004cc944  8bf1                 mov esi, ecx
// 004cc946  57                   push edi
// 004cc947  c7461000000000       mov dword ptr [esi + 0x10], 0
// 004cc94e  6a40                 push 0x40
// 004cc950  f30f114658           movss dword ptr [esi + 0x58], xmm0
// 004cc955  f30f1106             movss dword ptr [esi], xmm0
// 004cc959  f30f114604           movss dword ptr [esi + 4], xmm0
// 004cc95e  f30f114608           movss dword ptr [esi + 8], xmm0
// 004cc963  f30f100518ea9a00     movss xmm0, dword ptr [0x9aea18]
// 004cc96b  8d7e14               lea edi, [esi + 0x14]
// 004cc96e  6a00                 push 0
// 004cc970  57                   push edi
// 004cc971  f30f11460c           movss dword ptr [esi + 0xc], xmm0
// 004cc976  c7465404000000       mov dword ptr [esi + 0x54], 4
// 004cc97d  e822813200           call 0x7f4aa4
// 004cc982  f30f100518ea9a00     movss xmm0, dword ptr [0x9aea18]
// 004cc98a  83c40c               add esp, 0xc
// 004cc98d  f30f1107             movss dword ptr [edi], xmm0
// 004cc991  5f                   pop edi
// 004cc992  f30f114628           movss dword ptr [esi + 0x28], xmm0
// 004cc997  f30f11463c           movss dword ptr [esi + 0x3c], xmm0
// 004cc99c  f30f114650           movss dword ptr [esi + 0x50], xmm0
// 004cc9a1  8bc6                 mov eax, esi
// 004cc9a3  5e                   pop esi
// 004cc9a4  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??0TextureUnit@RenderState@RenderDevice@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
