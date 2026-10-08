// roc 2009-12 005f6db0  unit: G3D::BinaryInput  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f6db0
//
// 005f6db0  b801000000           mov eax, 1
// 005f6db5  8405e43fb800         test byte ptr [0xb83fe4], al
// 005f6dbb  7529                 jne 0x5f6de6
// 005f6dbd  0f57c0               xorps xmm0, xmm0
// 005f6dc0  f30f100d18ea9a00     movss xmm1, dword ptr [0x9aea18]
// 005f6dc8  0905e43fb800         or dword ptr [0xb83fe4], eax
// 005f6dce  f30f1105d83fb800     movss dword ptr [0xb83fd8], xmm0
// 005f6dd6  f30f110ddc3fb800     movss dword ptr [0xb83fdc], xmm1
// 005f6dde  f30f1105e03fb800     movss dword ptr [0xb83fe0], xmm0
// 005f6de6  b8d83fb800           mov eax, 0xb83fd8
// 005f6deb  c3                   ret 
// library g3d-6.09/G3Dcpp\Box.cpp (function ?unitY@Vector3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Box.cpp
