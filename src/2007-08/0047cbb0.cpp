// from server: 100% by auto
// roc 2007-08 0047cbb0  unit: G3D::Win32Window  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047cbb0
//
// 0047cbb0  8b442404             mov eax, dword ptr [esp + 4]
// 0047cbb4  53                   push ebx
// 0047cbb5  55                   push ebp
// 0047cbb6  56                   push esi
// 0047cbb7  57                   push edi
// 0047cbb8  8b38                 mov edi, dword ptr [eax]
// 0047cbba  8bf1                 mov esi, ecx
// 0047cbbc  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 0047cbbf  33d2                 xor edx, edx
// 0047cbc1  8bc7                 mov eax, edi
// 0047cbc3  f7f5                 div ebp
// 0047cbc5  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047cbc8  8bda                 mov ebx, edx
// 0047cbca  8b0499               mov eax, dword ptr [ecx + ebx*4]
// 0047cbcd  85c0                 test eax, eax
// 0047cbcf  753e                 jne 0x47cc0f
// 0047cbd1  6a10                 push 0x10
// 0047cbd3  e838340800           call 0x500010
// 0047cbd8  83c404               add esp, 4
// 0047cbdb  85c0                 test eax, eax
// 0047cbdd  0f84d5000000         je 0x47ccb8
// 0047cbe3  8b542418             mov edx, dword ptr [esp + 0x18]
// 0047cbe7  8a0a                 mov cl, byte ptr [edx]
// 0047cbe9  8b542414             mov edx, dword ptr [esp + 0x14]
// 0047cbed  8b12                 mov edx, dword ptr [edx]
// 0047cbef  8938                 mov dword ptr [eax], edi
// 0047cbf1  895004               mov dword ptr [eax + 4], edx
// 0047cbf4  884808               mov byte ptr [eax + 8], cl
// 0047cbf7  c7400c00000000       mov dword ptr [eax + 0xc], 0
// 0047cbfe  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047cc01  5f                   pop edi
// 0047cc02  890499               mov dword ptr [ecx + ebx*4], eax
// 0047cc05  83460401             add dword ptr [esi + 4], 1
// 0047cc09  5e                   pop esi
// 0047cc0a  5d                   pop ebp
// 0047cc0b  5b                   pop ebx
// 0047cc0c  c20800               ret 8
// 0047cc0f  ba01000000           mov edx, 1
// 0047cc14  8aca                 mov cl, dl
// 0047cc16  84c9                 test cl, cl
// 0047cc18  7408                 je 0x47cc22
// 0047cc1a  3b38                 cmp edi, dword ptr [eax]
// 0047cc1c  7504                 jne 0x47cc22
// 0047cc1e  b101                 mov cl, 1
// 0047cc20  eb02                 jmp 0x47cc24
// 0047cc22  32c9                 xor cl, cl
// 0047cc24  3b38                 cmp edi, dword ptr [eax]
// 0047cc26  7505                 jne 0x47cc2d
// 0047cc28  397804               cmp dword ptr [eax + 4], edi
// 0047cc2b  747b                 je 0x47cca8
// 0047cc2d  8b400c               mov eax, dword ptr [eax + 0xc]
// 0047cc30  83c201               add edx, 1
// 0047cc33  85c0                 test eax, eax
// 0047cc35  75df                 jne 0x47cc16
// 0047cc37  84c9                 test cl, cl
// 0047cc39  0f94c0               sete al
// 0047cc3c  33c9                 xor ecx, ecx
// 0047cc3e  83fa05               cmp edx, 5
// 0047cc41  0f9fc1               setg cl
// 0047cc44  85c1                 test ecx, eax
// 0047cc46  741a                 je 0x47cc62
// 0047cc48  8b4604               mov eax, dword ptr [esi + 4]
// 0047cc4b  8d1480               lea edx, [eax + eax*4]
// 0047cc4e  03d2                 add edx, edx
// 0047cc50  03d2                 add edx, edx
// 0047cc52  3bea                 cmp ebp, edx
// 0047cc54  7d0c                 jge 0x47cc62
// 0047cc56  8d442d01             lea eax, [ebp + ebp + 1]
// 0047cc5a  50                   push eax
// 0047cc5b  8bce                 mov ecx, esi
// 0047cc5d  e8aef4ffff           call 0x47c110
// 0047cc62  33d2                 xor edx, edx
// 0047cc64  8bc7                 mov eax, edi
// 0047cc66  f7760c               div dword ptr [esi + 0xc]
// 0047cc69  6a10                 push 0x10
// 0047cc6b  8bda                 mov ebx, edx
// 0047cc6d  e89e330800           call 0x500010
// 0047cc72  83c404               add esp, 4
// 0047cc75  85c0                 test eax, eax
// 0047cc77  743f                 je 0x47ccb8
// 0047cc79  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047cc7c  8b0c99               mov ecx, dword ptr [ecx + ebx*4]
// 0047cc7f  8b542418             mov edx, dword ptr [esp + 0x18]
// 0047cc83  8a12                 mov dl, byte ptr [edx]
// 0047cc85  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0047cc89  8b6d00               mov ebp, dword ptr [ebp]
// 0047cc8c  896804               mov dword ptr [eax + 4], ebp
// 0047cc8f  8938                 mov dword ptr [eax], edi
// 0047cc91  885008               mov byte ptr [eax + 8], dl
// 0047cc94  89480c               mov dword ptr [eax + 0xc], ecx
// 0047cc97  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047cc9a  5f                   pop edi
// 0047cc9b  890499               mov dword ptr [ecx + ebx*4], eax
// 0047cc9e  83460401             add dword ptr [esi + 4], 1
// 0047cca2  5e                   pop esi
// 0047cca3  5d                   pop ebp
// 0047cca4  5b                   pop ebx
// 0047cca5  c20800               ret 8
// 0047cca8  8b542418             mov edx, dword ptr [esp + 0x18]
// 0047ccac  8a0a                 mov cl, byte ptr [edx]
// 0047ccae  5f                   pop edi
// 0047ccaf  5e                   pop esi
// 0047ccb0  5d                   pop ebp
// 0047ccb1  884808               mov byte ptr [eax + 8], cl
// 0047ccb4  5b                   pop ebx
// 0047ccb5  c20800               ret 8
// 0047ccb8  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047ccbb  33c0                 xor eax, eax
// 0047ccbd  5f                   pop edi
// 0047ccbe  890499               mov dword ptr [ecx + ebx*4], eax
// 0047ccc1  83460401             add dword ptr [esi + 4], 1
// 0047ccc5  5e                   pop esi
// 0047ccc6  5d                   pop ebp
// 0047ccc7  5b                   pop ebx
// 0047ccc8  c20800               ret 8
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ?set@?$Table@PAV?$Array@H@G3D@@_N@G3D@@QAEXABQAV?$Array@H@2@AB_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
