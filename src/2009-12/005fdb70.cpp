// roc 2009-12 005fdb70  unit: G3D::VMeshDirectedEdgeKey::?$Table  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fdb70
//
// 005fdb70  8b442404             mov eax, dword ptr [esp + 4]
// 005fdb74  53                   push ebx
// 005fdb75  55                   push ebp
// 005fdb76  56                   push esi
// 005fdb77  57                   push edi
// 005fdb78  8b38                 mov edi, dword ptr [eax]
// 005fdb7a  8bf1                 mov esi, ecx
// 005fdb7c  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 005fdb7f  33d2                 xor edx, edx
// 005fdb81  8bc7                 mov eax, edi
// 005fdb83  f7f5                 div ebp
// 005fdb85  8b4e08               mov ecx, dword ptr [esi + 8]
// 005fdb88  8bda                 mov ebx, edx
// 005fdb8a  8b0499               mov eax, dword ptr [ecx + ebx*4]
// 005fdb8d  85c0                 test eax, eax
// 005fdb8f  753d                 jne 0x5fdbce
// 005fdb91  6a10                 push 0x10
// 005fdb93  e808c7feff           call 0x5ea2a0
// 005fdb98  83c404               add esp, 4
// 005fdb9b  85c0                 test eax, eax
// 005fdb9d  0f84d1000000         je 0x5fdc74
// 005fdba3  8b542418             mov edx, dword ptr [esp + 0x18]
// 005fdba7  8a0a                 mov cl, byte ptr [edx]
// 005fdba9  8b542414             mov edx, dword ptr [esp + 0x14]
// 005fdbad  8b12                 mov edx, dword ptr [edx]
// 005fdbaf  8938                 mov dword ptr [eax], edi
// 005fdbb1  895004               mov dword ptr [eax + 4], edx
// 005fdbb4  884808               mov byte ptr [eax + 8], cl
// 005fdbb7  c7400c00000000       mov dword ptr [eax + 0xc], 0
// 005fdbbe  8b4e08               mov ecx, dword ptr [esi + 8]
// 005fdbc1  5f                   pop edi
// 005fdbc2  890499               mov dword ptr [ecx + ebx*4], eax
// 005fdbc5  ff4604               inc dword ptr [esi + 4]
// 005fdbc8  5e                   pop esi
// 005fdbc9  5d                   pop ebp
// 005fdbca  5b                   pop ebx
// 005fdbcb  c20800               ret 8
// 005fdbce  ba01000000           mov edx, 1
// 005fdbd3  8aca                 mov cl, dl
// 005fdbd5  84c9                 test cl, cl
// 005fdbd7  7408                 je 0x5fdbe1
// 005fdbd9  3b38                 cmp edi, dword ptr [eax]
// 005fdbdb  7504                 jne 0x5fdbe1
// 005fdbdd  b101                 mov cl, 1
// 005fdbdf  eb02                 jmp 0x5fdbe3
// 005fdbe1  32c9                 xor cl, cl
// 005fdbe3  3b38                 cmp edi, dword ptr [eax]
// 005fdbe5  7505                 jne 0x5fdbec
// 005fdbe7  397804               cmp dword ptr [eax + 4], edi
// 005fdbea  7478                 je 0x5fdc64
// 005fdbec  8b400c               mov eax, dword ptr [eax + 0xc]
// 005fdbef  42                   inc edx
// 005fdbf0  85c0                 test eax, eax
// 005fdbf2  75e1                 jne 0x5fdbd5
// 005fdbf4  84c9                 test cl, cl
// 005fdbf6  0f94c0               sete al
// 005fdbf9  33c9                 xor ecx, ecx
// 005fdbfb  83fa05               cmp edx, 5
// 005fdbfe  0f9fc1               setg cl
// 005fdc01  85c1                 test ecx, eax
// 005fdc03  741a                 je 0x5fdc1f
// 005fdc05  8b4604               mov eax, dword ptr [esi + 4]
// 005fdc08  8d1480               lea edx, [eax + eax*4]
// 005fdc0b  03d2                 add edx, edx
// 005fdc0d  03d2                 add edx, edx
// 005fdc0f  3bea                 cmp ebp, edx
// 005fdc11  7d0c                 jge 0x5fdc1f
// 005fdc13  8d442d01             lea eax, [ebp + ebp + 1]
// 005fdc17  50                   push eax
// 005fdc18  8bce                 mov ecx, esi
// 005fdc1a  e8b1feffff           call 0x5fdad0
// 005fdc1f  33d2                 xor edx, edx
// 005fdc21  8bc7                 mov eax, edi
// 005fdc23  f7760c               div dword ptr [esi + 0xc]
// 005fdc26  6a10                 push 0x10
// 005fdc28  8bda                 mov ebx, edx
// 005fdc2a  e871c6feff           call 0x5ea2a0
// 005fdc2f  83c404               add esp, 4
// 005fdc32  85c0                 test eax, eax
// 005fdc34  743e                 je 0x5fdc74
// 005fdc36  8b4e08               mov ecx, dword ptr [esi + 8]
// 005fdc39  8b0c99               mov ecx, dword ptr [ecx + ebx*4]
// 005fdc3c  8b542418             mov edx, dword ptr [esp + 0x18]
// 005fdc40  8a12                 mov dl, byte ptr [edx]
// 005fdc42  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005fdc46  8b6d00               mov ebp, dword ptr [ebp]
// 005fdc49  896804               mov dword ptr [eax + 4], ebp
// 005fdc4c  8938                 mov dword ptr [eax], edi
// 005fdc4e  885008               mov byte ptr [eax + 8], dl
// 005fdc51  89480c               mov dword ptr [eax + 0xc], ecx
// 005fdc54  8b4e08               mov ecx, dword ptr [esi + 8]
// 005fdc57  5f                   pop edi
// 005fdc58  890499               mov dword ptr [ecx + ebx*4], eax
// 005fdc5b  ff4604               inc dword ptr [esi + 4]
// 005fdc5e  5e                   pop esi
// 005fdc5f  5d                   pop ebp
// 005fdc60  5b                   pop ebx
// 005fdc61  c20800               ret 8
// 005fdc64  8b542418             mov edx, dword ptr [esp + 0x18]
// 005fdc68  8a0a                 mov cl, byte ptr [edx]
// 005fdc6a  5f                   pop edi
// 005fdc6b  5e                   pop esi
// 005fdc6c  5d                   pop ebp
// 005fdc6d  884808               mov byte ptr [eax + 8], cl
// 005fdc70  5b                   pop ebx
// 005fdc71  c20800               ret 8
// 005fdc74  8b4e08               mov ecx, dword ptr [esi + 8]
// 005fdc77  33c0                 xor eax, eax
// 005fdc79  5f                   pop edi
// 005fdc7a  890499               mov dword ptr [ecx + ebx*4], eax
// 005fdc7d  ff4604               inc dword ptr [esi + 4]
// 005fdc80  5e                   pop esi
// 005fdc81  5d                   pop ebp
// 005fdc82  5b                   pop ebx
// 005fdc83  c20800               ret 8
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ?set@?$Table@PAV?$Array@H@G3D@@_N@G3D@@QAEXABQAV?$Array@H@2@AB_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
