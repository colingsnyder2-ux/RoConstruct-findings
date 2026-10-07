// roc 2010-06 00915f50  unit: G3D::Sky  size: 350 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00915f50
//
// 00915f50  0f57c0               xorps xmm0, xmm0
// 00915f53  53                   push ebx
// 00915f54  56                   push esi
// 00915f55  8bf1                 mov esi, ecx
// 00915f57  f30f11463c           movss dword ptr [esi + 0x3c], xmm0
// 00915f5c  f30f114640           movss dword ptr [esi + 0x40], xmm0
// 00915f61  f30f114644           movss dword ptr [esi + 0x44], xmm0
// 00915f66  f30f114650           movss dword ptr [esi + 0x50], xmm0
// 00915f6b  f30f114654           movss dword ptr [esi + 0x54], xmm0
// 00915f70  f30f114658           movss dword ptr [esi + 0x58], xmm0
// 00915f75  f30f11465c           movss dword ptr [esi + 0x5c], xmm0
// 00915f7a  f30f114660           movss dword ptr [esi + 0x60], xmm0
// 00915f7f  f30f114664           movss dword ptr [esi + 0x64], xmm0
// 00915f84  f30f114668           movss dword ptr [esi + 0x68], xmm0
// 00915f89  f30f11466c           movss dword ptr [esi + 0x6c], xmm0
// 00915f8e  f30f114670           movss dword ptr [esi + 0x70], xmm0
// 00915f93  57                   push edi
// 00915f94  f30f114674           movss dword ptr [esi + 0x74], xmm0
// 00915f99  f30f114678           movss dword ptr [esi + 0x78], xmm0
// 00915f9e  f30f11467c           movss dword ptr [esi + 0x7c], xmm0
// 00915fa3  8dbe88000000         lea edi, [esi + 0x88]
// 00915fa9  e87213c4ff           call 0x557320
// 00915fae  50                   push eax
// 00915faf  8bcf                 mov ecx, edi
// 00915fb1  e8ba00c4ff           call 0x556070
// 00915fb6  bb01000000           mov ebx, 1
// 00915fbb  841dd03cc000         test byte ptr [0xc03cd0], bl
// 00915fc1  7521                 jne 0x915fe4
// 00915fc3  0f57c0               xorps xmm0, xmm0
// 00915fc6  091dd03cc000         or dword ptr [0xc03cd0], ebx
// 00915fcc  f30f1105c43cc000     movss dword ptr [0xc03cc4], xmm0
// 00915fd4  f30f1105c83cc000     movss dword ptr [0xc03cc8], xmm0
// 00915fdc  f30f1105cc3cc000     movss dword ptr [0xc03ccc], xmm0
// 00915fe4  f30f1005c43cc000     movss xmm0, dword ptr [0xc03cc4]
// 00915fec  f30f114724           movss dword ptr [edi + 0x24], xmm0
// 00915ff1  f30f1005c83cc000     movss xmm0, dword ptr [0xc03cc8]
// 00915ff9  f30f114728           movss dword ptr [edi + 0x28], xmm0
// 00915ffe  f30f1005cc3cc000     movss xmm0, dword ptr [0xc03ccc]
// 00916006  f30f11472c           movss dword ptr [edi + 0x2c], xmm0
// 0091600b  8dbeb8000000         lea edi, [esi + 0xb8]
// 00916011  e80a13c4ff           call 0x557320
// 00916016  50                   push eax
// 00916017  8bcf                 mov ecx, edi
// 00916019  e85200c4ff           call 0x556070
// 0091601e  0f57c0               xorps xmm0, xmm0
// 00916021  841dd03cc000         test byte ptr [0xc03cd0], bl
// 00916027  751e                 jne 0x916047
// 00916029  091dd03cc000         or dword ptr [0xc03cd0], ebx
// 0091602f  f30f1105c43cc000     movss dword ptr [0xc03cc4], xmm0
// 00916037  f30f1105c83cc000     movss dword ptr [0xc03cc8], xmm0
// 0091603f  f30f1105cc3cc000     movss dword ptr [0xc03ccc], xmm0
// 00916047  f30f100dc43cc000     movss xmm1, dword ptr [0xc03cc4]
// 0091604f  d9ee                 fldz 
// 00916051  f30f114f24           movss dword ptr [edi + 0x24], xmm1
// 00916056  f30f100dc83cc000     movss xmm1, dword ptr [0xc03cc8]
// 0091605e  f30f114f28           movss dword ptr [edi + 0x28], xmm1
// 00916063  f30f100dcc3cc000     movss xmm1, dword ptr [0xc03ccc]
// 0091606b  f30f114f2c           movss dword ptr [edi + 0x2c], xmm1
// 00916070  f30f1186e8000000     movss dword ptr [esi + 0xe8], xmm0
// 00916078  f30f1186ec000000     movss dword ptr [esi + 0xec], xmm0
// 00916080  f30f1186f0000000     movss dword ptr [esi + 0xf0], xmm0
// 00916088  f30f100590c1a800     movss xmm0, dword ptr [0xa8c190]
// 00916090  83ec08               sub esp, 8
// 00916093  8bce                 mov ecx, esi
// 00916095  dd1c24               fstp qword ptr [esp]
// 00916098  885e4c               mov byte ptr [esi + 0x4c], bl
// 0091609b  f30f1186f4000000     movss dword ptr [esi + 0xf4], xmm0
// 009160a3  e888edffff           call 0x914e30
// 009160a8  5f                   pop edi
// 009160a9  8bc6                 mov eax, esi
// 009160ab  5e                   pop esi
// 009160ac  5b                   pop ebx
// 009160ad  c3                   ret 
// library g3d-6.09/GLG3Dcpp\LightingParameters.cpp (function ??0LightingParameters@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/LightingParameters.cpp
