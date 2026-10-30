// roc 2012-06 009f8f20  unit: PAUHWND__::?$CArray  size: 427 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f8f20
//
// 009f8f20  83ec14               sub esp, 0x14
// 009f8f23  8b442420             mov eax, dword ptr [esp + 0x20]
// 009f8f27  53                   push ebx
// 009f8f28  55                   push ebp
// 009f8f29  56                   push esi
// 009f8f2a  57                   push edi
// 009f8f2b  8bf1                 mov esi, ecx
// 009f8f2d  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 009f8f31  50                   push eax
// 009f8f32  51                   push ecx
// 009f8f33  ff15b43cb200         call dword ptr [0xb23cb4]
// 009f8f39  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 009f8f3c  83eb01               sub ebx, 1
// 009f8f3f  89442410             mov dword ptr [esp + 0x10], eax
// 009f8f43  7870                 js 0x9f8fb5
// 009f8f45  8b2d143db200         mov ebp, dword ptr [0xb23d14]
// 009f8f4b  eb03                 jmp 0x9f8f50
// 009f8f4d  8d4900               lea ecx, [ecx]
// 009f8f50  85db                 test ebx, ebx
// 009f8f52  0f8c6e010000         jl 0x9f90c6
// 009f8f58  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 009f8f5b  0f8d65010000         jge 0x9f90c6
// 009f8f61  8b560c               mov edx, dword ptr [esi + 0xc]
// 009f8f64  8b3c9a               mov edi, dword ptr [edx + ebx*4]
// 009f8f67  85ff                 test edi, edi
// 009f8f69  7445                 je 0x9f8fb0
// 009f8f6b  837f2000             cmp dword ptr [edi + 0x20], 0
// 009f8f6f  743f                 je 0x9f8fb0
// 009f8f71  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 009f8f75  83ec08               sub esp, 8
// 009f8f78  8bc4                 mov eax, esp
// 009f8f7a  8908                 mov dword ptr [eax], ecx
// 009f8f7c  8b542438             mov edx, dword ptr [esp + 0x38]
// 009f8f80  895004               mov dword ptr [eax + 4], edx
// 009f8f83  8b07                 mov eax, dword ptr [edi]
// 009f8f85  8b90e0010000         mov edx, dword ptr [eax + 0x1e0]
// 009f8f8b  8bcf                 mov ecx, edi
// 009f8f8d  ffd2                 call edx
// 009f8f8f  83f8fe               cmp eax, -2
// 009f8f92  741c                 je 0x9f8fb0
// 009f8f94  83f801               cmp eax, 1
// 009f8f97  0f84e8000000         je 0x9f9085
// 009f8f9d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009f8fa1  8b4720               mov eax, dword ptr [edi + 0x20]
// 009f8fa4  51                   push ecx
// 009f8fa5  50                   push eax
// 009f8fa6  ffd5                 call ebp
// 009f8fa8  85c0                 test eax, eax
// 009f8faa  0f85d5000000         jne 0x9f9085
// 009f8fb0  83eb01               sub ebx, 1
// 009f8fb3  799b                 jns 0x9f8f50
// 009f8fb5  837e1000             cmp dword ptr [esi + 0x10], 0
// 009f8fb9  7e64                 jle 0x9f901f
// 009f8fbb  8b4634               mov eax, dword ptr [esi + 0x34]
// 009f8fbe  33ff                 xor edi, edi
// 009f8fc0  85c0                 test eax, eax
// 009f8fc2  7e5b                 jle 0x9f901f
// 009f8fc4  8b2d143bb200         mov ebp, dword ptr [0xb23b14]
// 009f8fca  8d9b00000000         lea ebx, [ebx]
// 009f8fd0  85ff                 test edi, edi
// 009f8fd2  0f8cee000000         jl 0x9f90c6
// 009f8fd8  3bf8                 cmp edi, eax
// 009f8fda  0f8de6000000         jge 0x9f90c6
// 009f8fe0  8b5630               mov edx, dword ptr [esi + 0x30]
// 009f8fe3  8b1cba               mov ebx, dword ptr [edx + edi*4]
// 009f8fe6  53                   push ebx
// 009f8fe7  ffd5                 call ebp
// 009f8fe9  85c0                 test eax, eax
// 009f8feb  742a                 je 0x9f9017
// 009f8fed  53                   push ebx
// 009f8fee  ff153c3bb200         call dword ptr [0xb23b3c]
// 009f8ff4  85c0                 test eax, eax
// 009f8ff6  741f                 je 0x9f9017
// 009f8ff8  53                   push ebx
// 009f8ff9  8d4c2418             lea ecx, [esp + 0x18]
// 009f8ffd  e80ec1fdff           call 0x9d5110
// 009f9002  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 009f9006  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 009f900a  51                   push ecx
// 009f900b  52                   push edx
// 009f900c  50                   push eax
// 009f900d  ff15483bb200         call dword ptr [0xb23b48]
// 009f9013  85c0                 test eax, eax
// 009f9015  7562                 jne 0x9f9079
// 009f9017  8b4634               mov eax, dword ptr [esi + 0x34]
// 009f901a  47                   inc edi
// 009f901b  3bf8                 cmp edi, eax
// 009f901d  7cb1                 jl 0x9f8fd0
// 009f901f  8b442410             mov eax, dword ptr [esp + 0x10]
// 009f9023  85c0                 test eax, eax
// 009f9025  7416                 je 0x9f903d
// 009f9027  837e1000             cmp dword ptr [esi + 0x10], 0
// 009f902b  7e10                 jle 0x9f903d
// 009f902d  6ae6                 push -0x1a
// 009f902f  50                   push eax
// 009f9030  ff15903cb200         call dword ptr [0xb23c90]
// 009f9036  a900000100           test eax, 0x10000
// 009f903b  753c                 jne 0x9f9079
// 009f903d  8b4610               mov eax, dword ptr [esi + 0x10]
// 009f9040  33ff                 xor edi, edi
// 009f9042  85c0                 test eax, eax
// 009f9044  7e33                 jle 0x9f9079
// 009f9046  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 009f904a  8d9b00000000         lea ebx, [ebx]
// 009f9050  85ff                 test edi, edi
// 009f9052  7c72                 jl 0x9f90c6
// 009f9054  3bf8                 cmp edi, eax
// 009f9056  7d6e                 jge 0x9f90c6
// 009f9058  8b442430             mov eax, dword ptr [esp + 0x30]
// 009f905c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 009f9060  8b560c               mov edx, dword ptr [esi + 0xc]
// 009f9063  50                   push eax
// 009f9064  8b04ba               mov eax, dword ptr [edx + edi*4]
// 009f9067  51                   push ecx
// 009f9068  53                   push ebx
// 009f9069  50                   push eax
// 009f906a  8bce                 mov ecx, esi
// 009f906c  e8effdffff           call 0x9f8e60
// 009f9071  8b4610               mov eax, dword ptr [esi + 0x10]
// 009f9074  47                   inc edi
// 009f9075  3bf8                 cmp edi, eax
// 009f9077  7cd7                 jl 0x9f9050
// 009f9079  33c0                 xor eax, eax
// 009f907b  5f                   pop edi
// 009f907c  5e                   pop esi
// 009f907d  5d                   pop ebp
// 009f907e  5b                   pop ebx
// 009f907f  83c414               add esp, 0x14
// 009f9082  c20c00               ret 0xc
// 009f9085  83bf2c01000000       cmp dword ptr [edi + 0x12c], 0
// 009f908c  7eeb                 jle 0x9f9079
// 009f908e  8b442428             mov eax, dword ptr [esp + 0x28]
// 009f9092  3d00020000           cmp eax, 0x200
// 009f9097  74e0                 je 0x9f9079
// 009f9099  3da0000000           cmp eax, 0xa0
// 009f909e  74d9                 je 0x9f9079
// 009f90a0  837e4000             cmp dword ptr [esi + 0x40], 0
// 009f90a4  75d3                 jne 0x9f9079
// 009f90a6  8bce                 mov ecx, esi
// 009f90a8  e843fdffff           call 0x9f8df0
// 009f90ad  5f                   pop edi
// 009f90ae  5e                   pop esi
// 009f90af  33c0                 xor eax, eax
// 009f90b1  33c9                 xor ecx, ecx
// 009f90b3  5d                   pop ebp
// 009f90b4  a35ca0e500           mov dword ptr [0xe5a05c], eax
// 009f90b9  890d60a0e500         mov dword ptr [0xe5a060], ecx
// 009f90bf  5b                   pop ebx
// 009f90c0  83c414               add esp, 0x14
// 009f90c3  c20c00               ret 0xc
// 009f90c6  e8f592f8ff           call 0x9823c0
// copied from an identical function in another client (function ?PreTranslateMouseEvents@CXTPMouseManager@@AAEHIUtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPMouseManager.cpp