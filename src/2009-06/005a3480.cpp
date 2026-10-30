// from server: 100% by auto
// roc 2009-06 005a3480  unit: seg_005a0000  size: 384 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a3480
//
// 005a3480  83ec08               sub esp, 8
// 005a3483  53                   push ebx
// 005a3484  8a5c2414             mov bl, byte ptr [esp + 0x14]
// 005a3488  55                   push ebp
// 005a3489  56                   push esi
// 005a348a  8b742418             mov esi, dword ptr [esp + 0x18]
// 005a348e  8bae5c010000         mov ebp, dword ptr [esi + 0x15c]
// 005a3494  57                   push edi
// 005a3495  33ff                 xor edi, edi
// 005a3497  897520               mov dword ptr [ebp + 0x20], esi
// 005a349a  885d0c               mov byte ptr [ebp + 0xc], bl
// 005a349d  39be2c010000         cmp dword ptr [esi + 0x12c], edi
// 005a34a3  0f94c0               sete al
// 005a34a6  88442410             mov byte ptr [esp + 0x10], al
// 005a34aa  39be34010000         cmp dword ptr [esi + 0x134], edi
// 005a34b0  7516                 jne 0x5a34c8
// 005a34b2  84c0                 test al, al
// 005a34b4  7409                 je 0x5a34bf
// 005a34b6  c74504e02c5a00       mov dword ptr [ebp + 4], 0x5a2ce0
// 005a34bd  eb37                 jmp 0x5a34f6
// 005a34bf  c74504502e5a00       mov dword ptr [ebp + 4], 0x5a2e50
// 005a34c6  eb2e                 jmp 0x5a34f6
// 005a34c8  84c0                 test al, al
// 005a34ca  7409                 je 0x5a34d5
// 005a34cc  c7450430305a00       mov dword ptr [ebp + 4], 0x5a3030
// 005a34d3  eb21                 jmp 0x5a34f6
// 005a34d5  c74504f0305a00       mov dword ptr [ebp + 4], 0x5a30f0
// 005a34dc  397d40               cmp dword ptr [ebp + 0x40], edi
// 005a34df  7515                 jne 0x5a34f6
// 005a34e1  8b4604               mov eax, dword ptr [esi + 4]
// 005a34e4  8b08                 mov ecx, dword ptr [eax]
// 005a34e6  68e8030000           push 0x3e8
// 005a34eb  6a01                 push 1
// 005a34ed  56                   push esi
// 005a34ee  ffd1                 call ecx
// 005a34f0  83c40c               add esp, 0xc
// 005a34f3  894540               mov dword ptr [ebp + 0x40], eax
// 005a34f6  84db                 test bl, bl
// 005a34f8  7409                 je 0x5a3503
// 005a34fa  c74508b0335a00       mov dword ptr [ebp + 8], 0x5a33b0
// 005a3501  eb07                 jmp 0x5a350a
// 005a3503  c7450860335a00       mov dword ptr [ebp + 8], 0x5a3360
// 005a350a  39bee4000000         cmp dword ptr [esi + 0xe4], edi
// 005a3510  897c2414             mov dword ptr [esp + 0x14], edi
// 005a3514  0f8ec6000000         jle 0x5a35e0
// 005a351a  8d5524               lea edx, [ebp + 0x24]
// 005a351d  8954241c             mov dword ptr [esp + 0x1c], edx
// 005a3521  8d9ee8000000         lea ebx, [esi + 0xe8]
// 005a3527  eb07                 jmp 0x5a3530
// 005a3529  8da42400000000       lea esp, [esp]
// 005a3530  807c241000           cmp byte ptr [esp + 0x10], 0
// 005a3535  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005a3539  8b03                 mov eax, dword ptr [ebx]
// 005a353b  8939                 mov dword ptr [ecx], edi
// 005a353d  740d                 je 0x5a354c
// 005a353f  39be34010000         cmp dword ptr [esi + 0x134], edi
// 005a3545  757c                 jne 0x5a35c3
// 005a3547  8b7814               mov edi, dword ptr [eax + 0x14]
// 005a354a  eb06                 jmp 0x5a3552
// 005a354c  8b7818               mov edi, dword ptr [eax + 0x18]
// 005a354f  897d34               mov dword ptr [ebp + 0x34], edi
// 005a3552  807c242000           cmp byte ptr [esp + 0x20], 0
// 005a3557  7454                 je 0x5a35ad
// 005a3559  85ff                 test edi, edi
// 005a355b  7c05                 jl 0x5a3562
// 005a355d  83ff04               cmp edi, 4
// 005a3560  7c18                 jl 0x5a357a
// 005a3562  8b16                 mov edx, dword ptr [esi]
// 005a3564  c7421432000000       mov dword ptr [edx + 0x14], 0x32
// 005a356b  8b06                 mov eax, dword ptr [esi]
// 005a356d  897818               mov dword ptr [eax + 0x18], edi
// 005a3570  8b0e                 mov ecx, dword ptr [esi]
// 005a3572  8b11                 mov edx, dword ptr [ecx]
// 005a3574  56                   push esi
// 005a3575  ffd2                 call edx
// 005a3577  83c404               add esp, 4
// 005a357a  837cbd5c00           cmp dword ptr [ebp + edi*4 + 0x5c], 0
// 005a357f  7516                 jne 0x5a3597
// 005a3581  8b4604               mov eax, dword ptr [esi + 4]
// 005a3584  8b08                 mov ecx, dword ptr [eax]
// 005a3586  6804040000           push 0x404
// 005a358b  6a01                 push 1
// 005a358d  56                   push esi
// 005a358e  ffd1                 call ecx
// 005a3590  83c40c               add esp, 0xc
// 005a3593  8944bd5c             mov dword ptr [ebp + edi*4 + 0x5c], eax
// 005a3597  8b54bd5c             mov edx, dword ptr [ebp + edi*4 + 0x5c]
// 005a359b  6804040000           push 0x404
// 005a35a0  6a00                 push 0
// 005a35a2  52                   push edx
// 005a35a3  e8cc661700           call 0x719c74
// 005a35a8  83c40c               add esp, 0xc
// 005a35ab  eb14                 jmp 0x5a35c1
// 005a35ad  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a35b1  8d44bd4c             lea eax, [ebp + edi*4 + 0x4c]
// 005a35b5  50                   push eax
// 005a35b6  57                   push edi
// 005a35b7  51                   push ecx
// 005a35b8  56                   push esi
// 005a35b9  e832e6ffff           call 0x5a1bf0
// 005a35be  83c410               add esp, 0x10
// 005a35c1  33ff                 xor edi, edi
// 005a35c3  8b442414             mov eax, dword ptr [esp + 0x14]
// 005a35c7  8344241c04           add dword ptr [esp + 0x1c], 4
// 005a35cc  40                   inc eax
// 005a35cd  83c304               add ebx, 4
// 005a35d0  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 005a35d6  89442414             mov dword ptr [esp + 0x14], eax
// 005a35da  0f8c50ffffff         jl 0x5a3530
// 005a35e0  897d38               mov dword ptr [ebp + 0x38], edi
// 005a35e3  897d3c               mov dword ptr [ebp + 0x3c], edi
// 005a35e6  897d18               mov dword ptr [ebp + 0x18], edi
// 005a35e9  897d1c               mov dword ptr [ebp + 0x1c], edi
// 005a35ec  8b96bc000000         mov edx, dword ptr [esi + 0xbc]
// 005a35f2  897d48               mov dword ptr [ebp + 0x48], edi
// 005a35f5  5f                   pop edi
// 005a35f6  5e                   pop esi
// 005a35f7  895544               mov dword ptr [ebp + 0x44], edx
// 005a35fa  5d                   pop ebp
// 005a35fb  5b                   pop ebx
// 005a35fc  83c408               add esp, 8
// 005a35ff  c3                   ret 
// library jpeg-6b/jcphuff.c (function _start_pass_phuff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
