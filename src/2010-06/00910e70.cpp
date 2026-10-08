// roc 2010-06 00910e70  unit: G3D::GFont  size: 1315 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00910e70
//
// 00910e70  6aff                 push -1
// 00910e72  68be149c00           push 0x9c14be
// 00910e77  64a100000000         mov eax, dword ptr fs:[0]
// 00910e7d  50                   push eax
// 00910e7e  64892500000000       mov dword ptr fs:[0], esp
// 00910e85  83ec60               sub esp, 0x60
// 00910e88  53                   push ebx
// 00910e89  55                   push ebp
// 00910e8a  56                   push esi
// 00910e8b  8b74247c             mov esi, dword ptr [esp + 0x7c]
// 00910e8f  57                   push edi
// 00910e90  56                   push esi
// 00910e91  8bf9                 mov edi, ecx
// 00910e93  e8e8faffff           call 0x910980
// 00910e98  56                   push esi
// 00910e99  8d842484000000       lea eax, [esp + 0x84]
// 00910ea0  50                   push eax
// 00910ea1  8bcf                 mov ecx, edi
// 00910ea3  e858f4ffff           call 0x910300
// 00910ea8  8bce                 mov ecx, esi
// 00910eaa  c744247800000000     mov dword ptr [esp + 0x78], 0
// 00910eb2  e8a970b8ff           call 0x497f60
// 00910eb7  d9ee                 fldz 
// 00910eb9  83ec08               sub esp, 8
// 00910ebc  dd1c24               fstp qword ptr [esp]
// 00910ebf  6a06                 push 6
// 00910ec1  8bce                 mov ecx, esi
// 00910ec3  e80807b8ff           call 0x4915d0
// 00910ec8  e8438fc4ff           call 0x559e10
// 00910ecd  f30f1000             movss xmm0, dword ptr [eax]
// 00910ed1  f30f104804           movss xmm1, dword ptr [eax + 4]
// 00910ed6  f30f105008           movss xmm2, dword ptr [eax + 8]
// 00910edb  8d86a8040000         lea eax, [esi + 0x4a8]
// 00910ee1  f30f1100             movss dword ptr [eax], xmm0
// 00910ee5  f30f100524f6a100     movss xmm0, dword ptr [0xa1f624]
// 00910eed  50                   push eax
// 00910eee  f30f114804           movss dword ptr [eax + 4], xmm1
// 00910ef3  f30f115008           movss dword ptr [eax + 8], xmm2
// 00910ef8  f30f11400c           movss dword ptr [eax + 0xc], xmm0
// 00910efd  ff150cac9e00         call dword ptr [0x9eac0c]
// 00910f03  e81864c4ff           call 0x557320
// 00910f08  50                   push eax
// 00910f09  8d4c2444             lea ecx, [esp + 0x44]
// 00910f0d  e85e51c4ff           call 0x556070
// 00910f12  f605d03cc00001       test byte ptr [0xc03cd0], 1
// 00910f19  0f57c0               xorps xmm0, xmm0
// 00910f1c  751f                 jne 0x910f3d
// 00910f1e  830dd03cc00001       or dword ptr [0xc03cd0], 1
// 00910f25  f30f1105c43cc000     movss dword ptr [0xc03cc4], xmm0
// 00910f2d  f30f1105c83cc000     movss dword ptr [0xc03cc8], xmm0
// 00910f35  f30f1105cc3cc000     movss dword ptr [0xc03ccc], xmm0
// 00910f3d  f30f1005c43cc000     movss xmm0, dword ptr [0xc03cc4]
// 00910f45  f30f11442464         movss dword ptr [esp + 0x64], xmm0
// 00910f4b  f30f1005c83cc000     movss xmm0, dword ptr [0xc03cc8]
// 00910f53  8d4c2440             lea ecx, [esp + 0x40]
// 00910f57  f30f11442468         movss dword ptr [esp + 0x68], xmm0
// 00910f5d  f30f1005cc3cc000     movss xmm0, dword ptr [0xc03ccc]
// 00910f65  51                   push ecx
// 00910f66  8bce                 mov ecx, esi
// 00910f68  f30f11442470         movss dword ptr [esp + 0x70], xmm0
// 00910f6e  e89d28b8ff           call 0x493810
// 00910f73  e8a863c4ff           call 0x557320
// 00910f78  50                   push eax
// 00910f79  8d4c2444             lea ecx, [esp + 0x44]
// 00910f7d  e8ee50c4ff           call 0x556070
// 00910f82  f605d03cc00001       test byte ptr [0xc03cd0], 1
// 00910f89  7522                 jne 0x910fad
// 00910f8b  0f57c0               xorps xmm0, xmm0
// 00910f8e  830dd03cc00001       or dword ptr [0xc03cd0], 1
// 00910f95  f30f1105c43cc000     movss dword ptr [0xc03cc4], xmm0
// 00910f9d  f30f1105c83cc000     movss dword ptr [0xc03cc8], xmm0
// 00910fa5  f30f1105cc3cc000     movss dword ptr [0xc03ccc], xmm0
// 00910fad  f30f1005c43cc000     movss xmm0, dword ptr [0xc03cc4]
// 00910fb5  f30f11442464         movss dword ptr [esp + 0x64], xmm0
// 00910fbb  f30f1005c83cc000     movss xmm0, dword ptr [0xc03cc8]
// 00910fc3  8d542440             lea edx, [esp + 0x40]
// 00910fc7  f30f11442468         movss dword ptr [esp + 0x68], xmm0
// 00910fcd  f30f1005cc3cc000     movss xmm0, dword ptr [0xc03ccc]
// 00910fd5  52                   push edx
// 00910fd6  8bce                 mov ecx, esi
// 00910fd8  f30f11442470         movss dword ptr [esp + 0x70], xmm0
// 00910fde  e87d0db8ff           call 0x491d60
// 00910fe3  8bce                 mov ecx, esi
// 00910fe5  e8d61bb8ff           call 0x492bc0
// 00910fea  f30f2ac0             cvtsi2ss xmm0, eax
// 00910fee  8bce                 mov ecx, esi
// 00910ff0  f30f11442418         movss dword ptr [esp + 0x18], xmm0
// 00910ff6  e8e51bb8ff           call 0x492be0
// 00910ffb  0f57c0               xorps xmm0, xmm0
// 00910ffe  f30f10542418         movss xmm2, dword ptr [esp + 0x18]
// 00911004  0f2fc2               comiss xmm0, xmm2
// 00911007  f30f2ac8             cvtsi2ss xmm1, eax
// 0091100b  f30f11442414         movss dword ptr [esp + 0x14], xmm0
// 00911011  f30f1144241c         movss dword ptr [esp + 0x1c], xmm0
// 00911017  f30f11542410         movss dword ptr [esp + 0x10], xmm2
// 0091101d  f30f114c2418         movss dword ptr [esp + 0x18], xmm1
// 00911023  8d442410             lea eax, [esp + 0x10]
// 00911027  7704                 ja 0x91102d
// 00911029  8d442414             lea eax, [esp + 0x14]
// 0091102d  0f2fc1               comiss xmm0, xmm1
// 00911030  f30f1018             movss xmm3, dword ptr [eax]
// 00911034  f30f115c2420         movss dword ptr [esp + 0x20], xmm3
// 0091103a  8d442418             lea eax, [esp + 0x18]
// 0091103e  7704                 ja 0x911044
// 00911040  8d44241c             lea eax, [esp + 0x1c]
// 00911044  0f2fd0               comiss xmm2, xmm0
// 00911047  f30f1018             movss xmm3, dword ptr [eax]
// 0091104b  f30f115c2424         movss dword ptr [esp + 0x24], xmm3
// 00911051  8d442410             lea eax, [esp + 0x10]
// 00911055  7704                 ja 0x91105b
// 00911057  8d442414             lea eax, [esp + 0x14]
// 0091105b  0f2fc8               comiss xmm1, xmm0
// 0091105e  f30f1010             movss xmm2, dword ptr [eax]
// 00911062  f30f11542428         movss dword ptr [esp + 0x28], xmm2
// 00911068  8d442418             lea eax, [esp + 0x18]
// 0091106c  7704                 ja 0x911072
// 0091106e  8d44241c             lea eax, [esp + 0x1c]
// 00911072  f30f1000             movss xmm0, dword ptr [eax]
// 00911076  8b0f                 mov ecx, dword ptr [edi]
// 00911078  6a01                 push 1
// 0091107a  8d442424             lea eax, [esp + 0x24]
// 0091107e  50                   push eax
// 0091107f  f30f11442434         movss dword ptr [esp + 0x34], xmm0
// 00911085  e8e63ab7ff           call 0x484b70
// 0091108a  6830b4a800           push 0xa8b430
// 0091108f  8d4c2444             lea ecx, [esp + 0x44]
// 00911093  ff1510a49e00         call dword ptr [0x9ea410]
// 00911099  57                   push edi
// 0091109a  8d4c2444             lea ecx, [esp + 0x44]
// 0091109e  51                   push ecx
// 0091109f  8b0df4cbc200         mov ecx, dword ptr [0xc2cbf4]
// 009110a5  83c118               add ecx, 0x18
// 009110a8  c684248000000001     mov byte ptr [esp + 0x80], 1
// 009110b0  e85b8cb8ff           call 0x499d10
// 009110b5  8d4c2440             lea ecx, [esp + 0x40]
// 009110b9  c644247800           mov byte ptr [esp + 0x78], 0
// 009110be  ff1500a49e00         call dword ptr [0x9ea400]
// 009110c4  68f4cbc200           push 0xc2cbf4
// 009110c9  8bce                 mov ecx, esi
// 009110cb  e83026b8ff           call 0x493700
// 009110d0  e83b8dc4ff           call 0x559e10
// 009110d5  f30f1000             movss xmm0, dword ptr [eax]
// 009110d9  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 009110dc  f30f11442430         movss dword ptr [esp + 0x30], xmm0
// 009110e2  f30f104004           movss xmm0, dword ptr [eax + 4]
// 009110e7  8d542430             lea edx, [esp + 0x30]
// 009110eb  f30f11442434         movss dword ptr [esp + 0x34], xmm0
// 009110f1  f30f104008           movss xmm0, dword ptr [eax + 8]
// 009110f6  52                   push edx
// 009110f7  56                   push esi
// 009110f8  8d442448             lea eax, [esp + 0x48]
// 009110fc  f30f11442440         movss dword ptr [esp + 0x40], xmm0
// 00911102  f30f100524f6a100     movss xmm0, dword ptr [0xa1f624]
// 0091110a  8d6f10               lea ebp, [edi + 0x10]
// 0091110d  50                   push eax
// 0091110e  f30f11442448         movss dword ptr [esp + 0x48], xmm0
// 00911114  e82741b7ff           call 0x485240
// 00911119  50                   push eax
// 0091111a  e861caffff           call 0x90db80
// 0091111f  8b5d00               mov ebx, dword ptr [ebp]
// 00911122  83c40c               add esp, 0xc
// 00911125  6a01                 push 1
// 00911127  8d4c2444             lea ecx, [esp + 0x44]
// 0091112b  51                   push ecx
// 0091112c  8bcb                 mov ecx, ebx
// 0091112e  e80d41b7ff           call 0x485240
// 00911133  50                   push eax
// 00911134  8bcb                 mov ecx, ebx
// 00911136  e8353ab7ff           call 0x484b70
// 0091113b  6824b4a800           push 0xa8b424
// 00911140  8d4c2444             lea ecx, [esp + 0x44]
// 00911144  ff1510a49e00         call dword ptr [0x9ea410]
// 0091114a  8b0df8cbc200         mov ecx, dword ptr [0xc2cbf8]
// 00911150  55                   push ebp
// 00911151  8d542444             lea edx, [esp + 0x44]
// 00911155  52                   push edx
// 00911156  83c118               add ecx, 0x18
// 00911159  c684248000000002     mov byte ptr [esp + 0x80], 2
// 00911161  e8aa8bb8ff           call 0x499d10
// 00911166  8d4c2440             lea ecx, [esp + 0x40]
// 0091116a  c644247800           mov byte ptr [esp + 0x78], 0
// 0091116f  ff1500a49e00         call dword ptr [0x9ea400]
// 00911175  6818b4a800           push 0xa8b418
// 0091117a  8d4c2444             lea ecx, [esp + 0x44]
// 0091117e  ff1510a49e00         call dword ptr [0x9ea410]
// 00911184  8d842480000000       lea eax, [esp + 0x80]
// 0091118b  50                   push eax
// 0091118c  8d4c2444             lea ecx, [esp + 0x44]
// 00911190  51                   push ecx
// 00911191  8b0df8cbc200         mov ecx, dword ptr [0xc2cbf8]
// 00911197  83c118               add ecx, 0x18
// 0091119a  c684248000000003     mov byte ptr [esp + 0x80], 3
// 009111a2  e8698bb8ff           call 0x499d10
// 009111a7  c644247800           mov byte ptr [esp + 0x78], 0
// 009111ac  8d4c2440             lea ecx, [esp + 0x40]
// 009111b0  ff1500a49e00         call dword ptr [0x9ea400]
// 009111b6  68f8cbc200           push 0xc2cbf8
// 009111bb  8bce                 mov ecx, esi
// 009111bd  e83e25b8ff           call 0x493700
// 009111c2  e8498cc4ff           call 0x559e10
// 009111c7  f30f1000             movss xmm0, dword ptr [eax]
// 009111cb  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 009111d2  f30f11442430         movss dword ptr [esp + 0x30], xmm0
// 009111d8  f30f104004           movss xmm0, dword ptr [eax + 4]
// 009111dd  8d542430             lea edx, [esp + 0x30]
// 009111e1  f30f11442434         movss dword ptr [esp + 0x34], xmm0
// 009111e7  f30f104008           movss xmm0, dword ptr [eax + 8]
// 009111ec  52                   push edx
// 009111ed  56                   push esi
// 009111ee  8d442448             lea eax, [esp + 0x48]
// 009111f2  f30f11442440         movss dword ptr [esp + 0x40], xmm0
// 009111f8  f30f100524f6a100     movss xmm0, dword ptr [0xa1f624]
// 00911200  50                   push eax
// 00911201  f30f11442448         movss dword ptr [esp + 0x48], xmm0
// 00911207  e83440b7ff           call 0x485240
// 0091120c  50                   push eax
// 0091120d  e86ec9ffff           call 0x90db80
// 00911212  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00911219  83c40c               add esp, 0xc
// 0091121c  6a01                 push 1
// 0091121e  8d542444             lea edx, [esp + 0x44]
// 00911222  52                   push edx
// 00911223  8bd9                 mov ebx, ecx
// 00911225  e81640b7ff           call 0x485240
// 0091122a  50                   push eax
// 0091122b  8bcb                 mov ecx, ebx
// 0091122d  e83e39b7ff           call 0x484b70
// 00911232  6830b4a800           push 0xa8b430
// 00911237  8d4c2444             lea ecx, [esp + 0x44]
// 0091123b  ff1510a49e00         call dword ptr [0x9ea410]
// 00911241  8b0dfccbc200         mov ecx, dword ptr [0xc2cbfc]
// 00911247  57                   push edi
// 00911248  8d442444             lea eax, [esp + 0x44]
// 0091124c  50                   push eax
// 0091124d  83c118               add ecx, 0x18
// 00911250  c684248000000004     mov byte ptr [esp + 0x80], 4
// 00911258  e8b38ab8ff           call 0x499d10
// 0091125d  8d4c2440             lea ecx, [esp + 0x40]
// 00911261  c644247800           mov byte ptr [esp + 0x78], 0
// 00911266  ff1500a49e00         call dword ptr [0x9ea400]
// 0091126c  6824b4a800           push 0xa8b424
// 00911271  8d4c2444             lea ecx, [esp + 0x44]
// 00911275  ff1510a49e00         call dword ptr [0x9ea410]
// 0091127b  8d8c2480000000       lea ecx, [esp + 0x80]
// 00911282  51                   push ecx
// 00911283  8b0dfccbc200         mov ecx, dword ptr [0xc2cbfc]
// 00911289  8d542444             lea edx, [esp + 0x44]
// 0091128d  52                   push edx
// 0091128e  83c118               add ecx, 0x18
// 00911291  c684248000000005     mov byte ptr [esp + 0x80], 5
// 00911299  e8728ab8ff           call 0x499d10
// 0091129e  8d4c2440             lea ecx, [esp + 0x40]
// 009112a2  c644247800           mov byte ptr [esp + 0x78], 0
// 009112a7  ff1500a49e00         call dword ptr [0x9ea400]
// 009112ad  6810b4a800           push 0xa8b410
// 009112b2  8d4c2444             lea ecx, [esp + 0x44]
// 009112b6  ff1510a49e00         call dword ptr [0x9ea410]
// 009112bc  8b0dfccbc200         mov ecx, dword ptr [0xc2cbfc]
// 009112c2  6804ccc200           push 0xc2cc04
// 009112c7  8d442444             lea eax, [esp + 0x44]
// 009112cb  50                   push eax
// 009112cc  83c118               add ecx, 0x18
// 009112cf  c684248000000006     mov byte ptr [esp + 0x80], 6
// 009112d7  e8348ab8ff           call 0x499d10
// 009112dc  8d4c2440             lea ecx, [esp + 0x40]
// 009112e0  c644247800           mov byte ptr [esp + 0x78], 0
// 009112e5  ff1500a49e00         call dword ptr [0x9ea400]
// 009112eb  68fccbc200           push 0xc2cbfc
// 009112f0  8bce                 mov ecx, esi
// 009112f2  e80924b8ff           call 0x493700
// 009112f7  e8148bc4ff           call 0x559e10
// 009112fc  f30f1000             movss xmm0, dword ptr [eax]
// 00911300  f30f11442430         movss dword ptr [esp + 0x30], xmm0
// 00911306  f30f104004           movss xmm0, dword ptr [eax + 4]
// 0091130b  8d4c2430             lea ecx, [esp + 0x30]
// 0091130f  51                   push ecx
// 00911310  f30f11442438         movss dword ptr [esp + 0x38], xmm0
// 00911316  f30f104008           movss xmm0, dword ptr [eax + 8]
// 0091131b  8d542424             lea edx, [esp + 0x24]
// 0091131f  f30f1144243c         movss dword ptr [esp + 0x3c], xmm0
// 00911325  f30f100524f6a100     movss xmm0, dword ptr [0xa1f624]
// 0091132d  56                   push esi
// 0091132e  52                   push edx
// 0091132f  f30f11442448         movss dword ptr [esp + 0x48], xmm0
// 00911335  e846c8ffff           call 0x90db80
// 0091133a  83c40c               add esp, 0xc
// 0091133d  8bce                 mov ecx, esi
// 0091133f  e8bc64b8ff           call 0x497800
// 00911344  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 0091134b  5f                   pop edi
// 0091134c  5e                   pop esi
// 0091134d  5d                   pop ebp
// 0091134e  c744246cffffffff     mov dword ptr [esp + 0x6c], 0xffffffff
// 00911356  5b                   pop ebx
// 00911357  85c0                 test eax, eax
// 00911359  7427                 je 0x911382
// 0091135b  83c004               add eax, 4
// 0091135e  50                   push eax
// 0091135f  ff157ca39e00         call dword ptr [0x9ea37c]
// 00911365  85c0                 test eax, eax
// 00911367  7519                 jne 0x911382
// 00911369  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0091136d  e8ae27b7ff           call 0x483b20
// 00911372  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00911376  85c9                 test ecx, ecx
// 00911378  7408                 je 0x911382
// 0091137a  8b01                 mov eax, dword ptr [ecx]
// 0091137c  8b10                 mov edx, dword ptr [eax]
// 0091137e  6a01                 push 1
// 00911380  ffd2                 call edx
// 00911382  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00911386  64890d00000000       mov dword ptr fs:[0], ecx
// 0091138d  83c46c               add esp, 0x6c
// 00911390  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?applyPS20@ToneMap@G3D@@AAEXPAVRenderDevice@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
