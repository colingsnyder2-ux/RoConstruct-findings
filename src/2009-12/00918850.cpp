// roc 2009-12 00918850  unit: G3D::Sky  size: 350 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00918850
//
// 00918850  0f57c0               xorps xmm0, xmm0
// 00918853  53                   push ebx
// 00918854  56                   push esi
// 00918855  8bf1                 mov esi, ecx
// 00918857  f30f11463c           movss dword ptr [esi + 0x3c], xmm0
// 0091885c  f30f114640           movss dword ptr [esi + 0x40], xmm0
// 00918861  f30f114644           movss dword ptr [esi + 0x44], xmm0
// 00918866  f30f114650           movss dword ptr [esi + 0x50], xmm0
// 0091886b  f30f114654           movss dword ptr [esi + 0x54], xmm0
// 00918870  f30f114658           movss dword ptr [esi + 0x58], xmm0
// 00918875  f30f11465c           movss dword ptr [esi + 0x5c], xmm0
// 0091887a  f30f114660           movss dword ptr [esi + 0x60], xmm0
// 0091887f  f30f114664           movss dword ptr [esi + 0x64], xmm0
// 00918884  f30f114668           movss dword ptr [esi + 0x68], xmm0
// 00918889  f30f11466c           movss dword ptr [esi + 0x6c], xmm0
// 0091888e  f30f114670           movss dword ptr [esi + 0x70], xmm0
// 00918893  57                   push edi
// 00918894  f30f114674           movss dword ptr [esi + 0x74], xmm0
// 00918899  f30f114678           movss dword ptr [esi + 0x78], xmm0
// 0091889e  f30f11467c           movss dword ptr [esi + 0x7c], xmm0
// 009188a3  8dbe88000000         lea edi, [esi + 0x88]
// 009188a9  e802c1cdff           call 0x5f49b0
// 009188ae  50                   push eax
// 009188af  8bcf                 mov ecx, edi
// 009188b1  e84ab0cdff           call 0x5f3900
// 009188b6  bb01000000           mov ebx, 1
// 009188bb  841d2cccb700         test byte ptr [0xb7cc2c], bl
// 009188c1  7521                 jne 0x9188e4
// 009188c3  0f57c0               xorps xmm0, xmm0
// 009188c6  091d2cccb700         or dword ptr [0xb7cc2c], ebx
// 009188cc  f30f110520ccb700     movss dword ptr [0xb7cc20], xmm0
// 009188d4  f30f110524ccb700     movss dword ptr [0xb7cc24], xmm0
// 009188dc  f30f110528ccb700     movss dword ptr [0xb7cc28], xmm0
// 009188e4  f30f100520ccb700     movss xmm0, dword ptr [0xb7cc20]
// 009188ec  f30f114724           movss dword ptr [edi + 0x24], xmm0
// 009188f1  f30f100524ccb700     movss xmm0, dword ptr [0xb7cc24]
// 009188f9  f30f114728           movss dword ptr [edi + 0x28], xmm0
// 009188fe  f30f100528ccb700     movss xmm0, dword ptr [0xb7cc28]
// 00918906  f30f11472c           movss dword ptr [edi + 0x2c], xmm0
// 0091890b  8dbeb8000000         lea edi, [esi + 0xb8]
// 00918911  e89ac0cdff           call 0x5f49b0
// 00918916  50                   push eax
// 00918917  8bcf                 mov ecx, edi
// 00918919  e8e2afcdff           call 0x5f3900
// 0091891e  0f57c0               xorps xmm0, xmm0
// 00918921  841d2cccb700         test byte ptr [0xb7cc2c], bl
// 00918927  751e                 jne 0x918947
// 00918929  091d2cccb700         or dword ptr [0xb7cc2c], ebx
// 0091892f  f30f110520ccb700     movss dword ptr [0xb7cc20], xmm0
// 00918937  f30f110524ccb700     movss dword ptr [0xb7cc24], xmm0
// 0091893f  f30f110528ccb700     movss dword ptr [0xb7cc28], xmm0
// 00918947  f30f100d20ccb700     movss xmm1, dword ptr [0xb7cc20]
// 0091894f  d9ee                 fldz 
// 00918951  f30f114f24           movss dword ptr [edi + 0x24], xmm1
// 00918956  f30f100d24ccb700     movss xmm1, dword ptr [0xb7cc24]
// 0091895e  f30f114f28           movss dword ptr [edi + 0x28], xmm1
// 00918963  f30f100d28ccb700     movss xmm1, dword ptr [0xb7cc28]
// 0091896b  f30f114f2c           movss dword ptr [edi + 0x2c], xmm1
// 00918970  f30f1186e8000000     movss dword ptr [esi + 0xe8], xmm0
// 00918978  f30f1186ec000000     movss dword ptr [esi + 0xec], xmm0
// 00918980  f30f1186f0000000     movss dword ptr [esi + 0xf0], xmm0
// 00918988  f30f1005b84aa200     movss xmm0, dword ptr [0xa24ab8]
// 00918990  83ec08               sub esp, 8
// 00918993  8bce                 mov ecx, esi
// 00918995  dd1c24               fstp qword ptr [esp]
// 00918998  885e4c               mov byte ptr [esi + 0x4c], bl
// 0091899b  f30f1186f4000000     movss dword ptr [esi + 0xf4], xmm0
// 009189a3  e888edffff           call 0x917730
// 009189a8  5f                   pop edi
// 009189a9  8bc6                 mov eax, esi
// 009189ab  5e                   pop esi
// 009189ac  5b                   pop ebx
// 009189ad  c3                   ret 
// library g3d-6.09/GLG3Dcpp\LightingParameters.cpp (function ??0LightingParameters@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/LightingParameters.cpp
