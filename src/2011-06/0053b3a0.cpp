// roc 2011-06 0053b3a0  unit: seg_00530000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0053b3a0
//
// 0053b3a0  b801000000           mov eax, 1
// 0053b3a5  840584a0cb00         test byte ptr [0xcba084], al
// 0053b3ab  7519                 jne 0x53b3c6
// 0053b3ad  0f57c0               xorps xmm0, xmm0
// 0053b3b0  090584a0cb00         or dword ptr [0xcba084], eax
// 0053b3b6  f30f11057ca0cb00     movss dword ptr [0xcba07c], xmm0
// 0053b3be  f30f110580a0cb00     movss dword ptr [0xcba080], xmm0
// 0053b3c6  b87ca0cb00           mov eax, 0xcba07c
// 0053b3cb  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector2.cpp (function ?zero@Vector2@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Vector2.cpp
