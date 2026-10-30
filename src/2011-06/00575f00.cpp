// from server: 100% by auto
// roc 2011-06 00575f00  unit: seg_00570000  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00575f00
//
// 00575f00  53                   push ebx
// 00575f01  55                   push ebp
// 00575f02  56                   push esi
// 00575f03  8b742410             mov esi, dword ptr [esp + 0x10]
// 00575f07  8b4604               mov eax, dword ptr [esi + 4]
// 00575f0a  8b08                 mov ecx, dword ptr [eax]
// 00575f0c  6a74                 push 0x74
// 00575f0e  6a01                 push 1
// 00575f10  56                   push esi
// 00575f11  ffd1                 call ecx
// 00575f13  8be8                 mov ebp, eax
// 00575f15  33db                 xor ebx, ebx
// 00575f17  89ae88010000         mov dword ptr [esi + 0x188], ebp
// 00575f1d  83c40c               add esp, 0xc
// 00575f20  c74500c0505700       mov dword ptr [ebp], 0x5750c0
// 00575f27  c74508b05e5700       mov dword ptr [ebp + 8], 0x575eb0
// 00575f2e  895d70               mov dword ptr [ebp + 0x70], ebx
// 00575f31  385c2414             cmp byte ptr [esp + 0x14], bl
// 00575f35  0f8491000000         je 0x575fcc
// 00575f3b  395e24               cmp dword ptr [esi + 0x24], ebx
// 00575f3e  57                   push edi
// 00575f3f  8bbec4000000         mov edi, dword ptr [esi + 0xc4]
// 00575f45  895c2418             mov dword ptr [esp + 0x18], ebx
// 00575f49  7e68                 jle 0x575fb3
// 00575f4b  8d5548               lea edx, [ebp + 0x48]
// 00575f4e  83c70c               add edi, 0xc
// 00575f51  89542414             mov dword ptr [esp + 0x14], edx
// 00575f55  80bec800000000       cmp byte ptr [esi + 0xc8], 0
// 00575f5c  8b07                 mov eax, dword ptr [edi]
// 00575f5e  8bc8                 mov ecx, eax
// 00575f60  7403                 je 0x575f65
// 00575f62  8d0c49               lea ecx, [ecx + ecx*2]
// 00575f65  8b5e04               mov ebx, dword ptr [esi + 4]
// 00575f68  51                   push ecx
// 00575f69  50                   push eax
// 00575f6a  8b4714               mov eax, dword ptr [edi + 0x14]
// 00575f6d  50                   push eax
// 00575f6e  e83d1effff           call 0x567db0
// 00575f73  8b4ffc               mov ecx, dword ptr [edi - 4]
// 00575f76  8b5710               mov edx, dword ptr [edi + 0x10]
// 00575f79  83c408               add esp, 8
// 00575f7c  50                   push eax
// 00575f7d  51                   push ecx
// 00575f7e  52                   push edx
// 00575f7f  e82c1effff           call 0x567db0
// 00575f84  83c408               add esp, 8
// 00575f87  50                   push eax
// 00575f88  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00575f8b  6a01                 push 1
// 00575f8d  6a01                 push 1
// 00575f8f  56                   push esi
// 00575f90  ffd0                 call eax
// 00575f92  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00575f96  8901                 mov dword ptr [ecx], eax
// 00575f98  8b442430             mov eax, dword ptr [esp + 0x30]
// 00575f9c  40                   inc eax
// 00575f9d  83c104               add ecx, 4
// 00575fa0  83c418               add esp, 0x18
// 00575fa3  83c754               add edi, 0x54
// 00575fa6  3b4624               cmp eax, dword ptr [esi + 0x24]
// 00575fa9  89442418             mov dword ptr [esp + 0x18], eax
// 00575fad  894c2414             mov dword ptr [esp + 0x14], ecx
// 00575fb1  7ca2                 jl 0x575f55
// 00575fb3  5f                   pop edi
// 00575fb4  8d4d48               lea ecx, [ebp + 0x48]
// 00575fb7  5e                   pop esi
// 00575fb8  c74504a0535700       mov dword ptr [ebp + 4], 0x5753a0
// 00575fbf  c7450cc0555700       mov dword ptr [ebp + 0xc], 0x5755c0
// 00575fc6  894d10               mov dword ptr [ebp + 0x10], ecx
// 00575fc9  5d                   pop ebp
// 00575fca  5b                   pop ebx
// 00575fcb  c3                   ret 
// 00575fcc  8b5604               mov edx, dword ptr [esi + 4]
// 00575fcf  8b4204               mov eax, dword ptr [edx + 4]
// 00575fd2  6800050000           push 0x500
// 00575fd7  6a01                 push 1
// 00575fd9  56                   push esi
// 00575fda  ffd0                 call eax
// 00575fdc  8d8880000000         lea ecx, [eax + 0x80]
// 00575fe2  894d24               mov dword ptr [ebp + 0x24], ecx
// 00575fe5  8d9000010000         lea edx, [eax + 0x100]
// 00575feb  895528               mov dword ptr [ebp + 0x28], edx
// 00575fee  8d8880010000         lea ecx, [eax + 0x180]
// 00575ff4  894d2c               mov dword ptr [ebp + 0x2c], ecx
// 00575ff7  8d9000020000         lea edx, [eax + 0x200]
// 00575ffd  895530               mov dword ptr [ebp + 0x30], edx
// 00576000  8d8880020000         lea ecx, [eax + 0x280]
// 00576006  894d34               mov dword ptr [ebp + 0x34], ecx
// 00576009  8d9000030000         lea edx, [eax + 0x300]
// 0057600f  895538               mov dword ptr [ebp + 0x38], edx
// 00576012  894520               mov dword ptr [ebp + 0x20], eax
// 00576015  83c40c               add esp, 0xc
// 00576018  8d8880030000         lea ecx, [eax + 0x380]
// 0057601e  8d9000040000         lea edx, [eax + 0x400]
// 00576024  894d3c               mov dword ptr [ebp + 0x3c], ecx
// 00576027  895540               mov dword ptr [ebp + 0x40], edx
// 0057602a  0580040000           add eax, 0x480
// 0057602f  894544               mov dword ptr [ebp + 0x44], eax
// 00576032  5e                   pop esi
// 00576033  895d10               mov dword ptr [ebp + 0x10], ebx
// 00576036  c7450410d29100       mov dword ptr [ebp + 4], 0x91d210
// 0057603d  c7450c20515700       mov dword ptr [ebp + 0xc], 0x575120
// 00576044  5d                   pop ebp
// 00576045  5b                   pop ebx
// 00576046  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _jinit_d_coef_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
