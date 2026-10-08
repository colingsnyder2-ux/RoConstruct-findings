// roc 2009-12 005ebc60  unit: G3D::Shader  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ebc60
//
// 005ebc60  b801000000           mov eax, 1
// 005ebc65  84053c3eb800         test byte ptr [0xb83e3c], al
// 005ebc6b  7519                 jne 0x5ebc86
// 005ebc6d  0f57c0               xorps xmm0, xmm0
// 005ebc70  09053c3eb800         or dword ptr [0xb83e3c], eax
// 005ebc76  f30f1105343eb800     movss dword ptr [0xb83e34], xmm0
// 005ebc7e  f30f1105383eb800     movss dword ptr [0xb83e38], xmm0
// 005ebc86  b8343eb800           mov eax, 0xb83e34
// 005ebc8b  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector2.cpp (function ?zero@Vector2@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Vector2.cpp
