// from server: 100% by auto
// roc 2007-08 00525ca0  unit: G3D::Line  size: 740 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00525ca0
//
// 00525ca0  81ec28050000         sub esp, 0x528
// 00525ca6  a188518b00           mov eax, dword ptr [0x8b5188]
// 00525cab  33c4                 xor eax, esp
// 00525cad  89842424050000       mov dword ptr [esp + 0x524], eax
// 00525cb4  53                   push ebx
// 00525cb5  8b9c2430050000       mov ebx, dword ptr [esp + 0x530]
// 00525cbc  56                   push esi
// 00525cbd  8bb4243c050000       mov esi, dword ptr [esp + 0x53c]
// 00525cc4  85f6                 test esi, esi
// 00525cc6  57                   push edi
// 00525cc7  8bbc2444050000       mov edi, dword ptr [esp + 0x544]
// 00525cce  895c2420             mov dword ptr [esp + 0x20], ebx
// 00525cd2  7c05                 jl 0x525cd9
// 00525cd4  83fe04               cmp esi, 4
// 00525cd7  7c18                 jl 0x525cf1
// 00525cd9  8b03                 mov eax, dword ptr [ebx]
// 00525cdb  c7401432000000       mov dword ptr [eax + 0x14], 0x32
// 00525ce2  8b0b                 mov ecx, dword ptr [ebx]
// 00525ce4  897118               mov dword ptr [ecx + 0x18], esi
// 00525ce7  8b13                 mov edx, dword ptr [ebx]
// 00525ce9  8b02                 mov eax, dword ptr [edx]
// 00525ceb  53                   push ebx
// 00525cec  ffd0                 call eax
// 00525cee  83c404               add esp, 4
// 00525cf1  80bc243c05000000     cmp byte ptr [esp + 0x53c], 0
// 00525cf9  55                   push ebp
// 00525cfa  740d                 je 0x525d09
// 00525cfc  8bacb3a0000000       mov ebp, dword ptr [ebx + esi*4 + 0xa0]
// 00525d03  896c2410             mov dword ptr [esp + 0x10], ebp
// 00525d07  eb0d                 jmp 0x525d16
// 00525d09  8b8cb3b0000000       mov ecx, dword ptr [ebx + esi*4 + 0xb0]
// 00525d10  894c2410             mov dword ptr [esp + 0x10], ecx
// 00525d14  8be9                 mov ebp, ecx
// 00525d16  85ed                 test ebp, ebp
// 00525d18  7518                 jne 0x525d32
// 00525d1a  8b13                 mov edx, dword ptr [ebx]
// 00525d1c  c7421432000000       mov dword ptr [edx + 0x14], 0x32
// 00525d23  8b03                 mov eax, dword ptr [ebx]
// 00525d25  897018               mov dword ptr [eax + 0x18], esi
// 00525d28  8b0b                 mov ecx, dword ptr [ebx]
// 00525d2a  8b11                 mov edx, dword ptr [ecx]
// 00525d2c  53                   push ebx
// 00525d2d  ffd2                 call edx
// 00525d2f  83c404               add esp, 4
// 00525d32  833f00               cmp dword ptr [edi], 0
// 00525d35  7514                 jne 0x525d4b
// 00525d37  8b4304               mov eax, dword ptr [ebx + 4]
// 00525d3a  8b08                 mov ecx, dword ptr [eax]
// 00525d3c  6890050000           push 0x590
// 00525d41  6a01                 push 1
// 00525d43  53                   push ebx
// 00525d44  ffd1                 call ecx
// 00525d46  83c40c               add esp, 0xc
// 00525d49  8907                 mov dword ptr [edi], eax
// 00525d4b  8b17                 mov edx, dword ptr [edi]
// 00525d4d  89aa8c000000         mov dword ptr [edx + 0x8c], ebp
// 00525d53  89542414             mov dword ptr [esp + 0x14], edx
// 00525d57  33ff                 xor edi, edi
// 00525d59  bd01000000           mov ebp, 1
// 00525d5e  8bff                 mov edi, edi
// 00525d60  8b442410             mov eax, dword ptr [esp + 0x10]
// 00525d64  0fb63428             movzx esi, byte ptr [eax + ebp]
// 00525d68  85f6                 test esi, esi
// 00525d6a  7c0b                 jl 0x525d77
// 00525d6c  8d0c3e               lea ecx, [esi + edi]
// 00525d6f  81f900010000         cmp ecx, 0x100
// 00525d75  7e17                 jle 0x525d8e
// 00525d77  8b13                 mov edx, dword ptr [ebx]
// 00525d79  c7421408000000       mov dword ptr [edx + 0x14], 8
// 00525d80  8b03                 mov eax, dword ptr [ebx]
// 00525d82  8b08                 mov ecx, dword ptr [eax]
// 00525d84  53                   push ebx
// 00525d85  ffd1                 call ecx
// 00525d87  8b542418             mov edx, dword ptr [esp + 0x18]
// 00525d8b  83c404               add esp, 4
// 00525d8e  85f6                 test esi, esi
// 00525d90  7418                 je 0x525daa
// 00525d92  56                   push esi
// 00525d93  8d843c34040000       lea eax, [esp + edi + 0x434]
// 00525d9a  55                   push ebp
// 00525d9b  50                   push eax
// 00525d9c  e8ebad1000           call 0x630b8c
// 00525da1  8b542420             mov edx, dword ptr [esp + 0x20]
// 00525da5  83c40c               add esp, 0xc
// 00525da8  03fe                 add edi, esi
// 00525daa  83c501               add ebp, 1
// 00525dad  83fd10               cmp ebp, 0x10
// 00525db0  7eae                 jle 0x525d60
// 00525db2  c6843c3004000000     mov byte ptr [esp + edi + 0x430], 0
// 00525dba  8a842430040000       mov al, byte ptr [esp + 0x430]
// 00525dc1  897c2428             mov dword ptr [esp + 0x28], edi
// 00525dc5  33ff                 xor edi, edi
// 00525dc7  33f6                 xor esi, esi
// 00525dc9  84c0                 test al, al
// 00525dcb  0fbee8               movsx ebp, al
// 00525dce  745b                 je 0x525e2b
// 00525dd0  8d842430040000       lea eax, [esp + 0x430]
// 00525dd7  0fbe00               movsx eax, byte ptr [eax]
// 00525dda  3bc5                 cmp eax, ebp
// 00525ddc  7518                 jne 0x525df6
// 00525dde  8bff                 mov edi, edi
// 00525de0  0fbe8c3431040000     movsx ecx, byte ptr [esp + esi + 0x431]
// 00525de8  897cb42c             mov dword ptr [esp + esi*4 + 0x2c], edi
// 00525dec  83c601               add esi, 1
// 00525def  83c701               add edi, 1
// 00525df2  3bcd                 cmp ecx, ebp
// 00525df4  74ea                 je 0x525de0
// 00525df6  b801000000           mov eax, 1
// 00525dfb  8bcd                 mov ecx, ebp
// 00525dfd  d3e0                 shl eax, cl
// 00525dff  3bf8                 cmp edi, eax
// 00525e01  7c17                 jl 0x525e1a
// 00525e03  8b0b                 mov ecx, dword ptr [ebx]
// 00525e05  c7411408000000       mov dword ptr [ecx + 0x14], 8
// 00525e0c  8b13                 mov edx, dword ptr [ebx]
// 00525e0e  8b02                 mov eax, dword ptr [edx]
// 00525e10  53                   push ebx
// 00525e11  ffd0                 call eax
// 00525e13  8b542418             mov edx, dword ptr [esp + 0x18]
// 00525e17  83c404               add esp, 4
// 00525e1a  8d843430040000       lea eax, [esp + esi + 0x430]
// 00525e21  03ff                 add edi, edi
// 00525e23  83c501               add ebp, 1
// 00525e26  803800               cmp byte ptr [eax], 0
// 00525e29  75ac                 jne 0x525dd7
// 00525e2b  33c9                 xor ecx, ecx
// 00525e2d  b801000000           mov eax, 1
// 00525e32  8b742410             mov esi, dword ptr [esp + 0x10]
// 00525e36  803c3000             cmp byte ptr [eax + esi], 0
// 00525e3a  7419                 je 0x525e55
// 00525e3c  8bf9                 mov edi, ecx
// 00525e3e  2b7c8c2c             sub edi, dword ptr [esp + ecx*4 + 0x2c]
// 00525e42  897c8248             mov dword ptr [edx + eax*4 + 0x48], edi
// 00525e46  0fb63430             movzx esi, byte ptr [eax + esi]
// 00525e4a  03ce                 add ecx, esi
// 00525e4c  8b748c28             mov esi, dword ptr [esp + ecx*4 + 0x28]
// 00525e50  893482               mov dword ptr [edx + eax*4], esi
// 00525e53  eb07                 jmp 0x525e5c
// 00525e55  c70482ffffffff       mov dword ptr [edx + eax*4], 0xffffffff
// 00525e5c  83c001               add eax, 1
// 00525e5f  83f810               cmp eax, 0x10
// 00525e62  7ece                 jle 0x525e32
// 00525e64  6800040000           push 0x400
// 00525e69  c74244ffff0f00       mov dword ptr [edx + 0x44], 0xfffff
// 00525e70  81c290000000         add edx, 0x90
// 00525e76  6a00                 push 0
// 00525e78  52                   push edx
// 00525e79  e80ead1000           call 0x630b8c
// 00525e7e  b907000000           mov ecx, 7
// 00525e83  83c40c               add esp, 0xc
// 00525e86  33db                 xor ebx, ebx
// 00525e88  bf01000000           mov edi, 1
// 00525e8d  894c2418             mov dword ptr [esp + 0x18], ecx
// 00525e91  eb0d                 jmp 0x525ea0
// 00525e93  8da42400000000       lea esp, [esp]
// 00525e9a  8d9b00000000         lea ebx, [ebx]
// 00525ea0  8b742410             mov esi, dword ptr [esp + 0x10]
// 00525ea4  803c3701             cmp byte ptr [edi + esi], 1
// 00525ea8  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 00525eb0  7264                 jb 0x525f16
// 00525eb2  b801000000           mov eax, 1
// 00525eb7  d3e0                 shl eax, cl
// 00525eb9  8d6c3311             lea ebp, [ebx + esi + 0x11]
// 00525ebd  89442420             mov dword ptr [esp + 0x20], eax
// 00525ec1  8b549c2c             mov edx, dword ptr [esp + ebx*4 + 0x2c]
// 00525ec5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00525ec9  d3e2                 shl edx, cl
// 00525ecb  85c0                 test eax, eax
// 00525ecd  7e2e                 jle 0x525efd
// 00525ecf  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00525ed3  8db40a90040000       lea esi, [edx + ecx + 0x490]
// 00525eda  8d949190000000       lea edx, [ecx + edx*4 + 0x90]
// 00525ee1  893a                 mov dword ptr [edx], edi
// 00525ee3  8a4d00               mov cl, byte ptr [ebp]
// 00525ee6  880e                 mov byte ptr [esi], cl
// 00525ee8  83e801               sub eax, 1
// 00525eeb  83c204               add edx, 4
// 00525eee  83c601               add esi, 1
// 00525ef1  85c0                 test eax, eax
// 00525ef3  7fec                 jg 0x525ee1
// 00525ef5  8b742410             mov esi, dword ptr [esp + 0x10]
// 00525ef9  8b442420             mov eax, dword ptr [esp + 0x20]
// 00525efd  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00525f01  0fb60c37             movzx ecx, byte ptr [edi + esi]
// 00525f05  83c201               add edx, 1
// 00525f08  83c301               add ebx, 1
// 00525f0b  83c501               add ebp, 1
// 00525f0e  3bd1                 cmp edx, ecx
// 00525f10  8954241c             mov dword ptr [esp + 0x1c], edx
// 00525f14  7eab                 jle 0x525ec1
// 00525f16  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00525f1a  83c701               add edi, 1
// 00525f1d  83e901               sub ecx, 1
// 00525f20  894c2418             mov dword ptr [esp + 0x18], ecx
// 00525f24  0f8976ffffff         jns 0x525ea0
// 00525f2a  80bc244005000000     cmp byte ptr [esp + 0x540], 0
// 00525f32  5d                   pop ebp
// 00525f33  7437                 je 0x525f6c
// 00525f35  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00525f39  33ff                 xor edi, edi
// 00525f3b  85db                 test ebx, ebx
// 00525f3d  7e2d                 jle 0x525f6c
// 00525f3f  90                   nop 
// 00525f40  0fb6443e11           movzx eax, byte ptr [esi + edi + 0x11]
// 00525f45  85c0                 test eax, eax
// 00525f47  7c05                 jl 0x525f4e
// 00525f49  83f80f               cmp eax, 0xf
// 00525f4c  7e17                 jle 0x525f65
// 00525f4e  8b442420             mov eax, dword ptr [esp + 0x20]
// 00525f52  8b10                 mov edx, dword ptr [eax]
// 00525f54  c7421408000000       mov dword ptr [edx + 0x14], 8
// 00525f5b  8b08                 mov ecx, dword ptr [eax]
// 00525f5d  8b11                 mov edx, dword ptr [ecx]
// 00525f5f  50                   push eax
// 00525f60  ffd2                 call edx
// 00525f62  83c404               add esp, 4
// 00525f65  83c701               add edi, 1
// 00525f68  3bfb                 cmp edi, ebx
// 00525f6a  7cd4                 jl 0x525f40
// 00525f6c  8b8c2430050000       mov ecx, dword ptr [esp + 0x530]
// 00525f73  5f                   pop edi
// 00525f74  5e                   pop esi
// 00525f75  5b                   pop ebx
// 00525f76  33cc                 xor ecx, esp
// 00525f78  e8a1aa1000           call 0x630a1e
// 00525f7d  81c428050000         add esp, 0x528
// 00525f83  c3                   ret 
// library jpeg-6b/jdhuff.c (function _jpeg_make_d_derived_tbl)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS /MD
// roc-lib: jpeg-6b jdhuff.c
