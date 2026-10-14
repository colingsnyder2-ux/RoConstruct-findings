// roc 2010-06 00559e50  unit: G3D::BinaryInput  size: 430 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00559e50
//
// 00559e50  b801000000           mov eax, 1
// 00559e55  8405f8a0c000         test byte ptr [0xc0a0f8], al
// 00559e5b  0f8586010000         jne 0x559fe7
// 00559e61  f30f100508b7b900     movss xmm0, dword ptr [0xb9b708]
// 00559e69  f30f110598a0c000     movss dword ptr [0xc0a098], xmm0
// 00559e71  f30f10050cb7b900     movss xmm0, dword ptr [0xb9b70c]
// 00559e79  f30f11059ca0c000     movss dword ptr [0xc0a09c], xmm0
// 00559e81  f30f100510b7b900     movss xmm0, dword ptr [0xb9b710]
// 00559e89  f30f1105a0a0c000     movss dword ptr [0xc0a0a0], xmm0
// 00559e91  f30f1005f0b6b900     movss xmm0, dword ptr [0xb9b6f0]
// 00559e99  f30f1105a4a0c000     movss dword ptr [0xc0a0a4], xmm0
// 00559ea1  f30f1005f4b6b900     movss xmm0, dword ptr [0xb9b6f4]
// 00559ea9  f30f1105a8a0c000     movss dword ptr [0xc0a0a8], xmm0
// 00559eb1  f30f1005f8b6b900     movss xmm0, dword ptr [0xb9b6f8]
// 00559eb9  f30f1105aca0c000     movss dword ptr [0xc0a0ac], xmm0
// 00559ec1  f30f1005fcb6b900     movss xmm0, dword ptr [0xb9b6fc]
// 00559ec9  f30f1105b0a0c000     movss dword ptr [0xc0a0b0], xmm0
// 00559ed1  f30f100500b7b900     movss xmm0, dword ptr [0xb9b700]
// 00559ed9  f30f1105b4a0c000     movss dword ptr [0xc0a0b4], xmm0
// 00559ee1  f30f100504b7b900     movss xmm0, dword ptr [0xb9b704]
// 00559ee9  f30f1105b8a0c000     movss dword ptr [0xc0a0b8], xmm0
// 00559ef1  f30f100544b7b900     movss xmm0, dword ptr [0xb9b744]
// 00559ef9  f30f1105bca0c000     movss dword ptr [0xc0a0bc], xmm0
// 00559f01  f30f100548b7b900     movss xmm0, dword ptr [0xb9b748]
// 00559f09  f30f1105c0a0c000     movss dword ptr [0xc0a0c0], xmm0
// 00559f11  f30f10054cb7b900     movss xmm0, dword ptr [0xb9b74c]
// 00559f19  f30f1105c4a0c000     movss dword ptr [0xc0a0c4], xmm0
// 00559f21  f30f10052cb7b900     movss xmm0, dword ptr [0xb9b72c]
// 00559f29  0905f8a0c000         or dword ptr [0xc0a0f8], eax
// 00559f2f  f30f1105c8a0c000     movss dword ptr [0xc0a0c8], xmm0
// 00559f37  f30f100530b7b900     movss xmm0, dword ptr [0xb9b730]
// 00559f3f  f30f1105cca0c000     movss dword ptr [0xc0a0cc], xmm0
// 00559f47  f30f100534b7b900     movss xmm0, dword ptr [0xb9b734]
// 00559f4f  f30f1105d0a0c000     movss dword ptr [0xc0a0d0], xmm0
// 00559f57  f30f100520b7b900     movss xmm0, dword ptr [0xb9b720]
// 00559f5f  f30f1105d4a0c000     movss dword ptr [0xc0a0d4], xmm0
// 00559f67  f30f100524b7b900     movss xmm0, dword ptr [0xb9b724]
// 00559f6f  f30f1105d8a0c000     movss dword ptr [0xc0a0d8], xmm0
// 00559f77  f30f100528b7b900     movss xmm0, dword ptr [0xb9b728]
// 00559f7f  f30f1105dca0c000     movss dword ptr [0xc0a0dc], xmm0
// 00559f87  f30f100514b7b900     movss xmm0, dword ptr [0xb9b714]
// 00559f8f  f30f1105e0a0c000     movss dword ptr [0xc0a0e0], xmm0
// 00559f97  f30f100518b7b900     movss xmm0, dword ptr [0xb9b718]
// 00559f9f  f30f1105e4a0c000     movss dword ptr [0xc0a0e4], xmm0
// 00559fa7  f30f10051cb7b900     movss xmm0, dword ptr [0xb9b71c]
// 00559faf  f30f1105e8a0c000     movss dword ptr [0xc0a0e8], xmm0
// 00559fb7  f30f100538b7b900     movss xmm0, dword ptr [0xb9b738]
// 00559fbf  f30f1105eca0c000     movss dword ptr [0xc0a0ec], xmm0
// 00559fc7  f30f10053cb7b900     movss xmm0, dword ptr [0xb9b73c]
// 00559fcf  f30f1105f0a0c000     movss dword ptr [0xc0a0f0], xmm0
// 00559fd7  f30f100540b7b900     movss xmm0, dword ptr [0xb9b740]
// 00559fdf  f30f1105f4a0c000     movss dword ptr [0xc0a0f4], xmm0
// 00559fe7  6a07                 push 7
// 00559fe9  6a00                 push 0
// 00559feb  e8e05f0000           call 0x55ffd0
// 00559ff0  8d0440               lea eax, [eax + eax*2]
// 00559ff3  83c408               add esp, 8
// 00559ff6  8d048598a0c000       lea eax, [eax*4 + 0xc0a098]
// 00559ffd  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\Color3.cpp (function ?wheelRandom@Color3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Color3.cpp
