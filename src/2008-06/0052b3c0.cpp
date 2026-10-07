// roc 2008-06 0052b3c0  unit: seg_00520000  size: 330 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052b3c0
//
// 0052b3c0  8b442410             mov eax, dword ptr [esp + 0x10]
// 0052b3c4  53                   push ebx
// 0052b3c5  55                   push ebp
// 0052b3c6  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0052b3ca  56                   push esi
// 0052b3cb  8b742414             mov esi, dword ptr [esp + 0x14]
// 0052b3cf  57                   push edi
// 0052b3d0  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0052b3d4  8d1c07               lea ebx, [edi + eax]
// 0052b3d7  3b5e04               cmp ebx, dword ptr [esi + 4]
// 0052b3da  770a                 ja 0x52b3e6
// 0052b3dc  3b460c               cmp eax, dword ptr [esi + 0xc]
// 0052b3df  7705                 ja 0x52b3e6
// 0052b3e1  833e00               cmp dword ptr [esi], 0
// 0052b3e4  7515                 jne 0x52b3fb
// 0052b3e6  8b4500               mov eax, dword ptr [ebp]
// 0052b3e9  c7401416000000       mov dword ptr [eax + 0x14], 0x16
// 0052b3f0  8b4d00               mov ecx, dword ptr [ebp]
// 0052b3f3  8b11                 mov edx, dword ptr [ecx]
// 0052b3f5  55                   push ebp
// 0052b3f6  ffd2                 call edx
// 0052b3f8  83c404               add esp, 4
// 0052b3fb  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052b3fe  3bf8                 cmp edi, eax
// 0052b400  7209                 jb 0x52b40b
// 0052b402  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0052b405  03c8                 add ecx, eax
// 0052b407  3bd9                 cmp ebx, ecx
// 0052b409  7651                 jbe 0x52b45c
// 0052b40b  807e2200             cmp byte ptr [esi + 0x22], 0
// 0052b40f  7515                 jne 0x52b426
// 0052b411  8b5500               mov edx, dword ptr [ebp]
// 0052b414  c7421445000000       mov dword ptr [edx + 0x14], 0x45
// 0052b41b  8b4500               mov eax, dword ptr [ebp]
// 0052b41e  8b08                 mov ecx, dword ptr [eax]
// 0052b420  55                   push ebp
// 0052b421  ffd1                 call ecx
// 0052b423  83c404               add esp, 4
// 0052b426  807e2100             cmp byte ptr [esi + 0x21], 0
// 0052b42a  740f                 je 0x52b43b
// 0052b42c  6a01                 push 1
// 0052b42e  55                   push ebp
// 0052b42f  e8acfdffff           call 0x52b1e0
// 0052b434  83c408               add esp, 8
// 0052b437  c6462100             mov byte ptr [esi + 0x21], 0
// 0052b43b  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 0052b43e  7605                 jbe 0x52b445
// 0052b440  897e18               mov dword ptr [esi + 0x18], edi
// 0052b443  eb0c                 jmp 0x52b451
// 0052b445  8bc3                 mov eax, ebx
// 0052b447  2b4610               sub eax, dword ptr [esi + 0x10]
// 0052b44a  7902                 jns 0x52b44e
// 0052b44c  33c0                 xor eax, eax
// 0052b44e  894618               mov dword ptr [esi + 0x18], eax
// 0052b451  6a00                 push 0
// 0052b453  55                   push ebp
// 0052b454  e887fdffff           call 0x52b1e0
// 0052b459  83c408               add esp, 8
// 0052b45c  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 0052b45f  3bfb                 cmp edi, ebx
// 0052b461  7361                 jae 0x52b4c4
// 0052b463  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 0052b467  7320                 jae 0x52b489
// 0052b469  807c242400           cmp byte ptr [esp + 0x24], 0
// 0052b46e  7415                 je 0x52b485
// 0052b470  8b5500               mov edx, dword ptr [ebp]
// 0052b473  c7421416000000       mov dword ptr [edx + 0x14], 0x16
// 0052b47a  8b4500               mov eax, dword ptr [ebp]
// 0052b47d  8b08                 mov ecx, dword ptr [eax]
// 0052b47f  55                   push ebp
// 0052b480  ffd1                 call ecx
// 0052b482  83c404               add esp, 4
// 0052b485  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0052b489  8a442424             mov al, byte ptr [esp + 0x24]
// 0052b48d  84c0                 test al, al
// 0052b48f  7403                 je 0x52b494
// 0052b491  895e1c               mov dword ptr [esi + 0x1c], ebx
// 0052b494  807e2000             cmp byte ptr [esi + 0x20], 0
// 0052b498  7446                 je 0x52b4e0
// 0052b49a  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052b49d  8b6e08               mov ebp, dword ptr [esi + 8]
// 0052b4a0  2bf8                 sub edi, eax
// 0052b4a2  2bd8                 sub ebx, eax
// 0052b4a4  c1e507               shl ebp, 7
// 0052b4a7  3bfb                 cmp edi, ebx
// 0052b4a9  7319                 jae 0x52b4c4
// 0052b4ab  eb03                 jmp 0x52b4b0
// 0052b4ad  8d4900               lea ecx, [ecx]
// 0052b4b0  8b16                 mov edx, dword ptr [esi]
// 0052b4b2  8b04ba               mov eax, dword ptr [edx + edi*4]
// 0052b4b5  55                   push ebp
// 0052b4b6  50                   push eax
// 0052b4b7  e8e4a6ffff           call 0x525ba0
// 0052b4bc  47                   inc edi
// 0052b4bd  83c408               add esp, 8
// 0052b4c0  3bfb                 cmp edi, ebx
// 0052b4c2  72ec                 jb 0x52b4b0
// 0052b4c4  807c242400           cmp byte ptr [esp + 0x24], 0
// 0052b4c9  7404                 je 0x52b4cf
// 0052b4cb  c6462101             mov byte ptr [esi + 0x21], 1
// 0052b4cf  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0052b4d3  2b4618               sub eax, dword ptr [esi + 0x18]
// 0052b4d6  8b0e                 mov ecx, dword ptr [esi]
// 0052b4d8  5f                   pop edi
// 0052b4d9  5e                   pop esi
// 0052b4da  5d                   pop ebp
// 0052b4db  8d0481               lea eax, [ecx + eax*4]
// 0052b4de  5b                   pop ebx
// 0052b4df  c3                   ret 
// 0052b4e0  84c0                 test al, al
// 0052b4e2  75e7                 jne 0x52b4cb
// 0052b4e4  8b4d00               mov ecx, dword ptr [ebp]
// 0052b4e7  c7411416000000       mov dword ptr [ecx + 0x14], 0x16
// 0052b4ee  8b5500               mov edx, dword ptr [ebp]
// 0052b4f1  8b02                 mov eax, dword ptr [edx]
// 0052b4f3  55                   push ebp
// 0052b4f4  ffd0                 call eax
// 0052b4f6  8b442420             mov eax, dword ptr [esp + 0x20]
// 0052b4fa  2b4618               sub eax, dword ptr [esi + 0x18]
// 0052b4fd  8b0e                 mov ecx, dword ptr [esi]
// 0052b4ff  83c404               add esp, 4
// 0052b502  5f                   pop edi
// 0052b503  5e                   pop esi
// 0052b504  5d                   pop ebp
// 0052b505  8d0481               lea eax, [ecx + eax*4]
// 0052b508  5b                   pop ebx
// 0052b509  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _access_virt_barray)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
