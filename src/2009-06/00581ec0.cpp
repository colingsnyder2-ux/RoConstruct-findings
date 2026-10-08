// from server: 100% by auto
// roc 2009-06 00581ec0  unit: seg_00580000  size: 449 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00581ec0
//
// 00581ec0  8b4624               mov eax, dword ptr [esi + 0x24]
// 00581ec3  53                   push ebx
// 00581ec4  55                   push ebp
// 00581ec5  bd01000000           mov ebp, 1
// 00581eca  2bc5                 sub eax, ebp
// 00581ecc  57                   push edi
// 00581ecd  8d5dff               lea ebx, [ebp - 1]
// 00581ed0  0f8464010000         je 0x58203a
// 00581ed6  83e802               sub eax, 2
// 00581ed9  7468                 je 0x581f43
// 00581edb  2bc5                 sub eax, ebp
// 00581edd  740b                 je 0x581eea
// 00581edf  895e28               mov dword ptr [esi + 0x28], ebx
// 00581ee2  895e2c               mov dword ptr [esi + 0x2c], ebx
// 00581ee5  e956010000           jmp 0x582040
// 00581eea  bf04000000           mov edi, 4
// 00581eef  389e08010000         cmp byte ptr [esi + 0x108], bl
// 00581ef5  7441                 je 0x581f38
// 00581ef7  0fb68609010000       movzx eax, byte ptr [esi + 0x109]
// 00581efe  2bc3                 sub eax, ebx
// 00581f00  7436                 je 0x581f38
// 00581f02  83e802               sub eax, 2
// 00581f05  7422                 je 0x581f29
// 00581f07  8b06                 mov eax, dword ptr [esi]
// 00581f09  c7401472000000       mov dword ptr [eax + 0x14], 0x72
// 00581f10  0fb68e09010000       movzx ecx, byte ptr [esi + 0x109]
// 00581f17  8b16                 mov edx, dword ptr [esi]
// 00581f19  894a18               mov dword ptr [edx + 0x18], ecx
// 00581f1c  8b06                 mov eax, dword ptr [esi]
// 00581f1e  8b4804               mov ecx, dword ptr [eax + 4]
// 00581f21  6aff                 push -1
// 00581f23  56                   push esi
// 00581f24  ffd1                 call ecx
// 00581f26  83c408               add esp, 8
// 00581f29  c7462805000000       mov dword ptr [esi + 0x28], 5
// 00581f30  897e2c               mov dword ptr [esi + 0x2c], edi
// 00581f33  e908010000           jmp 0x582040
// 00581f38  897e28               mov dword ptr [esi + 0x28], edi
// 00581f3b  897e2c               mov dword ptr [esi + 0x2c], edi
// 00581f3e  e9fd000000           jmp 0x582040
// 00581f43  389e00010000         cmp byte ptr [esi + 0x100], bl
// 00581f49  7418                 je 0x581f63
// 00581f4b  c7462803000000       mov dword ptr [esi + 0x28], 3
// 00581f52  c7462c02000000       mov dword ptr [esi + 0x2c], 2
// 00581f59  bd01000000           mov ebp, 1
// 00581f5e  e9dd000000           jmp 0x582040
// 00581f63  389e08010000         cmp byte ptr [esi + 0x108], bl
// 00581f69  7449                 je 0x581fb4
// 00581f6b  0fb68609010000       movzx eax, byte ptr [esi + 0x109]
// 00581f72  2bc3                 sub eax, ebx
// 00581f74  747b                 je 0x581ff1
// 00581f76  2bc5                 sub eax, ebp
// 00581f78  74d1                 je 0x581f4b
// 00581f7a  8b16                 mov edx, dword ptr [esi]
// 00581f7c  c7421472000000       mov dword ptr [edx + 0x14], 0x72
// 00581f83  0fb68609010000       movzx eax, byte ptr [esi + 0x109]
// 00581f8a  8b0e                 mov ecx, dword ptr [esi]
// 00581f8c  894118               mov dword ptr [ecx + 0x18], eax
// 00581f8f  8b16                 mov edx, dword ptr [esi]
// 00581f91  8b4204               mov eax, dword ptr [edx + 4]
// 00581f94  6aff                 push -1
// 00581f96  56                   push esi
// 00581f97  ffd0                 call eax
// 00581f99  c7462803000000       mov dword ptr [esi + 0x28], 3
// 00581fa0  83c408               add esp, 8
// 00581fa3  c7462c02000000       mov dword ptr [esi + 0x2c], 2
// 00581faa  bd01000000           mov ebp, 1
// 00581faf  e98c000000           jmp 0x582040
// 00581fb4  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 00581fba  8b08                 mov ecx, dword ptr [eax]
// 00581fbc  8b5054               mov edx, dword ptr [eax + 0x54]
// 00581fbf  8bb8a8000000         mov edi, dword ptr [eax + 0xa8]
// 00581fc5  bd03000000           mov ebp, 3
// 00581fca  83f901               cmp ecx, 1
// 00581fcd  7513                 jne 0x581fe2
// 00581fcf  83fa02               cmp edx, 2
// 00581fd2  7532                 jne 0x582006
// 00581fd4  3bfd                 cmp edi, ebp
// 00581fd6  752e                 jne 0x582006
// 00581fd8  896e28               mov dword ptr [esi + 0x28], ebp
// 00581fdb  89562c               mov dword ptr [esi + 0x2c], edx
// 00581fde  8be9                 mov ebp, ecx
// 00581fe0  eb5e                 jmp 0x582040
// 00581fe2  83f952               cmp ecx, 0x52
// 00581fe5  751f                 jne 0x582006
// 00581fe7  83fa47               cmp edx, 0x47
// 00581fea  751a                 jne 0x582006
// 00581fec  83ff42               cmp edi, 0x42
// 00581fef  7515                 jne 0x582006
// 00581ff1  c7462802000000       mov dword ptr [esi + 0x28], 2
// 00581ff8  c7462c02000000       mov dword ptr [esi + 0x2c], 2
// 00581fff  bd01000000           mov ebp, 1
// 00582004  eb3a                 jmp 0x582040
// 00582006  8b06                 mov eax, dword ptr [esi]
// 00582008  83c018               add eax, 0x18
// 0058200b  8908                 mov dword ptr [eax], ecx
// 0058200d  895004               mov dword ptr [eax + 4], edx
// 00582010  897808               mov dword ptr [eax + 8], edi
// 00582013  8b0e                 mov ecx, dword ptr [esi]
// 00582015  c741146f000000       mov dword ptr [ecx + 0x14], 0x6f
// 0058201c  8b16                 mov edx, dword ptr [esi]
// 0058201e  8b4204               mov eax, dword ptr [edx + 4]
// 00582021  6a01                 push 1
// 00582023  56                   push esi
// 00582024  ffd0                 call eax
// 00582026  896e28               mov dword ptr [esi + 0x28], ebp
// 00582029  83c408               add esp, 8
// 0058202c  c7462c02000000       mov dword ptr [esi + 0x2c], 2
// 00582033  bd01000000           mov ebp, 1
// 00582038  eb06                 jmp 0x582040
// 0058203a  896e28               mov dword ptr [esi + 0x28], ebp
// 0058203d  896e2c               mov dword ptr [esi + 0x2c], ebp
// 00582040  d9e8                 fld1 
// 00582042  5f                   pop edi
// 00582043  896e30               mov dword ptr [esi + 0x30], ebp
// 00582046  dd5e38               fstp qword ptr [esi + 0x38]
// 00582049  896e34               mov dword ptr [esi + 0x34], ebp
// 0058204c  5d                   pop ebp
// 0058204d  885e40               mov byte ptr [esi + 0x40], bl
// 00582050  885e41               mov byte ptr [esi + 0x41], bl
// 00582053  895e44               mov dword ptr [esi + 0x44], ebx
// 00582056  885e4a               mov byte ptr [esi + 0x4a], bl
// 00582059  895e74               mov dword ptr [esi + 0x74], ebx
// 0058205c  885e58               mov byte ptr [esi + 0x58], bl
// 0058205f  885e59               mov byte ptr [esi + 0x59], bl
// 00582062  885e5a               mov byte ptr [esi + 0x5a], bl
// 00582065  c6464801             mov byte ptr [esi + 0x48], 1
// 00582069  c6464901             mov byte ptr [esi + 0x49], 1
// 0058206d  c7464c02000000       mov dword ptr [esi + 0x4c], 2
// 00582074  c6465001             mov byte ptr [esi + 0x50], 1
// 00582078  c7465400010000       mov dword ptr [esi + 0x54], 0x100
// 0058207f  5b                   pop ebx
// 00582080  c3                   ret 
// library jpeg-6b/jdapimin.c (function _default_decompress_parms)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
