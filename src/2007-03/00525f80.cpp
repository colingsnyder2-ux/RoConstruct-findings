// roc 2007-03 00525f80  unit: seg_00520000  size: 437 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00525f80
//
// 00525f80  83ec2c               sub esp, 0x2c
// 00525f83  53                   push ebx
// 00525f84  55                   push ebp
// 00525f85  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 00525f89  56                   push esi
// 00525f8a  57                   push edi
// 00525f8b  8bbd48010000         mov edi, dword ptr [ebp + 0x148]
// 00525f91  33f6                 xor esi, esi
// 00525f93  39b5e4000000         cmp dword ptr [ebp + 0xe4], esi
// 00525f99  897c2420             mov dword ptr [esp + 0x20], edi
// 00525f9d  7e4c                 jle 0x525feb
// 00525f9f  8d85e8000000         lea eax, [ebp + 0xe8]
// 00525fa5  89442410             mov dword ptr [esp + 0x10], eax
// 00525fa9  8da42400000000       lea esp, [esp]
// 00525fb0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00525fb4  8b01                 mov eax, dword ptr [ecx]
// 00525fb6  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00525fb9  8b5f08               mov ebx, dword ptr [edi + 8]
// 00525fbc  8b4004               mov eax, dword ptr [eax + 4]
// 00525fbf  0fafd9               imul ebx, ecx
// 00525fc2  8b5504               mov edx, dword ptr [ebp + 4]
// 00525fc5  8b5220               mov edx, dword ptr [edx + 0x20]
// 00525fc8  6a00                 push 0
// 00525fca  51                   push ecx
// 00525fcb  8b4c8740             mov ecx, dword ptr [edi + eax*4 + 0x40]
// 00525fcf  53                   push ebx
// 00525fd0  51                   push ecx
// 00525fd1  55                   push ebp
// 00525fd2  ffd2                 call edx
// 00525fd4  8344242404           add dword ptr [esp + 0x24], 4
// 00525fd9  8944b440             mov dword ptr [esp + esi*4 + 0x40], eax
// 00525fdd  83c601               add esi, 1
// 00525fe0  83c414               add esp, 0x14
// 00525fe3  3bb5e4000000         cmp esi, dword ptr [ebp + 0xe4]
// 00525fe9  7cc5                 jl 0x525fb0
// 00525feb  8b7710               mov esi, dword ptr [edi + 0x10]
// 00525fee  3b7714               cmp esi, dword ptr [edi + 0x14]
// 00525ff1  89742424             mov dword ptr [esp + 0x24], esi
// 00525ff5  0f8d11010000         jge 0x52610c
// 00525ffb  eb03                 jmp 0x526000
// 00525ffd  8d4900               lea ecx, [ecx]
// 00526000  8b470c               mov eax, dword ptr [edi + 0xc]
// 00526003  3b85f8000000         cmp eax, dword ptr [ebp + 0xf8]
// 00526009  89442410             mov dword ptr [esp + 0x10], eax
// 0052600d  0f83e2000000         jae 0x5260f5
// 00526013  33d2                 xor edx, edx
// 00526015  33db                 xor ebx, ebx
// 00526017  3995e4000000         cmp dword ptr [ebp + 0xe4], edx
// 0052601d  8954241c             mov dword ptr [esp + 0x1c], edx
// 00526021  0f8ea0000000         jle 0x5260c7
// 00526027  8d85e8000000         lea eax, [ebp + 0xe8]
// 0052602d  89442414             mov dword ptr [esp + 0x14], eax
// 00526031  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00526035  8b39                 mov edi, dword ptr [ecx]
// 00526037  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0052603a  8bc1                 mov eax, ecx
// 0052603c  0faf442410           imul eax, dword ptr [esp + 0x10]
// 00526041  837f3800             cmp dword ptr [edi + 0x38], 0
// 00526045  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0052604d  7e5c                 jle 0x5260ab
// 0052604f  8b54942c             mov edx, dword ptr [esp + edx*4 + 0x2c]
// 00526053  c1e007               shl eax, 7
// 00526056  89442428             mov dword ptr [esp + 0x28], eax
// 0052605a  8d2cb2               lea ebp, [edx + esi*4]
// 0052605d  8d4900               lea ecx, [ecx]
// 00526060  8b4500               mov eax, dword ptr [ebp]
// 00526063  03442428             add eax, dword ptr [esp + 0x28]
// 00526067  33d2                 xor edx, edx
// 00526069  85c9                 test ecx, ecx
// 0052606b  7e1f                 jle 0x52608c
// 0052606d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00526071  8d749918             lea esi, [ecx + ebx*4 + 0x18]
// 00526075  8906                 mov dword ptr [esi], eax
// 00526077  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0052607a  83c201               add edx, 1
// 0052607d  83c301               add ebx, 1
// 00526080  83c604               add esi, 4
// 00526083  0580000000           add eax, 0x80
// 00526088  3bd1                 cmp edx, ecx
// 0052608a  7ce9                 jl 0x526075
// 0052608c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00526090  83c001               add eax, 1
// 00526093  83c504               add ebp, 4
// 00526096  3b4738               cmp eax, dword ptr [edi + 0x38]
// 00526099  89442418             mov dword ptr [esp + 0x18], eax
// 0052609d  7cc1                 jl 0x526060
// 0052609f  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 005260a3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005260a7  8b742424             mov esi, dword ptr [esp + 0x24]
// 005260ab  8344241404           add dword ptr [esp + 0x14], 4
// 005260b0  83c201               add edx, 1
// 005260b3  3b95e4000000         cmp edx, dword ptr [ebp + 0xe4]
// 005260b9  8954241c             mov dword ptr [esp + 0x1c], edx
// 005260bd  0f8c6effffff         jl 0x526031
// 005260c3  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005260c7  8b955c010000         mov edx, dword ptr [ebp + 0x15c]
// 005260cd  8d4718               lea eax, [edi + 0x18]
// 005260d0  50                   push eax
// 005260d1  8b4204               mov eax, dword ptr [edx + 4]
// 005260d4  55                   push ebp
// 005260d5  ffd0                 call eax
// 005260d7  83c408               add esp, 8
// 005260da  84c0                 test al, al
// 005260dc  7443                 je 0x526121
// 005260de  8b442410             mov eax, dword ptr [esp + 0x10]
// 005260e2  83c001               add eax, 1
// 005260e5  3b85f8000000         cmp eax, dword ptr [ebp + 0xf8]
// 005260eb  89442410             mov dword ptr [esp + 0x10], eax
// 005260ef  0f821effffff         jb 0x526013
// 005260f5  83c601               add esi, 1
// 005260f8  c7470c00000000       mov dword ptr [edi + 0xc], 0
// 005260ff  3b7714               cmp esi, dword ptr [edi + 0x14]
// 00526102  89742424             mov dword ptr [esp + 0x24], esi
// 00526106  0f8cf4feffff         jl 0x526000
// 0052610c  83470801             add dword ptr [edi + 8], 1
// 00526110  8bcd                 mov ecx, ebp
// 00526112  e8c9fbffff           call 0x525ce0
// 00526117  5f                   pop edi
// 00526118  5e                   pop esi
// 00526119  5d                   pop ebp
// 0052611a  b001                 mov al, 1
// 0052611c  5b                   pop ebx
// 0052611d  83c42c               add esp, 0x2c
// 00526120  c3                   ret 
// 00526121  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00526125  897710               mov dword ptr [edi + 0x10], esi
// 00526128  894f0c               mov dword ptr [edi + 0xc], ecx
// 0052612b  5f                   pop edi
// 0052612c  5e                   pop esi
// 0052612d  5d                   pop ebp
// 0052612e  32c0                 xor al, al
// 00526130  5b                   pop ebx
// 00526131  83c42c               add esp, 0x2c
// 00526134  c3                   ret 
// library jpeg-6b/jccoefct.c (function _compress_output)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jccoefct.c
