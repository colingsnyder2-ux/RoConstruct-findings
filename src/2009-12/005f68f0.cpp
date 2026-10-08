// roc 2009-12 005f68f0  unit: G3D::BinaryInput  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f68f0
//
// 005f68f0  53                   push ebx
// 005f68f1  55                   push ebp
// 005f68f2  8bc1                 mov eax, ecx
// 005f68f4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005f68f8  56                   push esi
// 005f68f9  57                   push edi
// 005f68fa  8d580c               lea ebx, [eax + 0xc]
// 005f68fd  8d7924               lea edi, [ecx + 0x24]
// 005f6900  8d7008               lea esi, [eax + 8]
// 005f6903  8d5108               lea edx, [ecx + 8]
// 005f6906  bd03000000           mov ebp, 3
// 005f690b  eb03                 jmp 0x5f6910
// 005f690d  8d4900               lea ecx, [ecx]
// 005f6910  d942f8               fld dword ptr [edx - 8]
// 005f6913  83c20c               add edx, 0xc
// 005f6916  d95ef8               fstp dword ptr [esi - 8]
// 005f6919  83c610               add esi, 0x10
// 005f691c  d942f0               fld dword ptr [edx - 0x10]
// 005f691f  83c704               add edi, 4
// 005f6922  d95eec               fstp dword ptr [esi - 0x14]
// 005f6925  83c310               add ebx, 0x10
// 005f6928  83ed01               sub ebp, 1
// 005f692b  d942f4               fld dword ptr [edx - 0xc]
// 005f692e  d95ef0               fstp dword ptr [esi - 0x10]
// 005f6931  d947fc               fld dword ptr [edi - 4]
// 005f6934  d95bf0               fstp dword ptr [ebx - 0x10]
// 005f6937  75d7                 jne 0x5f6910
// 005f6939  0f57c0               xorps xmm0, xmm0
// 005f693c  5f                   pop edi
// 005f693d  5e                   pop esi
// 005f693e  f30f114030           movss dword ptr [eax + 0x30], xmm0
// 005f6943  f30f114034           movss dword ptr [eax + 0x34], xmm0
// 005f6948  f30f114038           movss dword ptr [eax + 0x38], xmm0
// 005f694d  f30f100518ea9a00     movss xmm0, dword ptr [0x9aea18]
// 005f6955  5d                   pop ebp
// 005f6956  f30f11403c           movss dword ptr [eax + 0x3c], xmm0
// 005f695b  5b                   pop ebx
// 005f695c  c20400               ret 4
// library g3d-6.09/G3Dcpp\Matrix4.cpp (function ??0Matrix4@G3D@@QAE@ABVCoordinateFrame@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Matrix4.cpp
