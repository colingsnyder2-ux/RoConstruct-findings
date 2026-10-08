// from server: 100% by auto
// roc 2007-08 004d0200  unit: RBX::TextureProxyBase  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d0200
//
// 004d0200  51                   push ecx
// 004d0201  53                   push ebx
// 004d0202  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004d0206  55                   push ebp
// 004d0207  56                   push esi
// 004d0208  57                   push edi
// 004d0209  8bf1                 mov esi, ecx
// 004d020b  8b4608               mov eax, dword ptr [esi + 8]
// 004d020e  8d3c9d00000000       lea edi, [ebx*4]
// 004d0215  6a10                 push 0x10
// 004d0217  57                   push edi
// 004d0218  89442418             mov dword ptr [esp + 0x18], eax
// 004d021c  e83ffe0200           call 0x500060
// 004d0221  57                   push edi
// 004d0222  6a00                 push 0
// 004d0224  50                   push eax
// 004d0225  894608               mov dword ptr [esi + 8], eax
// 004d0228  e853030300           call 0x500580
// 004d022d  33ed                 xor ebp, ebp
// 004d022f  83c414               add esp, 0x14
// 004d0232  396e0c               cmp dword ptr [esi + 0xc], ebp
// 004d0235  7e31                 jle 0x4d0268
// 004d0237  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d023b  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 004d023e  85c9                 test ecx, ecx
// 004d0240  741e                 je 0x4d0260
// 004d0242  8b01                 mov eax, dword ptr [ecx]
// 004d0244  33d2                 xor edx, edx
// 004d0246  f7f3                 div ebx
// 004d0248  8b4608               mov eax, dword ptr [esi + 8]
// 004d024b  8b7914               mov edi, dword ptr [ecx + 0x14]
// 004d024e  85ff                 test edi, edi
// 004d0250  8b0490               mov eax, dword ptr [eax + edx*4]
// 004d0253  894114               mov dword ptr [ecx + 0x14], eax
// 004d0256  8b4608               mov eax, dword ptr [esi + 8]
// 004d0259  890c90               mov dword ptr [eax + edx*4], ecx
// 004d025c  8bcf                 mov ecx, edi
// 004d025e  75e2                 jne 0x4d0242
// 004d0260  83c501               add ebp, 1
// 004d0263  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 004d0266  7ccf                 jl 0x4d0237
// 004d0268  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d026c  51                   push ecx
// 004d026d  e89ef50200           call 0x4ff810
// 004d0272  83c404               add esp, 4
// 004d0275  5f                   pop edi
// 004d0276  895e0c               mov dword ptr [esi + 0xc], ebx
// 004d0279  5e                   pop esi
// 004d027a  5d                   pop ebp
// 004d027b  5b                   pop ebx
// 004d027c  59                   pop ecx
// 004d027d  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?resize@?$Table@HV?$Array@H@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
