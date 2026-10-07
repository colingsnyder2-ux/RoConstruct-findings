// roc 2011-06 0057d2c0  unit: seg_00570000  size: 384 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057d2c0
//
// 0057d2c0  83ec08               sub esp, 8
// 0057d2c3  53                   push ebx
// 0057d2c4  8a5c2414             mov bl, byte ptr [esp + 0x14]
// 0057d2c8  55                   push ebp
// 0057d2c9  56                   push esi
// 0057d2ca  8b742418             mov esi, dword ptr [esp + 0x18]
// 0057d2ce  8bae5c010000         mov ebp, dword ptr [esi + 0x15c]
// 0057d2d4  57                   push edi
// 0057d2d5  33ff                 xor edi, edi
// 0057d2d7  897520               mov dword ptr [ebp + 0x20], esi
// 0057d2da  885d0c               mov byte ptr [ebp + 0xc], bl
// 0057d2dd  39be2c010000         cmp dword ptr [esi + 0x12c], edi
// 0057d2e3  0f94c0               sete al
// 0057d2e6  88442410             mov byte ptr [esp + 0x10], al
// 0057d2ea  39be34010000         cmp dword ptr [esi + 0x134], edi
// 0057d2f0  7516                 jne 0x57d308
// 0057d2f2  84c0                 test al, al
// 0057d2f4  7409                 je 0x57d2ff
// 0057d2f6  c7450420cb5700       mov dword ptr [ebp + 4], 0x57cb20
// 0057d2fd  eb37                 jmp 0x57d336
// 0057d2ff  c7450490cc5700       mov dword ptr [ebp + 4], 0x57cc90
// 0057d306  eb2e                 jmp 0x57d336
// 0057d308  84c0                 test al, al
// 0057d30a  7409                 je 0x57d315
// 0057d30c  c7450470ce5700       mov dword ptr [ebp + 4], 0x57ce70
// 0057d313  eb21                 jmp 0x57d336
// 0057d315  c7450430cf5700       mov dword ptr [ebp + 4], 0x57cf30
// 0057d31c  397d40               cmp dword ptr [ebp + 0x40], edi
// 0057d31f  7515                 jne 0x57d336
// 0057d321  8b4604               mov eax, dword ptr [esi + 4]
// 0057d324  8b08                 mov ecx, dword ptr [eax]
// 0057d326  68e8030000           push 0x3e8
// 0057d32b  6a01                 push 1
// 0057d32d  56                   push esi
// 0057d32e  ffd1                 call ecx
// 0057d330  83c40c               add esp, 0xc
// 0057d333  894540               mov dword ptr [ebp + 0x40], eax
// 0057d336  84db                 test bl, bl
// 0057d338  7409                 je 0x57d343
// 0057d33a  c74508f0d15700       mov dword ptr [ebp + 8], 0x57d1f0
// 0057d341  eb07                 jmp 0x57d34a
// 0057d343  c74508a0d15700       mov dword ptr [ebp + 8], 0x57d1a0
// 0057d34a  39bee4000000         cmp dword ptr [esi + 0xe4], edi
// 0057d350  897c2414             mov dword ptr [esp + 0x14], edi
// 0057d354  0f8ec6000000         jle 0x57d420
// 0057d35a  8d5524               lea edx, [ebp + 0x24]
// 0057d35d  8954241c             mov dword ptr [esp + 0x1c], edx
// 0057d361  8d9ee8000000         lea ebx, [esi + 0xe8]
// 0057d367  eb07                 jmp 0x57d370
// 0057d369  8da42400000000       lea esp, [esp]
// 0057d370  807c241000           cmp byte ptr [esp + 0x10], 0
// 0057d375  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057d379  8b03                 mov eax, dword ptr [ebx]
// 0057d37b  8939                 mov dword ptr [ecx], edi
// 0057d37d  740d                 je 0x57d38c
// 0057d37f  39be34010000         cmp dword ptr [esi + 0x134], edi
// 0057d385  757c                 jne 0x57d403
// 0057d387  8b7814               mov edi, dword ptr [eax + 0x14]
// 0057d38a  eb06                 jmp 0x57d392
// 0057d38c  8b7818               mov edi, dword ptr [eax + 0x18]
// 0057d38f  897d34               mov dword ptr [ebp + 0x34], edi
// 0057d392  807c242000           cmp byte ptr [esp + 0x20], 0
// 0057d397  7454                 je 0x57d3ed
// 0057d399  85ff                 test edi, edi
// 0057d39b  7c05                 jl 0x57d3a2
// 0057d39d  83ff04               cmp edi, 4
// 0057d3a0  7c18                 jl 0x57d3ba
// 0057d3a2  8b16                 mov edx, dword ptr [esi]
// 0057d3a4  c7421432000000       mov dword ptr [edx + 0x14], 0x32
// 0057d3ab  8b06                 mov eax, dword ptr [esi]
// 0057d3ad  897818               mov dword ptr [eax + 0x18], edi
// 0057d3b0  8b0e                 mov ecx, dword ptr [esi]
// 0057d3b2  8b11                 mov edx, dword ptr [ecx]
// 0057d3b4  56                   push esi
// 0057d3b5  ffd2                 call edx
// 0057d3b7  83c404               add esp, 4
// 0057d3ba  837cbd5c00           cmp dword ptr [ebp + edi*4 + 0x5c], 0
// 0057d3bf  7516                 jne 0x57d3d7
// 0057d3c1  8b4604               mov eax, dword ptr [esi + 4]
// 0057d3c4  8b08                 mov ecx, dword ptr [eax]
// 0057d3c6  6804040000           push 0x404
// 0057d3cb  6a01                 push 1
// 0057d3cd  56                   push esi
// 0057d3ce  ffd1                 call ecx
// 0057d3d0  83c40c               add esp, 0xc
// 0057d3d3  8944bd5c             mov dword ptr [ebp + edi*4 + 0x5c], eax
// 0057d3d7  8b54bd5c             mov edx, dword ptr [ebp + edi*4 + 0x5c]
// 0057d3db  6804040000           push 0x404
// 0057d3e0  6a00                 push 0
// 0057d3e2  52                   push edx
// 0057d3e3  e8fcde2800           call 0x80b2e4
// 0057d3e8  83c40c               add esp, 0xc
// 0057d3eb  eb14                 jmp 0x57d401
// 0057d3ed  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057d3f1  8d44bd4c             lea eax, [ebp + edi*4 + 0x4c]
// 0057d3f5  50                   push eax
// 0057d3f6  57                   push edi
// 0057d3f7  51                   push ecx
// 0057d3f8  56                   push esi
// 0057d3f9  e832e6ffff           call 0x57ba30
// 0057d3fe  83c410               add esp, 0x10
// 0057d401  33ff                 xor edi, edi
// 0057d403  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057d407  8344241c04           add dword ptr [esp + 0x1c], 4
// 0057d40c  40                   inc eax
// 0057d40d  83c304               add ebx, 4
// 0057d410  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 0057d416  89442414             mov dword ptr [esp + 0x14], eax
// 0057d41a  0f8c50ffffff         jl 0x57d370
// 0057d420  897d38               mov dword ptr [ebp + 0x38], edi
// 0057d423  897d3c               mov dword ptr [ebp + 0x3c], edi
// 0057d426  897d18               mov dword ptr [ebp + 0x18], edi
// 0057d429  897d1c               mov dword ptr [ebp + 0x1c], edi
// 0057d42c  8b96bc000000         mov edx, dword ptr [esi + 0xbc]
// 0057d432  897d48               mov dword ptr [ebp + 0x48], edi
// 0057d435  5f                   pop edi
// 0057d436  5e                   pop esi
// 0057d437  895544               mov dword ptr [ebp + 0x44], edx
// 0057d43a  5d                   pop ebp
// 0057d43b  5b                   pop ebx
// 0057d43c  83c408               add esp, 8
// 0057d43f  c3                   ret 
// library jpeg-6b/jcphuff.c (function _start_pass_phuff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
