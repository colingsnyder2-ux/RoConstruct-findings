// roc 2009-12 005f6ec0  unit: G3D::BinaryInput  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f6ec0
//
// 005f6ec0  b801000000           mov eax, 1
// 005f6ec5  84052440b800         test byte ptr [0xb84024], al
// 005f6ecb  7531                 jne 0x5f6efe
// 005f6ecd  f30f100518ea9a00     movss xmm0, dword ptr [0x9aea18]
// 005f6ed5  09052440b800         or dword ptr [0xb84024], eax
// 005f6edb  f30f11051840b800     movss dword ptr [0xb84018], xmm0
// 005f6ee3  f30f1005dcf29a00     movss xmm0, dword ptr [0x9af2dc]
// 005f6eeb  f30f11051c40b800     movss dword ptr [0xb8401c], xmm0
// 005f6ef3  0f57c0               xorps xmm0, xmm0
// 005f6ef6  f30f11052040b800     movss dword ptr [0xb84020], xmm0
// 005f6efe  b81840b800           mov eax, 0xb84018
// 005f6f03  c3                   ret 
// library g3d-6.09/G3Dcpp\Color3.cpp (function ?orange@Color3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Color3.cpp
