// roc 2007-08 00524930  unit: G3D::Line  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00524930
//
// 00524930  51                   push ecx
// 00524931  53                   push ebx
// 00524932  55                   push ebp
// 00524933  56                   push esi
// 00524934  8b742414             mov esi, dword ptr [esp + 0x14]
// 00524938  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 0052493e  8b9ec4000000         mov ebx, dword ptr [esi + 0xc4]
// 00524944  33ed                 xor ebp, ebp
// 00524946  396e24               cmp dword ptr [esi + 0x24], ebp
// 00524949  8944240c             mov dword ptr [esp + 0xc], eax
// 0052494d  7e7e                 jle 0x5249cd
// 0052494f  57                   push edi
// 00524950  83c30c               add ebx, 0xc
// 00524953  eb02                 jmp 0x524957
// 00524955  8bf1                 mov esi, ecx
// 00524957  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 0052495a  0faf0b               imul ecx, dword ptr [ebx]
// 0052495d  8bc1                 mov eax, ecx
// 0052495f  99                   cdq 
// 00524960  f7be18010000         idiv dword ptr [esi + 0x118]
// 00524966  33d2                 xor edx, edx
// 00524968  8bf8                 mov edi, eax
// 0052496a  8b4320               mov eax, dword ptr [ebx + 0x20]
// 0052496d  f7f1                 div ecx
// 0052496f  8bf2                 mov esi, edx
// 00524971  85f6                 test esi, esi
// 00524973  7502                 jne 0x524977
// 00524975  8bf1                 mov esi, ecx
// 00524977  85ed                 test ebp, ebp
// 00524979  7514                 jne 0x52498f
// 0052497b  8d46ff               lea eax, [esi - 1]
// 0052497e  99                   cdq 
// 0052497f  f7ff                 idiv edi
// 00524981  8bc8                 mov ecx, eax
// 00524983  8b442410             mov eax, dword ptr [esp + 0x10]
// 00524987  83c101               add ecx, 1
// 0052498a  894848               mov dword ptr [eax + 0x48], ecx
// 0052498d  eb04                 jmp 0x524993
// 0052498f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00524993  8b5040               mov edx, dword ptr [eax + 0x40]
// 00524996  8b449038             mov eax, dword ptr [eax + edx*4 + 0x38]
// 0052499a  8b04a8               mov eax, dword ptr [eax + ebp*4]
// 0052499d  8d143f               lea edx, [edi + edi]
// 005249a0  85d2                 test edx, edx
// 005249a2  7e19                 jle 0x5249bd
// 005249a4  8d0cb0               lea ecx, [eax + esi*4]
// 005249a7  8bc1                 mov eax, ecx
// 005249a9  8da42400000000       lea esp, [esp]
// 005249b0  8b71fc               mov esi, dword ptr [ecx - 4]
// 005249b3  8930                 mov dword ptr [eax], esi
// 005249b5  83c004               add eax, 4
// 005249b8  83ea01               sub edx, 1
// 005249bb  75f3                 jne 0x5249b0
// 005249bd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005249c1  83c501               add ebp, 1
// 005249c4  83c354               add ebx, 0x54
// 005249c7  3b6924               cmp ebp, dword ptr [ecx + 0x24]
// 005249ca  7c89                 jl 0x524955
// 005249cc  5f                   pop edi
// 005249cd  5e                   pop esi
// 005249ce  5d                   pop ebp
// 005249cf  5b                   pop ebx
// 005249d0  59                   pop ecx
// 005249d1  c3                   ret 
// library jpeg-6b/jdmainct.c (function _set_bottom_pointers)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
