// roc 2009-06 00429d90  unit: CMainFrame  size: 530 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00429d90
//
// 00429d90  55                   push ebp
// 00429d91  8bec                 mov ebp, esp
// 00429d93  83e4f8               and esp, 0xfffffff8
// 00429d96  6aff                 push -1
// 00429d98  683bf08400           push 0x84f03b
// 00429d9d  64a100000000         mov eax, dword ptr fs:[0]
// 00429da3  50                   push eax
// 00429da4  64892500000000       mov dword ptr fs:[0], esp
// 00429dab  81ecc0000000         sub esp, 0xc0
// 00429db1  53                   push ebx
// 00429db2  8b5d08               mov ebx, dword ptr [ebp + 8]
// 00429db5  56                   push esi
// 00429db6  57                   push edi
// 00429db7  689c000000           push 0x9c
// 00429dbc  8d44242c             lea eax, [esp + 0x2c]
// 00429dc0  6a00                 push 0
// 00429dc2  50                   push eax
// 00429dc3  e8acfe2e00           call 0x719c74
// 00429dc8  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00429dcb  83c40c               add esp, 0xc
// 00429dce  6a00                 push 0
// 00429dd0  8d54242c             lea edx, [esp + 0x2c]
// 00429dd4  52                   push edx
// 00429dd5  6aff                 push -1
// 00429dd7  b99c000000           mov ecx, 0x9c
// 00429ddc  50                   push eax
// 00429ddd  66894c245c           mov word ptr [esp + 0x5c], cx
// 00429de2  ff15e4ed8900         call dword ptr [0x89ede4]
// 00429de8  85c0                 test eax, eax
// 00429dea  756e                 jne 0x429e5a
// 00429dec  8d4c2418             lea ecx, [esp + 0x18]
// 00429df0  51                   push ecx
// 00429df1  e8ca7e1b00           call 0x5e1cc0
// 00429df6  83c404               add esp, 4
// 00429df9  8b30                 mov esi, dword ptr [eax]
// 00429dfb  c78424d400000000000000 mov dword ptr [esp + 0xd4], 0
// 00429e06  ff15f8e18900         call dword ptr [0x89e1f8]
// 00429e0c  50                   push eax
// 00429e0d  68d0178b00           push 0x8b17d0
// 00429e12  6a03                 push 3
// 00429e14  56                   push esi
// 00429e15  e8467c1b00           call 0x5e1a60
// 00429e1a  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00429e1e  83c410               add esp, 0x10
// 00429e21  c78424d4000000ffffffff mov dword ptr [esp + 0xd4], 0xffffffff
// 00429e2c  85f6                 test esi, esi
// 00429e2e  742a                 je 0x429e5a
// 00429e30  8d5604               lea edx, [esi + 4]
// 00429e33  83c8ff               or eax, 0xffffffff
// 00429e36  f00fc102             lock xadd dword ptr [edx], eax
// 00429e3a  751e                 jne 0x429e5a
// 00429e3c  8b16                 mov edx, dword ptr [esi]
// 00429e3e  8b4204               mov eax, dword ptr [edx + 4]
// 00429e41  8bce                 mov ecx, esi
// 00429e43  ffd0                 call eax
// 00429e45  8d4e08               lea ecx, [esi + 8]
// 00429e48  83caff               or edx, 0xffffffff
// 00429e4b  f00fc111             lock xadd dword ptr [ecx], edx
// 00429e4f  7509                 jne 0x429e5a
// 00429e51  8b06                 mov eax, dword ptr [esi]
// 00429e53  8b5008               mov edx, dword ptr [eax + 8]
// 00429e56  8bce                 mov ecx, esi
// 00429e58  ffd2                 call edx
// 00429e5a  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 00429e61  db842494000000       fild dword ptr [esp + 0x94]
// 00429e68  85c0                 test eax, eax
// 00429e6a  7d06                 jge 0x429e72
// 00429e6c  dc05c8178b00         fadd qword ptr [0x8b17c8]
// 00429e72  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00429e79  db842498000000       fild dword ptr [esp + 0x98]
// 00429e80  85c9                 test ecx, ecx
// 00429e82  7d06                 jge 0x429e8a
// 00429e84  dc05c8178b00         fadd qword ptr [0x8b17c8]
// 00429e8a  def9                 fdivp st(1)
// 00429e8c  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00429e8f  b927000000           mov ecx, 0x27
// 00429e94  8d742428             lea esi, [esp + 0x28]
// 00429e98  8bfb                 mov edi, ebx
// 00429e9a  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00429e9c  33f6                 xor esi, esi
// 00429e9e  56                   push esi
// 00429e9f  8d54242c             lea edx, [esp + 0x2c]
// 00429ea3  52                   push edx
// 00429ea4  56                   push esi
// 00429ea5  50                   push eax
// 00429ea6  dd5c2428             fstp qword ptr [esp + 0x28]
// 00429eaa  ff15e4ed8900         call dword ptr [0x89ede4]
// 00429eb0  85c0                 test eax, eax
// 00429eb2  0f84cc000000         je 0x429f84
// 00429eb8  d9e8                 fld1 
// 00429eba  dc742418             fdiv qword ptr [esp + 0x18]
// 00429ebe  dd5c2420             fstp qword ptr [esp + 0x20]
// 00429ec2  8bbc2494000000       mov edi, dword ptr [esp + 0x94]
// 00429ec9  8bcf                 mov ecx, edi
// 00429ecb  46                   inc esi
// 00429ecc  894c2410             mov dword ptr [esp + 0x10], ecx
// 00429ed0  db442410             fild dword ptr [esp + 0x10]
// 00429ed4  89742414             mov dword ptr [esp + 0x14], esi
// 00429ed8  85c9                 test ecx, ecx
// 00429eda  7d06                 jge 0x429ee2
// 00429edc  dc05c8178b00         fadd qword ptr [0x8b17c8]
// 00429ee2  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00429ee9  8bd1                 mov edx, ecx
// 00429eeb  89542410             mov dword ptr [esp + 0x10], edx
// 00429eef  db442410             fild dword ptr [esp + 0x10]
// 00429ef3  85d2                 test edx, edx
// 00429ef5  7d06                 jge 0x429efd
// 00429ef7  dc05c8178b00         fadd qword ptr [0x8b17c8]
// 00429efd  def9                 fdivp st(1)
// 00429eff  dc6c2418             fsubr qword ptr [esp + 0x18]
// 00429f03  d9e1                 fabs 
// 00429f05  dc4c2420             fmul qword ptr [esp + 0x20]
// 00429f09  dc1db8178b00         fcomp qword ptr [0x8b17b8]
// 00429f0f  dfe0                 fnstsw ax
// 00429f11  f6c441               test ah, 0x41
// 00429f14  7a50                 jp 0x429f66
// 00429f16  8b4368               mov eax, dword ptr [ebx + 0x68]
// 00429f19  3b842490000000       cmp eax, dword ptr [esp + 0x90]
// 00429f20  7544                 jne 0x429f66
// 00429f22  8b5378               mov edx, dword ptr [ebx + 0x78]
// 00429f25  3b9424a0000000       cmp edx, dword ptr [esp + 0xa0]
// 00429f2c  7538                 jne 0x429f66
// 00429f2e  8b5370               mov edx, dword ptr [ebx + 0x70]
// 00429f31  0fafcf               imul ecx, edi
// 00429f34  0faf536c             imul edx, dword ptr [ebx + 0x6c]
// 00429f38  8b7510               mov esi, dword ptr [ebp + 0x10]
// 00429f3b  8bc6                 mov eax, esi
// 00429f3d  2bc2                 sub eax, edx
// 00429f3f  99                   cdq 
// 00429f40  33c2                 xor eax, edx
// 00429f42  2bc2                 sub eax, edx
// 00429f44  89442410             mov dword ptr [esp + 0x10], eax
// 00429f48  8bc6                 mov eax, esi
// 00429f4a  2bc1                 sub eax, ecx
// 00429f4c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00429f50  99                   cdq 
// 00429f51  33c2                 xor eax, edx
// 00429f53  2bc2                 sub eax, edx
// 00429f55  3bc1                 cmp eax, ecx
// 00429f57  7d0d                 jge 0x429f66
// 00429f59  b927000000           mov ecx, 0x27
// 00429f5e  8d742428             lea esi, [esp + 0x28]
// 00429f62  8bfb                 mov edi, ebx
// 00429f64  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00429f66  8b742414             mov esi, dword ptr [esp + 0x14]
// 00429f6a  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00429f6d  6a00                 push 0
// 00429f6f  8d44242c             lea eax, [esp + 0x2c]
// 00429f73  50                   push eax
// 00429f74  56                   push esi
// 00429f75  51                   push ecx
// 00429f76  ff15e4ed8900         call dword ptr [0x89ede4]
// 00429f7c  85c0                 test eax, eax
// 00429f7e  0f853effffff         jne 0x429ec2
// 00429f84  8b8c24cc000000       mov ecx, dword ptr [esp + 0xcc]
// 00429f8b  5f                   pop edi
// 00429f8c  c7432800001800       mov dword ptr [ebx + 0x28], 0x180000
// 00429f93  5e                   pop esi
// 00429f94  8bc3                 mov eax, ebx
// 00429f96  64890d00000000       mov dword ptr fs:[0], ecx
// 00429f9d  5b                   pop ebx
// 00429f9e  8be5                 mov esp, ebp
// 00429fa0  5d                   pop ebp
// 00429fa1  c3                   ret 
// copied from an identical function in another client (function ?reconstruct@@YAPAUResult@@PAU1@PBDH@Z)

// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 roc_manual_mainframe_0fe43c76eb69f1fe.cpp