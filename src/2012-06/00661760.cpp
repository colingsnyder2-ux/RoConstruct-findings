// roc 2012-06 00661760  unit: seg_00660000  size: 697 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00661760
//
// 00661760  81ec20050000         sub esp, 0x520
// 00661766  53                   push ebx
// 00661767  55                   push ebp
// 00661768  56                   push esi
// 00661769  8bb42438050000       mov esi, dword ptr [esp + 0x538]
// 00661770  57                   push edi
// 00661771  bd32000000           mov ebp, 0x32
// 00661776  85f6                 test esi, esi
// 00661778  7c05                 jl 0x66177f
// 0066177a  83fe04               cmp esi, 4
// 0066177d  7c1d                 jl 0x66179c
// 0066177f  8b9c2434050000       mov ebx, dword ptr [esp + 0x534]
// 00661786  8b03                 mov eax, dword ptr [ebx]
// 00661788  896814               mov dword ptr [eax + 0x14], ebp
// 0066178b  8b0b                 mov ecx, dword ptr [ebx]
// 0066178d  897118               mov dword ptr [ecx + 0x18], esi
// 00661790  8b13                 mov edx, dword ptr [ebx]
// 00661792  8b02                 mov eax, dword ptr [edx]
// 00661794  53                   push ebx
// 00661795  ffd0                 call eax
// 00661797  83c404               add esp, 4
// 0066179a  eb07                 jmp 0x6617a3
// 0066179c  8b9c2434050000       mov ebx, dword ptr [esp + 0x534]
// 006617a3  80bc243805000000     cmp byte ptr [esp + 0x538], 0
// 006617ab  740d                 je 0x6617ba
// 006617ad  8bbcb3a0000000       mov edi, dword ptr [ebx + esi*4 + 0xa0]
// 006617b4  897c2410             mov dword ptr [esp + 0x10], edi
// 006617b8  eb0d                 jmp 0x6617c7
// 006617ba  8b8cb3b0000000       mov ecx, dword ptr [ebx + esi*4 + 0xb0]
// 006617c1  894c2410             mov dword ptr [esp + 0x10], ecx
// 006617c5  8bf9                 mov edi, ecx
// 006617c7  85ff                 test edi, edi
// 006617c9  7514                 jne 0x6617df
// 006617cb  8b13                 mov edx, dword ptr [ebx]
// 006617cd  896a14               mov dword ptr [edx + 0x14], ebp
// 006617d0  8b03                 mov eax, dword ptr [ebx]
// 006617d2  897018               mov dword ptr [eax + 0x18], esi
// 006617d5  8b0b                 mov ecx, dword ptr [ebx]
// 006617d7  8b11                 mov edx, dword ptr [ecx]
// 006617d9  53                   push ebx
// 006617da  ffd2                 call edx
// 006617dc  83c404               add esp, 4
// 006617df  8bb42440050000       mov esi, dword ptr [esp + 0x540]
// 006617e6  833e00               cmp dword ptr [esi], 0
// 006617e9  7514                 jne 0x6617ff
// 006617eb  8b4304               mov eax, dword ptr [ebx + 4]
// 006617ee  8b08                 mov ecx, dword ptr [eax]
// 006617f0  6890050000           push 0x590
// 006617f5  6a01                 push 1
// 006617f7  53                   push ebx
// 006617f8  ffd1                 call ecx
// 006617fa  83c40c               add esp, 0xc
// 006617fd  8906                 mov dword ptr [esi], eax
// 006617ff  8b16                 mov edx, dword ptr [esi]
// 00661801  89ba8c000000         mov dword ptr [edx + 0x8c], edi
// 00661807  89542414             mov dword ptr [esp + 0x14], edx
// 0066180b  33ff                 xor edi, edi
// 0066180d  bd01000000           mov ebp, 1
// 00661812  8b442410             mov eax, dword ptr [esp + 0x10]
// 00661816  0fb63428             movzx esi, byte ptr [eax + ebp]
// 0066181a  85f6                 test esi, esi
// 0066181c  7c0b                 jl 0x661829
// 0066181e  8d0c3e               lea ecx, [esi + edi]
// 00661821  81f900010000         cmp ecx, 0x100
// 00661827  7e17                 jle 0x661840
// 00661829  8b13                 mov edx, dword ptr [ebx]
// 0066182b  c7421408000000       mov dword ptr [edx + 0x14], 8
// 00661832  8b03                 mov eax, dword ptr [ebx]
// 00661834  8b08                 mov ecx, dword ptr [eax]
// 00661836  53                   push ebx
// 00661837  ffd1                 call ecx
// 00661839  8b542418             mov edx, dword ptr [esp + 0x18]
// 0066183d  83c404               add esp, 4
// 00661840  85f6                 test esi, esi
// 00661842  7415                 je 0x661859
// 00661844  56                   push esi
// 00661845  8d443c2c             lea eax, [esp + edi + 0x2c]
// 00661849  55                   push ebp
// 0066184a  50                   push eax
// 0066184b  e8241b3200           call 0x983374
// 00661850  8b542420             mov edx, dword ptr [esp + 0x20]
// 00661854  83c40c               add esp, 0xc
// 00661857  03fe                 add edi, esi
// 00661859  45                   inc ebp
// 0066185a  83fd10               cmp ebp, 0x10
// 0066185d  7eb3                 jle 0x661812
// 0066185f  c6443c2800           mov byte ptr [esp + edi + 0x28], 0
// 00661864  8a442428             mov al, byte ptr [esp + 0x28]
// 00661868  897c2420             mov dword ptr [esp + 0x20], edi
// 0066186c  33ff                 xor edi, edi
// 0066186e  33f6                 xor esi, esi
// 00661870  0fbee8               movsx ebp, al
// 00661873  84c0                 test al, al
// 00661875  745b                 je 0x6618d2
// 00661877  8d442428             lea eax, [esp + 0x28]
// 0066187b  eb03                 jmp 0x661880
// 0066187d  8d4900               lea ecx, [ecx]
// 00661880  0fbe00               movsx eax, byte ptr [eax]
// 00661883  3bc5                 cmp eax, ebp
// 00661885  751b                 jne 0x6618a2
// 00661887  eb07                 jmp 0x661890
// 00661889  8da42400000000       lea esp, [esp]
// 00661890  0fbe4c3429           movsx ecx, byte ptr [esp + esi + 0x29]
// 00661895  89bcb42c010000       mov dword ptr [esp + esi*4 + 0x12c], edi
// 0066189c  46                   inc esi
// 0066189d  47                   inc edi
// 0066189e  3bcd                 cmp ecx, ebp
// 006618a0  74ee                 je 0x661890
// 006618a2  b801000000           mov eax, 1
// 006618a7  8bcd                 mov ecx, ebp
// 006618a9  d3e0                 shl eax, cl
// 006618ab  3bf8                 cmp edi, eax
// 006618ad  7c17                 jl 0x6618c6
// 006618af  8b0b                 mov ecx, dword ptr [ebx]
// 006618b1  c7411408000000       mov dword ptr [ecx + 0x14], 8
// 006618b8  8b13                 mov edx, dword ptr [ebx]
// 006618ba  8b02                 mov eax, dword ptr [edx]
// 006618bc  53                   push ebx
// 006618bd  ffd0                 call eax
// 006618bf  8b542418             mov edx, dword ptr [esp + 0x18]
// 006618c3  83c404               add esp, 4
// 006618c6  8d443428             lea eax, [esp + esi + 0x28]
// 006618ca  03ff                 add edi, edi
// 006618cc  45                   inc ebp
// 006618cd  803800               cmp byte ptr [eax], 0
// 006618d0  75ae                 jne 0x661880
// 006618d2  33c9                 xor ecx, ecx
// 006618d4  b801000000           mov eax, 1
// 006618d9  8da42400000000       lea esp, [esp]
// 006618e0  8b742410             mov esi, dword ptr [esp + 0x10]
// 006618e4  803c3000             cmp byte ptr [eax + esi], 0
// 006618e8  741f                 je 0x661909
// 006618ea  8bf9                 mov edi, ecx
// 006618ec  2bbc8c2c010000       sub edi, dword ptr [esp + ecx*4 + 0x12c]
// 006618f3  897c8248             mov dword ptr [edx + eax*4 + 0x48], edi
// 006618f7  0fb63430             movzx esi, byte ptr [eax + esi]
// 006618fb  03ce                 add ecx, esi
// 006618fd  8bb48c28010000       mov esi, dword ptr [esp + ecx*4 + 0x128]
// 00661904  893482               mov dword ptr [edx + eax*4], esi
// 00661907  eb07                 jmp 0x661910
// 00661909  c70482ffffffff       mov dword ptr [edx + eax*4], 0xffffffff
// 00661910  40                   inc eax
// 00661911  83f810               cmp eax, 0x10
// 00661914  7eca                 jle 0x6618e0
// 00661916  6800040000           push 0x400
// 0066191b  c74244ffff0f00       mov dword ptr [edx + 0x44], 0xfffff
// 00661922  81c290000000         add edx, 0x90
// 00661928  6a00                 push 0
// 0066192a  52                   push edx
// 0066192b  e8441a3200           call 0x983374
// 00661930  83c40c               add esp, 0xc
// 00661933  33db                 xor ebx, ebx
// 00661935  b907000000           mov ecx, 7
// 0066193a  8d7b01               lea edi, [ebx + 1]
// 0066193d  894c2418             mov dword ptr [esp + 0x18], ecx
// 00661941  eb0d                 jmp 0x661950
// 00661943  8da42400000000       lea esp, [esp]
// 0066194a  8d9b00000000         lea ebx, [ebx]
// 00661950  8b742410             mov esi, dword ptr [esp + 0x10]
// 00661954  803c3701             cmp byte ptr [edi + esi], 1
// 00661958  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 00661960  725d                 jb 0x6619bf
// 00661962  b801000000           mov eax, 1
// 00661967  d3e0                 shl eax, cl
// 00661969  8d6c3311             lea ebp, [ebx + esi + 0x11]
// 0066196d  89442424             mov dword ptr [esp + 0x24], eax
// 00661971  8b949c2c010000       mov edx, dword ptr [esp + ebx*4 + 0x12c]
// 00661978  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0066197c  d3e2                 shl edx, cl
// 0066197e  85c0                 test eax, eax
// 00661980  7e2a                 jle 0x6619ac
// 00661982  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00661986  8db40a90040000       lea esi, [edx + ecx + 0x490]
// 0066198d  8d949190000000       lea edx, [ecx + edx*4 + 0x90]
// 00661994  893a                 mov dword ptr [edx], edi
// 00661996  8a4d00               mov cl, byte ptr [ebp]
// 00661999  880e                 mov byte ptr [esi], cl
// 0066199b  48                   dec eax
// 0066199c  83c204               add edx, 4
// 0066199f  46                   inc esi
// 006619a0  85c0                 test eax, eax
// 006619a2  7ff0                 jg 0x661994
// 006619a4  8b742410             mov esi, dword ptr [esp + 0x10]
// 006619a8  8b442424             mov eax, dword ptr [esp + 0x24]
// 006619ac  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006619b0  0fb60c37             movzx ecx, byte ptr [edi + esi]
// 006619b4  42                   inc edx
// 006619b5  43                   inc ebx
// 006619b6  45                   inc ebp
// 006619b7  3bd1                 cmp edx, ecx
// 006619b9  8954241c             mov dword ptr [esp + 0x1c], edx
// 006619bd  7eb2                 jle 0x661971
// 006619bf  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006619c3  47                   inc edi
// 006619c4  83e901               sub ecx, 1
// 006619c7  894c2418             mov dword ptr [esp + 0x18], ecx
// 006619cb  7983                 jns 0x661950
// 006619cd  80bc243805000000     cmp byte ptr [esp + 0x538], 0
// 006619d5  7437                 je 0x661a0e
// 006619d7  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 006619db  33ff                 xor edi, edi
// 006619dd  85db                 test ebx, ebx
// 006619df  7e2d                 jle 0x661a0e
// 006619e1  0fb6443e11           movzx eax, byte ptr [esi + edi + 0x11]
// 006619e6  85c0                 test eax, eax
// 006619e8  7c05                 jl 0x6619ef
// 006619ea  83f80f               cmp eax, 0xf
// 006619ed  7e1a                 jle 0x661a09
// 006619ef  8b842434050000       mov eax, dword ptr [esp + 0x534]
// 006619f6  8b10                 mov edx, dword ptr [eax]
// 006619f8  c7421408000000       mov dword ptr [edx + 0x14], 8
// 006619ff  8b08                 mov ecx, dword ptr [eax]
// 00661a01  8b11                 mov edx, dword ptr [ecx]
// 00661a03  50                   push eax
// 00661a04  ffd2                 call edx
// 00661a06  83c404               add esp, 4
// 00661a09  47                   inc edi
// 00661a0a  3bfb                 cmp edi, ebx
// 00661a0c  7cd3                 jl 0x6619e1
// 00661a0e  5f                   pop edi
// 00661a0f  5e                   pop esi
// 00661a10  5d                   pop ebp
// 00661a11  5b                   pop ebx
// 00661a12  81c420050000         add esp, 0x520
// 00661a18  c3                   ret 
// library jpeg-6b/jdhuff.c (function _jpeg_make_d_derived_tbl)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
