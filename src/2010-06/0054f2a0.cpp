// roc 2010-06 0054f2a0  unit: G3D::Shader  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054f2a0
//
// 0054f2a0  b801000000           mov eax, 1
// 0054f2a5  8405049fc000         test byte ptr [0xc09f04], al
// 0054f2ab  7519                 jne 0x54f2c6
// 0054f2ad  0f57c0               xorps xmm0, xmm0
// 0054f2b0  0905049fc000         or dword ptr [0xc09f04], eax
// 0054f2b6  f30f1105fc9ec000     movss dword ptr [0xc09efc], xmm0
// 0054f2be  f30f1105009fc000     movss dword ptr [0xc09f00], xmm0
// 0054f2c6  b8fc9ec000           mov eax, 0xc09efc
// 0054f2cb  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector2.cpp (function ?zero@Vector2@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Vector2.cpp
