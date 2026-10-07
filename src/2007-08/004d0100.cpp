// roc 2007-08 004d0100  unit: RBX::TextureProxyBase  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d0100
//
// 004d0100  51                   push ecx
// 004d0101  53                   push ebx
// 004d0102  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004d0106  55                   push ebp
// 004d0107  56                   push esi
// 004d0108  57                   push edi
// 004d0109  8bf1                 mov esi, ecx
// 004d010b  8b4608               mov eax, dword ptr [esi + 8]
// 004d010e  8d3c9d00000000       lea edi, [ebx*4]
// 004d0115  6a10                 push 0x10
// 004d0117  57                   push edi
// 004d0118  89442418             mov dword ptr [esp + 0x18], eax
// 004d011c  e83fff0200           call 0x500060
// 004d0121  57                   push edi
// 004d0122  6a00                 push 0
// 004d0124  50                   push eax
// 004d0125  894608               mov dword ptr [esi + 8], eax
// 004d0128  e853040300           call 0x500580
// 004d012d  33ed                 xor ebp, ebp
// 004d012f  83c414               add esp, 0x14
// 004d0132  396e0c               cmp dword ptr [esi + 0xc], ebp
// 004d0135  7e31                 jle 0x4d0168
// 004d0137  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d013b  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 004d013e  85c9                 test ecx, ecx
// 004d0140  741e                 je 0x4d0160
// 004d0142  8b01                 mov eax, dword ptr [ecx]
// 004d0144  33d2                 xor edx, edx
// 004d0146  f7f3                 div ebx
// 004d0148  8b4608               mov eax, dword ptr [esi + 8]
// 004d014b  8b7918               mov edi, dword ptr [ecx + 0x18]
// 004d014e  85ff                 test edi, edi
// 004d0150  8b0490               mov eax, dword ptr [eax + edx*4]
// 004d0153  894118               mov dword ptr [ecx + 0x18], eax
// 004d0156  8b4608               mov eax, dword ptr [esi + 8]
// 004d0159  890c90               mov dword ptr [eax + edx*4], ecx
// 004d015c  8bcf                 mov ecx, edi
// 004d015e  75e2                 jne 0x4d0142
// 004d0160  83c501               add ebp, 1
// 004d0163  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 004d0166  7ccf                 jl 0x4d0137
// 004d0168  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d016c  51                   push ecx
// 004d016d  e89ef60200           call 0x4ff810
// 004d0172  83c404               add esp, 4
// 004d0175  5f                   pop edi
// 004d0176  895e0c               mov dword ptr [esi + 0xc], ebx
// 004d0179  5e                   pop esi
// 004d017a  5d                   pop ebp
// 004d017b  5b                   pop ebx
// 004d017c  59                   pop ecx
// 004d017d  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?resize@?$Table@VMeshDirectedEdgeKey@G3D@@V?$Array@H@2@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
