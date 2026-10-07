// roc 2010-06 004929e0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004929e0
//
// 004929e0  8b542404             mov edx, dword ptr [esp + 4]
// 004929e4  f30f1001             movss xmm0, dword ptr [ecx]
// 004929e8  0f2e02               ucomiss xmm0, dword ptr [edx]
// 004929eb  53                   push ebx
// 004929ec  9f                   lahf 
// 004929ed  56                   push esi
// 004929ee  57                   push edi
// 004929ef  f6c444               test ah, 0x44
// 004929f2  7a76                 jp 0x492a6a
// 004929f4  f30f104104           movss xmm0, dword ptr [ecx + 4]
// 004929f9  0f2e4204             ucomiss xmm0, dword ptr [edx + 4]
// 004929fd  9f                   lahf 
// 004929fe  f6c444               test ah, 0x44
// 00492a01  7a67                 jp 0x492a6a
// 00492a03  f30f104108           movss xmm0, dword ptr [ecx + 8]
// 00492a08  0f2e4208             ucomiss xmm0, dword ptr [edx + 8]
// 00492a0c  9f                   lahf 
// 00492a0d  f6c444               test ah, 0x44
// 00492a10  7a58                 jp 0x492a6a
// 00492a12  f30f10410c           movss xmm0, dword ptr [ecx + 0xc]
// 00492a17  0f2e420c             ucomiss xmm0, dword ptr [edx + 0xc]
// 00492a1b  9f                   lahf 
// 00492a1c  f6c444               test ah, 0x44
// 00492a1f  7a49                 jp 0x492a6a
// 00492a21  8b4110               mov eax, dword ptr [ecx + 0x10]
// 00492a24  3b4210               cmp eax, dword ptr [edx + 0x10]
// 00492a27  7541                 jne 0x492a6a
// 00492a29  8d4214               lea eax, [edx + 0x14]
// 00492a2c  8d7914               lea edi, [ecx + 0x14]
// 00492a2f  be40000000           mov esi, 0x40
// 00492a34  2bf8                 sub edi, eax
// 00492a36  8b1c07               mov ebx, dword ptr [edi + eax]
// 00492a39  3b18                 cmp ebx, dword ptr [eax]
// 00492a3b  752d                 jne 0x492a6a
// 00492a3d  83ee04               sub esi, 4
// 00492a40  83c004               add eax, 4
// 00492a43  83fe04               cmp esi, 4
// 00492a46  73ee                 jae 0x492a36
// 00492a48  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00492a4b  3b4254               cmp eax, dword ptr [edx + 0x54]
// 00492a4e  751a                 jne 0x492a6a
// 00492a50  f30f104158           movss xmm0, dword ptr [ecx + 0x58]
// 00492a55  0f2e4258             ucomiss xmm0, dword ptr [edx + 0x58]
// 00492a59  9f                   lahf 
// 00492a5a  f6c444               test ah, 0x44
// 00492a5d  7a0b                 jp 0x492a6a
// 00492a5f  5f                   pop edi
// 00492a60  5e                   pop esi
// 00492a61  b801000000           mov eax, 1
// 00492a66  5b                   pop ebx
// 00492a67  c20400               ret 4
// 00492a6a  5f                   pop edi
// 00492a6b  5e                   pop esi
// 00492a6c  33c0                 xor eax, eax
// 00492a6e  5b                   pop ebx
// 00492a6f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??8TextureUnit@RenderState@RenderDevice@G3D@@QBE_NABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
