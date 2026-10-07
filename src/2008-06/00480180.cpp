// roc 2008-06 00480180  unit: G3D::Win32Window  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00480180
//
// 00480180  8b442404             mov eax, dword ptr [esp + 4]
// 00480184  53                   push ebx
// 00480185  55                   push ebp
// 00480186  56                   push esi
// 00480187  57                   push edi
// 00480188  8b38                 mov edi, dword ptr [eax]
// 0048018a  8bf1                 mov esi, ecx
// 0048018c  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 0048018f  33d2                 xor edx, edx
// 00480191  8bc7                 mov eax, edi
// 00480193  f7f5                 div ebp
// 00480195  8b4e08               mov ecx, dword ptr [esi + 8]
// 00480198  8bda                 mov ebx, edx
// 0048019a  8b0499               mov eax, dword ptr [ecx + ebx*4]
// 0048019d  85c0                 test eax, eax
// 0048019f  753d                 jne 0x4801de
// 004801a1  6a10                 push 0x10
// 004801a3  e888830800           call 0x508530
// 004801a8  83c404               add esp, 4
// 004801ab  85c0                 test eax, eax
// 004801ad  0f84d1000000         je 0x480284
// 004801b3  8b542418             mov edx, dword ptr [esp + 0x18]
// 004801b7  8a0a                 mov cl, byte ptr [edx]
// 004801b9  8b542414             mov edx, dword ptr [esp + 0x14]
// 004801bd  8b12                 mov edx, dword ptr [edx]
// 004801bf  8938                 mov dword ptr [eax], edi
// 004801c1  895004               mov dword ptr [eax + 4], edx
// 004801c4  884808               mov byte ptr [eax + 8], cl
// 004801c7  c7400c00000000       mov dword ptr [eax + 0xc], 0
// 004801ce  8b4e08               mov ecx, dword ptr [esi + 8]
// 004801d1  5f                   pop edi
// 004801d2  890499               mov dword ptr [ecx + ebx*4], eax
// 004801d5  ff4604               inc dword ptr [esi + 4]
// 004801d8  5e                   pop esi
// 004801d9  5d                   pop ebp
// 004801da  5b                   pop ebx
// 004801db  c20800               ret 8
// 004801de  ba01000000           mov edx, 1
// 004801e3  8aca                 mov cl, dl
// 004801e5  84c9                 test cl, cl
// 004801e7  7408                 je 0x4801f1
// 004801e9  3b38                 cmp edi, dword ptr [eax]
// 004801eb  7504                 jne 0x4801f1
// 004801ed  b101                 mov cl, 1
// 004801ef  eb02                 jmp 0x4801f3
// 004801f1  32c9                 xor cl, cl
// 004801f3  3b38                 cmp edi, dword ptr [eax]
// 004801f5  7505                 jne 0x4801fc
// 004801f7  397804               cmp dword ptr [eax + 4], edi
// 004801fa  7478                 je 0x480274
// 004801fc  8b400c               mov eax, dword ptr [eax + 0xc]
// 004801ff  42                   inc edx
// 00480200  85c0                 test eax, eax
// 00480202  75e1                 jne 0x4801e5
// 00480204  84c9                 test cl, cl
// 00480206  0f94c0               sete al
// 00480209  33c9                 xor ecx, ecx
// 0048020b  83fa05               cmp edx, 5
// 0048020e  0f9fc1               setg cl
// 00480211  85c1                 test ecx, eax
// 00480213  741a                 je 0x48022f
// 00480215  8b4604               mov eax, dword ptr [esi + 4]
// 00480218  8d1480               lea edx, [eax + eax*4]
// 0048021b  03d2                 add edx, edx
// 0048021d  03d2                 add edx, edx
// 0048021f  3bea                 cmp ebp, edx
// 00480221  7d0c                 jge 0x48022f
// 00480223  8d442d01             lea eax, [ebp + ebp + 1]
// 00480227  50                   push eax
// 00480228  8bce                 mov ecx, esi
// 0048022a  e8c1f4ffff           call 0x47f6f0
// 0048022f  33d2                 xor edx, edx
// 00480231  8bc7                 mov eax, edi
// 00480233  f7760c               div dword ptr [esi + 0xc]
// 00480236  6a10                 push 0x10
// 00480238  8bda                 mov ebx, edx
// 0048023a  e8f1820800           call 0x508530
// 0048023f  83c404               add esp, 4
// 00480242  85c0                 test eax, eax
// 00480244  743e                 je 0x480284
// 00480246  8b4e08               mov ecx, dword ptr [esi + 8]
// 00480249  8b0c99               mov ecx, dword ptr [ecx + ebx*4]
// 0048024c  8b542418             mov edx, dword ptr [esp + 0x18]
// 00480250  8a12                 mov dl, byte ptr [edx]
// 00480252  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00480256  8b6d00               mov ebp, dword ptr [ebp]
// 00480259  896804               mov dword ptr [eax + 4], ebp
// 0048025c  8938                 mov dword ptr [eax], edi
// 0048025e  885008               mov byte ptr [eax + 8], dl
// 00480261  89480c               mov dword ptr [eax + 0xc], ecx
// 00480264  8b4e08               mov ecx, dword ptr [esi + 8]
// 00480267  5f                   pop edi
// 00480268  890499               mov dword ptr [ecx + ebx*4], eax
// 0048026b  ff4604               inc dword ptr [esi + 4]
// 0048026e  5e                   pop esi
// 0048026f  5d                   pop ebp
// 00480270  5b                   pop ebx
// 00480271  c20800               ret 8
// 00480274  8b542418             mov edx, dword ptr [esp + 0x18]
// 00480278  8a0a                 mov cl, byte ptr [edx]
// 0048027a  5f                   pop edi
// 0048027b  5e                   pop esi
// 0048027c  5d                   pop ebp
// 0048027d  884808               mov byte ptr [eax + 8], cl
// 00480280  5b                   pop ebx
// 00480281  c20800               ret 8
// 00480284  8b4e08               mov ecx, dword ptr [esi + 8]
// 00480287  33c0                 xor eax, eax
// 00480289  5f                   pop edi
// 0048028a  890499               mov dword ptr [ecx + ebx*4], eax
// 0048028d  ff4604               inc dword ptr [esi + 4]
// 00480290  5e                   pop esi
// 00480291  5d                   pop ebp
// 00480292  5b                   pop ebx
// 00480293  c20800               ret 8
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ?set@?$Table@PAV?$Array@H@G3D@@_N@G3D@@QAEXABQAV?$Array@H@2@AB_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
