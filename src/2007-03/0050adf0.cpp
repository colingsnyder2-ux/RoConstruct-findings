// roc 2007-03 0050adf0  unit: seg_00500000  size: 451 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0050adf0
//
// 0050adf0  8b4624               mov eax, dword ptr [esi + 0x24]
// 0050adf3  53                   push ebx
// 0050adf4  55                   push ebp
// 0050adf5  bd01000000           mov ebp, 1
// 0050adfa  2bc5                 sub eax, ebp
// 0050adfc  57                   push edi
// 0050adfd  bb00000000           mov ebx, 0
// 0050ae02  0f8464010000         je 0x50af6c
// 0050ae08  83e802               sub eax, 2
// 0050ae0b  7468                 je 0x50ae75
// 0050ae0d  2bc5                 sub eax, ebp
// 0050ae0f  740b                 je 0x50ae1c
// 0050ae11  895e28               mov dword ptr [esi + 0x28], ebx
// 0050ae14  895e2c               mov dword ptr [esi + 0x2c], ebx
// 0050ae17  e956010000           jmp 0x50af72
// 0050ae1c  389e08010000         cmp byte ptr [esi + 0x108], bl
// 0050ae22  bf04000000           mov edi, 4
// 0050ae27  7441                 je 0x50ae6a
// 0050ae29  0fb68609010000       movzx eax, byte ptr [esi + 0x109]
// 0050ae30  2bc3                 sub eax, ebx
// 0050ae32  7436                 je 0x50ae6a
// 0050ae34  83e802               sub eax, 2
// 0050ae37  7422                 je 0x50ae5b
// 0050ae39  8b06                 mov eax, dword ptr [esi]
// 0050ae3b  c7401472000000       mov dword ptr [eax + 0x14], 0x72
// 0050ae42  0fb68e09010000       movzx ecx, byte ptr [esi + 0x109]
// 0050ae49  8b16                 mov edx, dword ptr [esi]
// 0050ae4b  894a18               mov dword ptr [edx + 0x18], ecx
// 0050ae4e  8b06                 mov eax, dword ptr [esi]
// 0050ae50  8b4804               mov ecx, dword ptr [eax + 4]
// 0050ae53  6aff                 push -1
// 0050ae55  56                   push esi
// 0050ae56  ffd1                 call ecx
// 0050ae58  83c408               add esp, 8
// 0050ae5b  c7462805000000       mov dword ptr [esi + 0x28], 5
// 0050ae62  897e2c               mov dword ptr [esi + 0x2c], edi
// 0050ae65  e908010000           jmp 0x50af72
// 0050ae6a  897e28               mov dword ptr [esi + 0x28], edi
// 0050ae6d  897e2c               mov dword ptr [esi + 0x2c], edi
// 0050ae70  e9fd000000           jmp 0x50af72
// 0050ae75  389e00010000         cmp byte ptr [esi + 0x100], bl
// 0050ae7b  7418                 je 0x50ae95
// 0050ae7d  c7462803000000       mov dword ptr [esi + 0x28], 3
// 0050ae84  c7462c02000000       mov dword ptr [esi + 0x2c], 2
// 0050ae8b  bd01000000           mov ebp, 1
// 0050ae90  e9dd000000           jmp 0x50af72
// 0050ae95  389e08010000         cmp byte ptr [esi + 0x108], bl
// 0050ae9b  7449                 je 0x50aee6
// 0050ae9d  0fb68609010000       movzx eax, byte ptr [esi + 0x109]
// 0050aea4  2bc3                 sub eax, ebx
// 0050aea6  747b                 je 0x50af23
// 0050aea8  2bc5                 sub eax, ebp
// 0050aeaa  74d1                 je 0x50ae7d
// 0050aeac  8b16                 mov edx, dword ptr [esi]
// 0050aeae  c7421472000000       mov dword ptr [edx + 0x14], 0x72
// 0050aeb5  0fb68609010000       movzx eax, byte ptr [esi + 0x109]
// 0050aebc  8b0e                 mov ecx, dword ptr [esi]
// 0050aebe  894118               mov dword ptr [ecx + 0x18], eax
// 0050aec1  8b16                 mov edx, dword ptr [esi]
// 0050aec3  8b4204               mov eax, dword ptr [edx + 4]
// 0050aec6  6aff                 push -1
// 0050aec8  56                   push esi
// 0050aec9  ffd0                 call eax
// 0050aecb  c7462803000000       mov dword ptr [esi + 0x28], 3
// 0050aed2  83c408               add esp, 8
// 0050aed5  c7462c02000000       mov dword ptr [esi + 0x2c], 2
// 0050aedc  bd01000000           mov ebp, 1
// 0050aee1  e98c000000           jmp 0x50af72
// 0050aee6  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0050aeec  8b08                 mov ecx, dword ptr [eax]
// 0050aeee  83f901               cmp ecx, 1
// 0050aef1  8b5054               mov edx, dword ptr [eax + 0x54]
// 0050aef4  8bb8a8000000         mov edi, dword ptr [eax + 0xa8]
// 0050aefa  bd03000000           mov ebp, 3
// 0050aeff  7513                 jne 0x50af14
// 0050af01  83fa02               cmp edx, 2
// 0050af04  7532                 jne 0x50af38
// 0050af06  3bfd                 cmp edi, ebp
// 0050af08  752e                 jne 0x50af38
// 0050af0a  896e28               mov dword ptr [esi + 0x28], ebp
// 0050af0d  89562c               mov dword ptr [esi + 0x2c], edx
// 0050af10  8be9                 mov ebp, ecx
// 0050af12  eb5e                 jmp 0x50af72
// 0050af14  83f952               cmp ecx, 0x52
// 0050af17  751f                 jne 0x50af38
// 0050af19  83fa47               cmp edx, 0x47
// 0050af1c  751a                 jne 0x50af38
// 0050af1e  83ff42               cmp edi, 0x42
// 0050af21  7515                 jne 0x50af38
// 0050af23  c7462802000000       mov dword ptr [esi + 0x28], 2
// 0050af2a  c7462c02000000       mov dword ptr [esi + 0x2c], 2
// 0050af31  bd01000000           mov ebp, 1
// 0050af36  eb3a                 jmp 0x50af72
// 0050af38  8b06                 mov eax, dword ptr [esi]
// 0050af3a  83c018               add eax, 0x18
// 0050af3d  8908                 mov dword ptr [eax], ecx
// 0050af3f  895004               mov dword ptr [eax + 4], edx
// 0050af42  897808               mov dword ptr [eax + 8], edi
// 0050af45  8b0e                 mov ecx, dword ptr [esi]
// 0050af47  c741146f000000       mov dword ptr [ecx + 0x14], 0x6f
// 0050af4e  8b16                 mov edx, dword ptr [esi]
// 0050af50  8b4204               mov eax, dword ptr [edx + 4]
// 0050af53  6a01                 push 1
// 0050af55  56                   push esi
// 0050af56  ffd0                 call eax
// 0050af58  896e28               mov dword ptr [esi + 0x28], ebp
// 0050af5b  83c408               add esp, 8
// 0050af5e  c7462c02000000       mov dword ptr [esi + 0x2c], 2
// 0050af65  bd01000000           mov ebp, 1
// 0050af6a  eb06                 jmp 0x50af72
// 0050af6c  896e28               mov dword ptr [esi + 0x28], ebp
// 0050af6f  896e2c               mov dword ptr [esi + 0x2c], ebp
// 0050af72  d9e8                 fld1 
// 0050af74  5f                   pop edi
// 0050af75  896e30               mov dword ptr [esi + 0x30], ebp
// 0050af78  dd5e38               fstp qword ptr [esi + 0x38]
// 0050af7b  896e34               mov dword ptr [esi + 0x34], ebp
// 0050af7e  5d                   pop ebp
// 0050af7f  885e40               mov byte ptr [esi + 0x40], bl
// 0050af82  885e41               mov byte ptr [esi + 0x41], bl
// 0050af85  895e44               mov dword ptr [esi + 0x44], ebx
// 0050af88  885e4a               mov byte ptr [esi + 0x4a], bl
// 0050af8b  895e74               mov dword ptr [esi + 0x74], ebx
// 0050af8e  885e58               mov byte ptr [esi + 0x58], bl
// 0050af91  885e59               mov byte ptr [esi + 0x59], bl
// 0050af94  885e5a               mov byte ptr [esi + 0x5a], bl
// 0050af97  c6464801             mov byte ptr [esi + 0x48], 1
// 0050af9b  c6464901             mov byte ptr [esi + 0x49], 1
// 0050af9f  c7464c02000000       mov dword ptr [esi + 0x4c], 2
// 0050afa6  c6465001             mov byte ptr [esi + 0x50], 1
// 0050afaa  c7465400010000       mov dword ptr [esi + 0x54], 0x100
// 0050afb1  5b                   pop ebx
// 0050afb2  c3                   ret 
// library jpeg-6b/jdapimin.c (function _default_decompress_parms)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
