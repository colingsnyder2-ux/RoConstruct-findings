// roc 2009-12 005f6700  unit: G3D::BinaryInput  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f6700
//
// 005f6700  b801000000           mov eax, 1
// 005f6705  8405603fb800         test byte ptr [0xb83f60], al
// 005f670b  7529                 jne 0x5f6736
// 005f670d  0f57c0               xorps xmm0, xmm0
// 005f6710  0905603fb800         or dword ptr [0xb83f60], eax
// 005f6716  f30f1105503fb800     movss dword ptr [0xb83f50], xmm0
// 005f671e  f30f1105543fb800     movss dword ptr [0xb83f54], xmm0
// 005f6726  f30f1105583fb800     movss dword ptr [0xb83f58], xmm0
// 005f672e  f30f11055c3fb800     movss dword ptr [0xb83f5c], xmm0
// 005f6736  b8503fb800           mov eax, 0xb83f50
// 005f673b  c3                   ret 
// library g3d-6.09/G3Dcpp\Color4.cpp (function ?zero@Color4@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
