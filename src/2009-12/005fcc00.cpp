// roc 2009-12 005fcc00  unit: G3D::VMeshDirectedEdgeKey::?$Table  size: 428 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fcc00
//
// 005fcc00  6aff                 push -1
// 005fcc02  64a100000000         mov eax, dword ptr fs:[0]
// 005fcc08  68a6d29300           push 0x93d2a6
// 005fcc0d  50                   push eax
// 005fcc0e  64892500000000       mov dword ptr fs:[0], esp
// 005fcc15  83ec0c               sub esp, 0xc
// 005fcc18  53                   push ebx
// 005fcc19  55                   push ebp
// 005fcc1a  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 005fcc1e  56                   push esi
// 005fcc1f  8b7504               mov esi, dword ptr [ebp + 4]
// 005fcc22  c1e610               shl esi, 0x10
// 005fcc25  037500               add esi, dword ptr [ebp]
// 005fcc28  8bd9                 mov ebx, ecx
// 005fcc2a  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 005fcc2d  33d2                 xor edx, edx
// 005fcc2f  8bc6                 mov eax, esi
// 005fcc31  f7f1                 div ecx
// 005fcc33  8b4308               mov eax, dword ptr [ebx + 8]
// 005fcc36  57                   push edi
// 005fcc37  8bfa                 mov edi, edx
// 005fcc39  8b14b8               mov edx, dword ptr [eax + edi*4]
// 005fcc3c  85d2                 test edx, edx
// 005fcc3e  7559                 jne 0x5fcc99
// 005fcc40  6a1c                 push 0x1c
// 005fcc42  e859d6feff           call 0x5ea2a0
// 005fcc47  83c404               add esp, 4
// 005fcc4a  8944242c             mov dword ptr [esp + 0x2c], eax
// 005fcc4e  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005fcc56  85c0                 test eax, eax
// 005fcc58  7432                 je 0x5fcc8c
// 005fcc5a  8b542430             mov edx, dword ptr [esp + 0x30]
// 005fcc5e  6a00                 push 0
// 005fcc60  56                   push esi
// 005fcc61  83ec0c               sub esp, 0xc
// 005fcc64  89642428             mov dword ptr [esp + 0x28], esp
// 005fcc68  8bcc                 mov ecx, esp
// 005fcc6a  52                   push edx
// 005fcc6b  e8a0baeeff           call 0x4e8710
// 005fcc70  8b4504               mov eax, dword ptr [ebp + 4]
// 005fcc73  8b4d00               mov ecx, dword ptr [ebp]
// 005fcc76  50                   push eax
// 005fcc77  51                   push ecx
// 005fcc78  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005fcc7c  e8cffeffff           call 0x5fcb50
// 005fcc81  8b5308               mov edx, dword ptr [ebx + 8]
// 005fcc84  8904ba               mov dword ptr [edx + edi*4], eax
// 005fcc87  e908010000           jmp 0x5fcd94
// 005fcc8c  8b5308               mov edx, dword ptr [ebx + 8]
// 005fcc8f  33c0                 xor eax, eax
// 005fcc91  8904ba               mov dword ptr [edx + edi*4], eax
// 005fcc94  e9fb000000           jmp 0x5fcd94
// 005fcc99  c744241401000000     mov dword ptr [esp + 0x14], 1
// 005fcca1  b001                 mov al, 1
// 005fcca3  84c0                 test al, al
// 005fcca5  7409                 je 0x5fccb0
// 005fcca7  c644241301           mov byte ptr [esp + 0x13], 1
// 005fccac  3b32                 cmp esi, dword ptr [edx]
// 005fccae  7409                 je 0x5fccb9
// 005fccb0  c644241300           mov byte ptr [esp + 0x13], 0
// 005fccb5  3b32                 cmp esi, dword ptr [edx]
// 005fccb7  753a                 jne 0x5fccf3
// 005fccb9  33c0                 xor eax, eax
// 005fccbb  8d4a04               lea ecx, [edx + 4]
// 005fccbe  8bff                 mov edi, edi
// 005fccc0  8b39                 mov edi, dword ptr [ecx]
// 005fccc2  3b7c8500             cmp edi, dword ptr [ebp + eax*4]
// 005fccc6  752b                 jne 0x5fccf3
// 005fccc8  40                   inc eax
// 005fccc9  83c104               add ecx, 4
// 005fcccc  83f802               cmp eax, 2
// 005fcccf  7cef                 jl 0x5fccc0
// 005fccd1  8b442430             mov eax, dword ptr [esp + 0x30]
// 005fccd5  50                   push eax
// 005fccd6  8d4a0c               lea ecx, [edx + 0xc]
// 005fccd9  e802feffff           call 0x5fcae0
// 005fccde  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005fcce2  64890d00000000       mov dword ptr fs:[0], ecx
// 005fcce9  5f                   pop edi
// 005fccea  5e                   pop esi
// 005fcceb  5d                   pop ebp
// 005fccec  5b                   pop ebx
// 005fcced  83c418               add esp, 0x18
// 005fccf0  c20800               ret 8
// 005fccf3  8b5218               mov edx, dword ptr [edx + 0x18]
// 005fccf6  ff442414             inc dword ptr [esp + 0x14]
// 005fccfa  85d2                 test edx, edx
// 005fccfc  7406                 je 0x5fcd04
// 005fccfe  8a442413             mov al, byte ptr [esp + 0x13]
// 005fcd02  eb9f                 jmp 0x5fcca3
// 005fcd04  33c9                 xor ecx, ecx
// 005fcd06  384c2413             cmp byte ptr [esp + 0x13], cl
// 005fcd0a  0f94c1               sete cl
// 005fcd0d  33d2                 xor edx, edx
// 005fcd0f  837c241405           cmp dword ptr [esp + 0x14], 5
// 005fcd14  0f9fc2               setg dl
// 005fcd17  85ca                 test edx, ecx
// 005fcd19  741d                 je 0x5fcd38
// 005fcd1b  8b4304               mov eax, dword ptr [ebx + 4]
// 005fcd1e  8d0c80               lea ecx, [eax + eax*4]
// 005fcd21  8b430c               mov eax, dword ptr [ebx + 0xc]
// 005fcd24  03c9                 add ecx, ecx
// 005fcd26  03c9                 add ecx, ecx
// 005fcd28  3bc1                 cmp eax, ecx
// 005fcd2a  7d0c                 jge 0x5fcd38
// 005fcd2c  8d540001             lea edx, [eax + eax + 1]
// 005fcd30  52                   push edx
// 005fcd31  8bcb                 mov ecx, ebx
// 005fcd33  e838f7fcff           call 0x5cc470
// 005fcd38  33d2                 xor edx, edx
// 005fcd3a  8bc6                 mov eax, esi
// 005fcd3c  f7730c               div dword ptr [ebx + 0xc]
// 005fcd3f  6a1c                 push 0x1c
// 005fcd41  8bea                 mov ebp, edx
// 005fcd43  e858d5feff           call 0x5ea2a0
// 005fcd48  8bf8                 mov edi, eax
// 005fcd4a  83c404               add esp, 4
// 005fcd4d  897c2414             mov dword ptr [esp + 0x14], edi
// 005fcd51  c744242401000000     mov dword ptr [esp + 0x24], 1
// 005fcd59  85ff                 test edi, edi
// 005fcd5b  742f                 je 0x5fcd8c
// 005fcd5d  8b4308               mov eax, dword ptr [ebx + 8]
// 005fcd60  8b0ca8               mov ecx, dword ptr [eax + ebp*4]
// 005fcd63  8b542430             mov edx, dword ptr [esp + 0x30]
// 005fcd67  51                   push ecx
// 005fcd68  56                   push esi
// 005fcd69  83ec0c               sub esp, 0xc
// 005fcd6c  8964242c             mov dword ptr [esp + 0x2c], esp
// 005fcd70  8bcc                 mov ecx, esp
// 005fcd72  52                   push edx
// 005fcd73  e898b9eeff           call 0x4e8710
// 005fcd78  8b442440             mov eax, dword ptr [esp + 0x40]
// 005fcd7c  8b4804               mov ecx, dword ptr [eax + 4]
// 005fcd7f  8b10                 mov edx, dword ptr [eax]
// 005fcd81  51                   push ecx
// 005fcd82  52                   push edx
// 005fcd83  8bcf                 mov ecx, edi
// 005fcd85  e8c6fdffff           call 0x5fcb50
// 005fcd8a  eb02                 jmp 0x5fcd8e
// 005fcd8c  33c0                 xor eax, eax
// 005fcd8e  8b4b08               mov ecx, dword ptr [ebx + 8]
// 005fcd91  8904a9               mov dword ptr [ecx + ebp*4], eax
// 005fcd94  ff4304               inc dword ptr [ebx + 4]
// 005fcd97  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005fcd9b  5f                   pop edi
// 005fcd9c  5e                   pop esi
// 005fcd9d  5d                   pop ebp
// 005fcd9e  64890d00000000       mov dword ptr fs:[0], ecx
// 005fcda5  5b                   pop ebx
// 005fcda6  83c418               add esp, 0x18
// 005fcda9  c20800               ret 8
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?set@?$Table@VMeshDirectedEdgeKey@G3D@@V?$Array@H@2@@G3D@@QAEXABVMeshDirectedEdgeKey@2@ABV?$Array@H@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
