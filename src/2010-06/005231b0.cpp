// from server: 100% by auto
// roc 2010-06 005231b0  unit: RBX::MeshGen  size: 319 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005231b0
//
// 005231b0  6aff                 push -1
// 005231b2  6829e19800           push 0x98e129
// 005231b7  64a100000000         mov eax, dword ptr fs:[0]
// 005231bd  50                   push eax
// 005231be  64892500000000       mov dword ptr fs:[0], esp
// 005231c5  51                   push ecx
// 005231c6  8b442414             mov eax, dword ptr [esp + 0x14]
// 005231ca  55                   push ebp
// 005231cb  56                   push esi
// 005231cc  8bf1                 mov esi, ecx
// 005231ce  57                   push edi
// 005231cf  8b7e04               mov edi, dword ptr [esi + 4]
// 005231d2  894604               mov dword ptr [esi + 4], eax
// 005231d5  f605dc88c00001       test byte ptr [0xc088dc], 1
// 005231dc  8974240c             mov dword ptr [esp + 0xc], esi
// 005231e0  7514                 jne 0x5231f6
// 005231e2  830ddc88c00001       or dword ptr [0xc088dc], 1
// 005231e9  bd0a000000           mov ebp, 0xa
// 005231ee  892dd888c000         mov dword ptr [0xc088d8], ebp
// 005231f4  eb06                 jmp 0x5231fc
// 005231f6  8b2dd888c000         mov ebp, dword ptr [0xc088d8]
// 005231fc  8b4e04               mov ecx, dword ptr [esi + 4]
// 005231ff  8b5608               mov edx, dword ptr [esi + 8]
// 00523202  3bca                 cmp ecx, edx
// 00523204  7e70                 jle 0x523276
// 00523206  85d2                 test edx, edx
// 00523208  7509                 jne 0x523213
// 0052320a  894608               mov dword ptr [esi + 8], eax
// 0052320d  57                   push edi
// 0052320e  e987000000           jmp 0x52329a
// 00523213  3bcd                 cmp ecx, ebp
// 00523215  7d06                 jge 0x52321d
// 00523217  896e08               mov dword ptr [esi + 8], ebp
// 0052321a  57                   push edi
// 0052321b  eb7d                 jmp 0x52329a
// 0052321d  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 00523225  8bc2                 mov eax, edx
// 00523227  8d0440               lea eax, [eax + eax*2]
// 0052322a  03c0                 add eax, eax
// 0052322c  03c0                 add eax, eax
// 0052322e  03c0                 add eax, eax
// 00523230  3d801a0600           cmp eax, 0x61a80
// 00523235  760a                 jbe 0x523241
// 00523237  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 0052323f  eb0f                 jmp 0x523250
// 00523241  3d00fa0000           cmp eax, 0xfa00
// 00523246  7608                 jbe 0x523250
// 00523248  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 00523250  8bc2                 mov eax, edx
// 00523252  f30f2ac8             cvtsi2ss xmm1, eax
// 00523256  f30f59c8             mulss xmm1, xmm0
// 0052325a  f30f2cd1             cvttss2si edx, xmm1
// 0052325e  2bd0                 sub edx, eax
// 00523260  8d040a               lea eax, [edx + ecx]
// 00523263  894608               mov dword ptr [esi + 8], eax
// 00523266  8b0dd888c000         mov ecx, dword ptr [0xc088d8]
// 0052326c  3bc1                 cmp eax, ecx
// 0052326e  7d03                 jge 0x523273
// 00523270  894e08               mov dword ptr [esi + 8], ecx
// 00523273  57                   push edi
// 00523274  eb24                 jmp 0x52329a
// 00523276  b856555555           mov eax, 0x55555556
// 0052327b  f7ea                 imul edx
// 0052327d  8bc2                 mov eax, edx
// 0052327f  c1e81f               shr eax, 0x1f
// 00523282  03c2                 add eax, edx
// 00523284  3bc8                 cmp ecx, eax
// 00523286  7f19                 jg 0x5232a1
// 00523288  807c242400           cmp byte ptr [esp + 0x24], 0
// 0052328d  7412                 je 0x5232a1
// 0052328f  3bcd                 cmp ecx, ebp
// 00523291  7e0e                 jle 0x5232a1
// 00523293  3bcf                 cmp ecx, edi
// 00523295  7c02                 jl 0x523299
// 00523297  8bcf                 mov ecx, edi
// 00523299  51                   push ecx
// 0052329a  8bce                 mov ecx, esi
// 0052329c  e84ffaffff           call 0x522cf0
// 005232a1  3b7e04               cmp edi, dword ptr [esi + 4]
// 005232a4  897c2424             mov dword ptr [esp + 0x24], edi
// 005232a8  7d31                 jge 0x5232db
// 005232aa  83cdff               or ebp, 0xffffffff
// 005232ad  8d4900               lea ecx, [ecx]
// 005232b0  8b16                 mov edx, dword ptr [esi]
// 005232b2  8d0c7f               lea ecx, [edi + edi*2]
// 005232b5  8d0cca               lea ecx, [edx + ecx*8]
// 005232b8  894c2420             mov dword ptr [esp + 0x20], ecx
// 005232bc  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005232c4  85c9                 test ecx, ecx
// 005232c6  7405                 je 0x5232cd
// 005232c8  e8e3cb0300           call 0x55feb0
// 005232cd  47                   inc edi
// 005232ce  3b7e04               cmp edi, dword ptr [esi + 4]
// 005232d1  896c2418             mov dword ptr [esp + 0x18], ebp
// 005232d5  897c2424             mov dword ptr [esp + 0x24], edi
// 005232d9  7cd5                 jl 0x5232b0
// 005232db  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005232df  5f                   pop edi
// 005232e0  5e                   pop esi
// 005232e1  5d                   pop ebp
// 005232e2  64890d00000000       mov dword ptr fs:[0], ecx
// 005232e9  83c410               add esp, 0x10
// 005232ec  c20800               ret 8
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?resize@?$Array@VFace@MeshAlg@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
