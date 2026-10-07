// roc 2007-08 0050fd10  unit: G3D::VMeshDirectedEdgeKey::?$Table  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050fd10
//
// 0050fd10  6aff                 push -1
// 0050fd12  6848017500           push 0x750148
// 0050fd17  64a100000000         mov eax, dword ptr fs:[0]
// 0050fd1d  50                   push eax
// 0050fd1e  83ec0c               sub esp, 0xc
// 0050fd21  53                   push ebx
// 0050fd22  56                   push esi
// 0050fd23  57                   push edi
// 0050fd24  a188518b00           mov eax, dword ptr [0x8b5188]
// 0050fd29  33c4                 xor eax, esp
// 0050fd2b  50                   push eax
// 0050fd2c  8d44241c             lea eax, [esp + 0x1c]
// 0050fd30  64a300000000         mov dword ptr fs:[0], eax
// 0050fd36  8bf1                 mov esi, ecx
// 0050fd38  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0050fd3c  53                   push ebx
// 0050fd3d  e81efcffff           call 0x50f960
// 0050fd42  84c0                 test al, al
// 0050fd44  755c                 jne 0x50fda2
// 0050fd46  33ff                 xor edi, edi
// 0050fd48  6a01                 push 1
// 0050fd4a  6a01                 push 1
// 0050fd4c  8d4c2418             lea ecx, [esp + 0x18]
// 0050fd50  897c241c             mov dword ptr [esp + 0x1c], edi
// 0050fd54  897c2420             mov dword ptr [esp + 0x20], edi
// 0050fd58  897c2418             mov dword ptr [esp + 0x18], edi
// 0050fd5c  e83fcdf6ff           call 0x47caa0
// 0050fd61  8b442430             mov eax, dword ptr [esp + 0x30]
// 0050fd65  8d4c2410             lea ecx, [esp + 0x10]
// 0050fd69  51                   push ecx
// 0050fd6a  897c2428             mov dword ptr [esp + 0x28], edi
// 0050fd6e  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0050fd72  53                   push ebx
// 0050fd73  8bce                 mov ecx, esi
// 0050fd75  8907                 mov dword ptr [edi], eax
// 0050fd77  e8f4fdffff           call 0x50fb70
// 0050fd7c  57                   push edi
// 0050fd7d  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0050fd85  e886fafeff           call 0x4ff810
// 0050fd8a  83c404               add esp, 4
// 0050fd8d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0050fd91  64890d00000000       mov dword ptr fs:[0], ecx
// 0050fd98  59                   pop ecx
// 0050fd99  5f                   pop edi
// 0050fd9a  5e                   pop esi
// 0050fd9b  5b                   pop ebx
// 0050fd9c  83c418               add esp, 0x18
// 0050fd9f  c20800               ret 8
// 0050fda2  8d542430             lea edx, [esp + 0x30]
// 0050fda6  52                   push edx
// 0050fda7  53                   push ebx
// 0050fda8  8bce                 mov ecx, esi
// 0050fdaa  e811fcffff           call 0x50f9c0
// 0050fdaf  8bc8                 mov ecx, eax
// 0050fdb1  e8fa4afeff           call 0x4f48b0
// 0050fdb6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0050fdba  64890d00000000       mov dword ptr fs:[0], ecx
// 0050fdc1  59                   pop ecx
// 0050fdc2  5f                   pop edi
// 0050fdc3  5e                   pop esi
// 0050fdc4  5b                   pop ebx
// 0050fdc5  83c418               add esp, 0x18
// 0050fdc8  c20800               ret 8
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?insert@MeshEdgeTable@G3D@@QAEXABVMeshDirectedEdgeKey@2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
