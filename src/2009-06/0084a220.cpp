// roc 2009-06 0084a220  unit: G3D::VMeshDirectedEdgeKey::?$Table  size: 428 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0084a220
//
// 0084a220  6aff                 push -1
// 0084a222  64a100000000         mov eax, dword ptr fs:[0]
// 0084a228  68f6df8500           push 0x85dff6
// 0084a22d  50                   push eax
// 0084a22e  64892500000000       mov dword ptr fs:[0], esp
// 0084a235  83ec0c               sub esp, 0xc
// 0084a238  53                   push ebx
// 0084a239  55                   push ebp
// 0084a23a  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0084a23e  56                   push esi
// 0084a23f  8b7504               mov esi, dword ptr [ebp + 4]
// 0084a242  c1e610               shl esi, 0x10
// 0084a245  037500               add esi, dword ptr [ebp]
// 0084a248  8bd9                 mov ebx, ecx
// 0084a24a  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 0084a24d  33d2                 xor edx, edx
// 0084a24f  8bc6                 mov eax, esi
// 0084a251  f7f1                 div ecx
// 0084a253  8b4308               mov eax, dword ptr [ebx + 8]
// 0084a256  57                   push edi
// 0084a257  8bfa                 mov edi, edx
// 0084a259  8b14b8               mov edx, dword ptr [eax + edi*4]
// 0084a25c  85d2                 test edx, edx
// 0084a25e  7559                 jne 0x84a2b9
// 0084a260  6a1c                 push 0x1c
// 0084a262  e8d90ed2ff           call 0x56b140
// 0084a267  83c404               add esp, 4
// 0084a26a  8944242c             mov dword ptr [esp + 0x2c], eax
// 0084a26e  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0084a276  85c0                 test eax, eax
// 0084a278  7432                 je 0x84a2ac
// 0084a27a  8b542430             mov edx, dword ptr [esp + 0x30]
// 0084a27e  6a00                 push 0
// 0084a280  56                   push esi
// 0084a281  83ec0c               sub esp, 0xc
// 0084a284  89642428             mov dword ptr [esp + 0x28], esp
// 0084a288  8bcc                 mov ecx, esp
// 0084a28a  52                   push edx
// 0084a28b  e85046d6ff           call 0x5ae8e0
// 0084a290  8b4504               mov eax, dword ptr [ebp + 4]
// 0084a293  8b4d00               mov ecx, dword ptr [ebp]
// 0084a296  50                   push eax
// 0084a297  51                   push ecx
// 0084a298  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0084a29c  e8cffeffff           call 0x84a170
// 0084a2a1  8b5308               mov edx, dword ptr [ebx + 8]
// 0084a2a4  8904ba               mov dword ptr [edx + edi*4], eax
// 0084a2a7  e908010000           jmp 0x84a3b4
// 0084a2ac  8b5308               mov edx, dword ptr [ebx + 8]
// 0084a2af  33c0                 xor eax, eax
// 0084a2b1  8904ba               mov dword ptr [edx + edi*4], eax
// 0084a2b4  e9fb000000           jmp 0x84a3b4
// 0084a2b9  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0084a2c1  b001                 mov al, 1
// 0084a2c3  84c0                 test al, al
// 0084a2c5  7409                 je 0x84a2d0
// 0084a2c7  c644241301           mov byte ptr [esp + 0x13], 1
// 0084a2cc  3b32                 cmp esi, dword ptr [edx]
// 0084a2ce  7409                 je 0x84a2d9
// 0084a2d0  c644241300           mov byte ptr [esp + 0x13], 0
// 0084a2d5  3b32                 cmp esi, dword ptr [edx]
// 0084a2d7  753a                 jne 0x84a313
// 0084a2d9  33c0                 xor eax, eax
// 0084a2db  8d4a04               lea ecx, [edx + 4]
// 0084a2de  8bff                 mov edi, edi
// 0084a2e0  8b39                 mov edi, dword ptr [ecx]
// 0084a2e2  3b7c8500             cmp edi, dword ptr [ebp + eax*4]
// 0084a2e6  752b                 jne 0x84a313
// 0084a2e8  40                   inc eax
// 0084a2e9  83c104               add ecx, 4
// 0084a2ec  83f802               cmp eax, 2
// 0084a2ef  7cef                 jl 0x84a2e0
// 0084a2f1  8b442430             mov eax, dword ptr [esp + 0x30]
// 0084a2f5  50                   push eax
// 0084a2f6  8d4a0c               lea ecx, [edx + 0xc]
// 0084a2f9  e802feffff           call 0x84a100
// 0084a2fe  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0084a302  64890d00000000       mov dword ptr fs:[0], ecx
// 0084a309  5f                   pop edi
// 0084a30a  5e                   pop esi
// 0084a30b  5d                   pop ebp
// 0084a30c  5b                   pop ebx
// 0084a30d  83c418               add esp, 0x18
// 0084a310  c20800               ret 8
// 0084a313  8b5218               mov edx, dword ptr [edx + 0x18]
// 0084a316  ff442414             inc dword ptr [esp + 0x14]
// 0084a31a  85d2                 test edx, edx
// 0084a31c  7406                 je 0x84a324
// 0084a31e  8a442413             mov al, byte ptr [esp + 0x13]
// 0084a322  eb9f                 jmp 0x84a2c3
// 0084a324  33c9                 xor ecx, ecx
// 0084a326  384c2413             cmp byte ptr [esp + 0x13], cl
// 0084a32a  0f94c1               sete cl
// 0084a32d  33d2                 xor edx, edx
// 0084a32f  837c241405           cmp dword ptr [esp + 0x14], 5
// 0084a334  0f9fc2               setg dl
// 0084a337  85ca                 test edx, ecx
// 0084a339  741d                 je 0x84a358
// 0084a33b  8b4304               mov eax, dword ptr [ebx + 4]
// 0084a33e  8d0c80               lea ecx, [eax + eax*4]
// 0084a341  8b430c               mov eax, dword ptr [ebx + 0xc]
// 0084a344  03c9                 add ecx, ecx
// 0084a346  03c9                 add ecx, ecx
// 0084a348  3bc1                 cmp eax, ecx
// 0084a34a  7d0c                 jge 0x84a358
// 0084a34c  8d540001             lea edx, [eax + eax + 1]
// 0084a350  52                   push edx
// 0084a351  8bcb                 mov ecx, ebx
// 0084a353  e898c5ccff           call 0x5168f0
// 0084a358  33d2                 xor edx, edx
// 0084a35a  8bc6                 mov eax, esi
// 0084a35c  f7730c               div dword ptr [ebx + 0xc]
// 0084a35f  6a1c                 push 0x1c
// 0084a361  8bea                 mov ebp, edx
// 0084a363  e8d80dd2ff           call 0x56b140
// 0084a368  8bf8                 mov edi, eax
// 0084a36a  83c404               add esp, 4
// 0084a36d  897c2414             mov dword ptr [esp + 0x14], edi
// 0084a371  c744242401000000     mov dword ptr [esp + 0x24], 1
// 0084a379  85ff                 test edi, edi
// 0084a37b  742f                 je 0x84a3ac
// 0084a37d  8b4308               mov eax, dword ptr [ebx + 8]
// 0084a380  8b0ca8               mov ecx, dword ptr [eax + ebp*4]
// 0084a383  8b542430             mov edx, dword ptr [esp + 0x30]
// 0084a387  51                   push ecx
// 0084a388  56                   push esi
// 0084a389  83ec0c               sub esp, 0xc
// 0084a38c  8964242c             mov dword ptr [esp + 0x2c], esp
// 0084a390  8bcc                 mov ecx, esp
// 0084a392  52                   push edx
// 0084a393  e84845d6ff           call 0x5ae8e0
// 0084a398  8b442440             mov eax, dword ptr [esp + 0x40]
// 0084a39c  8b4804               mov ecx, dword ptr [eax + 4]
// 0084a39f  8b10                 mov edx, dword ptr [eax]
// 0084a3a1  51                   push ecx
// 0084a3a2  52                   push edx
// 0084a3a3  8bcf                 mov ecx, edi
// 0084a3a5  e8c6fdffff           call 0x84a170
// 0084a3aa  eb02                 jmp 0x84a3ae
// 0084a3ac  33c0                 xor eax, eax
// 0084a3ae  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0084a3b1  8904a9               mov dword ptr [ecx + ebp*4], eax
// 0084a3b4  ff4304               inc dword ptr [ebx + 4]
// 0084a3b7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0084a3bb  5f                   pop edi
// 0084a3bc  5e                   pop esi
// 0084a3bd  5d                   pop ebp
// 0084a3be  64890d00000000       mov dword ptr fs:[0], ecx
// 0084a3c5  5b                   pop ebx
// 0084a3c6  83c418               add esp, 0x18
// 0084a3c9  c20800               ret 8
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?set@?$Table@VMeshDirectedEdgeKey@G3D@@V?$Array@H@2@@G3D@@QAEXABVMeshDirectedEdgeKey@2@ABV?$Array@H@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
