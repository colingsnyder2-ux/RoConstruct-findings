// from server: 100% by auto
// roc 2012-06 00643ec0  unit: seg_00640000  size: 449 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00643ec0
//
// 00643ec0  8b4624               mov eax, dword ptr [esi + 0x24]
// 00643ec3  53                   push ebx
// 00643ec4  55                   push ebp
// 00643ec5  bd01000000           mov ebp, 1
// 00643eca  2bc5                 sub eax, ebp
// 00643ecc  57                   push edi
// 00643ecd  8d5dff               lea ebx, [ebp - 1]
// 00643ed0  0f8464010000         je 0x64403a
// 00643ed6  83e802               sub eax, 2
// 00643ed9  7468                 je 0x643f43
// 00643edb  2bc5                 sub eax, ebp
// 00643edd  740b                 je 0x643eea
// 00643edf  895e28               mov dword ptr [esi + 0x28], ebx
// 00643ee2  895e2c               mov dword ptr [esi + 0x2c], ebx
// 00643ee5  e956010000           jmp 0x644040
// 00643eea  bf04000000           mov edi, 4
// 00643eef  389e08010000         cmp byte ptr [esi + 0x108], bl
// 00643ef5  7441                 je 0x643f38
// 00643ef7  0fb68609010000       movzx eax, byte ptr [esi + 0x109]
// 00643efe  2bc3                 sub eax, ebx
// 00643f00  7436                 je 0x643f38
// 00643f02  83e802               sub eax, 2
// 00643f05  7422                 je 0x643f29
// 00643f07  8b06                 mov eax, dword ptr [esi]
// 00643f09  c7401472000000       mov dword ptr [eax + 0x14], 0x72
// 00643f10  0fb68e09010000       movzx ecx, byte ptr [esi + 0x109]
// 00643f17  8b16                 mov edx, dword ptr [esi]
// 00643f19  894a18               mov dword ptr [edx + 0x18], ecx
// 00643f1c  8b06                 mov eax, dword ptr [esi]
// 00643f1e  8b4804               mov ecx, dword ptr [eax + 4]
// 00643f21  6aff                 push -1
// 00643f23  56                   push esi
// 00643f24  ffd1                 call ecx
// 00643f26  83c408               add esp, 8
// 00643f29  c7462805000000       mov dword ptr [esi + 0x28], 5
// 00643f30  897e2c               mov dword ptr [esi + 0x2c], edi
// 00643f33  e908010000           jmp 0x644040
// 00643f38  897e28               mov dword ptr [esi + 0x28], edi
// 00643f3b  897e2c               mov dword ptr [esi + 0x2c], edi
// 00643f3e  e9fd000000           jmp 0x644040
// 00643f43  389e00010000         cmp byte ptr [esi + 0x100], bl
// 00643f49  7418                 je 0x643f63
// 00643f4b  c7462803000000       mov dword ptr [esi + 0x28], 3
// 00643f52  c7462c02000000       mov dword ptr [esi + 0x2c], 2
// 00643f59  bd01000000           mov ebp, 1
// 00643f5e  e9dd000000           jmp 0x644040
// 00643f63  389e08010000         cmp byte ptr [esi + 0x108], bl
// 00643f69  7449                 je 0x643fb4
// 00643f6b  0fb68609010000       movzx eax, byte ptr [esi + 0x109]
// 00643f72  2bc3                 sub eax, ebx
// 00643f74  747b                 je 0x643ff1
// 00643f76  2bc5                 sub eax, ebp
// 00643f78  74d1                 je 0x643f4b
// 00643f7a  8b16                 mov edx, dword ptr [esi]
// 00643f7c  c7421472000000       mov dword ptr [edx + 0x14], 0x72
// 00643f83  0fb68609010000       movzx eax, byte ptr [esi + 0x109]
// 00643f8a  8b0e                 mov ecx, dword ptr [esi]
// 00643f8c  894118               mov dword ptr [ecx + 0x18], eax
// 00643f8f  8b16                 mov edx, dword ptr [esi]
// 00643f91  8b4204               mov eax, dword ptr [edx + 4]
// 00643f94  6aff                 push -1
// 00643f96  56                   push esi
// 00643f97  ffd0                 call eax
// 00643f99  c7462803000000       mov dword ptr [esi + 0x28], 3
// 00643fa0  83c408               add esp, 8
// 00643fa3  c7462c02000000       mov dword ptr [esi + 0x2c], 2
// 00643faa  bd01000000           mov ebp, 1
// 00643faf  e98c000000           jmp 0x644040
// 00643fb4  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 00643fba  8b08                 mov ecx, dword ptr [eax]
// 00643fbc  8b5054               mov edx, dword ptr [eax + 0x54]
// 00643fbf  8bb8a8000000         mov edi, dword ptr [eax + 0xa8]
// 00643fc5  bd03000000           mov ebp, 3
// 00643fca  83f901               cmp ecx, 1
// 00643fcd  7513                 jne 0x643fe2
// 00643fcf  83fa02               cmp edx, 2
// 00643fd2  7532                 jne 0x644006
// 00643fd4  3bfd                 cmp edi, ebp
// 00643fd6  752e                 jne 0x644006
// 00643fd8  896e28               mov dword ptr [esi + 0x28], ebp
// 00643fdb  89562c               mov dword ptr [esi + 0x2c], edx
// 00643fde  8be9                 mov ebp, ecx
// 00643fe0  eb5e                 jmp 0x644040
// 00643fe2  83f952               cmp ecx, 0x52
// 00643fe5  751f                 jne 0x644006
// 00643fe7  83fa47               cmp edx, 0x47
// 00643fea  751a                 jne 0x644006
// 00643fec  83ff42               cmp edi, 0x42
// 00643fef  7515                 jne 0x644006
// 00643ff1  c7462802000000       mov dword ptr [esi + 0x28], 2
// 00643ff8  c7462c02000000       mov dword ptr [esi + 0x2c], 2
// 00643fff  bd01000000           mov ebp, 1
// 00644004  eb3a                 jmp 0x644040
// 00644006  8b06                 mov eax, dword ptr [esi]
// 00644008  83c018               add eax, 0x18
// 0064400b  8908                 mov dword ptr [eax], ecx
// 0064400d  895004               mov dword ptr [eax + 4], edx
// 00644010  897808               mov dword ptr [eax + 8], edi
// 00644013  8b0e                 mov ecx, dword ptr [esi]
// 00644015  c741146f000000       mov dword ptr [ecx + 0x14], 0x6f
// 0064401c  8b16                 mov edx, dword ptr [esi]
// 0064401e  8b4204               mov eax, dword ptr [edx + 4]
// 00644021  6a01                 push 1
// 00644023  56                   push esi
// 00644024  ffd0                 call eax
// 00644026  896e28               mov dword ptr [esi + 0x28], ebp
// 00644029  83c408               add esp, 8
// 0064402c  c7462c02000000       mov dword ptr [esi + 0x2c], 2
// 00644033  bd01000000           mov ebp, 1
// 00644038  eb06                 jmp 0x644040
// 0064403a  896e28               mov dword ptr [esi + 0x28], ebp
// 0064403d  896e2c               mov dword ptr [esi + 0x2c], ebp
// 00644040  d9e8                 fld1 
// 00644042  5f                   pop edi
// 00644043  896e30               mov dword ptr [esi + 0x30], ebp
// 00644046  dd5e38               fstp qword ptr [esi + 0x38]
// 00644049  896e34               mov dword ptr [esi + 0x34], ebp
// 0064404c  5d                   pop ebp
// 0064404d  885e40               mov byte ptr [esi + 0x40], bl
// 00644050  885e41               mov byte ptr [esi + 0x41], bl
// 00644053  895e44               mov dword ptr [esi + 0x44], ebx
// 00644056  885e4a               mov byte ptr [esi + 0x4a], bl
// 00644059  895e74               mov dword ptr [esi + 0x74], ebx
// 0064405c  885e58               mov byte ptr [esi + 0x58], bl
// 0064405f  885e59               mov byte ptr [esi + 0x59], bl
// 00644062  885e5a               mov byte ptr [esi + 0x5a], bl
// 00644065  c6464801             mov byte ptr [esi + 0x48], 1
// 00644069  c6464901             mov byte ptr [esi + 0x49], 1
// 0064406d  c7464c02000000       mov dword ptr [esi + 0x4c], 2
// 00644074  c6465001             mov byte ptr [esi + 0x50], 1
// 00644078  c7465400010000       mov dword ptr [esi + 0x54], 0x100
// 0064407f  5b                   pop ebx
// 00644080  c3                   ret 
// library jpeg-6b/jdapimin.c (function _default_decompress_parms)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
