// roc 2010-06 005655f0  unit: seg_00560000  size: 449 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005655f0
//
// 005655f0  8b4624               mov eax, dword ptr [esi + 0x24]
// 005655f3  53                   push ebx
// 005655f4  55                   push ebp
// 005655f5  bd01000000           mov ebp, 1
// 005655fa  2bc5                 sub eax, ebp
// 005655fc  57                   push edi
// 005655fd  8d5dff               lea ebx, [ebp - 1]
// 00565600  0f8464010000         je 0x56576a
// 00565606  83e802               sub eax, 2
// 00565609  7468                 je 0x565673
// 0056560b  2bc5                 sub eax, ebp
// 0056560d  740b                 je 0x56561a
// 0056560f  895e28               mov dword ptr [esi + 0x28], ebx
// 00565612  895e2c               mov dword ptr [esi + 0x2c], ebx
// 00565615  e956010000           jmp 0x565770
// 0056561a  bf04000000           mov edi, 4
// 0056561f  389e08010000         cmp byte ptr [esi + 0x108], bl
// 00565625  7441                 je 0x565668
// 00565627  0fb68609010000       movzx eax, byte ptr [esi + 0x109]
// 0056562e  2bc3                 sub eax, ebx
// 00565630  7436                 je 0x565668
// 00565632  83e802               sub eax, 2
// 00565635  7422                 je 0x565659
// 00565637  8b06                 mov eax, dword ptr [esi]
// 00565639  c7401472000000       mov dword ptr [eax + 0x14], 0x72
// 00565640  0fb68e09010000       movzx ecx, byte ptr [esi + 0x109]
// 00565647  8b16                 mov edx, dword ptr [esi]
// 00565649  894a18               mov dword ptr [edx + 0x18], ecx
// 0056564c  8b06                 mov eax, dword ptr [esi]
// 0056564e  8b4804               mov ecx, dword ptr [eax + 4]
// 00565651  6aff                 push -1
// 00565653  56                   push esi
// 00565654  ffd1                 call ecx
// 00565656  83c408               add esp, 8
// 00565659  c7462805000000       mov dword ptr [esi + 0x28], 5
// 00565660  897e2c               mov dword ptr [esi + 0x2c], edi
// 00565663  e908010000           jmp 0x565770
// 00565668  897e28               mov dword ptr [esi + 0x28], edi
// 0056566b  897e2c               mov dword ptr [esi + 0x2c], edi
// 0056566e  e9fd000000           jmp 0x565770
// 00565673  389e00010000         cmp byte ptr [esi + 0x100], bl
// 00565679  7418                 je 0x565693
// 0056567b  c7462803000000       mov dword ptr [esi + 0x28], 3
// 00565682  c7462c02000000       mov dword ptr [esi + 0x2c], 2
// 00565689  bd01000000           mov ebp, 1
// 0056568e  e9dd000000           jmp 0x565770
// 00565693  389e08010000         cmp byte ptr [esi + 0x108], bl
// 00565699  7449                 je 0x5656e4
// 0056569b  0fb68609010000       movzx eax, byte ptr [esi + 0x109]
// 005656a2  2bc3                 sub eax, ebx
// 005656a4  747b                 je 0x565721
// 005656a6  2bc5                 sub eax, ebp
// 005656a8  74d1                 je 0x56567b
// 005656aa  8b16                 mov edx, dword ptr [esi]
// 005656ac  c7421472000000       mov dword ptr [edx + 0x14], 0x72
// 005656b3  0fb68609010000       movzx eax, byte ptr [esi + 0x109]
// 005656ba  8b0e                 mov ecx, dword ptr [esi]
// 005656bc  894118               mov dword ptr [ecx + 0x18], eax
// 005656bf  8b16                 mov edx, dword ptr [esi]
// 005656c1  8b4204               mov eax, dword ptr [edx + 4]
// 005656c4  6aff                 push -1
// 005656c6  56                   push esi
// 005656c7  ffd0                 call eax
// 005656c9  c7462803000000       mov dword ptr [esi + 0x28], 3
// 005656d0  83c408               add esp, 8
// 005656d3  c7462c02000000       mov dword ptr [esi + 0x2c], 2
// 005656da  bd01000000           mov ebp, 1
// 005656df  e98c000000           jmp 0x565770
// 005656e4  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 005656ea  8b08                 mov ecx, dword ptr [eax]
// 005656ec  8b5054               mov edx, dword ptr [eax + 0x54]
// 005656ef  8bb8a8000000         mov edi, dword ptr [eax + 0xa8]
// 005656f5  bd03000000           mov ebp, 3
// 005656fa  83f901               cmp ecx, 1
// 005656fd  7513                 jne 0x565712
// 005656ff  83fa02               cmp edx, 2
// 00565702  7532                 jne 0x565736
// 00565704  3bfd                 cmp edi, ebp
// 00565706  752e                 jne 0x565736
// 00565708  896e28               mov dword ptr [esi + 0x28], ebp
// 0056570b  89562c               mov dword ptr [esi + 0x2c], edx
// 0056570e  8be9                 mov ebp, ecx
// 00565710  eb5e                 jmp 0x565770
// 00565712  83f952               cmp ecx, 0x52
// 00565715  751f                 jne 0x565736
// 00565717  83fa47               cmp edx, 0x47
// 0056571a  751a                 jne 0x565736
// 0056571c  83ff42               cmp edi, 0x42
// 0056571f  7515                 jne 0x565736
// 00565721  c7462802000000       mov dword ptr [esi + 0x28], 2
// 00565728  c7462c02000000       mov dword ptr [esi + 0x2c], 2
// 0056572f  bd01000000           mov ebp, 1
// 00565734  eb3a                 jmp 0x565770
// 00565736  8b06                 mov eax, dword ptr [esi]
// 00565738  83c018               add eax, 0x18
// 0056573b  8908                 mov dword ptr [eax], ecx
// 0056573d  895004               mov dword ptr [eax + 4], edx
// 00565740  897808               mov dword ptr [eax + 8], edi
// 00565743  8b0e                 mov ecx, dword ptr [esi]
// 00565745  c741146f000000       mov dword ptr [ecx + 0x14], 0x6f
// 0056574c  8b16                 mov edx, dword ptr [esi]
// 0056574e  8b4204               mov eax, dword ptr [edx + 4]
// 00565751  6a01                 push 1
// 00565753  56                   push esi
// 00565754  ffd0                 call eax
// 00565756  896e28               mov dword ptr [esi + 0x28], ebp
// 00565759  83c408               add esp, 8
// 0056575c  c7462c02000000       mov dword ptr [esi + 0x2c], 2
// 00565763  bd01000000           mov ebp, 1
// 00565768  eb06                 jmp 0x565770
// 0056576a  896e28               mov dword ptr [esi + 0x28], ebp
// 0056576d  896e2c               mov dword ptr [esi + 0x2c], ebp
// 00565770  d9e8                 fld1 
// 00565772  5f                   pop edi
// 00565773  896e30               mov dword ptr [esi + 0x30], ebp
// 00565776  dd5e38               fstp qword ptr [esi + 0x38]
// 00565779  896e34               mov dword ptr [esi + 0x34], ebp
// 0056577c  5d                   pop ebp
// 0056577d  885e40               mov byte ptr [esi + 0x40], bl
// 00565780  885e41               mov byte ptr [esi + 0x41], bl
// 00565783  895e44               mov dword ptr [esi + 0x44], ebx
// 00565786  885e4a               mov byte ptr [esi + 0x4a], bl
// 00565789  895e74               mov dword ptr [esi + 0x74], ebx
// 0056578c  885e58               mov byte ptr [esi + 0x58], bl
// 0056578f  885e59               mov byte ptr [esi + 0x59], bl
// 00565792  885e5a               mov byte ptr [esi + 0x5a], bl
// 00565795  c6464801             mov byte ptr [esi + 0x48], 1
// 00565799  c6464901             mov byte ptr [esi + 0x49], 1
// 0056579d  c7464c02000000       mov dword ptr [esi + 0x4c], 2
// 005657a4  c6465001             mov byte ptr [esi + 0x50], 1
// 005657a8  c7465400010000       mov dword ptr [esi + 0x54], 0x100
// 005657af  5b                   pop ebx
// 005657b0  c3                   ret 
// library jpeg-6b/jdapimin.c (function _default_decompress_parms)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
