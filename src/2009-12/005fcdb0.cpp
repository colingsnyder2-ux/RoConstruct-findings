// roc 2009-12 005fcdb0  unit: G3D::VMeshDirectedEdgeKey::?$Table  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fcdb0
//
// 005fcdb0  64a100000000         mov eax, dword ptr fs:[0]
// 005fcdb6  6aff                 push -1
// 005fcdb8  68e8369500           push 0x9536e8
// 005fcdbd  50                   push eax
// 005fcdbe  64892500000000       mov dword ptr fs:[0], esp
// 005fcdc5  83ec0c               sub esp, 0xc
// 005fcdc8  53                   push ebx
// 005fcdc9  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 005fcdcd  56                   push esi
// 005fcdce  53                   push ebx
// 005fcdcf  8bf1                 mov esi, ecx
// 005fcdd1  e88afaffff           call 0x5fc860
// 005fcdd6  84c0                 test al, al
// 005fcdd8  755c                 jne 0x5fce36
// 005fcdda  57                   push edi
// 005fcddb  33ff                 xor edi, edi
// 005fcddd  6a01                 push 1
// 005fcddf  6a01                 push 1
// 005fcde1  8d4c2414             lea ecx, [esp + 0x14]
// 005fcde5  897c2418             mov dword ptr [esp + 0x18], edi
// 005fcde9  897c241c             mov dword ptr [esp + 0x1c], edi
// 005fcded  897c2414             mov dword ptr [esp + 0x14], edi
// 005fcdf1  e8ea9dedff           call 0x4d6be0
// 005fcdf6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005fcdfa  8d4c240c             lea ecx, [esp + 0xc]
// 005fcdfe  51                   push ecx
// 005fcdff  897c2424             mov dword ptr [esp + 0x24], edi
// 005fce03  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005fce07  53                   push ebx
// 005fce08  8bce                 mov ecx, esi
// 005fce0a  8907                 mov dword ptr [edi], eax
// 005fce0c  e8effdffff           call 0x5fcc00
// 005fce11  57                   push edi
// 005fce12  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005fce1a  e8c1d5feff           call 0x5ea3e0
// 005fce1f  83c404               add esp, 4
// 005fce22  5f                   pop edi
// 005fce23  5e                   pop esi
// 005fce24  5b                   pop ebx
// 005fce25  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005fce29  64890d00000000       mov dword ptr fs:[0], ecx
// 005fce30  83c418               add esp, 0x18
// 005fce33  c20800               ret 8
// 005fce36  8d542428             lea edx, [esp + 0x28]
// 005fce3a  52                   push edx
// 005fce3b  53                   push ebx
// 005fce3c  8bce                 mov ecx, esi
// 005fce3e  e87dfaffff           call 0x5fc8c0
// 005fce43  8bc8                 mov ecx, eax
// 005fce45  e8a66beeff           call 0x4e39f0
// 005fce4a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005fce4e  5e                   pop esi
// 005fce4f  5b                   pop ebx
// 005fce50  64890d00000000       mov dword ptr fs:[0], ecx
// 005fce57  83c418               add esp, 0x18
// 005fce5a  c20800               ret 8
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?insert@MeshEdgeTable@G3D@@QAEXABVMeshDirectedEdgeKey@2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
