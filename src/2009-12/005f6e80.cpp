// roc 2009-12 005f6e80  unit: G3D::BinaryInput  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f6e80
//
// 005f6e80  b801000000           mov eax, 1
// 005f6e85  84051440b800         test byte ptr [0xb84014], al
// 005f6e8b  7529                 jne 0x5f6eb6
// 005f6e8d  f30f100518ea9a00     movss xmm0, dword ptr [0x9aea18]
// 005f6e95  09051440b800         or dword ptr [0xb84014], eax
// 005f6e9b  f30f11050840b800     movss dword ptr [0xb84008], xmm0
// 005f6ea3  f30f11050c40b800     movss dword ptr [0xb8400c], xmm0
// 005f6eab  0f57c0               xorps xmm0, xmm0
// 005f6eae  f30f11051040b800     movss dword ptr [0xb84010], xmm0
// 005f6eb6  b80840b800           mov eax, 0xb84008
// 005f6ebb  c3                   ret 
// library g3d-6.09/G3Dcpp\Color3.cpp (function ?yellow@Color3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Color3.cpp
