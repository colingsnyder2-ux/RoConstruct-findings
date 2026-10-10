// from server: 100% by tester
// roc 2007-03 005041f0  unit: seg_00500000  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005041f0
//
// 005041f0  6aff                 push -1
// 005041f2  6853107500           push 0x751053
// 005041f7  64a100000000         mov eax, dword ptr fs:[0]
// 005041fd  50                   push eax
// 005041fe  51                   push ecx
// 005041ff  56                   push esi
// 00504200  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00504205  33c4                 xor eax, esp
// 00504207  50                   push eax
// 00504208  8d44240c             lea eax, [esp + 0xc]
// 0050420c  64a300000000         mov dword ptr fs:[0], eax
// 00504212  8bf1                 mov esi, ecx
// 00504214  89742408             mov dword ptr [esp + 8], esi
// 00504218  33c0                 xor eax, eax
// 0050421a  89442414             mov dword ptr [esp + 0x14], eax
// 0050421e  894610               mov dword ptr [esi + 0x10], eax
// 00504221  894614               mov dword ptr [esi + 0x14], eax
// 00504224  89460c               mov dword ptr [esi + 0xc], eax
// 00504227  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0050422b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0050422f  8d542424             lea edx, [esp + 0x24]
// 00504233  894e08               mov dword ptr [esi + 8], ecx
// 00504236  52                   push edx
// 00504237  8d4e0c               lea ecx, [esi + 0xc]
// 0050423a  c644241801           mov byte ptr [esp + 0x18], 1
// 0050423f  894604               mov dword ptr [esi + 4], eax
// 00504242  e8a9fdffff           call 0x503ff0
// 00504247  8b542424             mov edx, dword ptr [esp + 0x24]
// 0050424b  8b442430             mov eax, dword ptr [esp + 0x30]
// 0050424f  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00504253  52                   push edx
// 00504254  8906                 mov dword ptr [esi], eax
// 00504256  894e18               mov dword ptr [esi + 0x18], ecx
// 00504259  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00504261  e81af1feff           call 0x4f3380
// 00504266  83c404               add esp, 4
// 00504269  8bc6                 mov eax, esi
// 0050426b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0050426f  64890d00000000       mov dword ptr fs:[0], ecx
// 00504276  59                   pop ecx
// 00504277  5e                   pop esi
// 00504278  83c410               add esp, 0x10
// 0050427b  c21c00               ret 0x1c
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ??0Node@?$Table@VMeshDirectedEdgeKey@G3D@@V?$Array@H@2@@G3D@@QAE@VMeshDirectedEdgeKey@2@V?$Array@H@2@IPAV012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
