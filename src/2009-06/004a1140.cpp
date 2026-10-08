// roc 2009-06 004a1140  unit: G3D::PBVTextureFormat::?$Table  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a1140
//
// 004a1140  64a100000000         mov eax, dword ptr fs:[0]
// 004a1146  6aff                 push -1
// 004a1148  68f1708500           push 0x8570f1
// 004a114d  50                   push eax
// 004a114e  64892500000000       mov dword ptr fs:[0], esp
// 004a1155  83ec20               sub esp, 0x20
// 004a1158  56                   push esi
// 004a1159  8bf1                 mov esi, ecx
// 004a115b  8b4638               mov eax, dword ptr [esi + 0x38]
// 004a115e  897024               mov dword ptr [eax + 0x24], esi
// 004a1161  833d68c8a30001       cmp dword ptr [0xa3c868], 1
// 004a1168  0f8481000000         je 0x4a11ef
// 004a116e  57                   push edi
// 004a116f  68b4018c00           push 0x8c01b4
// 004a1174  8d4c2410             lea ecx, [esp + 0x10]
// 004a1178  ff15b4e48900         call dword ptr [0x89e4b4]
// 004a117e  8d44240c             lea eax, [esp + 0xc]
// 004a1182  50                   push eax
// 004a1183  8d4c240c             lea ecx, [esp + 0xc]
// 004a1187  51                   push ecx
// 004a1188  8bce                 mov ecx, esi
// 004a118a  c744243800000000     mov dword ptr [esp + 0x38], 0
// 004a1192  e8c9fbffff           call 0x4a0d60
// 004a1197  8d4c240c             lea ecx, [esp + 0xc]
// 004a119b  c644243002           mov byte ptr [esp + 0x30], 2
// 004a11a0  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a11a6  8b7c2408             mov edi, dword ptr [esp + 8]
// 004a11aa  ff4678               inc dword ptr [esi + 0x78]
// 004a11ad  ff4670               inc dword ptr [esi + 0x70]
// 004a11b0  8bcf                 mov ecx, edi
// 004a11b2  e8f9de0000           call 0x4af0b0
// 004a11b7  8b7638               mov esi, dword ptr [esi + 0x38]
// 004a11ba  8d4e0c               lea ecx, [esi + 0xc]
// 004a11bd  57                   push edi
// 004a11be  e89de6ffff           call 0x49f860
// 004a11c3  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 004a11cb  85ff                 test edi, edi
// 004a11cd  741f                 je 0x4a11ee
// 004a11cf  8d5704               lea edx, [edi + 4]
// 004a11d2  52                   push edx
// 004a11d3  ff15a4e18900         call dword ptr [0x89e1a4]
// 004a11d9  85c0                 test eax, eax
// 004a11db  7511                 jne 0x4a11ee
// 004a11dd  8bcf                 mov ecx, edi
// 004a11df  e89c3bfaff           call 0x444d80
// 004a11e4  8b07                 mov eax, dword ptr [edi]
// 004a11e6  8b10                 mov edx, dword ptr [eax]
// 004a11e8  6a01                 push 1
// 004a11ea  8bcf                 mov ecx, edi
// 004a11ec  ffd2                 call edx
// 004a11ee  5f                   pop edi
// 004a11ef  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004a11f3  5e                   pop esi
// 004a11f4  64890d00000000       mov dword ptr fs:[0], ecx
// 004a11fb  83c42c               add esp, 0x2c
// 004a11fe  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setVARAreaMilestone@RenderDevice@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
