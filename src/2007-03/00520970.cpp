// roc 2007-03 00520970  unit: seg_00520000  size: 740 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00520970
//
// 00520970  81ec28050000         sub esp, 0x528
// 00520976  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0052097b  33c4                 xor eax, esp
// 0052097d  89842424050000       mov dword ptr [esp + 0x524], eax
// 00520984  53                   push ebx
// 00520985  8b9c2430050000       mov ebx, dword ptr [esp + 0x530]
// 0052098c  56                   push esi
// 0052098d  8bb4243c050000       mov esi, dword ptr [esp + 0x53c]
// 00520994  85f6                 test esi, esi
// 00520996  57                   push edi
// 00520997  8bbc2444050000       mov edi, dword ptr [esp + 0x544]
// 0052099e  895c2420             mov dword ptr [esp + 0x20], ebx
// 005209a2  7c05                 jl 0x5209a9
// 005209a4  83fe04               cmp esi, 4
// 005209a7  7c18                 jl 0x5209c1
// 005209a9  8b03                 mov eax, dword ptr [ebx]
// 005209ab  c7401432000000       mov dword ptr [eax + 0x14], 0x32
// 005209b2  8b0b                 mov ecx, dword ptr [ebx]
// 005209b4  897118               mov dword ptr [ecx + 0x18], esi
// 005209b7  8b13                 mov edx, dword ptr [ebx]
// 005209b9  8b02                 mov eax, dword ptr [edx]
// 005209bb  53                   push ebx
// 005209bc  ffd0                 call eax
// 005209be  83c404               add esp, 4
// 005209c1  80bc243c05000000     cmp byte ptr [esp + 0x53c], 0
// 005209c9  55                   push ebp
// 005209ca  740d                 je 0x5209d9
// 005209cc  8bacb3a0000000       mov ebp, dword ptr [ebx + esi*4 + 0xa0]
// 005209d3  896c2410             mov dword ptr [esp + 0x10], ebp
// 005209d7  eb0d                 jmp 0x5209e6
// 005209d9  8b8cb3b0000000       mov ecx, dword ptr [ebx + esi*4 + 0xb0]
// 005209e0  894c2410             mov dword ptr [esp + 0x10], ecx
// 005209e4  8be9                 mov ebp, ecx
// 005209e6  85ed                 test ebp, ebp
// 005209e8  7518                 jne 0x520a02
// 005209ea  8b13                 mov edx, dword ptr [ebx]
// 005209ec  c7421432000000       mov dword ptr [edx + 0x14], 0x32
// 005209f3  8b03                 mov eax, dword ptr [ebx]
// 005209f5  897018               mov dword ptr [eax + 0x18], esi
// 005209f8  8b0b                 mov ecx, dword ptr [ebx]
// 005209fa  8b11                 mov edx, dword ptr [ecx]
// 005209fc  53                   push ebx
// 005209fd  ffd2                 call edx
// 005209ff  83c404               add esp, 4
// 00520a02  833f00               cmp dword ptr [edi], 0
// 00520a05  7514                 jne 0x520a1b
// 00520a07  8b4304               mov eax, dword ptr [ebx + 4]
// 00520a0a  8b08                 mov ecx, dword ptr [eax]
// 00520a0c  6890050000           push 0x590
// 00520a11  6a01                 push 1
// 00520a13  53                   push ebx
// 00520a14  ffd1                 call ecx
// 00520a16  83c40c               add esp, 0xc
// 00520a19  8907                 mov dword ptr [edi], eax
// 00520a1b  8b17                 mov edx, dword ptr [edi]
// 00520a1d  89aa8c000000         mov dword ptr [edx + 0x8c], ebp
// 00520a23  89542414             mov dword ptr [esp + 0x14], edx
// 00520a27  33ff                 xor edi, edi
// 00520a29  bd01000000           mov ebp, 1
// 00520a2e  8bff                 mov edi, edi
// 00520a30  8b442410             mov eax, dword ptr [esp + 0x10]
// 00520a34  0fb63428             movzx esi, byte ptr [eax + ebp]
// 00520a38  85f6                 test esi, esi
// 00520a3a  7c0b                 jl 0x520a47
// 00520a3c  8d0c3e               lea ecx, [esi + edi]
// 00520a3f  81f900010000         cmp ecx, 0x100
// 00520a45  7e17                 jle 0x520a5e
// 00520a47  8b13                 mov edx, dword ptr [ebx]
// 00520a49  c7421408000000       mov dword ptr [edx + 0x14], 8
// 00520a50  8b03                 mov eax, dword ptr [ebx]
// 00520a52  8b08                 mov ecx, dword ptr [eax]
// 00520a54  53                   push ebx
// 00520a55  ffd1                 call ecx
// 00520a57  8b542418             mov edx, dword ptr [esp + 0x18]
// 00520a5b  83c404               add esp, 4
// 00520a5e  85f6                 test esi, esi
// 00520a60  7418                 je 0x520a7a
// 00520a62  56                   push esi
// 00520a63  8d843c34040000       lea eax, [esp + edi + 0x434]
// 00520a6a  55                   push ebp
// 00520a6b  50                   push eax
// 00520a6c  e8abe50f00           call 0x61f01c
// 00520a71  8b542420             mov edx, dword ptr [esp + 0x20]
// 00520a75  83c40c               add esp, 0xc
// 00520a78  03fe                 add edi, esi
// 00520a7a  83c501               add ebp, 1
// 00520a7d  83fd10               cmp ebp, 0x10
// 00520a80  7eae                 jle 0x520a30
// 00520a82  c6843c3004000000     mov byte ptr [esp + edi + 0x430], 0
// 00520a8a  8a842430040000       mov al, byte ptr [esp + 0x430]
// 00520a91  897c2428             mov dword ptr [esp + 0x28], edi
// 00520a95  33ff                 xor edi, edi
// 00520a97  33f6                 xor esi, esi
// 00520a99  84c0                 test al, al
// 00520a9b  0fbee8               movsx ebp, al
// 00520a9e  745b                 je 0x520afb
// 00520aa0  8d842430040000       lea eax, [esp + 0x430]
// 00520aa7  0fbe00               movsx eax, byte ptr [eax]
// 00520aaa  3bc5                 cmp eax, ebp
// 00520aac  7518                 jne 0x520ac6
// 00520aae  8bff                 mov edi, edi
// 00520ab0  0fbe8c3431040000     movsx ecx, byte ptr [esp + esi + 0x431]
// 00520ab8  897cb42c             mov dword ptr [esp + esi*4 + 0x2c], edi
// 00520abc  83c601               add esi, 1
// 00520abf  83c701               add edi, 1
// 00520ac2  3bcd                 cmp ecx, ebp
// 00520ac4  74ea                 je 0x520ab0
// 00520ac6  b801000000           mov eax, 1
// 00520acb  8bcd                 mov ecx, ebp
// 00520acd  d3e0                 shl eax, cl
// 00520acf  3bf8                 cmp edi, eax
// 00520ad1  7c17                 jl 0x520aea
// 00520ad3  8b0b                 mov ecx, dword ptr [ebx]
// 00520ad5  c7411408000000       mov dword ptr [ecx + 0x14], 8
// 00520adc  8b13                 mov edx, dword ptr [ebx]
// 00520ade  8b02                 mov eax, dword ptr [edx]
// 00520ae0  53                   push ebx
// 00520ae1  ffd0                 call eax
// 00520ae3  8b542418             mov edx, dword ptr [esp + 0x18]
// 00520ae7  83c404               add esp, 4
// 00520aea  8d843430040000       lea eax, [esp + esi + 0x430]
// 00520af1  03ff                 add edi, edi
// 00520af3  83c501               add ebp, 1
// 00520af6  803800               cmp byte ptr [eax], 0
// 00520af9  75ac                 jne 0x520aa7
// 00520afb  33c9                 xor ecx, ecx
// 00520afd  b801000000           mov eax, 1
// 00520b02  8b742410             mov esi, dword ptr [esp + 0x10]
// 00520b06  803c3000             cmp byte ptr [eax + esi], 0
// 00520b0a  7419                 je 0x520b25
// 00520b0c  8bf9                 mov edi, ecx
// 00520b0e  2b7c8c2c             sub edi, dword ptr [esp + ecx*4 + 0x2c]
// 00520b12  897c8248             mov dword ptr [edx + eax*4 + 0x48], edi
// 00520b16  0fb63430             movzx esi, byte ptr [eax + esi]
// 00520b1a  03ce                 add ecx, esi
// 00520b1c  8b748c28             mov esi, dword ptr [esp + ecx*4 + 0x28]
// 00520b20  893482               mov dword ptr [edx + eax*4], esi
// 00520b23  eb07                 jmp 0x520b2c
// 00520b25  c70482ffffffff       mov dword ptr [edx + eax*4], 0xffffffff
// 00520b2c  83c001               add eax, 1
// 00520b2f  83f810               cmp eax, 0x10
// 00520b32  7ece                 jle 0x520b02
// 00520b34  6800040000           push 0x400
// 00520b39  c74244ffff0f00       mov dword ptr [edx + 0x44], 0xfffff
// 00520b40  81c290000000         add edx, 0x90
// 00520b46  6a00                 push 0
// 00520b48  52                   push edx
// 00520b49  e8cee40f00           call 0x61f01c
// 00520b4e  b907000000           mov ecx, 7
// 00520b53  83c40c               add esp, 0xc
// 00520b56  33db                 xor ebx, ebx
// 00520b58  bf01000000           mov edi, 1
// 00520b5d  894c2418             mov dword ptr [esp + 0x18], ecx
// 00520b61  eb0d                 jmp 0x520b70
// 00520b63  8da42400000000       lea esp, [esp]
// 00520b6a  8d9b00000000         lea ebx, [ebx]
// 00520b70  8b742410             mov esi, dword ptr [esp + 0x10]
// 00520b74  803c3701             cmp byte ptr [edi + esi], 1
// 00520b78  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 00520b80  7264                 jb 0x520be6
// 00520b82  b801000000           mov eax, 1
// 00520b87  d3e0                 shl eax, cl
// 00520b89  8d6c3311             lea ebp, [ebx + esi + 0x11]
// 00520b8d  89442420             mov dword ptr [esp + 0x20], eax
// 00520b91  8b549c2c             mov edx, dword ptr [esp + ebx*4 + 0x2c]
// 00520b95  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00520b99  d3e2                 shl edx, cl
// 00520b9b  85c0                 test eax, eax
// 00520b9d  7e2e                 jle 0x520bcd
// 00520b9f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00520ba3  8db40a90040000       lea esi, [edx + ecx + 0x490]
// 00520baa  8d949190000000       lea edx, [ecx + edx*4 + 0x90]
// 00520bb1  893a                 mov dword ptr [edx], edi
// 00520bb3  8a4d00               mov cl, byte ptr [ebp]
// 00520bb6  880e                 mov byte ptr [esi], cl
// 00520bb8  83e801               sub eax, 1
// 00520bbb  83c204               add edx, 4
// 00520bbe  83c601               add esi, 1
// 00520bc1  85c0                 test eax, eax
// 00520bc3  7fec                 jg 0x520bb1
// 00520bc5  8b742410             mov esi, dword ptr [esp + 0x10]
// 00520bc9  8b442420             mov eax, dword ptr [esp + 0x20]
// 00520bcd  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00520bd1  0fb60c37             movzx ecx, byte ptr [edi + esi]
// 00520bd5  83c201               add edx, 1
// 00520bd8  83c301               add ebx, 1
// 00520bdb  83c501               add ebp, 1
// 00520bde  3bd1                 cmp edx, ecx
// 00520be0  8954241c             mov dword ptr [esp + 0x1c], edx
// 00520be4  7eab                 jle 0x520b91
// 00520be6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00520bea  83c701               add edi, 1
// 00520bed  83e901               sub ecx, 1
// 00520bf0  894c2418             mov dword ptr [esp + 0x18], ecx
// 00520bf4  0f8976ffffff         jns 0x520b70
// 00520bfa  80bc244005000000     cmp byte ptr [esp + 0x540], 0
// 00520c02  5d                   pop ebp
// 00520c03  7437                 je 0x520c3c
// 00520c05  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00520c09  33ff                 xor edi, edi
// 00520c0b  85db                 test ebx, ebx
// 00520c0d  7e2d                 jle 0x520c3c
// 00520c0f  90                   nop 
// 00520c10  0fb6443e11           movzx eax, byte ptr [esi + edi + 0x11]
// 00520c15  85c0                 test eax, eax
// 00520c17  7c05                 jl 0x520c1e
// 00520c19  83f80f               cmp eax, 0xf
// 00520c1c  7e17                 jle 0x520c35
// 00520c1e  8b442420             mov eax, dword ptr [esp + 0x20]
// 00520c22  8b10                 mov edx, dword ptr [eax]
// 00520c24  c7421408000000       mov dword ptr [edx + 0x14], 8
// 00520c2b  8b08                 mov ecx, dword ptr [eax]
// 00520c2d  8b11                 mov edx, dword ptr [ecx]
// 00520c2f  50                   push eax
// 00520c30  ffd2                 call edx
// 00520c32  83c404               add esp, 4
// 00520c35  83c701               add edi, 1
// 00520c38  3bfb                 cmp edi, ebx
// 00520c3a  7cd4                 jl 0x520c10
// 00520c3c  8b8c2430050000       mov ecx, dword ptr [esp + 0x530]
// 00520c43  5f                   pop edi
// 00520c44  5e                   pop esi
// 00520c45  5b                   pop ebx
// 00520c46  33cc                 xor ecx, esp
// 00520c48  e859e20f00           call 0x61eea6
// 00520c4d  81c428050000         add esp, 0x528
// 00520c53  c3                   ret 
// library jpeg-6b/jdhuff.c (function _jpeg_make_d_derived_tbl)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS /MD
// roc-lib: jpeg-6b jdhuff.c
