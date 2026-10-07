// roc 2008-06 007b96e0  unit: G3D::VMeshDirectedEdgeKey::?$Table  size: 428 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b96e0
//
// 007b96e0  6aff                 push -1
// 007b96e2  64a100000000         mov eax, dword ptr fs:[0]
// 007b96e8  68b6a77c00           push 0x7ca7b6
// 007b96ed  50                   push eax
// 007b96ee  64892500000000       mov dword ptr fs:[0], esp
// 007b96f5  83ec0c               sub esp, 0xc
// 007b96f8  53                   push ebx
// 007b96f9  55                   push ebp
// 007b96fa  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 007b96fe  56                   push esi
// 007b96ff  8b7504               mov esi, dword ptr [ebp + 4]
// 007b9702  c1e610               shl esi, 0x10
// 007b9705  037500               add esi, dword ptr [ebp]
// 007b9708  8bd9                 mov ebx, ecx
// 007b970a  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 007b970d  33d2                 xor edx, edx
// 007b970f  8bc6                 mov eax, esi
// 007b9711  f7f1                 div ecx
// 007b9713  8b4308               mov eax, dword ptr [ebx + 8]
// 007b9716  57                   push edi
// 007b9717  8bfa                 mov edi, edx
// 007b9719  8b14b8               mov edx, dword ptr [eax + edi*4]
// 007b971c  85d2                 test edx, edx
// 007b971e  7559                 jne 0x7b9779
// 007b9720  6a1c                 push 0x1c
// 007b9722  e809eed4ff           call 0x508530
// 007b9727  83c404               add esp, 4
// 007b972a  8944242c             mov dword ptr [esp + 0x2c], eax
// 007b972e  c744242400000000     mov dword ptr [esp + 0x24], 0
// 007b9736  85c0                 test eax, eax
// 007b9738  7432                 je 0x7b976c
// 007b973a  8b542430             mov edx, dword ptr [esp + 0x30]
// 007b973e  6a00                 push 0
// 007b9740  56                   push esi
// 007b9741  83ec0c               sub esp, 0xc
// 007b9744  89642428             mov dword ptr [esp + 0x28], esp
// 007b9748  8bcc                 mov ecx, esp
// 007b974a  52                   push edx
// 007b974b  e86078d9ff           call 0x550fb0
// 007b9750  8b4504               mov eax, dword ptr [ebp + 4]
// 007b9753  8b4d00               mov ecx, dword ptr [ebp]
// 007b9756  50                   push eax
// 007b9757  51                   push ecx
// 007b9758  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007b975c  e8cffeffff           call 0x7b9630
// 007b9761  8b5308               mov edx, dword ptr [ebx + 8]
// 007b9764  8904ba               mov dword ptr [edx + edi*4], eax
// 007b9767  e908010000           jmp 0x7b9874
// 007b976c  8b5308               mov edx, dword ptr [ebx + 8]
// 007b976f  33c0                 xor eax, eax
// 007b9771  8904ba               mov dword ptr [edx + edi*4], eax
// 007b9774  e9fb000000           jmp 0x7b9874
// 007b9779  c744241401000000     mov dword ptr [esp + 0x14], 1
// 007b9781  b001                 mov al, 1
// 007b9783  84c0                 test al, al
// 007b9785  7409                 je 0x7b9790
// 007b9787  c644241301           mov byte ptr [esp + 0x13], 1
// 007b978c  3b32                 cmp esi, dword ptr [edx]
// 007b978e  7409                 je 0x7b9799
// 007b9790  c644241300           mov byte ptr [esp + 0x13], 0
// 007b9795  3b32                 cmp esi, dword ptr [edx]
// 007b9797  753a                 jne 0x7b97d3
// 007b9799  33c0                 xor eax, eax
// 007b979b  8d4a04               lea ecx, [edx + 4]
// 007b979e  8bff                 mov edi, edi
// 007b97a0  8b39                 mov edi, dword ptr [ecx]
// 007b97a2  3b7c8500             cmp edi, dword ptr [ebp + eax*4]
// 007b97a6  752b                 jne 0x7b97d3
// 007b97a8  40                   inc eax
// 007b97a9  83c104               add ecx, 4
// 007b97ac  83f802               cmp eax, 2
// 007b97af  7cef                 jl 0x7b97a0
// 007b97b1  8b442430             mov eax, dword ptr [esp + 0x30]
// 007b97b5  50                   push eax
// 007b97b6  8d4a0c               lea ecx, [edx + 0xc]
// 007b97b9  e802feffff           call 0x7b95c0
// 007b97be  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007b97c2  64890d00000000       mov dword ptr fs:[0], ecx
// 007b97c9  5f                   pop edi
// 007b97ca  5e                   pop esi
// 007b97cb  5d                   pop ebp
// 007b97cc  5b                   pop ebx
// 007b97cd  83c418               add esp, 0x18
// 007b97d0  c20800               ret 8
// 007b97d3  8b5218               mov edx, dword ptr [edx + 0x18]
// 007b97d6  ff442414             inc dword ptr [esp + 0x14]
// 007b97da  85d2                 test edx, edx
// 007b97dc  7406                 je 0x7b97e4
// 007b97de  8a442413             mov al, byte ptr [esp + 0x13]
// 007b97e2  eb9f                 jmp 0x7b9783
// 007b97e4  33c9                 xor ecx, ecx
// 007b97e6  384c2413             cmp byte ptr [esp + 0x13], cl
// 007b97ea  0f94c1               sete cl
// 007b97ed  33d2                 xor edx, edx
// 007b97ef  837c241405           cmp dword ptr [esp + 0x14], 5
// 007b97f4  0f9fc2               setg dl
// 007b97f7  85ca                 test edx, ecx
// 007b97f9  741d                 je 0x7b9818
// 007b97fb  8b4304               mov eax, dword ptr [ebx + 4]
// 007b97fe  8d0c80               lea ecx, [eax + eax*4]
// 007b9801  8b430c               mov eax, dword ptr [ebx + 0xc]
// 007b9804  03c9                 add ecx, ecx
// 007b9806  03c9                 add ecx, ecx
// 007b9808  3bc1                 cmp eax, ecx
// 007b980a  7d0c                 jge 0x7b9818
// 007b980c  8d540001             lea edx, [eax + eax + 1]
// 007b9810  52                   push edx
// 007b9811  8bcb                 mov ecx, ebx
// 007b9813  e8f8c5d2ff           call 0x4e5e10
// 007b9818  33d2                 xor edx, edx
// 007b981a  8bc6                 mov eax, esi
// 007b981c  f7730c               div dword ptr [ebx + 0xc]
// 007b981f  6a1c                 push 0x1c
// 007b9821  8bea                 mov ebp, edx
// 007b9823  e808edd4ff           call 0x508530
// 007b9828  8bf8                 mov edi, eax
// 007b982a  83c404               add esp, 4
// 007b982d  897c2414             mov dword ptr [esp + 0x14], edi
// 007b9831  c744242401000000     mov dword ptr [esp + 0x24], 1
// 007b9839  85ff                 test edi, edi
// 007b983b  742f                 je 0x7b986c
// 007b983d  8b4308               mov eax, dword ptr [ebx + 8]
// 007b9840  8b0ca8               mov ecx, dword ptr [eax + ebp*4]
// 007b9843  8b542430             mov edx, dword ptr [esp + 0x30]
// 007b9847  51                   push ecx
// 007b9848  56                   push esi
// 007b9849  83ec0c               sub esp, 0xc
// 007b984c  8964242c             mov dword ptr [esp + 0x2c], esp
// 007b9850  8bcc                 mov ecx, esp
// 007b9852  52                   push edx
// 007b9853  e85877d9ff           call 0x550fb0
// 007b9858  8b442440             mov eax, dword ptr [esp + 0x40]
// 007b985c  8b4804               mov ecx, dword ptr [eax + 4]
// 007b985f  8b10                 mov edx, dword ptr [eax]
// 007b9861  51                   push ecx
// 007b9862  52                   push edx
// 007b9863  8bcf                 mov ecx, edi
// 007b9865  e8c6fdffff           call 0x7b9630
// 007b986a  eb02                 jmp 0x7b986e
// 007b986c  33c0                 xor eax, eax
// 007b986e  8b4b08               mov ecx, dword ptr [ebx + 8]
// 007b9871  8904a9               mov dword ptr [ecx + ebp*4], eax
// 007b9874  ff4304               inc dword ptr [ebx + 4]
// 007b9877  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007b987b  5f                   pop edi
// 007b987c  5e                   pop esi
// 007b987d  5d                   pop ebp
// 007b987e  64890d00000000       mov dword ptr fs:[0], ecx
// 007b9885  5b                   pop ebx
// 007b9886  83c418               add esp, 0x18
// 007b9889  c20800               ret 8
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?set@?$Table@VMeshDirectedEdgeKey@G3D@@V?$Array@H@2@@G3D@@QAEXABVMeshDirectedEdgeKey@2@ABV?$Array@H@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
