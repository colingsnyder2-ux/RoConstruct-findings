// roc 2009-12 004c6a40  unit: G3D::ReferenceCountedObject  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c6a40
//
// 004c6a40  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 004c6a48  8bc1                 mov eax, ecx
// 004c6a4a  b901000000           mov ecx, 1
// 004c6a4f  c70003000000         mov dword ptr [eax], 3
// 004c6a55  894804               mov dword ptr [eax + 4], ecx
// 004c6a58  c7400800000000       mov dword ptr [eax + 8], 0
// 004c6a5f  f30f11400c           movss dword ptr [eax + 0xc], xmm0
// 004c6a64  884810               mov byte ptr [eax + 0x10], cl
// 004c6a67  c74014e8030000       mov dword ptr [eax + 0x14], 0x3e8
// 004c6a6e  c7401818fcffff       mov dword ptr [eax + 0x18], 0xfffffc18
// 004c6a75  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??0Settings@Texture@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
