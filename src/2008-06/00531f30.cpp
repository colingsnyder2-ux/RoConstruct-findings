// from server: 100% by auto
// roc 2008-06 00531f30  unit: seg_00530000  size: 697 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00531f30
//
// 00531f30  81ec20050000         sub esp, 0x520
// 00531f36  53                   push ebx
// 00531f37  55                   push ebp
// 00531f38  56                   push esi
// 00531f39  8bb42438050000       mov esi, dword ptr [esp + 0x538]
// 00531f40  57                   push edi
// 00531f41  bd32000000           mov ebp, 0x32
// 00531f46  85f6                 test esi, esi
// 00531f48  7c05                 jl 0x531f4f
// 00531f4a  83fe04               cmp esi, 4
// 00531f4d  7c1d                 jl 0x531f6c
// 00531f4f  8b9c2434050000       mov ebx, dword ptr [esp + 0x534]
// 00531f56  8b03                 mov eax, dword ptr [ebx]
// 00531f58  896814               mov dword ptr [eax + 0x14], ebp
// 00531f5b  8b0b                 mov ecx, dword ptr [ebx]
// 00531f5d  897118               mov dword ptr [ecx + 0x18], esi
// 00531f60  8b13                 mov edx, dword ptr [ebx]
// 00531f62  8b02                 mov eax, dword ptr [edx]
// 00531f64  53                   push ebx
// 00531f65  ffd0                 call eax
// 00531f67  83c404               add esp, 4
// 00531f6a  eb07                 jmp 0x531f73
// 00531f6c  8b9c2434050000       mov ebx, dword ptr [esp + 0x534]
// 00531f73  80bc243805000000     cmp byte ptr [esp + 0x538], 0
// 00531f7b  740d                 je 0x531f8a
// 00531f7d  8bbcb3a0000000       mov edi, dword ptr [ebx + esi*4 + 0xa0]
// 00531f84  897c2410             mov dword ptr [esp + 0x10], edi
// 00531f88  eb0d                 jmp 0x531f97
// 00531f8a  8b8cb3b0000000       mov ecx, dword ptr [ebx + esi*4 + 0xb0]
// 00531f91  894c2410             mov dword ptr [esp + 0x10], ecx
// 00531f95  8bf9                 mov edi, ecx
// 00531f97  85ff                 test edi, edi
// 00531f99  7514                 jne 0x531faf
// 00531f9b  8b13                 mov edx, dword ptr [ebx]
// 00531f9d  896a14               mov dword ptr [edx + 0x14], ebp
// 00531fa0  8b03                 mov eax, dword ptr [ebx]
// 00531fa2  897018               mov dword ptr [eax + 0x18], esi
// 00531fa5  8b0b                 mov ecx, dword ptr [ebx]
// 00531fa7  8b11                 mov edx, dword ptr [ecx]
// 00531fa9  53                   push ebx
// 00531faa  ffd2                 call edx
// 00531fac  83c404               add esp, 4
// 00531faf  8bb42440050000       mov esi, dword ptr [esp + 0x540]
// 00531fb6  833e00               cmp dword ptr [esi], 0
// 00531fb9  7514                 jne 0x531fcf
// 00531fbb  8b4304               mov eax, dword ptr [ebx + 4]
// 00531fbe  8b08                 mov ecx, dword ptr [eax]
// 00531fc0  6890050000           push 0x590
// 00531fc5  6a01                 push 1
// 00531fc7  53                   push ebx
// 00531fc8  ffd1                 call ecx
// 00531fca  83c40c               add esp, 0xc
// 00531fcd  8906                 mov dword ptr [esi], eax
// 00531fcf  8b16                 mov edx, dword ptr [esi]
// 00531fd1  89ba8c000000         mov dword ptr [edx + 0x8c], edi
// 00531fd7  89542414             mov dword ptr [esp + 0x14], edx
// 00531fdb  33ff                 xor edi, edi
// 00531fdd  bd01000000           mov ebp, 1
// 00531fe2  8b442410             mov eax, dword ptr [esp + 0x10]
// 00531fe6  0fb63428             movzx esi, byte ptr [eax + ebp]
// 00531fea  85f6                 test esi, esi
// 00531fec  7c0b                 jl 0x531ff9
// 00531fee  8d0c3e               lea ecx, [esi + edi]
// 00531ff1  81f900010000         cmp ecx, 0x100
// 00531ff7  7e17                 jle 0x532010
// 00531ff9  8b13                 mov edx, dword ptr [ebx]
// 00531ffb  c7421408000000       mov dword ptr [edx + 0x14], 8
// 00532002  8b03                 mov eax, dword ptr [ebx]
// 00532004  8b08                 mov ecx, dword ptr [eax]
// 00532006  53                   push ebx
// 00532007  ffd1                 call ecx
// 00532009  8b542418             mov edx, dword ptr [esp + 0x18]
// 0053200d  83c404               add esp, 4
// 00532010  85f6                 test esi, esi
// 00532012  7415                 je 0x532029
// 00532014  56                   push esi
// 00532015  8d443c2c             lea eax, [esp + edi + 0x2c]
// 00532019  55                   push ebp
// 0053201a  50                   push eax
// 0053201b  e8e4f61600           call 0x6a1704
// 00532020  8b542420             mov edx, dword ptr [esp + 0x20]
// 00532024  83c40c               add esp, 0xc
// 00532027  03fe                 add edi, esi
// 00532029  45                   inc ebp
// 0053202a  83fd10               cmp ebp, 0x10
// 0053202d  7eb3                 jle 0x531fe2
// 0053202f  c6443c2800           mov byte ptr [esp + edi + 0x28], 0
// 00532034  8a442428             mov al, byte ptr [esp + 0x28]
// 00532038  897c2420             mov dword ptr [esp + 0x20], edi
// 0053203c  33ff                 xor edi, edi
// 0053203e  33f6                 xor esi, esi
// 00532040  0fbee8               movsx ebp, al
// 00532043  84c0                 test al, al
// 00532045  745b                 je 0x5320a2
// 00532047  8d442428             lea eax, [esp + 0x28]
// 0053204b  eb03                 jmp 0x532050
// 0053204d  8d4900               lea ecx, [ecx]
// 00532050  0fbe00               movsx eax, byte ptr [eax]
// 00532053  3bc5                 cmp eax, ebp
// 00532055  751b                 jne 0x532072
// 00532057  eb07                 jmp 0x532060
// 00532059  8da42400000000       lea esp, [esp]
// 00532060  0fbe4c3429           movsx ecx, byte ptr [esp + esi + 0x29]
// 00532065  89bcb42c010000       mov dword ptr [esp + esi*4 + 0x12c], edi
// 0053206c  46                   inc esi
// 0053206d  47                   inc edi
// 0053206e  3bcd                 cmp ecx, ebp
// 00532070  74ee                 je 0x532060
// 00532072  b801000000           mov eax, 1
// 00532077  8bcd                 mov ecx, ebp
// 00532079  d3e0                 shl eax, cl
// 0053207b  3bf8                 cmp edi, eax
// 0053207d  7c17                 jl 0x532096
// 0053207f  8b0b                 mov ecx, dword ptr [ebx]
// 00532081  c7411408000000       mov dword ptr [ecx + 0x14], 8
// 00532088  8b13                 mov edx, dword ptr [ebx]
// 0053208a  8b02                 mov eax, dword ptr [edx]
// 0053208c  53                   push ebx
// 0053208d  ffd0                 call eax
// 0053208f  8b542418             mov edx, dword ptr [esp + 0x18]
// 00532093  83c404               add esp, 4
// 00532096  8d443428             lea eax, [esp + esi + 0x28]
// 0053209a  03ff                 add edi, edi
// 0053209c  45                   inc ebp
// 0053209d  803800               cmp byte ptr [eax], 0
// 005320a0  75ae                 jne 0x532050
// 005320a2  33c9                 xor ecx, ecx
// 005320a4  b801000000           mov eax, 1
// 005320a9  8da42400000000       lea esp, [esp]
// 005320b0  8b742410             mov esi, dword ptr [esp + 0x10]
// 005320b4  803c3000             cmp byte ptr [eax + esi], 0
// 005320b8  741f                 je 0x5320d9
// 005320ba  8bf9                 mov edi, ecx
// 005320bc  2bbc8c2c010000       sub edi, dword ptr [esp + ecx*4 + 0x12c]
// 005320c3  897c8248             mov dword ptr [edx + eax*4 + 0x48], edi
// 005320c7  0fb63430             movzx esi, byte ptr [eax + esi]
// 005320cb  03ce                 add ecx, esi
// 005320cd  8bb48c28010000       mov esi, dword ptr [esp + ecx*4 + 0x128]
// 005320d4  893482               mov dword ptr [edx + eax*4], esi
// 005320d7  eb07                 jmp 0x5320e0
// 005320d9  c70482ffffffff       mov dword ptr [edx + eax*4], 0xffffffff
// 005320e0  40                   inc eax
// 005320e1  83f810               cmp eax, 0x10
// 005320e4  7eca                 jle 0x5320b0
// 005320e6  6800040000           push 0x400
// 005320eb  c74244ffff0f00       mov dword ptr [edx + 0x44], 0xfffff
// 005320f2  81c290000000         add edx, 0x90
// 005320f8  6a00                 push 0
// 005320fa  52                   push edx
// 005320fb  e804f61600           call 0x6a1704
// 00532100  83c40c               add esp, 0xc
// 00532103  33db                 xor ebx, ebx
// 00532105  b907000000           mov ecx, 7
// 0053210a  8d7b01               lea edi, [ebx + 1]
// 0053210d  894c2418             mov dword ptr [esp + 0x18], ecx
// 00532111  eb0d                 jmp 0x532120
// 00532113  8da42400000000       lea esp, [esp]
// 0053211a  8d9b00000000         lea ebx, [ebx]
// 00532120  8b742410             mov esi, dword ptr [esp + 0x10]
// 00532124  803c3701             cmp byte ptr [edi + esi], 1
// 00532128  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 00532130  725d                 jb 0x53218f
// 00532132  b801000000           mov eax, 1
// 00532137  d3e0                 shl eax, cl
// 00532139  8d6c3311             lea ebp, [ebx + esi + 0x11]
// 0053213d  89442424             mov dword ptr [esp + 0x24], eax
// 00532141  8b949c2c010000       mov edx, dword ptr [esp + ebx*4 + 0x12c]
// 00532148  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0053214c  d3e2                 shl edx, cl
// 0053214e  85c0                 test eax, eax
// 00532150  7e2a                 jle 0x53217c
// 00532152  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00532156  8db40a90040000       lea esi, [edx + ecx + 0x490]
// 0053215d  8d949190000000       lea edx, [ecx + edx*4 + 0x90]
// 00532164  893a                 mov dword ptr [edx], edi
// 00532166  8a4d00               mov cl, byte ptr [ebp]
// 00532169  880e                 mov byte ptr [esi], cl
// 0053216b  48                   dec eax
// 0053216c  83c204               add edx, 4
// 0053216f  46                   inc esi
// 00532170  85c0                 test eax, eax
// 00532172  7ff0                 jg 0x532164
// 00532174  8b742410             mov esi, dword ptr [esp + 0x10]
// 00532178  8b442424             mov eax, dword ptr [esp + 0x24]
// 0053217c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00532180  0fb60c37             movzx ecx, byte ptr [edi + esi]
// 00532184  42                   inc edx
// 00532185  43                   inc ebx
// 00532186  45                   inc ebp
// 00532187  3bd1                 cmp edx, ecx
// 00532189  8954241c             mov dword ptr [esp + 0x1c], edx
// 0053218d  7eb2                 jle 0x532141
// 0053218f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00532193  47                   inc edi
// 00532194  83e901               sub ecx, 1
// 00532197  894c2418             mov dword ptr [esp + 0x18], ecx
// 0053219b  7983                 jns 0x532120
// 0053219d  80bc243805000000     cmp byte ptr [esp + 0x538], 0
// 005321a5  7437                 je 0x5321de
// 005321a7  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 005321ab  33ff                 xor edi, edi
// 005321ad  85db                 test ebx, ebx
// 005321af  7e2d                 jle 0x5321de
// 005321b1  0fb6443e11           movzx eax, byte ptr [esi + edi + 0x11]
// 005321b6  85c0                 test eax, eax
// 005321b8  7c05                 jl 0x5321bf
// 005321ba  83f80f               cmp eax, 0xf
// 005321bd  7e1a                 jle 0x5321d9
// 005321bf  8b842434050000       mov eax, dword ptr [esp + 0x534]
// 005321c6  8b10                 mov edx, dword ptr [eax]
// 005321c8  c7421408000000       mov dword ptr [edx + 0x14], 8
// 005321cf  8b08                 mov ecx, dword ptr [eax]
// 005321d1  8b11                 mov edx, dword ptr [ecx]
// 005321d3  50                   push eax
// 005321d4  ffd2                 call edx
// 005321d6  83c404               add esp, 4
// 005321d9  47                   inc edi
// 005321da  3bfb                 cmp edi, ebx
// 005321dc  7cd3                 jl 0x5321b1
// 005321de  5f                   pop edi
// 005321df  5e                   pop esi
// 005321e0  5d                   pop ebp
// 005321e1  5b                   pop ebx
// 005321e2  81c420050000         add esp, 0x520
// 005321e8  c3                   ret 
// library jpeg-6b/jdhuff.c (function _jpeg_make_d_derived_tbl)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
