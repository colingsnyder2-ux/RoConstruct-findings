// from server: 100% by auto
// roc 2012-06 00627310  unit: seg_00620000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00627310
//
// 00627310  b801000000           mov eax, 1
// 00627315  84053484e200         test byte ptr [0xe28434], al
// 0062731b  7519                 jne 0x627336
// 0062731d  0f57c0               xorps xmm0, xmm0
// 00627320  09053484e200         or dword ptr [0xe28434], eax
// 00627326  f30f11052c84e200     movss dword ptr [0xe2842c], xmm0
// 0062732e  f30f11053084e200     movss dword ptr [0xe28430], xmm0
// 00627336  b82c84e200           mov eax, 0xe2842c
// 0062733b  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector2.cpp (function ?zero@Vector2@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Vector2.cpp
