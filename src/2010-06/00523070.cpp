// roc 2010-06 00523070  unit: RBX::MeshGen  size: 307 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00523070
//
// 00523070  6aff                 push -1
// 00523072  68f9e09800           push 0x98e0f9
// 00523077  64a100000000         mov eax, dword ptr fs:[0]
// 0052307d  50                   push eax
// 0052307e  64892500000000       mov dword ptr fs:[0], esp
// 00523085  51                   push ecx
// 00523086  8b442414             mov eax, dword ptr [esp + 0x14]
// 0052308a  55                   push ebp
// 0052308b  56                   push esi
// 0052308c  8bf1                 mov esi, ecx
// 0052308e  57                   push edi
// 0052308f  8b7e04               mov edi, dword ptr [esi + 4]
// 00523092  894604               mov dword ptr [esi + 4], eax
// 00523095  f605d488c00001       test byte ptr [0xc088d4], 1
// 0052309c  8974240c             mov dword ptr [esp + 0xc], esi
// 005230a0  7514                 jne 0x5230b6
// 005230a2  830dd488c00001       or dword ptr [0xc088d4], 1
// 005230a9  bd0a000000           mov ebp, 0xa
// 005230ae  892dd088c000         mov dword ptr [0xc088d0], ebp
// 005230b4  eb06                 jmp 0x5230bc
// 005230b6  8b2dd088c000         mov ebp, dword ptr [0xc088d0]
// 005230bc  8b4e04               mov ecx, dword ptr [esi + 4]
// 005230bf  8b5608               mov edx, dword ptr [esi + 8]
// 005230c2  3bca                 cmp ecx, edx
// 005230c4  7e6a                 jle 0x523130
// 005230c6  85d2                 test edx, edx
// 005230c8  7509                 jne 0x5230d3
// 005230ca  894608               mov dword ptr [esi + 8], eax
// 005230cd  57                   push edi
// 005230ce  e981000000           jmp 0x523154
// 005230d3  3bcd                 cmp ecx, ebp
// 005230d5  7d06                 jge 0x5230dd
// 005230d7  896e08               mov dword ptr [esi + 8], ebp
// 005230da  57                   push edi
// 005230db  eb77                 jmp 0x523154
// 005230dd  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 005230e5  8bc2                 mov eax, edx
// 005230e7  c1e004               shl eax, 4
// 005230ea  3d801a0600           cmp eax, 0x61a80
// 005230ef  760a                 jbe 0x5230fb
// 005230f1  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 005230f9  eb0f                 jmp 0x52310a
// 005230fb  3d00fa0000           cmp eax, 0xfa00
// 00523100  7608                 jbe 0x52310a
// 00523102  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 0052310a  8bc2                 mov eax, edx
// 0052310c  f30f2ac8             cvtsi2ss xmm1, eax
// 00523110  f30f59c8             mulss xmm1, xmm0
// 00523114  f30f2cd1             cvttss2si edx, xmm1
// 00523118  2bd0                 sub edx, eax
// 0052311a  8d040a               lea eax, [edx + ecx]
// 0052311d  894608               mov dword ptr [esi + 8], eax
// 00523120  8b0dd088c000         mov ecx, dword ptr [0xc088d0]
// 00523126  3bc1                 cmp eax, ecx
// 00523128  7d03                 jge 0x52312d
// 0052312a  894e08               mov dword ptr [esi + 8], ecx
// 0052312d  57                   push edi
// 0052312e  eb24                 jmp 0x523154
// 00523130  b856555555           mov eax, 0x55555556
// 00523135  f7ea                 imul edx
// 00523137  8bc2                 mov eax, edx
// 00523139  c1e81f               shr eax, 0x1f
// 0052313c  03c2                 add eax, edx
// 0052313e  3bc8                 cmp ecx, eax
// 00523140  7f19                 jg 0x52315b
// 00523142  807c242400           cmp byte ptr [esp + 0x24], 0
// 00523147  7412                 je 0x52315b
// 00523149  3bcd                 cmp ecx, ebp
// 0052314b  7e0e                 jle 0x52315b
// 0052314d  3bcf                 cmp ecx, edi
// 0052314f  7c02                 jl 0x523153
// 00523151  8bcf                 mov ecx, edi
// 00523153  51                   push ecx
// 00523154  8bce                 mov ecx, esi
// 00523156  e825fbffff           call 0x522c80
// 0052315b  3b7e04               cmp edi, dword ptr [esi + 4]
// 0052315e  897c2424             mov dword ptr [esp + 0x24], edi
// 00523162  7d2b                 jge 0x52318f
// 00523164  83cdff               or ebp, 0xffffffff
// 00523167  8bcf                 mov ecx, edi
// 00523169  c1e104               shl ecx, 4
// 0052316c  030e                 add ecx, dword ptr [esi]
// 0052316e  894c2420             mov dword ptr [esp + 0x20], ecx
// 00523172  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0052317a  7405                 je 0x523181
// 0052317c  e84fcd0300           call 0x55fed0
// 00523181  47                   inc edi
// 00523182  3b7e04               cmp edi, dword ptr [esi + 4]
// 00523185  896c2418             mov dword ptr [esp + 0x18], ebp
// 00523189  897c2424             mov dword ptr [esp + 0x24], edi
// 0052318d  7cd8                 jl 0x523167
// 0052318f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00523193  5f                   pop edi
// 00523194  5e                   pop esi
// 00523195  5d                   pop ebp
// 00523196  64890d00000000       mov dword ptr fs:[0], ecx
// 0052319d  83c410               add esp, 0x10
// 005231a0  c20800               ret 8
// library g3d-6.09/G3Dcpp\Discovery.cpp (function ?resize@?$Array@VNetAddress@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Discovery.cpp
