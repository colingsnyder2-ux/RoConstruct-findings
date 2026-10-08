// roc 2007-03 00523c50  unit: seg_00520000  size: 1015 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00523c50
//
// 00523c50  83ec1c               sub esp, 0x1c
// 00523c53  8b442420             mov eax, dword ptr [esp + 0x20]
// 00523c57  8b91a8010000         mov edx, dword ptr [ecx + 0x1a8]
// 00523c5d  8b4a18               mov ecx, dword ptr [edx + 0x18]
// 00523c60  8b10                 mov edx, dword ptr [eax]
// 00523c62  53                   push ebx
// 00523c63  8b5810               mov ebx, dword ptr [eax + 0x10]
// 00523c66  55                   push ebp
// 00523c67  8b6814               mov ebp, dword ptr [eax + 0x14]
// 00523c6a  56                   push esi
// 00523c6b  8b7008               mov esi, dword ptr [eax + 8]
// 00523c6e  894c2420             mov dword ptr [esp + 0x20], ecx
// 00523c72  8b4804               mov ecx, dword ptr [eax + 4]
// 00523c75  3bd1                 cmp edx, ecx
// 00523c77  57                   push edi
// 00523c78  8b780c               mov edi, dword ptr [eax + 0xc]
// 00523c7b  89542418             mov dword ptr [esp + 0x18], edx
// 00523c7f  894c2414             mov dword ptr [esp + 0x14], ecx
// 00523c83  89742410             mov dword ptr [esp + 0x10], esi
// 00523c87  897c241c             mov dword ptr [esp + 0x1c], edi
// 00523c8b  895c2420             mov dword ptr [esp + 0x20], ebx
// 00523c8f  896c2428             mov dword ptr [esp + 0x28], ebp
// 00523c93  0f8df5000000         jge 0x523d8e
// 00523c99  8bfa                 mov edi, edx
// 00523c9b  eb03                 jmp 0x523ca0
// 00523c9d  8d4900               lea ecx, [ecx]
// 00523ca0  8b742410             mov esi, dword ptr [esp + 0x10]
// 00523ca4  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 00523ca8  7f48                 jg 0x523cf2
// 00523caa  8b442424             mov eax, dword ptr [esp + 0x24]
// 00523cae  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 00523cb1  8bd6                 mov edx, esi
// 00523cb3  c1e205               shl edx, 5
// 00523cb6  03d3                 add edx, ebx
// 00523cb8  8d1451               lea edx, [ecx + edx*2]
// 00523cbb  eb03                 jmp 0x523cc0
// 00523cbd  8d4900               lea ecx, [ecx]
// 00523cc0  396c2420             cmp dword ptr [esp + 0x20], ebp
// 00523cc4  8bca                 mov ecx, edx
// 00523cc6  8bc3                 mov eax, ebx
// 00523cc8  7f18                 jg 0x523ce2
// 00523cca  8d9b00000000         lea ebx, [ebx]
// 00523cd0  668b19               mov bx, word ptr [ecx]
// 00523cd3  83c102               add ecx, 2
// 00523cd6  6685db               test bx, bx
// 00523cd9  7522                 jne 0x523cfd
// 00523cdb  83c001               add eax, 1
// 00523cde  3bc5                 cmp eax, ebp
// 00523ce0  7eee                 jle 0x523cd0
// 00523ce2  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00523ce6  83c601               add esi, 1
// 00523ce9  83c240               add edx, 0x40
// 00523cec  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 00523cf0  7ece                 jle 0x523cc0
// 00523cf2  83c701               add edi, 1
// 00523cf5  3b7c2414             cmp edi, dword ptr [esp + 0x14]
// 00523cf9  7ea5                 jle 0x523ca0
// 00523cfb  eb0e                 jmp 0x523d0b
// 00523cfd  8b542430             mov edx, dword ptr [esp + 0x30]
// 00523d01  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00523d05  897c2418             mov dword ptr [esp + 0x18], edi
// 00523d09  893a                 mov dword ptr [edx], edi
// 00523d0b  8b542418             mov edx, dword ptr [esp + 0x18]
// 00523d0f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00523d13  3bc2                 cmp eax, edx
// 00523d15  8b742410             mov esi, dword ptr [esp + 0x10]
// 00523d19  7e73                 jle 0x523d8e
// 00523d1b  89442420             mov dword ptr [esp + 0x20], eax
// 00523d1f  90                   nop 
// 00523d20  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 00523d24  7f3c                 jg 0x523d62
// 00523d26  8b542424             mov edx, dword ptr [esp + 0x24]
// 00523d2a  8b0482               mov eax, dword ptr [edx + eax*4]
// 00523d2d  8bce                 mov ecx, esi
// 00523d2f  c1e105               shl ecx, 5
// 00523d32  03cb                 add ecx, ebx
// 00523d34  8d1448               lea edx, [eax + ecx*2]
// 00523d37  3bdd                 cmp ebx, ebp
// 00523d39  8bca                 mov ecx, edx
// 00523d3b  8bc3                 mov eax, ebx
// 00523d3d  7f13                 jg 0x523d52
// 00523d3f  90                   nop 
// 00523d40  668b39               mov di, word ptr [ecx]
// 00523d43  83c102               add ecx, 2
// 00523d46  6685ff               test di, di
// 00523d49  752c                 jne 0x523d77
// 00523d4b  83c001               add eax, 1
// 00523d4e  3bc5                 cmp eax, ebp
// 00523d50  7eee                 jle 0x523d40
// 00523d52  83c601               add esi, 1
// 00523d55  83c240               add edx, 0x40
// 00523d58  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 00523d5c  7ed9                 jle 0x523d37
// 00523d5e  8b442420             mov eax, dword ptr [esp + 0x20]
// 00523d62  8b542418             mov edx, dword ptr [esp + 0x18]
// 00523d66  8b742410             mov esi, dword ptr [esp + 0x10]
// 00523d6a  83e801               sub eax, 1
// 00523d6d  3bc2                 cmp eax, edx
// 00523d6f  89442420             mov dword ptr [esp + 0x20], eax
// 00523d73  7dab                 jge 0x523d20
// 00523d75  eb17                 jmp 0x523d8e
// 00523d77  8b442420             mov eax, dword ptr [esp + 0x20]
// 00523d7b  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00523d7f  8b542418             mov edx, dword ptr [esp + 0x18]
// 00523d83  8b742410             mov esi, dword ptr [esp + 0x10]
// 00523d87  89442414             mov dword ptr [esp + 0x14], eax
// 00523d8b  894104               mov dword ptr [ecx + 4], eax
// 00523d8e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00523d92  3bf0                 cmp esi, eax
// 00523d94  0f8de6000000         jge 0x523e80
// 00523d9a  89742420             mov dword ptr [esp + 0x20], esi
// 00523d9e  c1e605               shl esi, 5
// 00523da1  03f3                 add esi, ebx
// 00523da3  03f6                 add esi, esi
// 00523da5  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00523da9  7f30                 jg 0x523ddb
// 00523dab  eb03                 jmp 0x523db0
// 00523dad  8d4900               lea ecx, [ecx]
// 00523db0  8b442424             mov eax, dword ptr [esp + 0x24]
// 00523db4  8b0490               mov eax, dword ptr [eax + edx*4]
// 00523db7  03c6                 add eax, esi
// 00523db9  3bdd                 cmp ebx, ebp
// 00523dbb  8bcb                 mov ecx, ebx
// 00523dbd  7f13                 jg 0x523dd2
// 00523dbf  90                   nop 
// 00523dc0  668b38               mov di, word ptr [eax]
// 00523dc3  83c002               add eax, 2
// 00523dc6  6685ff               test di, di
// 00523dc9  752a                 jne 0x523df5
// 00523dcb  83c101               add ecx, 1
// 00523dce  3bcd                 cmp ecx, ebp
// 00523dd0  7eee                 jle 0x523dc0
// 00523dd2  83c201               add edx, 1
// 00523dd5  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00523dd9  7ed5                 jle 0x523db0
// 00523ddb  8b442420             mov eax, dword ptr [esp + 0x20]
// 00523ddf  8b542418             mov edx, dword ptr [esp + 0x18]
// 00523de3  83c001               add eax, 1
// 00523de6  83c640               add esi, 0x40
// 00523de9  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 00523ded  89442420             mov dword ptr [esp + 0x20], eax
// 00523df1  7eb2                 jle 0x523da5
// 00523df3  eb13                 jmp 0x523e08
// 00523df5  8b442420             mov eax, dword ptr [esp + 0x20]
// 00523df9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00523dfd  8b542418             mov edx, dword ptr [esp + 0x18]
// 00523e01  89442410             mov dword ptr [esp + 0x10], eax
// 00523e05  894108               mov dword ptr [ecx + 8], eax
// 00523e08  8b742410             mov esi, dword ptr [esp + 0x10]
// 00523e0c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00523e10  3bc6                 cmp eax, esi
// 00523e12  7e6c                 jle 0x523e80
// 00523e14  8bf0                 mov esi, eax
// 00523e16  c1e605               shl esi, 5
// 00523e19  03f3                 add esi, ebx
// 00523e1b  89442420             mov dword ptr [esp + 0x20], eax
// 00523e1f  03f6                 add esi, esi
// 00523e21  eb04                 jmp 0x523e27
// 00523e23  8b542418             mov edx, dword ptr [esp + 0x18]
// 00523e27  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00523e2b  7f2e                 jg 0x523e5b
// 00523e2d  8d4900               lea ecx, [ecx]
// 00523e30  8b442424             mov eax, dword ptr [esp + 0x24]
// 00523e34  8b0490               mov eax, dword ptr [eax + edx*4]
// 00523e37  03c6                 add eax, esi
// 00523e39  3bdd                 cmp ebx, ebp
// 00523e3b  8bcb                 mov ecx, ebx
// 00523e3d  7f13                 jg 0x523e52
// 00523e3f  90                   nop 
// 00523e40  668b38               mov di, word ptr [eax]
// 00523e43  83c002               add eax, 2
// 00523e46  6685ff               test di, di
// 00523e49  7526                 jne 0x523e71
// 00523e4b  83c101               add ecx, 1
// 00523e4e  3bcd                 cmp ecx, ebp
// 00523e50  7eee                 jle 0x523e40
// 00523e52  83c201               add edx, 1
// 00523e55  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00523e59  7ed5                 jle 0x523e30
// 00523e5b  8b442420             mov eax, dword ptr [esp + 0x20]
// 00523e5f  83e801               sub eax, 1
// 00523e62  83ee40               sub esi, 0x40
// 00523e65  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00523e69  89442420             mov dword ptr [esp + 0x20], eax
// 00523e6d  7db4                 jge 0x523e23
// 00523e6f  eb0f                 jmp 0x523e80
// 00523e71  8b442420             mov eax, dword ptr [esp + 0x20]
// 00523e75  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00523e79  8944241c             mov dword ptr [esp + 0x1c], eax
// 00523e7d  89410c               mov dword ptr [ecx + 0xc], eax
// 00523e80  3bdd                 cmp ebx, ebp
// 00523e82  0f8df5000000         jge 0x523f7d
// 00523e88  8bc3                 mov eax, ebx
// 00523e8a  895c2420             mov dword ptr [esp + 0x20], ebx
// 00523e8e  8bff                 mov edi, edi
// 00523e90  8b542418             mov edx, dword ptr [esp + 0x18]
// 00523e94  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00523e98  7f47                 jg 0x523ee1
// 00523e9a  8b742410             mov esi, dword ptr [esp + 0x10]
// 00523e9e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00523ea2  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00523ea6  c1e605               shl esi, 5
// 00523ea9  03f0                 add esi, eax
// 00523eab  03f6                 add esi, esi
// 00523ead  8d4900               lea ecx, [ecx]
// 00523eb0  8b442424             mov eax, dword ptr [esp + 0x24]
// 00523eb4  8b0490               mov eax, dword ptr [eax + edx*4]
// 00523eb7  03c6                 add eax, esi
// 00523eb9  3bef                 cmp ebp, edi
// 00523ebb  8bcd                 mov ecx, ebp
// 00523ebd  7f11                 jg 0x523ed0
// 00523ebf  90                   nop 
// 00523ec0  66833800             cmp word ptr [eax], 0
// 00523ec4  7528                 jne 0x523eee
// 00523ec6  83c101               add ecx, 1
// 00523ec9  83c040               add eax, 0x40
// 00523ecc  3bcf                 cmp ecx, edi
// 00523ece  7ef0                 jle 0x523ec0
// 00523ed0  83c201               add edx, 1
// 00523ed3  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00523ed7  7ed7                 jle 0x523eb0
// 00523ed9  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00523edd  8b442420             mov eax, dword ptr [esp + 0x20]
// 00523ee1  83c001               add eax, 1
// 00523ee4  3bc5                 cmp eax, ebp
// 00523ee6  89442420             mov dword ptr [esp + 0x20], eax
// 00523eea  7ea4                 jle 0x523e90
// 00523eec  eb0f                 jmp 0x523efd
// 00523eee  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00523ef2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00523ef6  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00523efa  895910               mov dword ptr [ecx + 0x10], ebx
// 00523efd  3beb                 cmp ebp, ebx
// 00523eff  0f8e78000000         jle 0x523f7d
// 00523f05  8bc5                 mov eax, ebp
// 00523f07  896c2420             mov dword ptr [esp + 0x20], ebp
// 00523f0b  eb03                 jmp 0x523f10
// 00523f0d  8d4900               lea ecx, [ecx]
// 00523f10  8b542418             mov edx, dword ptr [esp + 0x18]
// 00523f14  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00523f18  7f47                 jg 0x523f61
// 00523f1a  8b742410             mov esi, dword ptr [esp + 0x10]
// 00523f1e  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00523f22  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00523f26  c1e605               shl esi, 5
// 00523f29  03f0                 add esi, eax
// 00523f2b  03f6                 add esi, esi
// 00523f2d  8d4900               lea ecx, [ecx]
// 00523f30  8b442424             mov eax, dword ptr [esp + 0x24]
// 00523f34  8b0490               mov eax, dword ptr [eax + edx*4]
// 00523f37  03c6                 add eax, esi
// 00523f39  3bef                 cmp ebp, edi
// 00523f3b  8bcd                 mov ecx, ebp
// 00523f3d  7f11                 jg 0x523f50
// 00523f3f  90                   nop 
// 00523f40  66833800             cmp word ptr [eax], 0
// 00523f44  7528                 jne 0x523f6e
// 00523f46  83c101               add ecx, 1
// 00523f49  83c040               add eax, 0x40
// 00523f4c  3bcf                 cmp ecx, edi
// 00523f4e  7ef0                 jle 0x523f40
// 00523f50  83c201               add edx, 1
// 00523f53  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00523f57  7ed7                 jle 0x523f30
// 00523f59  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00523f5d  8b442420             mov eax, dword ptr [esp + 0x20]
// 00523f61  83e801               sub eax, 1
// 00523f64  3bc3                 cmp eax, ebx
// 00523f66  89442420             mov dword ptr [esp + 0x20], eax
// 00523f6a  7da4                 jge 0x523f10
// 00523f6c  eb0f                 jmp 0x523f7d
// 00523f6e  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00523f72  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00523f76  896c2428             mov dword ptr [esp + 0x28], ebp
// 00523f7a  896914               mov dword ptr [ecx + 0x14], ebp
// 00523f7d  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00523f81  2b742410             sub esi, dword ptr [esp + 0x10]
// 00523f85  8b442414             mov eax, dword ptr [esp + 0x14]
// 00523f89  2b442418             sub eax, dword ptr [esp + 0x18]
// 00523f8d  8bfd                 mov edi, ebp
// 00523f8f  2bfb                 sub edi, ebx
// 00523f91  8d14fd00000000       lea edx, [edi*8]
// 00523f98  8d0c76               lea ecx, [esi + esi*2]
// 00523f9b  03c9                 add ecx, ecx
// 00523f9d  03c9                 add ecx, ecx
// 00523f9f  8bea                 mov ebp, edx
// 00523fa1  0fafea               imul ebp, edx
// 00523fa4  c1e004               shl eax, 4
// 00523fa7  8bd1                 mov edx, ecx
// 00523fa9  0fafd1               imul edx, ecx
// 00523fac  8bc8                 mov ecx, eax
// 00523fae  0fafc8               imul ecx, eax
// 00523fb1  8b442418             mov eax, dword ptr [esp + 0x18]
// 00523fb5  03ea                 add ebp, edx
// 00523fb7  8b542430             mov edx, dword ptr [esp + 0x30]
// 00523fbb  03e9                 add ebp, ecx
// 00523fbd  896a18               mov dword ptr [edx + 0x18], ebp
// 00523fc0  33ed                 xor ebp, ebp
// 00523fc2  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00523fc6  89442420             mov dword ptr [esp + 0x20], eax
// 00523fca  0f8f6c000000         jg 0x52403c
// 00523fd0  8b442410             mov eax, dword ptr [esp + 0x10]
// 00523fd4  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 00523fd8  7f42                 jg 0x52401c
// 00523fda  8b542424             mov edx, dword ptr [esp + 0x24]
// 00523fde  8bc8                 mov ecx, eax
// 00523fe0  8b442420             mov eax, dword ptr [esp + 0x20]
// 00523fe4  8b1482               mov edx, dword ptr [edx + eax*4]
// 00523fe7  c1e105               shl ecx, 5
// 00523fea  03cb                 add ecx, ebx
// 00523fec  8d4601               lea eax, [esi + 1]
// 00523fef  8d144a               lea edx, [edx + ecx*2]
// 00523ff2  89442418             mov dword ptr [esp + 0x18], eax
// 00523ff6  3b5c2428             cmp ebx, dword ptr [esp + 0x28]
// 00523ffa  8bc2                 mov eax, edx
// 00523ffc  7f14                 jg 0x524012
// 00523ffe  8d4f01               lea ecx, [edi + 1]
// 00524001  66833800             cmp word ptr [eax], 0
// 00524005  7403                 je 0x52400a
// 00524007  83c501               add ebp, 1
// 0052400a  83c002               add eax, 2
// 0052400d  83e901               sub ecx, 1
// 00524010  75ef                 jne 0x524001
// 00524012  83c240               add edx, 0x40
// 00524015  836c241801           sub dword ptr [esp + 0x18], 1
// 0052401a  75da                 jne 0x523ff6
// 0052401c  8b442420             mov eax, dword ptr [esp + 0x20]
// 00524020  83c001               add eax, 1
// 00524023  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00524027  89442420             mov dword ptr [esp + 0x20], eax
// 0052402b  7ea3                 jle 0x523fd0
// 0052402d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00524031  5f                   pop edi
// 00524032  5e                   pop esi
// 00524033  89691c               mov dword ptr [ecx + 0x1c], ebp
// 00524036  5d                   pop ebp
// 00524037  5b                   pop ebx
// 00524038  83c41c               add esp, 0x1c
// 0052403b  c3                   ret 
// 0052403c  5f                   pop edi
// 0052403d  5e                   pop esi
// 0052403e  896a1c               mov dword ptr [edx + 0x1c], ebp
// 00524041  5d                   pop ebp
// 00524042  5b                   pop ebx
// 00524043  83c41c               add esp, 0x1c
// 00524046  c3                   ret 
// library jpeg-6b/jquant2.c (function _update_box)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
