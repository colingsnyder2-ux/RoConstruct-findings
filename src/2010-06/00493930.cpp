// roc 2010-06 00493930  unit: seg_00490000  size: 480 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00493930
//
// 00493930  6aff                 push -1
// 00493932  689b689800           push 0x98689b
// 00493937  64a100000000         mov eax, dword ptr fs:[0]
// 0049393d  50                   push eax
// 0049393e  64892500000000       mov dword ptr fs:[0], esp
// 00493945  81ec88000000         sub esp, 0x88
// 0049394b  b801000000           mov eax, 1
// 00493950  014178               add dword ptr [ecx + 0x78], eax
// 00493953  014170               add dword ptr [ecx + 0x70], eax
// 00493956  8b91c4040000         mov edx, dword ptr [ecx + 0x4c4]
// 0049395c  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 00493963  3bd0                 cmp edx, eax
// 00493965  c744244400000000     mov dword ptr [esp + 0x44], 0
// 0049396d  7d02                 jge 0x493971
// 0049396f  8bd0                 mov edx, eax
// 00493971  8991c4040000         mov dword ptr [ecx + 0x4c4], edx
// 00493977  8bd0                 mov edx, eax
// 00493979  6bd25c               imul edx, edx, 0x5c
// 0049397c  53                   push ebx
// 0049397d  8b9c24a0000000       mov ebx, dword ptr [esp + 0xa0]
// 00493984  55                   push ebp
// 00493985  56                   push esi
// 00493986  8d2c0a               lea ebp, [edx + ecx]
// 00493989  57                   push edi
// 0049398a  8dbddc040000         lea edi, [ebp + 0x4dc]
// 00493990  b910000000           mov ecx, 0x10
// 00493995  8bf3                 mov esi, ebx
// 00493997  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00493999  803dba38c00000       cmp byte ptr [0xc038ba], 0
// 004939a0  740c                 je 0x4939ae
// 004939a2  05c0840000           add eax, 0x84c0
// 004939a7  50                   push eax
// 004939a8  ff15a439c000         call dword ptr [0xc039a4]
// 004939ae  33c0                 xor eax, eax
// 004939b0  8d4b08               lea ecx, [ebx + 8]
// 004939b3  d941f8               fld dword ptr [ecx - 8]
// 004939b6  40                   inc eax
// 004939b7  d95c8454             fstp dword ptr [esp + eax*4 + 0x54]
// 004939bb  83c110               add ecx, 0x10
// 004939be  83f804               cmp eax, 4
// 004939c1  d941ec               fld dword ptr [ecx - 0x14]
// 004939c4  d95c8464             fstp dword ptr [esp + eax*4 + 0x64]
// 004939c8  d941f0               fld dword ptr [ecx - 0x10]
// 004939cb  d95c8474             fstp dword ptr [esp + eax*4 + 0x74]
// 004939cf  d941f4               fld dword ptr [ecx - 0xc]
// 004939d2  d99c8484000000       fstp dword ptr [esp + eax*4 + 0x84]
// 004939d9  7cd8                 jl 0x4939b3
// 004939db  6802170000           push 0x1702
// 004939e0  ff1538ab9e00         call dword ptr [0x9eab38]
// 004939e6  8d442458             lea eax, [esp + 0x58]
// 004939ea  50                   push eax
// 004939eb  ff1548ab9e00         call dword ptr [0x9eab48]
// 004939f1  8b85d8040000         mov eax, dword ptr [ebp + 0x4d8]
// 004939f7  33ff                 xor edi, edi
// 004939f9  85c0                 test eax, eax
// 004939fb  740c                 je 0x493a09
// 004939fd  8bf8                 mov edi, eax
// 004939ff  83c004               add eax, 4
// 00493a02  50                   push eax
// 00493a03  ff1580a39e00         call dword ptr [0x9ea380]
// 00493a09  85ff                 test edi, edi
// 00493a0b  0f8496000000         je 0x493aa7
// 00493a11  807f7000             cmp byte ptr [edi + 0x70], 0
// 00493a15  0f848c000000         je 0x493aa7
// 00493a1b  837f5804             cmp dword ptr [edi + 0x58], 4
// 00493a1f  f30f100d24f6a100     movss xmm1, dword ptr [0xa1f624]
// 00493a27  0f28d1               movaps xmm2, xmm1
// 00493a2a  7505                 jne 0x493a31
// 00493a2c  f30f2a5768           cvtsi2ss xmm2, dword ptr [edi + 0x68]
// 00493a31  0f57c0               xorps xmm0, xmm0
// 00493a34  f30f101d10c6a000     movss xmm3, dword ptr [0xa0c610]
// 00493a3c  8d4c2414             lea ecx, [esp + 0x14]
// 00493a40  51                   push ecx
// 00493a41  f30f114c2418         movss dword ptr [esp + 0x18], xmm1
// 00493a47  f30f1144241c         movss dword ptr [esp + 0x1c], xmm0
// 00493a4d  f30f11442420         movss dword ptr [esp + 0x20], xmm0
// 00493a53  f30f11442424         movss dword ptr [esp + 0x24], xmm0
// 00493a59  f30f11442428         movss dword ptr [esp + 0x28], xmm0
// 00493a5f  f30f115c242c         movss dword ptr [esp + 0x2c], xmm3
// 00493a65  f30f11442430         movss dword ptr [esp + 0x30], xmm0
// 00493a6b  f30f11442434         movss dword ptr [esp + 0x34], xmm0
// 00493a71  f30f11442438         movss dword ptr [esp + 0x38], xmm0
// 00493a77  f30f1144243c         movss dword ptr [esp + 0x3c], xmm0
// 00493a7d  f30f114c2440         movss dword ptr [esp + 0x40], xmm1
// 00493a83  f30f11442444         movss dword ptr [esp + 0x44], xmm0
// 00493a89  f30f11442448         movss dword ptr [esp + 0x48], xmm0
// 00493a8f  f30f1154244c         movss dword ptr [esp + 0x4c], xmm2
// 00493a95  f30f11442450         movss dword ptr [esp + 0x50], xmm0
// 00493a9b  f30f114c2454         movss dword ptr [esp + 0x54], xmm1
// 00493aa1  ff154cab9e00         call dword ptr [0x9eab4c]
// 00493aa7  c78424a0000000ffffffff mov dword ptr [esp + 0xa0], 0xffffffff
// 00493ab2  85ff                 test edi, edi
// 00493ab4  743f                 je 0x493af5
// 00493ab6  8d5704               lea edx, [edi + 4]
// 00493ab9  52                   push edx
// 00493aba  ff157ca39e00         call dword ptr [0x9ea37c]
// 00493ac0  85c0                 test eax, eax
// 00493ac2  7531                 jne 0x493af5
// 00493ac4  8b7708               mov esi, dword ptr [edi + 8]
// 00493ac7  85f6                 test esi, esi
// 00493ac9  7420                 je 0x493aeb
// 00493acb  eb03                 jmp 0x493ad0
// 00493acd  8d4900               lea ecx, [ecx]
// 00493ad0  8b0e                 mov ecx, dword ptr [esi]
// 00493ad2  8b01                 mov eax, dword ptr [ecx]
// 00493ad4  8b5004               mov edx, dword ptr [eax + 4]
// 00493ad7  ffd2                 call edx
// 00493ad9  8bc6                 mov eax, esi
// 00493adb  8b7604               mov esi, dword ptr [esi + 4]
// 00493ade  50                   push eax
// 00493adf  e8b63e3100           call 0x7a799a
// 00493ae4  83c404               add esp, 4
// 00493ae7  85f6                 test esi, esi
// 00493ae9  75e5                 jne 0x493ad0
// 00493aeb  8b07                 mov eax, dword ptr [edi]
// 00493aed  8b10                 mov edx, dword ptr [eax]
// 00493aef  6a01                 push 1
// 00493af1  8bcf                 mov ecx, edi
// 00493af3  ffd2                 call edx
// 00493af5  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00493afc  5f                   pop edi
// 00493afd  5e                   pop esi
// 00493afe  5d                   pop ebp
// 00493aff  5b                   pop ebx
// 00493b00  64890d00000000       mov dword ptr fs:[0], ecx
// 00493b07  81c494000000         add esp, 0x94
// 00493b0d  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?forceSetTextureMatrix@RenderDevice@G3D@@AAEXHPBM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
