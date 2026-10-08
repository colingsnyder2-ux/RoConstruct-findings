// roc 2009-12 005f6d70  unit: G3D::BinaryInput  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f6d70
//
// 005f6d70  b801000000           mov eax, 1
// 005f6d75  8405d43fb800         test byte ptr [0xb83fd4], al
// 005f6d7b  7529                 jne 0x5f6da6
// 005f6d7d  f30f100518ea9a00     movss xmm0, dword ptr [0x9aea18]
// 005f6d85  0905d43fb800         or dword ptr [0xb83fd4], eax
// 005f6d8b  f30f1105c83fb800     movss dword ptr [0xb83fc8], xmm0
// 005f6d93  0f57c0               xorps xmm0, xmm0
// 005f6d96  f30f1105cc3fb800     movss dword ptr [0xb83fcc], xmm0
// 005f6d9e  f30f1105d03fb800     movss dword ptr [0xb83fd0], xmm0
// 005f6da6  b8c83fb800           mov eax, 0xb83fc8
// 005f6dab  c3                   ret 
// library g3d-6.09/G3Dcpp\Box.cpp (function ?unitX@Vector3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Box.cpp
