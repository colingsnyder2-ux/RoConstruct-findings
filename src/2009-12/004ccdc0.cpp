// roc 2009-12 004ccdc0  unit: G3D::VARArea  size: 480 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ccdc0
//
// 004ccdc0  6aff                 push -1
// 004ccdc2  680b2f9300           push 0x932f0b
// 004ccdc7  64a100000000         mov eax, dword ptr fs:[0]
// 004ccdcd  50                   push eax
// 004ccdce  64892500000000       mov dword ptr fs:[0], esp
// 004ccdd5  81ec88000000         sub esp, 0x88
// 004ccddb  b801000000           mov eax, 1
// 004ccde0  014178               add dword ptr [ecx + 0x78], eax
// 004ccde3  014170               add dword ptr [ecx + 0x70], eax
// 004ccde6  8b91c4040000         mov edx, dword ptr [ecx + 0x4c4]
// 004ccdec  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 004ccdf3  3bd0                 cmp edx, eax
// 004ccdf5  c744244400000000     mov dword ptr [esp + 0x44], 0
// 004ccdfd  7d02                 jge 0x4cce01
// 004ccdff  8bd0                 mov edx, eax
// 004cce01  8991c4040000         mov dword ptr [ecx + 0x4c4], edx
// 004cce07  8bd0                 mov edx, eax
// 004cce09  6bd25c               imul edx, edx, 0x5c
// 004cce0c  53                   push ebx
// 004cce0d  8b9c24a0000000       mov ebx, dword ptr [esp + 0xa0]
// 004cce14  55                   push ebp
// 004cce15  56                   push esi
// 004cce16  8d2c0a               lea ebp, [edx + ecx]
// 004cce19  57                   push edi
// 004cce1a  8dbddc040000         lea edi, [ebp + 0x4dc]
// 004cce20  b910000000           mov ecx, 0x10
// 004cce25  8bf3                 mov esi, ebx
// 004cce27  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004cce29  803dbed0b70000       cmp byte ptr [0xb7d0be], 0
// 004cce30  740c                 je 0x4cce3e
// 004cce32  05c0840000           add eax, 0x84c0
// 004cce37  50                   push eax
// 004cce38  ff1514d9b700         call dword ptr [0xb7d914]
// 004cce3e  33c0                 xor eax, eax
// 004cce40  8d4b08               lea ecx, [ebx + 8]
// 004cce43  d941f8               fld dword ptr [ecx - 8]
// 004cce46  40                   inc eax
// 004cce47  d95c8454             fstp dword ptr [esp + eax*4 + 0x54]
// 004cce4b  83c110               add ecx, 0x10
// 004cce4e  83f804               cmp eax, 4
// 004cce51  d941ec               fld dword ptr [ecx - 0x14]
// 004cce54  d95c8464             fstp dword ptr [esp + eax*4 + 0x64]
// 004cce58  d941f0               fld dword ptr [ecx - 0x10]
// 004cce5b  d95c8474             fstp dword ptr [esp + eax*4 + 0x74]
// 004cce5f  d941f4               fld dword ptr [ecx - 0xc]
// 004cce62  d99c8484000000       fstp dword ptr [esp + eax*4 + 0x84]
// 004cce69  7cd8                 jl 0x4cce43
// 004cce6b  6802170000           push 0x1702
// 004cce70  ff15acba9800         call dword ptr [0x98baac]
// 004cce76  8d442458             lea eax, [esp + 0x58]
// 004cce7a  50                   push eax
// 004cce7b  ff15f0ba9800         call dword ptr [0x98baf0]
// 004cce81  8b85d8040000         mov eax, dword ptr [ebp + 0x4d8]
// 004cce87  33ff                 xor edi, edi
// 004cce89  85c0                 test eax, eax
// 004cce8b  740c                 je 0x4cce99
// 004cce8d  8bf8                 mov edi, eax
// 004cce8f  83c004               add eax, 4
// 004cce92  50                   push eax
// 004cce93  ff150cb29800         call dword ptr [0x98b20c]
// 004cce99  85ff                 test edi, edi
// 004cce9b  0f8496000000         je 0x4ccf37
// 004ccea1  807f7000             cmp byte ptr [edi + 0x70], 0
// 004ccea5  0f848c000000         je 0x4ccf37
// 004cceab  837f5804             cmp dword ptr [edi + 0x58], 4
// 004cceaf  f30f100d18ea9a00     movss xmm1, dword ptr [0x9aea18]
// 004cceb7  0f28d1               movaps xmm2, xmm1
// 004cceba  7505                 jne 0x4ccec1
// 004ccebc  f30f2a5768           cvtsi2ss xmm2, dword ptr [edi + 0x68]
// 004ccec1  0f57c0               xorps xmm0, xmm0
// 004ccec4  f30f101d04b89a00     movss xmm3, dword ptr [0x9ab804]
// 004ccecc  8d4c2414             lea ecx, [esp + 0x14]
// 004cced0  51                   push ecx
// 004cced1  f30f114c2418         movss dword ptr [esp + 0x18], xmm1
// 004cced7  f30f1144241c         movss dword ptr [esp + 0x1c], xmm0
// 004ccedd  f30f11442420         movss dword ptr [esp + 0x20], xmm0
// 004ccee3  f30f11442424         movss dword ptr [esp + 0x24], xmm0
// 004ccee9  f30f11442428         movss dword ptr [esp + 0x28], xmm0
// 004cceef  f30f115c242c         movss dword ptr [esp + 0x2c], xmm3
// 004ccef5  f30f11442430         movss dword ptr [esp + 0x30], xmm0
// 004ccefb  f30f11442434         movss dword ptr [esp + 0x34], xmm0
// 004ccf01  f30f11442438         movss dword ptr [esp + 0x38], xmm0
// 004ccf07  f30f1144243c         movss dword ptr [esp + 0x3c], xmm0
// 004ccf0d  f30f114c2440         movss dword ptr [esp + 0x40], xmm1
// 004ccf13  f30f11442444         movss dword ptr [esp + 0x44], xmm0
// 004ccf19  f30f11442448         movss dword ptr [esp + 0x48], xmm0
// 004ccf1f  f30f1154244c         movss dword ptr [esp + 0x4c], xmm2
// 004ccf25  f30f11442450         movss dword ptr [esp + 0x50], xmm0
// 004ccf2b  f30f114c2454         movss dword ptr [esp + 0x54], xmm1
// 004ccf31  ff15ecba9800         call dword ptr [0x98baec]
// 004ccf37  c78424a0000000ffffffff mov dword ptr [esp + 0xa0], 0xffffffff
// 004ccf42  85ff                 test edi, edi
// 004ccf44  743f                 je 0x4ccf85
// 004ccf46  8d5704               lea edx, [edi + 4]
// 004ccf49  52                   push edx
// 004ccf4a  ff1508b29800         call dword ptr [0x98b208]
// 004ccf50  85c0                 test eax, eax
// 004ccf52  7531                 jne 0x4ccf85
// 004ccf54  8b7708               mov esi, dword ptr [edi + 8]
// 004ccf57  85f6                 test esi, esi
// 004ccf59  7420                 je 0x4ccf7b
// 004ccf5b  eb03                 jmp 0x4ccf60
// 004ccf5d  8d4900               lea ecx, [ecx]
// 004ccf60  8b0e                 mov ecx, dword ptr [esi]
// 004ccf62  8b01                 mov eax, dword ptr [ecx]
// 004ccf64  8b5004               mov edx, dword ptr [eax + 4]
// 004ccf67  ffd2                 call edx
// 004ccf69  8bc6                 mov eax, esi
// 004ccf6b  8b7604               mov esi, dword ptr [esi + 4]
// 004ccf6e  50                   push eax
// 004ccf6f  e8e6683200           call 0x7f385a
// 004ccf74  83c404               add esp, 4
// 004ccf77  85f6                 test esi, esi
// 004ccf79  75e5                 jne 0x4ccf60
// 004ccf7b  8b07                 mov eax, dword ptr [edi]
// 004ccf7d  8b10                 mov edx, dword ptr [eax]
// 004ccf7f  6a01                 push 1
// 004ccf81  8bcf                 mov ecx, edi
// 004ccf83  ffd2                 call edx
// 004ccf85  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 004ccf8c  5f                   pop edi
// 004ccf8d  5e                   pop esi
// 004ccf8e  5d                   pop ebp
// 004ccf8f  5b                   pop ebx
// 004ccf90  64890d00000000       mov dword ptr fs:[0], ecx
// 004ccf97  81c494000000         add esp, 0x94
// 004ccf9d  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?forceSetTextureMatrix@RenderDevice@G3D@@AAEXHPBM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
