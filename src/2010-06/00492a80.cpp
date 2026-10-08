// from server: 100% by auto
// roc 2010-06 00492a80  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 318 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00492a80
//
// 00492a80  53                   push ebx
// 00492a81  56                   push esi
// 00492a82  57                   push edi
// 00492a83  8bf1                 mov esi, ecx
// 00492a85  e896480c00           call 0x557320
// 00492a8a  50                   push eax
// 00492a8b  8bce                 mov ecx, esi
// 00492a8d  e8de350c00           call 0x556070
// 00492a92  0f57c0               xorps xmm0, xmm0
// 00492a95  bb01000000           mov ebx, 1
// 00492a9a  841dd03cc000         test byte ptr [0xc03cd0], bl
// 00492aa0  751e                 jne 0x492ac0
// 00492aa2  091dd03cc000         or dword ptr [0xc03cd0], ebx
// 00492aa8  f30f1105c43cc000     movss dword ptr [0xc03cc4], xmm0
// 00492ab0  f30f1105c83cc000     movss dword ptr [0xc03cc8], xmm0
// 00492ab8  f30f1105cc3cc000     movss dword ptr [0xc03ccc], xmm0
// 00492ac0  f30f1005c43cc000     movss xmm0, dword ptr [0xc03cc4]
// 00492ac8  f30f114624           movss dword ptr [esi + 0x24], xmm0
// 00492acd  f30f1005c83cc000     movss xmm0, dword ptr [0xc03cc8]
// 00492ad5  f30f114628           movss dword ptr [esi + 0x28], xmm0
// 00492ada  f30f1005cc3cc000     movss xmm0, dword ptr [0xc03ccc]
// 00492ae2  f30f11462c           movss dword ptr [esi + 0x2c], xmm0
// 00492ae7  8d7e30               lea edi, [esi + 0x30]
// 00492aea  e831480c00           call 0x557320
// 00492aef  50                   push eax
// 00492af0  8bcf                 mov ecx, edi
// 00492af2  e879350c00           call 0x556070
// 00492af7  841dd03cc000         test byte ptr [0xc03cd0], bl
// 00492afd  7521                 jne 0x492b20
// 00492aff  0f57c0               xorps xmm0, xmm0
// 00492b02  091dd03cc000         or dword ptr [0xc03cd0], ebx
// 00492b08  f30f1105c43cc000     movss dword ptr [0xc03cc4], xmm0
// 00492b10  f30f1105c83cc000     movss dword ptr [0xc03cc8], xmm0
// 00492b18  f30f1105cc3cc000     movss dword ptr [0xc03ccc], xmm0
// 00492b20  f30f1005c43cc000     movss xmm0, dword ptr [0xc03cc4]
// 00492b28  f30f114724           movss dword ptr [edi + 0x24], xmm0
// 00492b2d  f30f1005c83cc000     movss xmm0, dword ptr [0xc03cc8]
// 00492b35  f30f114728           movss dword ptr [edi + 0x28], xmm0
// 00492b3a  f30f1005cc3cc000     movss xmm0, dword ptr [0xc03ccc]
// 00492b42  f30f11472c           movss dword ptr [edi + 0x2c], xmm0
// 00492b47  8d7e60               lea edi, [esi + 0x60]
// 00492b4a  e8d1470c00           call 0x557320
// 00492b4f  50                   push eax
// 00492b50  8bcf                 mov ecx, edi
// 00492b52  e819350c00           call 0x556070
// 00492b57  841dd03cc000         test byte ptr [0xc03cd0], bl
// 00492b5d  7521                 jne 0x492b80
// 00492b5f  0f57c0               xorps xmm0, xmm0
// 00492b62  091dd03cc000         or dword ptr [0xc03cd0], ebx
// 00492b68  f30f1105c43cc000     movss dword ptr [0xc03cc4], xmm0
// 00492b70  f30f1105c83cc000     movss dword ptr [0xc03cc8], xmm0
// 00492b78  f30f1105cc3cc000     movss dword ptr [0xc03ccc], xmm0
// 00492b80  f30f1005c43cc000     movss xmm0, dword ptr [0xc03cc4]
// 00492b88  f30f114724           movss dword ptr [edi + 0x24], xmm0
// 00492b8d  f30f1005c83cc000     movss xmm0, dword ptr [0xc03cc8]
// 00492b95  f30f114728           movss dword ptr [edi + 0x28], xmm0
// 00492b9a  f30f1005cc3cc000     movss xmm0, dword ptr [0xc03ccc]
// 00492ba2  8d8e90000000         lea ecx, [esi + 0x90]
// 00492ba8  f30f11472c           movss dword ptr [edi + 0x2c], xmm0
// 00492bad  e80e590c00           call 0x5584c0
// 00492bb2  5f                   pop edi
// 00492bb3  889ed0000000         mov byte ptr [esi + 0xd0], bl
// 00492bb9  8bc6                 mov eax, esi
// 00492bbb  5e                   pop esi
// 00492bbc  5b                   pop ebx
// 00492bbd  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??0Matrices@RenderState@RenderDevice@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
