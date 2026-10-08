// from server: 100% by auto
// roc 2010-06 00492840  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00492840
//
// 00492840  56                   push esi
// 00492841  8bf1                 mov esi, ecx
// 00492843  e8d84a0c00           call 0x557320
// 00492848  50                   push eax
// 00492849  8bce                 mov ecx, esi
// 0049284b  e820380c00           call 0x556070
// 00492850  b801000000           mov eax, 1
// 00492855  8405d03cc000         test byte ptr [0xc03cd0], al
// 0049285b  7521                 jne 0x49287e
// 0049285d  0f57c0               xorps xmm0, xmm0
// 00492860  0905d03cc000         or dword ptr [0xc03cd0], eax
// 00492866  f30f1105c43cc000     movss dword ptr [0xc03cc4], xmm0
// 0049286e  f30f1105c83cc000     movss dword ptr [0xc03cc8], xmm0
// 00492876  f30f1105cc3cc000     movss dword ptr [0xc03ccc], xmm0
// 0049287e  f30f1005c43cc000     movss xmm0, dword ptr [0xc03cc4]
// 00492886  f30f114624           movss dword ptr [esi + 0x24], xmm0
// 0049288b  f30f1005c83cc000     movss xmm0, dword ptr [0xc03cc8]
// 00492893  f30f114628           movss dword ptr [esi + 0x28], xmm0
// 00492898  f30f1005cc3cc000     movss xmm0, dword ptr [0xc03ccc]
// 004928a0  f30f11462c           movss dword ptr [esi + 0x2c], xmm0
// 004928a5  8bc6                 mov eax, esi
// 004928a7  5e                   pop esi
// 004928a8  c3                   ret 
// library g3d-6.09/G3Dcpp\Box.cpp (function ??0CoordinateFrame@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Box.cpp
