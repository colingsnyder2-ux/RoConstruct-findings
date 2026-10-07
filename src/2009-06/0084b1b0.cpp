// roc 2009-06 0084b1b0  unit: G3D::VMeshDirectedEdgeKey::?$Table  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0084b1b0
//
// 0084b1b0  8b442404             mov eax, dword ptr [esp + 4]
// 0084b1b4  53                   push ebx
// 0084b1b5  55                   push ebp
// 0084b1b6  56                   push esi
// 0084b1b7  57                   push edi
// 0084b1b8  8b38                 mov edi, dword ptr [eax]
// 0084b1ba  8bf1                 mov esi, ecx
// 0084b1bc  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 0084b1bf  33d2                 xor edx, edx
// 0084b1c1  8bc7                 mov eax, edi
// 0084b1c3  f7f5                 div ebp
// 0084b1c5  8b4e08               mov ecx, dword ptr [esi + 8]
// 0084b1c8  8bda                 mov ebx, edx
// 0084b1ca  8b0499               mov eax, dword ptr [ecx + ebx*4]
// 0084b1cd  85c0                 test eax, eax
// 0084b1cf  753d                 jne 0x84b20e
// 0084b1d1  6a10                 push 0x10
// 0084b1d3  e868ffd1ff           call 0x56b140
// 0084b1d8  83c404               add esp, 4
// 0084b1db  85c0                 test eax, eax
// 0084b1dd  0f84d1000000         je 0x84b2b4
// 0084b1e3  8b542418             mov edx, dword ptr [esp + 0x18]
// 0084b1e7  8a0a                 mov cl, byte ptr [edx]
// 0084b1e9  8b542414             mov edx, dword ptr [esp + 0x14]
// 0084b1ed  8b12                 mov edx, dword ptr [edx]
// 0084b1ef  8938                 mov dword ptr [eax], edi
// 0084b1f1  895004               mov dword ptr [eax + 4], edx
// 0084b1f4  884808               mov byte ptr [eax + 8], cl
// 0084b1f7  c7400c00000000       mov dword ptr [eax + 0xc], 0
// 0084b1fe  8b4e08               mov ecx, dword ptr [esi + 8]
// 0084b201  5f                   pop edi
// 0084b202  890499               mov dword ptr [ecx + ebx*4], eax
// 0084b205  ff4604               inc dword ptr [esi + 4]
// 0084b208  5e                   pop esi
// 0084b209  5d                   pop ebp
// 0084b20a  5b                   pop ebx
// 0084b20b  c20800               ret 8
// 0084b20e  ba01000000           mov edx, 1
// 0084b213  8aca                 mov cl, dl
// 0084b215  84c9                 test cl, cl
// 0084b217  7408                 je 0x84b221
// 0084b219  3b38                 cmp edi, dword ptr [eax]
// 0084b21b  7504                 jne 0x84b221
// 0084b21d  b101                 mov cl, 1
// 0084b21f  eb02                 jmp 0x84b223
// 0084b221  32c9                 xor cl, cl
// 0084b223  3b38                 cmp edi, dword ptr [eax]
// 0084b225  7505                 jne 0x84b22c
// 0084b227  397804               cmp dword ptr [eax + 4], edi
// 0084b22a  7478                 je 0x84b2a4
// 0084b22c  8b400c               mov eax, dword ptr [eax + 0xc]
// 0084b22f  42                   inc edx
// 0084b230  85c0                 test eax, eax
// 0084b232  75e1                 jne 0x84b215
// 0084b234  84c9                 test cl, cl
// 0084b236  0f94c0               sete al
// 0084b239  33c9                 xor ecx, ecx
// 0084b23b  83fa05               cmp edx, 5
// 0084b23e  0f9fc1               setg cl
// 0084b241  85c1                 test ecx, eax
// 0084b243  741a                 je 0x84b25f
// 0084b245  8b4604               mov eax, dword ptr [esi + 4]
// 0084b248  8d1480               lea edx, [eax + eax*4]
// 0084b24b  03d2                 add edx, edx
// 0084b24d  03d2                 add edx, edx
// 0084b24f  3bea                 cmp ebp, edx
// 0084b251  7d0c                 jge 0x84b25f
// 0084b253  8d442d01             lea eax, [ebp + ebp + 1]
// 0084b257  50                   push eax
// 0084b258  8bce                 mov ecx, esi
// 0084b25a  e851feffff           call 0x84b0b0
// 0084b25f  33d2                 xor edx, edx
// 0084b261  8bc7                 mov eax, edi
// 0084b263  f7760c               div dword ptr [esi + 0xc]
// 0084b266  6a10                 push 0x10
// 0084b268  8bda                 mov ebx, edx
// 0084b26a  e8d1fed1ff           call 0x56b140
// 0084b26f  83c404               add esp, 4
// 0084b272  85c0                 test eax, eax
// 0084b274  743e                 je 0x84b2b4
// 0084b276  8b4e08               mov ecx, dword ptr [esi + 8]
// 0084b279  8b0c99               mov ecx, dword ptr [ecx + ebx*4]
// 0084b27c  8b542418             mov edx, dword ptr [esp + 0x18]
// 0084b280  8a12                 mov dl, byte ptr [edx]
// 0084b282  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0084b286  8b6d00               mov ebp, dword ptr [ebp]
// 0084b289  896804               mov dword ptr [eax + 4], ebp
// 0084b28c  8938                 mov dword ptr [eax], edi
// 0084b28e  885008               mov byte ptr [eax + 8], dl
// 0084b291  89480c               mov dword ptr [eax + 0xc], ecx
// 0084b294  8b4e08               mov ecx, dword ptr [esi + 8]
// 0084b297  5f                   pop edi
// 0084b298  890499               mov dword ptr [ecx + ebx*4], eax
// 0084b29b  ff4604               inc dword ptr [esi + 4]
// 0084b29e  5e                   pop esi
// 0084b29f  5d                   pop ebp
// 0084b2a0  5b                   pop ebx
// 0084b2a1  c20800               ret 8
// 0084b2a4  8b542418             mov edx, dword ptr [esp + 0x18]
// 0084b2a8  8a0a                 mov cl, byte ptr [edx]
// 0084b2aa  5f                   pop edi
// 0084b2ab  5e                   pop esi
// 0084b2ac  5d                   pop ebp
// 0084b2ad  884808               mov byte ptr [eax + 8], cl
// 0084b2b0  5b                   pop ebx
// 0084b2b1  c20800               ret 8
// 0084b2b4  8b4e08               mov ecx, dword ptr [esi + 8]
// 0084b2b7  33c0                 xor eax, eax
// 0084b2b9  5f                   pop edi
// 0084b2ba  890499               mov dword ptr [ecx + ebx*4], eax
// 0084b2bd  ff4604               inc dword ptr [esi + 4]
// 0084b2c0  5e                   pop esi
// 0084b2c1  5d                   pop ebp
// 0084b2c2  5b                   pop ebx
// 0084b2c3  c20800               ret 8
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ?set@?$Table@PAV?$Array@H@G3D@@_N@G3D@@QAEXABQAV?$Array@H@2@AB_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
