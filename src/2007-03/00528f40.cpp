// roc 2007-03 00528f40  unit: seg_00520000  size: 398 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00528f40
//
// 00528f40  51                   push ecx
// 00528f41  8b442410             mov eax, dword ptr [esp + 0x10]
// 00528f45  8b08                 mov ecx, dword ptr [eax]
// 00528f47  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 00528f4b  55                   push ebp
// 00528f4c  56                   push esi
// 00528f4d  8b742410             mov esi, dword ptr [esp + 0x10]
// 00528f51  8bae44010000         mov ebp, dword ptr [esi + 0x144]
// 00528f57  0f836d010000         jae 0x5290ca
// 00528f5d  53                   push ebx
// 00528f5e  57                   push edi
// 00528f5f  90                   nop 
// 00528f60  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00528f64  8b542430             mov edx, dword ptr [esp + 0x30]
// 00528f68  3917                 cmp dword ptr [edi], edx
// 00528f6a  0f8358010000         jae 0x5290c8
// 00528f70  8b442420             mov eax, dword ptr [esp + 0x20]
// 00528f74  8b08                 mov ecx, dword ptr [eax]
// 00528f76  8b9edc000000         mov ebx, dword ptr [esi + 0xdc]
// 00528f7c  8b442424             mov eax, dword ptr [esp + 0x24]
// 00528f80  2b5d34               sub ebx, dword ptr [ebp + 0x34]
// 00528f83  2bc1                 sub eax, ecx
// 00528f85  3bd8                 cmp ebx, eax
// 00528f87  7202                 jb 0x528f8b
// 00528f89  8bd8                 mov ebx, eax
// 00528f8b  8b4534               mov eax, dword ptr [ebp + 0x34]
// 00528f8e  8b9650010000         mov edx, dword ptr [esi + 0x150]
// 00528f94  8b5204               mov edx, dword ptr [edx + 4]
// 00528f97  53                   push ebx
// 00528f98  50                   push eax
// 00528f99  8d4508               lea eax, [ebp + 8]
// 00528f9c  50                   push eax
// 00528f9d  8b442428             mov eax, dword ptr [esp + 0x28]
// 00528fa1  8d0c88               lea ecx, [eax + ecx*4]
// 00528fa4  51                   push ecx
// 00528fa5  56                   push esi
// 00528fa6  ffd2                 call edx
// 00528fa8  8b442434             mov eax, dword ptr [esp + 0x34]
// 00528fac  0118                 add dword ptr [eax], ebx
// 00528fae  015d34               add dword ptr [ebp + 0x34], ebx
// 00528fb1  8b4534               mov eax, dword ptr [ebp + 0x34]
// 00528fb4  83c414               add esp, 0x14
// 00528fb7  295d30               sub dword ptr [ebp + 0x30], ebx
// 00528fba  7561                 jne 0x52901d
// 00528fbc  3b86dc000000         cmp eax, dword ptr [esi + 0xdc]
// 00528fc2  7d59                 jge 0x52901d
// 00528fc4  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 00528fc8  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00528fd0  7e42                 jle 0x529014
// 00528fd2  8d4508               lea eax, [ebp + 8]
// 00528fd5  89442418             mov dword ptr [esp + 0x18], eax
// 00528fd9  8da42400000000       lea esp, [esp]
// 00528fe0  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00528fe3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00528fe7  8b9edc000000         mov ebx, dword ptr [esi + 0xdc]
// 00528fed  8b39                 mov edi, dword ptr [ecx]
// 00528fef  50                   push eax
// 00528ff0  8b4534               mov eax, dword ptr [ebp + 0x34]
// 00528ff3  e818ffffff           call 0x528f10
// 00528ff8  8b442414             mov eax, dword ptr [esp + 0x14]
// 00528ffc  8344241c04           add dword ptr [esp + 0x1c], 4
// 00529001  83c001               add eax, 1
// 00529004  83c404               add esp, 4
// 00529007  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 0052900a  89442410             mov dword ptr [esp + 0x10], eax
// 0052900e  7cd0                 jl 0x528fe0
// 00529010  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00529014  8b96dc000000         mov edx, dword ptr [esi + 0xdc]
// 0052901a  895534               mov dword ptr [ebp + 0x34], edx
// 0052901d  8b4534               mov eax, dword ptr [ebp + 0x34]
// 00529020  3b86dc000000         cmp eax, dword ptr [esi + 0xdc]
// 00529026  7527                 jne 0x52904f
// 00529028  8b17                 mov edx, dword ptr [edi]
// 0052902a  8b442428             mov eax, dword ptr [esp + 0x28]
// 0052902e  8b8e54010000         mov ecx, dword ptr [esi + 0x154]
// 00529034  8b4904               mov ecx, dword ptr [ecx + 4]
// 00529037  52                   push edx
// 00529038  50                   push eax
// 00529039  6a00                 push 0
// 0052903b  8d4508               lea eax, [ebp + 8]
// 0052903e  50                   push eax
// 0052903f  56                   push esi
// 00529040  ffd1                 call ecx
// 00529042  83c414               add esp, 0x14
// 00529045  c7453400000000       mov dword ptr [ebp + 0x34], 0
// 0052904c  830701               add dword ptr [edi], 1
// 0052904f  837d3000             cmp dword ptr [ebp + 0x30], 0
// 00529053  7508                 jne 0x52905d
// 00529055  8b17                 mov edx, dword ptr [edi]
// 00529057  3b542430             cmp edx, dword ptr [esp + 0x30]
// 0052905b  7216                 jb 0x529073
// 0052905d  8b442424             mov eax, dword ptr [esp + 0x24]
// 00529061  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00529065  3901                 cmp dword ptr [ecx], eax
// 00529067  0f82f3feffff         jb 0x528f60
// 0052906d  5f                   pop edi
// 0052906e  5b                   pop ebx
// 0052906f  5e                   pop esi
// 00529070  5d                   pop ebp
// 00529071  59                   pop ecx
// 00529072  c3                   ret 
// 00529073  8b5644               mov edx, dword ptr [esi + 0x44]
// 00529076  33ed                 xor ebp, ebp
// 00529078  396e3c               cmp dword ptr [esi + 0x3c], ebp
// 0052907b  7e45                 jle 0x5290c2
// 0052907d  83c20c               add edx, 0xc
// 00529080  89542420             mov dword ptr [esp + 0x20], edx
// 00529084  eb04                 jmp 0x52908a
// 00529086  8b542420             mov edx, dword ptr [esp + 0x20]
// 0052908a  8b0a                 mov ecx, dword ptr [edx]
// 0052908c  8b07                 mov eax, dword ptr [edi]
// 0052908e  8b5210               mov edx, dword ptr [edx + 0x10]
// 00529091  0fafc1               imul eax, ecx
// 00529094  8bd9                 mov ebx, ecx
// 00529096  0faf5c2430           imul ebx, dword ptr [esp + 0x30]
// 0052909b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0052909f  8b3ca9               mov edi, dword ptr [ecx + ebp*4]
// 005290a2  03d2                 add edx, edx
// 005290a4  03d2                 add edx, edx
// 005290a6  03d2                 add edx, edx
// 005290a8  52                   push edx
// 005290a9  e862feffff           call 0x528f10
// 005290ae  8344242454           add dword ptr [esp + 0x24], 0x54
// 005290b3  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 005290b7  83c501               add ebp, 1
// 005290ba  83c404               add esp, 4
// 005290bd  3b6e3c               cmp ebp, dword ptr [esi + 0x3c]
// 005290c0  7cc4                 jl 0x529086
// 005290c2  8b542430             mov edx, dword ptr [esp + 0x30]
// 005290c6  8917                 mov dword ptr [edi], edx
// 005290c8  5f                   pop edi
// 005290c9  5b                   pop ebx
// 005290ca  5e                   pop esi
// 005290cb  5d                   pop ebp
// 005290cc  59                   pop ecx
// 005290cd  c3                   ret 
// library jpeg-6b/jcprepct.c (function _pre_process_data)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jcprepct.c
