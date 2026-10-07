// roc 2007-08 00610440  unit: RBX::Ball  size: 289 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00610440
//
// 00610440  83ec08               sub esp, 8
// 00610443  53                   push ebx
// 00610444  55                   push ebp
// 00610445  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00610449  56                   push esi
// 0061044a  8b742418             mov esi, dword ptr [esp + 0x18]
// 0061044e  57                   push edi
// 0061044f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00610457  eb07                 jmp 0x610460
// 00610459  8da42400000000       lea esp, [esp]
// 00610460  837d0805             cmp dword ptr [ebp + 8], 5
// 00610464  0f8587000000         jne 0x6104f1
// 0061046a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0061046e  8b5d00               mov ebx, dword ptr [ebp]
// 00610471  50                   push eax
// 00610472  53                   push ebx
// 00610473  56                   push esi
// 00610474  e847210000           call 0x6125c0
// 00610479  8bc8                 mov ecx, eax
// 0061047b  83c40c               add esp, 0xc
// 0061047e  83790800             cmp dword ptr [ecx + 8], 0
// 00610482  894c2414             mov dword ptr [esp + 0x14], ecx
// 00610486  752c                 jne 0x6104b4
// 00610488  8b4308               mov eax, dword ptr [ebx + 8]
// 0061048b  85c0                 test eax, eax
// 0061048d  7425                 je 0x6104b4
// 0061048f  f6400602             test byte ptr [eax + 6], 2
// 00610493  751f                 jne 0x6104b4
// 00610495  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00610498  8b91c0000000         mov edx, dword ptr [ecx + 0xc0]
// 0061049e  52                   push edx
// 0061049f  6a01                 push 1
// 006104a1  50                   push eax
// 006104a2  e899fbffff           call 0x610040
// 006104a7  8bf8                 mov edi, eax
// 006104a9  83c40c               add esp, 0xc
// 006104ac  85ff                 test edi, edi
// 006104ae  7564                 jne 0x610514
// 006104b0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006104b4  8b442428             mov eax, dword ptr [esp + 0x28]
// 006104b8  8b10                 mov edx, dword ptr [eax]
// 006104ba  8911                 mov dword ptr [ecx], edx
// 006104bc  8b5004               mov edx, dword ptr [eax + 4]
// 006104bf  895104               mov dword ptr [ecx + 4], edx
// 006104c2  8b5008               mov edx, dword ptr [eax + 8]
// 006104c5  895108               mov dword ptr [ecx + 8], edx
// 006104c8  b904000000           mov ecx, 4
// 006104cd  394808               cmp dword ptr [eax + 8], ecx
// 006104d0  7c6c                 jl 0x61053e
// 006104d2  8b00                 mov eax, dword ptr [eax]
// 006104d4  f6400503             test byte ptr [eax + 5], 3
// 006104d8  7464                 je 0x61053e
// 006104da  844b05               test byte ptr [ebx + 5], cl
// 006104dd  745f                 je 0x61053e
// 006104df  53                   push ebx
// 006104e0  56                   push esi
// 006104e1  e84afaffff           call 0x60ff30
// 006104e6  83c408               add esp, 8
// 006104e9  5f                   pop edi
// 006104ea  5e                   pop esi
// 006104eb  5d                   pop ebp
// 006104ec  5b                   pop ebx
// 006104ed  83c408               add esp, 8
// 006104f0  c3                   ret 
// 006104f1  6a01                 push 1
// 006104f3  55                   push ebp
// 006104f4  56                   push esi
// 006104f5  e876fbffff           call 0x610070
// 006104fa  8bf8                 mov edi, eax
// 006104fc  83c40c               add esp, 0xc
// 006104ff  837f0800             cmp dword ptr [edi + 8], 0
// 00610503  750f                 jne 0x610514
// 00610505  680c327c00           push 0x7c320c
// 0061050a  55                   push ebp
// 0061050b  56                   push esi
// 0061050c  e81f6dfbff           call 0x5c7230
// 00610511  83c40c               add esp, 0xc
// 00610514  837f0806             cmp dword ptr [edi + 8], 6
// 00610518  742c                 je 0x610546
// 0061051a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0061051e  83c001               add eax, 1
// 00610521  83f864               cmp eax, 0x64
// 00610524  8bef                 mov ebp, edi
// 00610526  89442410             mov dword ptr [esp + 0x10], eax
// 0061052a  0f8c30ffffff         jl 0x610460
// 00610530  6814327c00           push 0x7c3214
// 00610535  56                   push esi
// 00610536  e8c56afbff           call 0x5c7000
// 0061053b  83c408               add esp, 8
// 0061053e  5f                   pop edi
// 0061053f  5e                   pop esi
// 00610540  5d                   pop ebp
// 00610541  5b                   pop ebx
// 00610542  83c408               add esp, 8
// 00610545  c3                   ret 
// 00610546  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0061054a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0061054e  57                   push edi
// 0061054f  8bc5                 mov eax, ebp
// 00610551  e86afdffff           call 0x6102c0
// 00610556  83c404               add esp, 4
// 00610559  5f                   pop edi
// 0061055a  5e                   pop esi
// 0061055b  5d                   pop ebp
// 0061055c  5b                   pop ebx
// 0061055d  83c408               add esp, 8
// 00610560  c3                   ret 
// library lua-5.1.4/lvm.c (function _luaV_settable)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lvm.c
