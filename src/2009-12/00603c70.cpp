// roc 2009-12 00603c70  unit: seg_00600000  size: 449 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00603c70
//
// 00603c70  8b4624               mov eax, dword ptr [esi + 0x24]
// 00603c73  53                   push ebx
// 00603c74  55                   push ebp
// 00603c75  bd01000000           mov ebp, 1
// 00603c7a  2bc5                 sub eax, ebp
// 00603c7c  57                   push edi
// 00603c7d  8d5dff               lea ebx, [ebp - 1]
// 00603c80  0f8464010000         je 0x603dea
// 00603c86  83e802               sub eax, 2
// 00603c89  7468                 je 0x603cf3
// 00603c8b  2bc5                 sub eax, ebp
// 00603c8d  740b                 je 0x603c9a
// 00603c8f  895e28               mov dword ptr [esi + 0x28], ebx
// 00603c92  895e2c               mov dword ptr [esi + 0x2c], ebx
// 00603c95  e956010000           jmp 0x603df0
// 00603c9a  bf04000000           mov edi, 4
// 00603c9f  389e08010000         cmp byte ptr [esi + 0x108], bl
// 00603ca5  7441                 je 0x603ce8
// 00603ca7  0fb68609010000       movzx eax, byte ptr [esi + 0x109]
// 00603cae  2bc3                 sub eax, ebx
// 00603cb0  7436                 je 0x603ce8
// 00603cb2  83e802               sub eax, 2
// 00603cb5  7422                 je 0x603cd9
// 00603cb7  8b06                 mov eax, dword ptr [esi]
// 00603cb9  c7401472000000       mov dword ptr [eax + 0x14], 0x72
// 00603cc0  0fb68e09010000       movzx ecx, byte ptr [esi + 0x109]
// 00603cc7  8b16                 mov edx, dword ptr [esi]
// 00603cc9  894a18               mov dword ptr [edx + 0x18], ecx
// 00603ccc  8b06                 mov eax, dword ptr [esi]
// 00603cce  8b4804               mov ecx, dword ptr [eax + 4]
// 00603cd1  6aff                 push -1
// 00603cd3  56                   push esi
// 00603cd4  ffd1                 call ecx
// 00603cd6  83c408               add esp, 8
// 00603cd9  c7462805000000       mov dword ptr [esi + 0x28], 5
// 00603ce0  897e2c               mov dword ptr [esi + 0x2c], edi
// 00603ce3  e908010000           jmp 0x603df0
// 00603ce8  897e28               mov dword ptr [esi + 0x28], edi
// 00603ceb  897e2c               mov dword ptr [esi + 0x2c], edi
// 00603cee  e9fd000000           jmp 0x603df0
// 00603cf3  389e00010000         cmp byte ptr [esi + 0x100], bl
// 00603cf9  7418                 je 0x603d13
// 00603cfb  c7462803000000       mov dword ptr [esi + 0x28], 3
// 00603d02  c7462c02000000       mov dword ptr [esi + 0x2c], 2
// 00603d09  bd01000000           mov ebp, 1
// 00603d0e  e9dd000000           jmp 0x603df0
// 00603d13  389e08010000         cmp byte ptr [esi + 0x108], bl
// 00603d19  7449                 je 0x603d64
// 00603d1b  0fb68609010000       movzx eax, byte ptr [esi + 0x109]
// 00603d22  2bc3                 sub eax, ebx
// 00603d24  747b                 je 0x603da1
// 00603d26  2bc5                 sub eax, ebp
// 00603d28  74d1                 je 0x603cfb
// 00603d2a  8b16                 mov edx, dword ptr [esi]
// 00603d2c  c7421472000000       mov dword ptr [edx + 0x14], 0x72
// 00603d33  0fb68609010000       movzx eax, byte ptr [esi + 0x109]
// 00603d3a  8b0e                 mov ecx, dword ptr [esi]
// 00603d3c  894118               mov dword ptr [ecx + 0x18], eax
// 00603d3f  8b16                 mov edx, dword ptr [esi]
// 00603d41  8b4204               mov eax, dword ptr [edx + 4]
// 00603d44  6aff                 push -1
// 00603d46  56                   push esi
// 00603d47  ffd0                 call eax
// 00603d49  c7462803000000       mov dword ptr [esi + 0x28], 3
// 00603d50  83c408               add esp, 8
// 00603d53  c7462c02000000       mov dword ptr [esi + 0x2c], 2
// 00603d5a  bd01000000           mov ebp, 1
// 00603d5f  e98c000000           jmp 0x603df0
// 00603d64  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 00603d6a  8b08                 mov ecx, dword ptr [eax]
// 00603d6c  8b5054               mov edx, dword ptr [eax + 0x54]
// 00603d6f  8bb8a8000000         mov edi, dword ptr [eax + 0xa8]
// 00603d75  bd03000000           mov ebp, 3
// 00603d7a  83f901               cmp ecx, 1
// 00603d7d  7513                 jne 0x603d92
// 00603d7f  83fa02               cmp edx, 2
// 00603d82  7532                 jne 0x603db6
// 00603d84  3bfd                 cmp edi, ebp
// 00603d86  752e                 jne 0x603db6
// 00603d88  896e28               mov dword ptr [esi + 0x28], ebp
// 00603d8b  89562c               mov dword ptr [esi + 0x2c], edx
// 00603d8e  8be9                 mov ebp, ecx
// 00603d90  eb5e                 jmp 0x603df0
// 00603d92  83f952               cmp ecx, 0x52
// 00603d95  751f                 jne 0x603db6
// 00603d97  83fa47               cmp edx, 0x47
// 00603d9a  751a                 jne 0x603db6
// 00603d9c  83ff42               cmp edi, 0x42
// 00603d9f  7515                 jne 0x603db6
// 00603da1  c7462802000000       mov dword ptr [esi + 0x28], 2
// 00603da8  c7462c02000000       mov dword ptr [esi + 0x2c], 2
// 00603daf  bd01000000           mov ebp, 1
// 00603db4  eb3a                 jmp 0x603df0
// 00603db6  8b06                 mov eax, dword ptr [esi]
// 00603db8  83c018               add eax, 0x18
// 00603dbb  8908                 mov dword ptr [eax], ecx
// 00603dbd  895004               mov dword ptr [eax + 4], edx
// 00603dc0  897808               mov dword ptr [eax + 8], edi
// 00603dc3  8b0e                 mov ecx, dword ptr [esi]
// 00603dc5  c741146f000000       mov dword ptr [ecx + 0x14], 0x6f
// 00603dcc  8b16                 mov edx, dword ptr [esi]
// 00603dce  8b4204               mov eax, dword ptr [edx + 4]
// 00603dd1  6a01                 push 1
// 00603dd3  56                   push esi
// 00603dd4  ffd0                 call eax
// 00603dd6  896e28               mov dword ptr [esi + 0x28], ebp
// 00603dd9  83c408               add esp, 8
// 00603ddc  c7462c02000000       mov dword ptr [esi + 0x2c], 2
// 00603de3  bd01000000           mov ebp, 1
// 00603de8  eb06                 jmp 0x603df0
// 00603dea  896e28               mov dword ptr [esi + 0x28], ebp
// 00603ded  896e2c               mov dword ptr [esi + 0x2c], ebp
// 00603df0  d9e8                 fld1 
// 00603df2  5f                   pop edi
// 00603df3  896e30               mov dword ptr [esi + 0x30], ebp
// 00603df6  dd5e38               fstp qword ptr [esi + 0x38]
// 00603df9  896e34               mov dword ptr [esi + 0x34], ebp
// 00603dfc  5d                   pop ebp
// 00603dfd  885e40               mov byte ptr [esi + 0x40], bl
// 00603e00  885e41               mov byte ptr [esi + 0x41], bl
// 00603e03  895e44               mov dword ptr [esi + 0x44], ebx
// 00603e06  885e4a               mov byte ptr [esi + 0x4a], bl
// 00603e09  895e74               mov dword ptr [esi + 0x74], ebx
// 00603e0c  885e58               mov byte ptr [esi + 0x58], bl
// 00603e0f  885e59               mov byte ptr [esi + 0x59], bl
// 00603e12  885e5a               mov byte ptr [esi + 0x5a], bl
// 00603e15  c6464801             mov byte ptr [esi + 0x48], 1
// 00603e19  c6464901             mov byte ptr [esi + 0x49], 1
// 00603e1d  c7464c02000000       mov dword ptr [esi + 0x4c], 2
// 00603e24  c6465001             mov byte ptr [esi + 0x50], 1
// 00603e28  c7465400010000       mov dword ptr [esi + 0x54], 0x100
// 00603e2f  5b                   pop ebx
// 00603e30  c3                   ret 
// library jpeg-6b/jdapimin.c (function _default_decompress_parms)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
