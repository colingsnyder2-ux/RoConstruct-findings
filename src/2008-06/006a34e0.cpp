// from server: 100% by auto
// roc 2008-06 006a34e0  unit: CXTPCommandBarList  size: 382 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a34e0
//
// 006a34e0  83ec14               sub esp, 0x14
// 006a34e3  53                   push ebx
// 006a34e4  55                   push ebp
// 006a34e5  8b2d342e8000         mov ebp, dword ptr [0x802e34]
// 006a34eb  56                   push esi
// 006a34ec  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006a34f0  57                   push edi
// 006a34f1  894c2410             mov dword ptr [esp + 0x10], ecx
// 006a34f5  85f6                 test esi, esi
// 006a34f7  0f8486000000         je 0x6a3583
// 006a34fd  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006a3500  8d442414             lea eax, [esp + 0x14]
// 006a3504  50                   push eax
// 006a3505  51                   push ecx
// 006a3506  ffd5                 call ebp
// 006a3508  8b4654               mov eax, dword ptr [esi + 0x54]
// 006a350b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006a350f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006a3513  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 006a3517  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006a351b  a900a00000           test eax, 0xa000
// 006a3520  7436                 je 0x6a3558
// 006a3522  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 006a3526  83c5ec               add ebp, -0x14
// 006a3529  3bea                 cmp ebp, edx
// 006a352b  7d25                 jge 0x6a3552
// 006a352d  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 006a3531  83c514               add ebp, 0x14
// 006a3534  3bea                 cmp ebp, edx
// 006a3536  7e1a                 jle 0x6a3552
// 006a3538  8d6fec               lea ebp, [edi - 0x14]
// 006a353b  3be9                 cmp ebp, ecx
// 006a353d  7d13                 jge 0x6a3552
// 006a353f  8d6b14               lea ebp, [ebx + 0x14]
// 006a3542  3be9                 cmp ebp, ecx
// 006a3544  7e0c                 jle 0x6a3552
// 006a3546  5f                   pop edi
// 006a3547  8bc6                 mov eax, esi
// 006a3549  5e                   pop esi
// 006a354a  5d                   pop ebp
// 006a354b  5b                   pop ebx
// 006a354c  83c414               add esp, 0x14
// 006a354f  c20c00               ret 0xc
// 006a3552  8b2d342e8000         mov ebp, dword ptr [0x802e34]
// 006a3558  a900500000           test eax, 0x5000
// 006a355d  7424                 je 0x6a3583
// 006a355f  83c7ec               add edi, -0x14
// 006a3562  3bf9                 cmp edi, ecx
// 006a3564  7d1d                 jge 0x6a3583
// 006a3566  83c314               add ebx, 0x14
// 006a3569  3bd9                 cmp ebx, ecx
// 006a356b  7e16                 jle 0x6a3583
// 006a356d  8b442418             mov eax, dword ptr [esp + 0x18]
// 006a3571  83c0ec               add eax, -0x14
// 006a3574  3bc2                 cmp eax, edx
// 006a3576  7d0b                 jge 0x6a3583
// 006a3578  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006a357c  83c114               add ecx, 0x14
// 006a357f  3bca                 cmp ecx, edx
// 006a3581  7fc3                 jg 0x6a3546
// 006a3583  8b742410             mov esi, dword ptr [esp + 0x10]
// 006a3587  33db                 xor ebx, ebx
// 006a3589  895c2430             mov dword ptr [esp + 0x30], ebx
// 006a358d  81c690000000         add esi, 0x90
// 006a3593  8b06                 mov eax, dword ptr [esi]
// 006a3595  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006a3598  8d542414             lea edx, [esp + 0x14]
// 006a359c  52                   push edx
// 006a359d  51                   push ecx
// 006a359e  ffd5                 call ebp
// 006a35a0  8b16                 mov edx, dword ptr [esi]
// 006a35a2  8b4254               mov eax, dword ptr [edx + 0x54]
// 006a35a5  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006a35a9  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006a35ad  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006a35b1  a900a00000           test eax, 0xa000
// 006a35b6  742c                 je 0x6a35e4
// 006a35b8  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006a35bc  83c3ec               add ebx, -0x14
// 006a35bf  3bda                 cmp ebx, edx
// 006a35c1  7d1d                 jge 0x6a35e0
// 006a35c3  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 006a35c7  83c314               add ebx, 0x14
// 006a35ca  3bda                 cmp ebx, edx
// 006a35cc  7e12                 jle 0x6a35e0
// 006a35ce  8d5fec               lea ebx, [edi - 0x14]
// 006a35d1  3bd9                 cmp ebx, ecx
// 006a35d3  7d0b                 jge 0x6a35e0
// 006a35d5  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 006a35d9  83c314               add ebx, 0x14
// 006a35dc  3bd9                 cmp ebx, ecx
// 006a35de  7f50                 jg 0x6a3630
// 006a35e0  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 006a35e4  a900500000           test eax, 0x5000
// 006a35e9  7428                 je 0x6a3613
// 006a35eb  83c7ec               add edi, -0x14
// 006a35ee  3bf9                 cmp edi, ecx
// 006a35f0  7d21                 jge 0x6a3613
// 006a35f2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006a35f6  83c014               add eax, 0x14
// 006a35f9  3bc1                 cmp eax, ecx
// 006a35fb  7e16                 jle 0x6a3613
// 006a35fd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006a3601  83c1ec               add ecx, -0x14
// 006a3604  3bca                 cmp ecx, edx
// 006a3606  7d0b                 jge 0x6a3613
// 006a3608  8b442420             mov eax, dword ptr [esp + 0x20]
// 006a360c  83c014               add eax, 0x14
// 006a360f  3bc2                 cmp eax, edx
// 006a3611  7f36                 jg 0x6a3649
// 006a3613  43                   inc ebx
// 006a3614  83c604               add esi, 4
// 006a3617  83fb04               cmp ebx, 4
// 006a361a  895c2430             mov dword ptr [esp + 0x30], ebx
// 006a361e  0f8c6fffffff         jl 0x6a3593
// 006a3624  5f                   pop edi
// 006a3625  5e                   pop esi
// 006a3626  5d                   pop ebp
// 006a3627  33c0                 xor eax, eax
// 006a3629  5b                   pop ebx
// 006a362a  83c414               add esp, 0x14
// 006a362d  c20c00               ret 0xc
// 006a3630  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006a3634  8b542430             mov edx, dword ptr [esp + 0x30]
// 006a3638  8b849190000000       mov eax, dword ptr [ecx + edx*4 + 0x90]
// 006a363f  5f                   pop edi
// 006a3640  5e                   pop esi
// 006a3641  5d                   pop ebp
// 006a3642  5b                   pop ebx
// 006a3643  83c414               add esp, 0x14
// 006a3646  c20c00               ret 0xc
// 006a3649  8b442410             mov eax, dword ptr [esp + 0x10]
// 006a364d  8b849890000000       mov eax, dword ptr [eax + ebx*4 + 0x90]
// 006a3654  5f                   pop edi
// 006a3655  5e                   pop esi
// 006a3656  5d                   pop ebp
// 006a3657  5b                   pop ebx
// 006a3658  83c414               add esp, 0x14
// 006a365b  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?CanDock@CXTPCommandBars@@QBEPAVCXTPDockBar@@VCPoint@@PAV2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
