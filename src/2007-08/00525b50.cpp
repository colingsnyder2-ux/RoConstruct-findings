// from server: 100% by auto
// roc 2007-08 00525b50  unit: G3D::Line  size: 329 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00525b50
//
// 00525b50  53                   push ebx
// 00525b51  55                   push ebp
// 00525b52  56                   push esi
// 00525b53  8b742410             mov esi, dword ptr [esp + 0x10]
// 00525b57  8b4604               mov eax, dword ptr [esi + 4]
// 00525b5a  8b08                 mov ecx, dword ptr [eax]
// 00525b5c  6a74                 push 0x74
// 00525b5e  6a01                 push 1
// 00525b60  56                   push esi
// 00525b61  ffd1                 call ecx
// 00525b63  8be8                 mov ebp, eax
// 00525b65  33db                 xor ebx, ebx
// 00525b67  89ae88010000         mov dword ptr [esi + 0x188], ebp
// 00525b6d  83c40c               add esp, 0xc
// 00525b70  385c2414             cmp byte ptr [esp + 0x14], bl
// 00525b74  c74500704d5200       mov dword ptr [ebp], 0x524d70
// 00525b7b  c74508005b5200       mov dword ptr [ebp + 8], 0x525b00
// 00525b82  895d70               mov dword ptr [ebp + 0x70], ebx
// 00525b85  0f8493000000         je 0x525c1e
// 00525b8b  395e24               cmp dword ptr [esi + 0x24], ebx
// 00525b8e  57                   push edi
// 00525b8f  8bbec4000000         mov edi, dword ptr [esi + 0xc4]
// 00525b95  895c2418             mov dword ptr [esp + 0x18], ebx
// 00525b99  7e6a                 jle 0x525c05
// 00525b9b  8d5548               lea edx, [ebp + 0x48]
// 00525b9e  83c70c               add edi, 0xc
// 00525ba1  89542414             mov dword ptr [esp + 0x14], edx
// 00525ba5  80bec800000000       cmp byte ptr [esi + 0xc8], 0
// 00525bac  8b07                 mov eax, dword ptr [edi]
// 00525bae  8bc8                 mov ecx, eax
// 00525bb0  7403                 je 0x525bb5
// 00525bb2  8d0c49               lea ecx, [ecx + ecx*2]
// 00525bb5  8b5e04               mov ebx, dword ptr [esi + 4]
// 00525bb8  51                   push ecx
// 00525bb9  50                   push eax
// 00525bba  8b4714               mov eax, dword ptr [edi + 0x14]
// 00525bbd  50                   push eax
// 00525bbe  e89d86ffff           call 0x51e260
// 00525bc3  8b4ffc               mov ecx, dword ptr [edi - 4]
// 00525bc6  8b5710               mov edx, dword ptr [edi + 0x10]
// 00525bc9  83c408               add esp, 8
// 00525bcc  50                   push eax
// 00525bcd  51                   push ecx
// 00525bce  52                   push edx
// 00525bcf  e88c86ffff           call 0x51e260
// 00525bd4  83c408               add esp, 8
// 00525bd7  50                   push eax
// 00525bd8  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00525bdb  6a01                 push 1
// 00525bdd  6a01                 push 1
// 00525bdf  56                   push esi
// 00525be0  ffd0                 call eax
// 00525be2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00525be6  8901                 mov dword ptr [ecx], eax
// 00525be8  8b442430             mov eax, dword ptr [esp + 0x30]
// 00525bec  83c001               add eax, 1
// 00525bef  83c104               add ecx, 4
// 00525bf2  83c418               add esp, 0x18
// 00525bf5  83c754               add edi, 0x54
// 00525bf8  3b4624               cmp eax, dword ptr [esi + 0x24]
// 00525bfb  89442418             mov dword ptr [esp + 0x18], eax
// 00525bff  894c2414             mov dword ptr [esp + 0x14], ecx
// 00525c03  7ca0                 jl 0x525ba5
// 00525c05  5f                   pop edi
// 00525c06  8d4d48               lea ecx, [ebp + 0x48]
// 00525c09  5e                   pop esi
// 00525c0a  c74504d04f5200       mov dword ptr [ebp + 4], 0x524fd0
// 00525c11  c7450cc0515200       mov dword ptr [ebp + 0xc], 0x5251c0
// 00525c18  894d10               mov dword ptr [ebp + 0x10], ecx
// 00525c1b  5d                   pop ebp
// 00525c1c  5b                   pop ebx
// 00525c1d  c3                   ret 
// 00525c1e  8b5604               mov edx, dword ptr [esi + 4]
// 00525c21  8b4204               mov eax, dword ptr [edx + 4]
// 00525c24  6800050000           push 0x500
// 00525c29  6a01                 push 1
// 00525c2b  56                   push esi
// 00525c2c  ffd0                 call eax
// 00525c2e  8d8880000000         lea ecx, [eax + 0x80]
// 00525c34  894d24               mov dword ptr [ebp + 0x24], ecx
// 00525c37  8d9000010000         lea edx, [eax + 0x100]
// 00525c3d  895528               mov dword ptr [ebp + 0x28], edx
// 00525c40  8d8880010000         lea ecx, [eax + 0x180]
// 00525c46  894d2c               mov dword ptr [ebp + 0x2c], ecx
// 00525c49  8d9000020000         lea edx, [eax + 0x200]
// 00525c4f  895530               mov dword ptr [ebp + 0x30], edx
// 00525c52  8d8880020000         lea ecx, [eax + 0x280]
// 00525c58  894d34               mov dword ptr [ebp + 0x34], ecx
// 00525c5b  8d9000030000         lea edx, [eax + 0x300]
// 00525c61  895538               mov dword ptr [ebp + 0x38], edx
// 00525c64  894520               mov dword ptr [ebp + 0x20], eax
// 00525c67  83c40c               add esp, 0xc
// 00525c6a  8d8880030000         lea ecx, [eax + 0x380]
// 00525c70  8d9000040000         lea edx, [eax + 0x400]
// 00525c76  894d3c               mov dword ptr [ebp + 0x3c], ecx
// 00525c79  895540               mov dword ptr [ebp + 0x40], edx
// 00525c7c  0580040000           add eax, 0x480
// 00525c81  894544               mov dword ptr [ebp + 0x44], eax
// 00525c84  5e                   pop esi
// 00525c85  895d10               mov dword ptr [ebp + 0x10], ebx
// 00525c88  c7450410544500       mov dword ptr [ebp + 4], 0x455410
// 00525c8f  c7450c904d5200       mov dword ptr [ebp + 0xc], 0x524d90
// 00525c96  5d                   pop ebp
// 00525c97  5b                   pop ebx
// 00525c98  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _jinit_d_coef_controller)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
