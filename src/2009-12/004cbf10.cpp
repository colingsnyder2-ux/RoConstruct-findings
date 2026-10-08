// roc 2009-12 004cbf10  unit: G3D::VARArea  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cbf10
//
// 004cbf10  8b542404             mov edx, dword ptr [esp + 4]
// 004cbf14  f30f1001             movss xmm0, dword ptr [ecx]
// 004cbf18  0f2e02               ucomiss xmm0, dword ptr [edx]
// 004cbf1b  53                   push ebx
// 004cbf1c  9f                   lahf 
// 004cbf1d  56                   push esi
// 004cbf1e  57                   push edi
// 004cbf1f  f6c444               test ah, 0x44
// 004cbf22  7a76                 jp 0x4cbf9a
// 004cbf24  f30f104104           movss xmm0, dword ptr [ecx + 4]
// 004cbf29  0f2e4204             ucomiss xmm0, dword ptr [edx + 4]
// 004cbf2d  9f                   lahf 
// 004cbf2e  f6c444               test ah, 0x44
// 004cbf31  7a67                 jp 0x4cbf9a
// 004cbf33  f30f104108           movss xmm0, dword ptr [ecx + 8]
// 004cbf38  0f2e4208             ucomiss xmm0, dword ptr [edx + 8]
// 004cbf3c  9f                   lahf 
// 004cbf3d  f6c444               test ah, 0x44
// 004cbf40  7a58                 jp 0x4cbf9a
// 004cbf42  f30f10410c           movss xmm0, dword ptr [ecx + 0xc]
// 004cbf47  0f2e420c             ucomiss xmm0, dword ptr [edx + 0xc]
// 004cbf4b  9f                   lahf 
// 004cbf4c  f6c444               test ah, 0x44
// 004cbf4f  7a49                 jp 0x4cbf9a
// 004cbf51  8b4110               mov eax, dword ptr [ecx + 0x10]
// 004cbf54  3b4210               cmp eax, dword ptr [edx + 0x10]
// 004cbf57  7541                 jne 0x4cbf9a
// 004cbf59  8d4214               lea eax, [edx + 0x14]
// 004cbf5c  8d7914               lea edi, [ecx + 0x14]
// 004cbf5f  be40000000           mov esi, 0x40
// 004cbf64  2bf8                 sub edi, eax
// 004cbf66  8b1c07               mov ebx, dword ptr [edi + eax]
// 004cbf69  3b18                 cmp ebx, dword ptr [eax]
// 004cbf6b  752d                 jne 0x4cbf9a
// 004cbf6d  83ee04               sub esi, 4
// 004cbf70  83c004               add eax, 4
// 004cbf73  83fe04               cmp esi, 4
// 004cbf76  73ee                 jae 0x4cbf66
// 004cbf78  8b4154               mov eax, dword ptr [ecx + 0x54]
// 004cbf7b  3b4254               cmp eax, dword ptr [edx + 0x54]
// 004cbf7e  751a                 jne 0x4cbf9a
// 004cbf80  f30f104158           movss xmm0, dword ptr [ecx + 0x58]
// 004cbf85  0f2e4258             ucomiss xmm0, dword ptr [edx + 0x58]
// 004cbf89  9f                   lahf 
// 004cbf8a  f6c444               test ah, 0x44
// 004cbf8d  7a0b                 jp 0x4cbf9a
// 004cbf8f  5f                   pop edi
// 004cbf90  5e                   pop esi
// 004cbf91  b801000000           mov eax, 1
// 004cbf96  5b                   pop ebx
// 004cbf97  c20400               ret 4
// 004cbf9a  5f                   pop edi
// 004cbf9b  5e                   pop esi
// 004cbf9c  33c0                 xor eax, eax
// 004cbf9e  5b                   pop ebx
// 004cbf9f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??8TextureUnit@RenderState@RenderDevice@G3D@@QBE_NABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
