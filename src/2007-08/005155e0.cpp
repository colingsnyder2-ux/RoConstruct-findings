// roc 2007-08 005155e0  unit: G3D::_internal::DialogTemplate  size: 451 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005155e0
//
// 005155e0  8b4624               mov eax, dword ptr [esi + 0x24]
// 005155e3  53                   push ebx
// 005155e4  55                   push ebp
// 005155e5  bd01000000           mov ebp, 1
// 005155ea  2bc5                 sub eax, ebp
// 005155ec  57                   push edi
// 005155ed  bb00000000           mov ebx, 0
// 005155f2  0f8464010000         je 0x51575c
// 005155f8  83e802               sub eax, 2
// 005155fb  7468                 je 0x515665
// 005155fd  2bc5                 sub eax, ebp
// 005155ff  740b                 je 0x51560c
// 00515601  895e28               mov dword ptr [esi + 0x28], ebx
// 00515604  895e2c               mov dword ptr [esi + 0x2c], ebx
// 00515607  e956010000           jmp 0x515762
// 0051560c  389e08010000         cmp byte ptr [esi + 0x108], bl
// 00515612  bf04000000           mov edi, 4
// 00515617  7441                 je 0x51565a
// 00515619  0fb68609010000       movzx eax, byte ptr [esi + 0x109]
// 00515620  2bc3                 sub eax, ebx
// 00515622  7436                 je 0x51565a
// 00515624  83e802               sub eax, 2
// 00515627  7422                 je 0x51564b
// 00515629  8b06                 mov eax, dword ptr [esi]
// 0051562b  c7401472000000       mov dword ptr [eax + 0x14], 0x72
// 00515632  0fb68e09010000       movzx ecx, byte ptr [esi + 0x109]
// 00515639  8b16                 mov edx, dword ptr [esi]
// 0051563b  894a18               mov dword ptr [edx + 0x18], ecx
// 0051563e  8b06                 mov eax, dword ptr [esi]
// 00515640  8b4804               mov ecx, dword ptr [eax + 4]
// 00515643  6aff                 push -1
// 00515645  56                   push esi
// 00515646  ffd1                 call ecx
// 00515648  83c408               add esp, 8
// 0051564b  c7462805000000       mov dword ptr [esi + 0x28], 5
// 00515652  897e2c               mov dword ptr [esi + 0x2c], edi
// 00515655  e908010000           jmp 0x515762
// 0051565a  897e28               mov dword ptr [esi + 0x28], edi
// 0051565d  897e2c               mov dword ptr [esi + 0x2c], edi
// 00515660  e9fd000000           jmp 0x515762
// 00515665  389e00010000         cmp byte ptr [esi + 0x100], bl
// 0051566b  7418                 je 0x515685
// 0051566d  c7462803000000       mov dword ptr [esi + 0x28], 3
// 00515674  c7462c02000000       mov dword ptr [esi + 0x2c], 2
// 0051567b  bd01000000           mov ebp, 1
// 00515680  e9dd000000           jmp 0x515762
// 00515685  389e08010000         cmp byte ptr [esi + 0x108], bl
// 0051568b  7449                 je 0x5156d6
// 0051568d  0fb68609010000       movzx eax, byte ptr [esi + 0x109]
// 00515694  2bc3                 sub eax, ebx
// 00515696  747b                 je 0x515713
// 00515698  2bc5                 sub eax, ebp
// 0051569a  74d1                 je 0x51566d
// 0051569c  8b16                 mov edx, dword ptr [esi]
// 0051569e  c7421472000000       mov dword ptr [edx + 0x14], 0x72
// 005156a5  0fb68609010000       movzx eax, byte ptr [esi + 0x109]
// 005156ac  8b0e                 mov ecx, dword ptr [esi]
// 005156ae  894118               mov dword ptr [ecx + 0x18], eax
// 005156b1  8b16                 mov edx, dword ptr [esi]
// 005156b3  8b4204               mov eax, dword ptr [edx + 4]
// 005156b6  6aff                 push -1
// 005156b8  56                   push esi
// 005156b9  ffd0                 call eax
// 005156bb  c7462803000000       mov dword ptr [esi + 0x28], 3
// 005156c2  83c408               add esp, 8
// 005156c5  c7462c02000000       mov dword ptr [esi + 0x2c], 2
// 005156cc  bd01000000           mov ebp, 1
// 005156d1  e98c000000           jmp 0x515762
// 005156d6  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 005156dc  8b08                 mov ecx, dword ptr [eax]
// 005156de  83f901               cmp ecx, 1
// 005156e1  8b5054               mov edx, dword ptr [eax + 0x54]
// 005156e4  8bb8a8000000         mov edi, dword ptr [eax + 0xa8]
// 005156ea  bd03000000           mov ebp, 3
// 005156ef  7513                 jne 0x515704
// 005156f1  83fa02               cmp edx, 2
// 005156f4  7532                 jne 0x515728
// 005156f6  3bfd                 cmp edi, ebp
// 005156f8  752e                 jne 0x515728
// 005156fa  896e28               mov dword ptr [esi + 0x28], ebp
// 005156fd  89562c               mov dword ptr [esi + 0x2c], edx
// 00515700  8be9                 mov ebp, ecx
// 00515702  eb5e                 jmp 0x515762
// 00515704  83f952               cmp ecx, 0x52
// 00515707  751f                 jne 0x515728
// 00515709  83fa47               cmp edx, 0x47
// 0051570c  751a                 jne 0x515728
// 0051570e  83ff42               cmp edi, 0x42
// 00515711  7515                 jne 0x515728
// 00515713  c7462802000000       mov dword ptr [esi + 0x28], 2
// 0051571a  c7462c02000000       mov dword ptr [esi + 0x2c], 2
// 00515721  bd01000000           mov ebp, 1
// 00515726  eb3a                 jmp 0x515762
// 00515728  8b06                 mov eax, dword ptr [esi]
// 0051572a  83c018               add eax, 0x18
// 0051572d  8908                 mov dword ptr [eax], ecx
// 0051572f  895004               mov dword ptr [eax + 4], edx
// 00515732  897808               mov dword ptr [eax + 8], edi
// 00515735  8b0e                 mov ecx, dword ptr [esi]
// 00515737  c741146f000000       mov dword ptr [ecx + 0x14], 0x6f
// 0051573e  8b16                 mov edx, dword ptr [esi]
// 00515740  8b4204               mov eax, dword ptr [edx + 4]
// 00515743  6a01                 push 1
// 00515745  56                   push esi
// 00515746  ffd0                 call eax
// 00515748  896e28               mov dword ptr [esi + 0x28], ebp
// 0051574b  83c408               add esp, 8
// 0051574e  c7462c02000000       mov dword ptr [esi + 0x2c], 2
// 00515755  bd01000000           mov ebp, 1
// 0051575a  eb06                 jmp 0x515762
// 0051575c  896e28               mov dword ptr [esi + 0x28], ebp
// 0051575f  896e2c               mov dword ptr [esi + 0x2c], ebp
// 00515762  d9e8                 fld1 
// 00515764  5f                   pop edi
// 00515765  896e30               mov dword ptr [esi + 0x30], ebp
// 00515768  dd5e38               fstp qword ptr [esi + 0x38]
// 0051576b  896e34               mov dword ptr [esi + 0x34], ebp
// 0051576e  5d                   pop ebp
// 0051576f  885e40               mov byte ptr [esi + 0x40], bl
// 00515772  885e41               mov byte ptr [esi + 0x41], bl
// 00515775  895e44               mov dword ptr [esi + 0x44], ebx
// 00515778  885e4a               mov byte ptr [esi + 0x4a], bl
// 0051577b  895e74               mov dword ptr [esi + 0x74], ebx
// 0051577e  885e58               mov byte ptr [esi + 0x58], bl
// 00515781  885e59               mov byte ptr [esi + 0x59], bl
// 00515784  885e5a               mov byte ptr [esi + 0x5a], bl
// 00515787  c6464801             mov byte ptr [esi + 0x48], 1
// 0051578b  c6464901             mov byte ptr [esi + 0x49], 1
// 0051578f  c7464c02000000       mov dword ptr [esi + 0x4c], 2
// 00515796  c6465001             mov byte ptr [esi + 0x50], 1
// 0051579a  c7465400010000       mov dword ptr [esi + 0x54], 0x100
// 005157a1  5b                   pop ebx
// 005157a2  c3                   ret 
// library jpeg-6b/jdapimin.c (function _default_decompress_parms)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
