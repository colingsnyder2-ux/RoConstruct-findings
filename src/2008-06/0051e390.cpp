// from server: 100% by auto
// roc 2008-06 0051e390  unit: seg_00510000  size: 449 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051e390
//
// 0051e390  8b4624               mov eax, dword ptr [esi + 0x24]
// 0051e393  53                   push ebx
// 0051e394  55                   push ebp
// 0051e395  bd01000000           mov ebp, 1
// 0051e39a  2bc5                 sub eax, ebp
// 0051e39c  57                   push edi
// 0051e39d  8d5dff               lea ebx, [ebp - 1]
// 0051e3a0  0f8464010000         je 0x51e50a
// 0051e3a6  83e802               sub eax, 2
// 0051e3a9  7468                 je 0x51e413
// 0051e3ab  2bc5                 sub eax, ebp
// 0051e3ad  740b                 je 0x51e3ba
// 0051e3af  895e28               mov dword ptr [esi + 0x28], ebx
// 0051e3b2  895e2c               mov dword ptr [esi + 0x2c], ebx
// 0051e3b5  e956010000           jmp 0x51e510
// 0051e3ba  bf04000000           mov edi, 4
// 0051e3bf  389e08010000         cmp byte ptr [esi + 0x108], bl
// 0051e3c5  7441                 je 0x51e408
// 0051e3c7  0fb68609010000       movzx eax, byte ptr [esi + 0x109]
// 0051e3ce  2bc3                 sub eax, ebx
// 0051e3d0  7436                 je 0x51e408
// 0051e3d2  83e802               sub eax, 2
// 0051e3d5  7422                 je 0x51e3f9
// 0051e3d7  8b06                 mov eax, dword ptr [esi]
// 0051e3d9  c7401472000000       mov dword ptr [eax + 0x14], 0x72
// 0051e3e0  0fb68e09010000       movzx ecx, byte ptr [esi + 0x109]
// 0051e3e7  8b16                 mov edx, dword ptr [esi]
// 0051e3e9  894a18               mov dword ptr [edx + 0x18], ecx
// 0051e3ec  8b06                 mov eax, dword ptr [esi]
// 0051e3ee  8b4804               mov ecx, dword ptr [eax + 4]
// 0051e3f1  6aff                 push -1
// 0051e3f3  56                   push esi
// 0051e3f4  ffd1                 call ecx
// 0051e3f6  83c408               add esp, 8
// 0051e3f9  c7462805000000       mov dword ptr [esi + 0x28], 5
// 0051e400  897e2c               mov dword ptr [esi + 0x2c], edi
// 0051e403  e908010000           jmp 0x51e510
// 0051e408  897e28               mov dword ptr [esi + 0x28], edi
// 0051e40b  897e2c               mov dword ptr [esi + 0x2c], edi
// 0051e40e  e9fd000000           jmp 0x51e510
// 0051e413  389e00010000         cmp byte ptr [esi + 0x100], bl
// 0051e419  7418                 je 0x51e433
// 0051e41b  c7462803000000       mov dword ptr [esi + 0x28], 3
// 0051e422  c7462c02000000       mov dword ptr [esi + 0x2c], 2
// 0051e429  bd01000000           mov ebp, 1
// 0051e42e  e9dd000000           jmp 0x51e510
// 0051e433  389e08010000         cmp byte ptr [esi + 0x108], bl
// 0051e439  7449                 je 0x51e484
// 0051e43b  0fb68609010000       movzx eax, byte ptr [esi + 0x109]
// 0051e442  2bc3                 sub eax, ebx
// 0051e444  747b                 je 0x51e4c1
// 0051e446  2bc5                 sub eax, ebp
// 0051e448  74d1                 je 0x51e41b
// 0051e44a  8b16                 mov edx, dword ptr [esi]
// 0051e44c  c7421472000000       mov dword ptr [edx + 0x14], 0x72
// 0051e453  0fb68609010000       movzx eax, byte ptr [esi + 0x109]
// 0051e45a  8b0e                 mov ecx, dword ptr [esi]
// 0051e45c  894118               mov dword ptr [ecx + 0x18], eax
// 0051e45f  8b16                 mov edx, dword ptr [esi]
// 0051e461  8b4204               mov eax, dword ptr [edx + 4]
// 0051e464  6aff                 push -1
// 0051e466  56                   push esi
// 0051e467  ffd0                 call eax
// 0051e469  c7462803000000       mov dword ptr [esi + 0x28], 3
// 0051e470  83c408               add esp, 8
// 0051e473  c7462c02000000       mov dword ptr [esi + 0x2c], 2
// 0051e47a  bd01000000           mov ebp, 1
// 0051e47f  e98c000000           jmp 0x51e510
// 0051e484  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0051e48a  8b08                 mov ecx, dword ptr [eax]
// 0051e48c  8b5054               mov edx, dword ptr [eax + 0x54]
// 0051e48f  8bb8a8000000         mov edi, dword ptr [eax + 0xa8]
// 0051e495  bd03000000           mov ebp, 3
// 0051e49a  83f901               cmp ecx, 1
// 0051e49d  7513                 jne 0x51e4b2
// 0051e49f  83fa02               cmp edx, 2
// 0051e4a2  7532                 jne 0x51e4d6
// 0051e4a4  3bfd                 cmp edi, ebp
// 0051e4a6  752e                 jne 0x51e4d6
// 0051e4a8  896e28               mov dword ptr [esi + 0x28], ebp
// 0051e4ab  89562c               mov dword ptr [esi + 0x2c], edx
// 0051e4ae  8be9                 mov ebp, ecx
// 0051e4b0  eb5e                 jmp 0x51e510
// 0051e4b2  83f952               cmp ecx, 0x52
// 0051e4b5  751f                 jne 0x51e4d6
// 0051e4b7  83fa47               cmp edx, 0x47
// 0051e4ba  751a                 jne 0x51e4d6
// 0051e4bc  83ff42               cmp edi, 0x42
// 0051e4bf  7515                 jne 0x51e4d6
// 0051e4c1  c7462802000000       mov dword ptr [esi + 0x28], 2
// 0051e4c8  c7462c02000000       mov dword ptr [esi + 0x2c], 2
// 0051e4cf  bd01000000           mov ebp, 1
// 0051e4d4  eb3a                 jmp 0x51e510
// 0051e4d6  8b06                 mov eax, dword ptr [esi]
// 0051e4d8  83c018               add eax, 0x18
// 0051e4db  8908                 mov dword ptr [eax], ecx
// 0051e4dd  895004               mov dword ptr [eax + 4], edx
// 0051e4e0  897808               mov dword ptr [eax + 8], edi
// 0051e4e3  8b0e                 mov ecx, dword ptr [esi]
// 0051e4e5  c741146f000000       mov dword ptr [ecx + 0x14], 0x6f
// 0051e4ec  8b16                 mov edx, dword ptr [esi]
// 0051e4ee  8b4204               mov eax, dword ptr [edx + 4]
// 0051e4f1  6a01                 push 1
// 0051e4f3  56                   push esi
// 0051e4f4  ffd0                 call eax
// 0051e4f6  896e28               mov dword ptr [esi + 0x28], ebp
// 0051e4f9  83c408               add esp, 8
// 0051e4fc  c7462c02000000       mov dword ptr [esi + 0x2c], 2
// 0051e503  bd01000000           mov ebp, 1
// 0051e508  eb06                 jmp 0x51e510
// 0051e50a  896e28               mov dword ptr [esi + 0x28], ebp
// 0051e50d  896e2c               mov dword ptr [esi + 0x2c], ebp
// 0051e510  d9e8                 fld1 
// 0051e512  5f                   pop edi
// 0051e513  896e30               mov dword ptr [esi + 0x30], ebp
// 0051e516  dd5e38               fstp qword ptr [esi + 0x38]
// 0051e519  896e34               mov dword ptr [esi + 0x34], ebp
// 0051e51c  5d                   pop ebp
// 0051e51d  885e40               mov byte ptr [esi + 0x40], bl
// 0051e520  885e41               mov byte ptr [esi + 0x41], bl
// 0051e523  895e44               mov dword ptr [esi + 0x44], ebx
// 0051e526  885e4a               mov byte ptr [esi + 0x4a], bl
// 0051e529  895e74               mov dword ptr [esi + 0x74], ebx
// 0051e52c  885e58               mov byte ptr [esi + 0x58], bl
// 0051e52f  885e59               mov byte ptr [esi + 0x59], bl
// 0051e532  885e5a               mov byte ptr [esi + 0x5a], bl
// 0051e535  c6464801             mov byte ptr [esi + 0x48], 1
// 0051e539  c6464901             mov byte ptr [esi + 0x49], 1
// 0051e53d  c7464c02000000       mov dword ptr [esi + 0x4c], 2
// 0051e544  c6465001             mov byte ptr [esi + 0x50], 1
// 0051e548  c7465400010000       mov dword ptr [esi + 0x54], 0x100
// 0051e54f  5b                   pop ebx
// 0051e550  c3                   ret 
// library jpeg-6b/jdapimin.c (function _default_decompress_parms)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
