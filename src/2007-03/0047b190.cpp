// roc 2007-03 0047b190  unit: seg_00470000  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047b190
//
// 0047b190  8b442404             mov eax, dword ptr [esp + 4]
// 0047b194  53                   push ebx
// 0047b195  55                   push ebp
// 0047b196  56                   push esi
// 0047b197  57                   push edi
// 0047b198  8b38                 mov edi, dword ptr [eax]
// 0047b19a  8bf1                 mov esi, ecx
// 0047b19c  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 0047b19f  33d2                 xor edx, edx
// 0047b1a1  8bc7                 mov eax, edi
// 0047b1a3  f7f5                 div ebp
// 0047b1a5  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047b1a8  8bda                 mov ebx, edx
// 0047b1aa  8b0499               mov eax, dword ptr [ecx + ebx*4]
// 0047b1ad  85c0                 test eax, eax
// 0047b1af  753e                 jne 0x47b1ef
// 0047b1b1  6a10                 push 0x10
// 0047b1b3  e8c8890700           call 0x4f3b80
// 0047b1b8  83c404               add esp, 4
// 0047b1bb  85c0                 test eax, eax
// 0047b1bd  0f84d5000000         je 0x47b298
// 0047b1c3  8b542418             mov edx, dword ptr [esp + 0x18]
// 0047b1c7  8a0a                 mov cl, byte ptr [edx]
// 0047b1c9  8b542414             mov edx, dword ptr [esp + 0x14]
// 0047b1cd  8b12                 mov edx, dword ptr [edx]
// 0047b1cf  8938                 mov dword ptr [eax], edi
// 0047b1d1  895004               mov dword ptr [eax + 4], edx
// 0047b1d4  884808               mov byte ptr [eax + 8], cl
// 0047b1d7  c7400c00000000       mov dword ptr [eax + 0xc], 0
// 0047b1de  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047b1e1  5f                   pop edi
// 0047b1e2  890499               mov dword ptr [ecx + ebx*4], eax
// 0047b1e5  83460401             add dword ptr [esi + 4], 1
// 0047b1e9  5e                   pop esi
// 0047b1ea  5d                   pop ebp
// 0047b1eb  5b                   pop ebx
// 0047b1ec  c20800               ret 8
// 0047b1ef  ba01000000           mov edx, 1
// 0047b1f4  8aca                 mov cl, dl
// 0047b1f6  84c9                 test cl, cl
// 0047b1f8  7408                 je 0x47b202
// 0047b1fa  3b38                 cmp edi, dword ptr [eax]
// 0047b1fc  7504                 jne 0x47b202
// 0047b1fe  b101                 mov cl, 1
// 0047b200  eb02                 jmp 0x47b204
// 0047b202  32c9                 xor cl, cl
// 0047b204  3b38                 cmp edi, dword ptr [eax]
// 0047b206  7505                 jne 0x47b20d
// 0047b208  397804               cmp dword ptr [eax + 4], edi
// 0047b20b  747b                 je 0x47b288
// 0047b20d  8b400c               mov eax, dword ptr [eax + 0xc]
// 0047b210  83c201               add edx, 1
// 0047b213  85c0                 test eax, eax
// 0047b215  75df                 jne 0x47b1f6
// 0047b217  84c9                 test cl, cl
// 0047b219  0f94c0               sete al
// 0047b21c  33c9                 xor ecx, ecx
// 0047b21e  83fa05               cmp edx, 5
// 0047b221  0f9fc1               setg cl
// 0047b224  85c1                 test ecx, eax
// 0047b226  741a                 je 0x47b242
// 0047b228  8b4604               mov eax, dword ptr [esi + 4]
// 0047b22b  8d1480               lea edx, [eax + eax*4]
// 0047b22e  03d2                 add edx, edx
// 0047b230  03d2                 add edx, edx
// 0047b232  3bea                 cmp ebp, edx
// 0047b234  7d0c                 jge 0x47b242
// 0047b236  8d442d01             lea eax, [ebp + ebp + 1]
// 0047b23a  50                   push eax
// 0047b23b  8bce                 mov ecx, esi
// 0047b23d  e8fe9e0800           call 0x505140
// 0047b242  33d2                 xor edx, edx
// 0047b244  8bc7                 mov eax, edi
// 0047b246  f7760c               div dword ptr [esi + 0xc]
// 0047b249  6a10                 push 0x10
// 0047b24b  8bda                 mov ebx, edx
// 0047b24d  e82e890700           call 0x4f3b80
// 0047b252  83c404               add esp, 4
// 0047b255  85c0                 test eax, eax
// 0047b257  743f                 je 0x47b298
// 0047b259  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047b25c  8b0c99               mov ecx, dword ptr [ecx + ebx*4]
// 0047b25f  8b542418             mov edx, dword ptr [esp + 0x18]
// 0047b263  8a12                 mov dl, byte ptr [edx]
// 0047b265  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0047b269  8b6d00               mov ebp, dword ptr [ebp]
// 0047b26c  896804               mov dword ptr [eax + 4], ebp
// 0047b26f  8938                 mov dword ptr [eax], edi
// 0047b271  885008               mov byte ptr [eax + 8], dl
// 0047b274  89480c               mov dword ptr [eax + 0xc], ecx
// 0047b277  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047b27a  5f                   pop edi
// 0047b27b  890499               mov dword ptr [ecx + ebx*4], eax
// 0047b27e  83460401             add dword ptr [esi + 4], 1
// 0047b282  5e                   pop esi
// 0047b283  5d                   pop ebp
// 0047b284  5b                   pop ebx
// 0047b285  c20800               ret 8
// 0047b288  8b542418             mov edx, dword ptr [esp + 0x18]
// 0047b28c  8a0a                 mov cl, byte ptr [edx]
// 0047b28e  5f                   pop edi
// 0047b28f  5e                   pop esi
// 0047b290  5d                   pop ebp
// 0047b291  884808               mov byte ptr [eax + 8], cl
// 0047b294  5b                   pop ebx
// 0047b295  c20800               ret 8
// 0047b298  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047b29b  33c0                 xor eax, eax
// 0047b29d  5f                   pop edi
// 0047b29e  890499               mov dword ptr [ecx + ebx*4], eax
// 0047b2a1  83460401             add dword ptr [esi + 4], 1
// 0047b2a5  5e                   pop esi
// 0047b2a6  5d                   pop ebp
// 0047b2a7  5b                   pop ebx
// 0047b2a8  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\MeshAlgWeld.cpp (function ?set@?$Table@PAV?$Array@H@G3D@@_N@G3D@@QAEXABQAV?$Array@H@2@AB_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/MeshAlgWeld.cpp
