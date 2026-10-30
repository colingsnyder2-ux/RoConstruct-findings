// from server: 100% by auto
// roc 2008-06 00531de0  unit: seg_00530000  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00531de0
//
// 00531de0  53                   push ebx
// 00531de1  55                   push ebp
// 00531de2  56                   push esi
// 00531de3  8b742410             mov esi, dword ptr [esp + 0x10]
// 00531de7  8b4604               mov eax, dword ptr [esi + 4]
// 00531dea  8b08                 mov ecx, dword ptr [eax]
// 00531dec  6a74                 push 0x74
// 00531dee  6a01                 push 1
// 00531df0  56                   push esi
// 00531df1  ffd1                 call ecx
// 00531df3  8be8                 mov ebp, eax
// 00531df5  33db                 xor ebx, ebx
// 00531df7  89ae88010000         mov dword ptr [esi + 0x188], ebp
// 00531dfd  83c40c               add esp, 0xc
// 00531e00  c74500a00f5300       mov dword ptr [ebp], 0x530fa0
// 00531e07  c74508901d5300       mov dword ptr [ebp + 8], 0x531d90
// 00531e0e  895d70               mov dword ptr [ebp + 0x70], ebx
// 00531e11  385c2414             cmp byte ptr [esp + 0x14], bl
// 00531e15  0f8491000000         je 0x531eac
// 00531e1b  395e24               cmp dword ptr [esi + 0x24], ebx
// 00531e1e  57                   push edi
// 00531e1f  8bbec4000000         mov edi, dword ptr [esi + 0xc4]
// 00531e25  895c2418             mov dword ptr [esp + 0x18], ebx
// 00531e29  7e68                 jle 0x531e93
// 00531e2b  8d5548               lea edx, [ebp + 0x48]
// 00531e2e  83c70c               add edi, 0xc
// 00531e31  89542414             mov dword ptr [esp + 0x14], edx
// 00531e35  80bec800000000       cmp byte ptr [esi + 0xc8], 0
// 00531e3c  8b07                 mov eax, dword ptr [edi]
// 00531e3e  8bc8                 mov ecx, eax
// 00531e40  7403                 je 0x531e45
// 00531e42  8d0c49               lea ecx, [ecx + ecx*2]
// 00531e45  8b5e04               mov ebx, dword ptr [esi + 4]
// 00531e48  51                   push ecx
// 00531e49  50                   push eax
// 00531e4a  8b4714               mov eax, dword ptr [edi + 0x14]
// 00531e4d  50                   push eax
// 00531e4e  e8bd3cffff           call 0x525b10
// 00531e53  8b4ffc               mov ecx, dword ptr [edi - 4]
// 00531e56  8b5710               mov edx, dword ptr [edi + 0x10]
// 00531e59  83c408               add esp, 8
// 00531e5c  50                   push eax
// 00531e5d  51                   push ecx
// 00531e5e  52                   push edx
// 00531e5f  e8ac3cffff           call 0x525b10
// 00531e64  83c408               add esp, 8
// 00531e67  50                   push eax
// 00531e68  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00531e6b  6a01                 push 1
// 00531e6d  6a01                 push 1
// 00531e6f  56                   push esi
// 00531e70  ffd0                 call eax
// 00531e72  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00531e76  8901                 mov dword ptr [ecx], eax
// 00531e78  8b442430             mov eax, dword ptr [esp + 0x30]
// 00531e7c  40                   inc eax
// 00531e7d  83c104               add ecx, 4
// 00531e80  83c418               add esp, 0x18
// 00531e83  83c754               add edi, 0x54
// 00531e86  3b4624               cmp eax, dword ptr [esi + 0x24]
// 00531e89  89442418             mov dword ptr [esp + 0x18], eax
// 00531e8d  894c2414             mov dword ptr [esp + 0x14], ecx
// 00531e91  7ca2                 jl 0x531e35
// 00531e93  5f                   pop edi
// 00531e94  8d4d48               lea ecx, [ebp + 0x48]
// 00531e97  5e                   pop esi
// 00531e98  c7450480125300       mov dword ptr [ebp + 4], 0x531280
// 00531e9f  c7450ca0145300       mov dword ptr [ebp + 0xc], 0x5314a0
// 00531ea6  894d10               mov dword ptr [ebp + 0x10], ecx
// 00531ea9  5d                   pop ebp
// 00531eaa  5b                   pop ebx
// 00531eab  c3                   ret 
// 00531eac  8b5604               mov edx, dword ptr [esi + 4]
// 00531eaf  8b4204               mov eax, dword ptr [edx + 4]
// 00531eb2  6800050000           push 0x500
// 00531eb7  6a01                 push 1
// 00531eb9  56                   push esi
// 00531eba  ffd0                 call eax
// 00531ebc  8d8880000000         lea ecx, [eax + 0x80]
// 00531ec2  894d24               mov dword ptr [ebp + 0x24], ecx
// 00531ec5  8d9000010000         lea edx, [eax + 0x100]
// 00531ecb  895528               mov dword ptr [ebp + 0x28], edx
// 00531ece  8d8880010000         lea ecx, [eax + 0x180]
// 00531ed4  894d2c               mov dword ptr [ebp + 0x2c], ecx
// 00531ed7  8d9000020000         lea edx, [eax + 0x200]
// 00531edd  895530               mov dword ptr [ebp + 0x30], edx
// 00531ee0  8d8880020000         lea ecx, [eax + 0x280]
// 00531ee6  894d34               mov dword ptr [ebp + 0x34], ecx
// 00531ee9  8d9000030000         lea edx, [eax + 0x300]
// 00531eef  895538               mov dword ptr [ebp + 0x38], edx
// 00531ef2  894520               mov dword ptr [ebp + 0x20], eax
// 00531ef5  83c40c               add esp, 0xc
// 00531ef8  8d8880030000         lea ecx, [eax + 0x380]
// 00531efe  8d9000040000         lea edx, [eax + 0x400]
// 00531f04  894d3c               mov dword ptr [ebp + 0x3c], ecx
// 00531f07  895540               mov dword ptr [ebp + 0x40], edx
// 00531f0a  0580040000           add eax, 0x480
// 00531f0f  894544               mov dword ptr [ebp + 0x44], eax
// 00531f12  5e                   pop esi
// 00531f13  895d10               mov dword ptr [ebp + 0x10], ebx
// 00531f16  c7450490664100       mov dword ptr [ebp + 4], 0x416690
// 00531f1d  c7450c00105300       mov dword ptr [ebp + 0xc], 0x531000
// 00531f24  5d                   pop ebp
// 00531f25  5b                   pop ebx
// 00531f26  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _jinit_d_coef_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
