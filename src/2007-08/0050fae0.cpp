// roc 2007-08 0050fae0  unit: G3D::VMeshDirectedEdgeKey::?$Table  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050fae0
//
// 0050fae0  6aff                 push -1
// 0050fae2  68e3007500           push 0x7500e3
// 0050fae7  64a100000000         mov eax, dword ptr fs:[0]
// 0050faed  50                   push eax
// 0050faee  51                   push ecx
// 0050faef  56                   push esi
// 0050faf0  a188518b00           mov eax, dword ptr [0x8b5188]
// 0050faf5  33c4                 xor eax, esp
// 0050faf7  50                   push eax
// 0050faf8  8d44240c             lea eax, [esp + 0xc]
// 0050fafc  64a300000000         mov dword ptr fs:[0], eax
// 0050fb02  8bf1                 mov esi, ecx
// 0050fb04  89742408             mov dword ptr [esp + 8], esi
// 0050fb08  33c0                 xor eax, eax
// 0050fb0a  89442414             mov dword ptr [esp + 0x14], eax
// 0050fb0e  894610               mov dword ptr [esi + 0x10], eax
// 0050fb11  894614               mov dword ptr [esi + 0x14], eax
// 0050fb14  89460c               mov dword ptr [esi + 0xc], eax
// 0050fb17  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0050fb1b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0050fb1f  8d542424             lea edx, [esp + 0x24]
// 0050fb23  894e08               mov dword ptr [esi + 8], ecx
// 0050fb26  52                   push edx
// 0050fb27  8d4e0c               lea ecx, [esi + 0xc]
// 0050fb2a  c644241801           mov byte ptr [esp + 0x18], 1
// 0050fb2f  894604               mov dword ptr [esi + 4], eax
// 0050fb32  e8a9fdffff           call 0x50f8e0
// 0050fb37  8b542424             mov edx, dword ptr [esp + 0x24]
// 0050fb3b  8b442430             mov eax, dword ptr [esp + 0x30]
// 0050fb3f  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0050fb43  52                   push edx
// 0050fb44  8906                 mov dword ptr [esi], eax
// 0050fb46  894e18               mov dword ptr [esi + 0x18], ecx
// 0050fb49  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0050fb51  e8bafcfeff           call 0x4ff810
// 0050fb56  83c404               add esp, 4
// 0050fb59  8bc6                 mov eax, esi
// 0050fb5b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0050fb5f  64890d00000000       mov dword ptr fs:[0], ecx
// 0050fb66  59                   pop ecx
// 0050fb67  5e                   pop esi
// 0050fb68  83c410               add esp, 0x10
// 0050fb6b  c21c00               ret 0x1c
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ??0Node@?$Table@VMeshDirectedEdgeKey@G3D@@V?$Array@H@2@@G3D@@QAE@VMeshDirectedEdgeKey@2@V?$Array@H@2@IPAV012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
