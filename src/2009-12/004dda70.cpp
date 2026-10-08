// roc 2009-12 004dda70  unit: G3D::Shader  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dda70
//
// 004dda70  6aff                 push -1
// 004dda72  68e8409300           push 0x9340e8
// 004dda77  64a100000000         mov eax, dword ptr fs:[0]
// 004dda7d  50                   push eax
// 004dda7e  64892500000000       mov dword ptr fs:[0], esp
// 004dda85  83ec58               sub esp, 0x58
// 004dda88  0f57c0               xorps xmm0, xmm0
// 004dda8b  53                   push ebx
// 004dda8c  55                   push ebp
// 004dda8d  56                   push esi
// 004dda8e  57                   push edi
// 004dda8f  33ff                 xor edi, edi
// 004dda91  8be9                 mov ebp, ecx
// 004dda93  f30f1144242c         movss dword ptr [esp + 0x2c], xmm0
// 004dda99  f30f11442428         movss dword ptr [esp + 0x28], xmm0
// 004dda9f  f30f11442424         movss dword ptr [esp + 0x24], xmm0
// 004ddaa5  f30f11442420         movss dword ptr [esp + 0x20], xmm0
// 004ddaab  f30f1144243c         movss dword ptr [esp + 0x3c], xmm0
// 004ddab1  f30f11442438         movss dword ptr [esp + 0x38], xmm0
// 004ddab7  f30f11442434         movss dword ptr [esp + 0x34], xmm0
// 004ddabd  f30f11442430         movss dword ptr [esp + 0x30], xmm0
// 004ddac3  f30f1144244c         movss dword ptr [esp + 0x4c], xmm0
// 004ddac9  f30f11442448         movss dword ptr [esp + 0x48], xmm0
// 004ddacf  f30f11442444         movss dword ptr [esp + 0x44], xmm0
// 004ddad5  f30f11442440         movss dword ptr [esp + 0x40], xmm0
// 004ddadb  f30f1144245c         movss dword ptr [esp + 0x5c], xmm0
// 004ddae1  f30f11442458         movss dword ptr [esp + 0x58], xmm0
// 004ddae7  f30f11442454         movss dword ptr [esp + 0x54], xmm0
// 004ddaed  f30f11442450         movss dword ptr [esp + 0x50], xmm0
// 004ddaf3  897c2460             mov dword ptr [esp + 0x60], edi
// 004ddaf7  8b5c247c             mov ebx, dword ptr [esp + 0x7c]
// 004ddafb  897c2470             mov dword ptr [esp + 0x70], edi
// 004ddaff  c74424645c8b0000     mov dword ptr [esp + 0x64], 0x8b5c
// 004ddb07  8d742428             lea esi, [esp + 0x28]
// 004ddb0b  eb03                 jmp 0x4ddb10
// 004ddb0d  8d4900               lea ecx, [ecx]
// 004ddb10  57                   push edi
// 004ddb11  8d442414             lea eax, [esp + 0x14]
// 004ddb15  50                   push eax
// 004ddb16  8bcb                 mov ecx, ebx
// 004ddb18  e8838e1100           call 0x5f69a0
// 004ddb1d  d900                 fld dword ptr [eax]
// 004ddb1f  d95ef8               fstp dword ptr [esi - 8]
// 004ddb22  47                   inc edi
// 004ddb23  d94004               fld dword ptr [eax + 4]
// 004ddb26  83c610               add esi, 0x10
// 004ddb29  83ff04               cmp edi, 4
// 004ddb2c  d95eec               fstp dword ptr [esi - 0x14]
// 004ddb2f  d94008               fld dword ptr [eax + 8]
// 004ddb32  d95ef0               fstp dword ptr [esi - 0x10]
// 004ddb35  d9400c               fld dword ptr [eax + 0xc]
// 004ddb38  d95ef4               fstp dword ptr [esi - 0xc]
// 004ddb3b  7cd3                 jl 0x4ddb10
// 004ddb3d  8b542478             mov edx, dword ptr [esp + 0x78]
// 004ddb41  8d4c2420             lea ecx, [esp + 0x20]
// 004ddb45  51                   push ecx
// 004ddb46  52                   push edx
// 004ddb47  8bcd                 mov ecx, ebp
// 004ddb49  e832f8ffff           call 0x4dd380
// 004ddb4e  8b442460             mov eax, dword ptr [esp + 0x60]
// 004ddb52  c7442470ffffffff     mov dword ptr [esp + 0x70], 0xffffffff
// 004ddb5a  85c0                 test eax, eax
// 004ddb5c  7444                 je 0x4ddba2
// 004ddb5e  83c004               add eax, 4
// 004ddb61  50                   push eax
// 004ddb62  ff1508b29800         call dword ptr [0x98b208]
// 004ddb68  85c0                 test eax, eax
// 004ddb6a  7536                 jne 0x4ddba2
// 004ddb6c  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 004ddb70  8b7108               mov esi, dword ptr [ecx + 8]
// 004ddb73  85f6                 test esi, esi
// 004ddb75  741f                 je 0x4ddb96
// 004ddb77  8b0e                 mov ecx, dword ptr [esi]
// 004ddb79  8b01                 mov eax, dword ptr [ecx]
// 004ddb7b  8b5004               mov edx, dword ptr [eax + 4]
// 004ddb7e  ffd2                 call edx
// 004ddb80  8bc6                 mov eax, esi
// 004ddb82  8b7604               mov esi, dword ptr [esi + 4]
// 004ddb85  50                   push eax
// 004ddb86  e8cf5c3100           call 0x7f385a
// 004ddb8b  83c404               add esp, 4
// 004ddb8e  85f6                 test esi, esi
// 004ddb90  75e5                 jne 0x4ddb77
// 004ddb92  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 004ddb96  85c9                 test ecx, ecx
// 004ddb98  7408                 je 0x4ddba2
// 004ddb9a  8b01                 mov eax, dword ptr [ecx]
// 004ddb9c  8b10                 mov edx, dword ptr [eax]
// 004ddb9e  6a01                 push 1
// 004ddba0  ffd2                 call edx
// 004ddba2  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 004ddba6  5f                   pop edi
// 004ddba7  5e                   pop esi
// 004ddba8  5d                   pop ebp
// 004ddba9  5b                   pop ebx
// 004ddbaa  64890d00000000       mov dword ptr fs:[0], ecx
// 004ddbb1  83c464               add esp, 0x64
// 004ddbb4  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?set@ArgList@VertexAndPixelShader@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVMatrix4@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
