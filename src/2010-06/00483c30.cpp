// from server: 100% by auto
// roc 2010-06 00483c30  unit: G3D::ReferenceCountedObject  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00483c30
//
// 00483c30  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 00483c38  8bc1                 mov eax, ecx
// 00483c3a  b901000000           mov ecx, 1
// 00483c3f  c70003000000         mov dword ptr [eax], 3
// 00483c45  894804               mov dword ptr [eax + 4], ecx
// 00483c48  c7400800000000       mov dword ptr [eax + 8], 0
// 00483c4f  f30f11400c           movss dword ptr [eax + 0xc], xmm0
// 00483c54  884810               mov byte ptr [eax + 0x10], cl
// 00483c57  c74014e8030000       mov dword ptr [eax + 0x14], 0x3e8
// 00483c5e  c7401818fcffff       mov dword ptr [eax + 0x18], 0xfffffc18
// 00483c65  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??0Settings@Texture@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
