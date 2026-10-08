// roc 2007-03 0051fca0  unit: seg_00510000  size: 485 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051fca0
//
// 0051fca0  83ec2c               sub esp, 0x2c
// 0051fca3  53                   push ebx
// 0051fca4  55                   push ebp
// 0051fca5  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 0051fca9  56                   push esi
// 0051fcaa  57                   push edi
// 0051fcab  8bbd88010000         mov edi, dword ptr [ebp + 0x188]
// 0051fcb1  33f6                 xor esi, esi
// 0051fcb3  39b524010000         cmp dword ptr [ebp + 0x124], esi
// 0051fcb9  897c2420             mov dword ptr [esp + 0x20], edi
// 0051fcbd  7e4f                 jle 0x51fd0e
// 0051fcbf  8d8528010000         lea eax, [ebp + 0x128]
// 0051fcc5  89442410             mov dword ptr [esp + 0x10], eax
// 0051fcc9  8da42400000000       lea esp, [esp]
// 0051fcd0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051fcd4  8b01                 mov eax, dword ptr [ecx]
// 0051fcd6  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0051fcd9  8b9d80000000         mov ebx, dword ptr [ebp + 0x80]
// 0051fcdf  8b4004               mov eax, dword ptr [eax + 4]
// 0051fce2  0fafd9               imul ebx, ecx
// 0051fce5  8b5504               mov edx, dword ptr [ebp + 4]
// 0051fce8  8b5220               mov edx, dword ptr [edx + 0x20]
// 0051fceb  6a01                 push 1
// 0051fced  51                   push ecx
// 0051fcee  8b4c8748             mov ecx, dword ptr [edi + eax*4 + 0x48]
// 0051fcf2  53                   push ebx
// 0051fcf3  51                   push ecx
// 0051fcf4  55                   push ebp
// 0051fcf5  ffd2                 call edx
// 0051fcf7  8344242404           add dword ptr [esp + 0x24], 4
// 0051fcfc  8944b440             mov dword ptr [esp + esi*4 + 0x40], eax
// 0051fd00  83c601               add esi, 1
// 0051fd03  83c414               add esp, 0x14
// 0051fd06  3bb524010000         cmp esi, dword ptr [ebp + 0x124]
// 0051fd0c  7cc2                 jl 0x51fcd0
// 0051fd0e  8b7718               mov esi, dword ptr [edi + 0x18]
// 0051fd11  3b771c               cmp esi, dword ptr [edi + 0x1c]
// 0051fd14  89742424             mov dword ptr [esp + 0x24], esi
// 0051fd18  0f8d0e010000         jge 0x51fe2c
// 0051fd1e  8bff                 mov edi, edi
// 0051fd20  8b4714               mov eax, dword ptr [edi + 0x14]
// 0051fd23  3b8538010000         cmp eax, dword ptr [ebp + 0x138]
// 0051fd29  89442410             mov dword ptr [esp + 0x10], eax
// 0051fd2d  0f83e2000000         jae 0x51fe15
// 0051fd33  33d2                 xor edx, edx
// 0051fd35  33db                 xor ebx, ebx
// 0051fd37  399524010000         cmp dword ptr [ebp + 0x124], edx
// 0051fd3d  8954241c             mov dword ptr [esp + 0x1c], edx
// 0051fd41  0f8ea0000000         jle 0x51fde7
// 0051fd47  8d8528010000         lea eax, [ebp + 0x128]
// 0051fd4d  89442414             mov dword ptr [esp + 0x14], eax
// 0051fd51  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0051fd55  8b39                 mov edi, dword ptr [ecx]
// 0051fd57  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0051fd5a  8bc1                 mov eax, ecx
// 0051fd5c  0faf442410           imul eax, dword ptr [esp + 0x10]
// 0051fd61  837f3800             cmp dword ptr [edi + 0x38], 0
// 0051fd65  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0051fd6d  7e5c                 jle 0x51fdcb
// 0051fd6f  8b54942c             mov edx, dword ptr [esp + edx*4 + 0x2c]
// 0051fd73  c1e007               shl eax, 7
// 0051fd76  89442428             mov dword ptr [esp + 0x28], eax
// 0051fd7a  8d2cb2               lea ebp, [edx + esi*4]
// 0051fd7d  8d4900               lea ecx, [ecx]
// 0051fd80  8b4500               mov eax, dword ptr [ebp]
// 0051fd83  03442428             add eax, dword ptr [esp + 0x28]
// 0051fd87  33d2                 xor edx, edx
// 0051fd89  85c9                 test ecx, ecx
// 0051fd8b  7e1f                 jle 0x51fdac
// 0051fd8d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0051fd91  8d749920             lea esi, [ecx + ebx*4 + 0x20]
// 0051fd95  8906                 mov dword ptr [esi], eax
// 0051fd97  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0051fd9a  83c201               add edx, 1
// 0051fd9d  83c301               add ebx, 1
// 0051fda0  83c604               add esi, 4
// 0051fda3  0580000000           add eax, 0x80
// 0051fda8  3bd1                 cmp edx, ecx
// 0051fdaa  7ce9                 jl 0x51fd95
// 0051fdac  8b442418             mov eax, dword ptr [esp + 0x18]
// 0051fdb0  83c001               add eax, 1
// 0051fdb3  83c504               add ebp, 4
// 0051fdb6  3b4738               cmp eax, dword ptr [edi + 0x38]
// 0051fdb9  89442418             mov dword ptr [esp + 0x18], eax
// 0051fdbd  7cc1                 jl 0x51fd80
// 0051fdbf  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 0051fdc3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0051fdc7  8b742424             mov esi, dword ptr [esp + 0x24]
// 0051fdcb  8344241404           add dword ptr [esp + 0x14], 4
// 0051fdd0  83c201               add edx, 1
// 0051fdd3  3b9524010000         cmp edx, dword ptr [ebp + 0x124]
// 0051fdd9  8954241c             mov dword ptr [esp + 0x1c], edx
// 0051fddd  0f8c6effffff         jl 0x51fd51
// 0051fde3  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0051fde7  8b9598010000         mov edx, dword ptr [ebp + 0x198]
// 0051fded  8d4720               lea eax, [edi + 0x20]
// 0051fdf0  50                   push eax
// 0051fdf1  8b4204               mov eax, dword ptr [edx + 4]
// 0051fdf4  55                   push ebp
// 0051fdf5  ffd0                 call eax
// 0051fdf7  83c408               add esp, 8
// 0051fdfa  84c0                 test al, al
// 0051fdfc  7457                 je 0x51fe55
// 0051fdfe  8b442410             mov eax, dword ptr [esp + 0x10]
// 0051fe02  83c001               add eax, 1
// 0051fe05  3b8538010000         cmp eax, dword ptr [ebp + 0x138]
// 0051fe0b  89442410             mov dword ptr [esp + 0x10], eax
// 0051fe0f  0f821effffff         jb 0x51fd33
// 0051fe15  83c601               add esi, 1
// 0051fe18  c7471400000000       mov dword ptr [edi + 0x14], 0
// 0051fe1f  3b771c               cmp esi, dword ptr [edi + 0x1c]
// 0051fe22  89742424             mov dword ptr [esp + 0x24], esi
// 0051fe26  0f8cf4feffff         jl 0x51fd20
// 0051fe2c  83858000000001       add dword ptr [ebp + 0x80], 1
// 0051fe33  8b8580000000         mov eax, dword ptr [ebp + 0x80]
// 0051fe39  3b851c010000         cmp eax, dword ptr [ebp + 0x11c]
// 0051fe3f  7328                 jae 0x51fe69
// 0051fe41  8bcd                 mov ecx, ebp
// 0051fe43  e8a8fbffff           call 0x51f9f0
// 0051fe48  5f                   pop edi
// 0051fe49  5e                   pop esi
// 0051fe4a  5d                   pop ebp
// 0051fe4b  b803000000           mov eax, 3
// 0051fe50  5b                   pop ebx
// 0051fe51  83c42c               add esp, 0x2c
// 0051fe54  c3                   ret 
// 0051fe55  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051fe59  897718               mov dword ptr [edi + 0x18], esi
// 0051fe5c  894f14               mov dword ptr [edi + 0x14], ecx
// 0051fe5f  5f                   pop edi
// 0051fe60  5e                   pop esi
// 0051fe61  5d                   pop ebp
// 0051fe62  33c0                 xor eax, eax
// 0051fe64  5b                   pop ebx
// 0051fe65  83c42c               add esp, 0x2c
// 0051fe68  c3                   ret 
// 0051fe69  8b9590010000         mov edx, dword ptr [ebp + 0x190]
// 0051fe6f  8b420c               mov eax, dword ptr [edx + 0xc]
// 0051fe72  55                   push ebp
// 0051fe73  ffd0                 call eax
// 0051fe75  83c404               add esp, 4
// 0051fe78  5f                   pop edi
// 0051fe79  5e                   pop esi
// 0051fe7a  5d                   pop ebp
// 0051fe7b  b804000000           mov eax, 4
// 0051fe80  5b                   pop ebx
// 0051fe81  83c42c               add esp, 0x2c
// 0051fe84  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _consume_data)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
