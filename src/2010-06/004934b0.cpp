// from server: 100% by auto
// roc 2010-06 004934b0  unit: seg_00490000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004934b0
//
// 004934b0  0f57c0               xorps xmm0, xmm0
// 004934b3  56                   push esi
// 004934b4  8bf1                 mov esi, ecx
// 004934b6  57                   push edi
// 004934b7  c7461000000000       mov dword ptr [esi + 0x10], 0
// 004934be  6a40                 push 0x40
// 004934c0  f30f114658           movss dword ptr [esi + 0x58], xmm0
// 004934c5  f30f1106             movss dword ptr [esi], xmm0
// 004934c9  f30f114604           movss dword ptr [esi + 4], xmm0
// 004934ce  f30f114608           movss dword ptr [esi + 8], xmm0
// 004934d3  f30f100524f6a100     movss xmm0, dword ptr [0xa1f624]
// 004934db  8d7e14               lea edi, [esi + 0x14]
// 004934de  6a00                 push 0
// 004934e0  57                   push edi
// 004934e1  f30f11460c           movss dword ptr [esi + 0xc], xmm0
// 004934e6  c7465404000000       mov dword ptr [esi + 0x54], 4
// 004934ed  e8f2563100           call 0x7a8be4
// 004934f2  f30f100524f6a100     movss xmm0, dword ptr [0xa1f624]
// 004934fa  83c40c               add esp, 0xc
// 004934fd  f30f1107             movss dword ptr [edi], xmm0
// 00493501  5f                   pop edi
// 00493502  f30f114628           movss dword ptr [esi + 0x28], xmm0
// 00493507  f30f11463c           movss dword ptr [esi + 0x3c], xmm0
// 0049350c  f30f114650           movss dword ptr [esi + 0x50], xmm0
// 00493511  8bc6                 mov eax, esi
// 00493513  5e                   pop esi
// 00493514  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??0TextureUnit@RenderState@RenderDevice@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
