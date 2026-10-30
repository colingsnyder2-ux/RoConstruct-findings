// from server: 100% by auto
// roc 2008-06 006fdeb0  unit: CXTPPropExchange  size: 544 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fdeb0
//
// 006fdeb0  55                   push ebp
// 006fdeb1  8bec                 mov ebp, esp
// 006fdeb3  6aff                 push -1
// 006fdeb5  68783d7e00           push 0x7e3d78
// 006fdeba  64a100000000         mov eax, dword ptr fs:[0]
// 006fdec0  50                   push eax
// 006fdec1  83ec10               sub esp, 0x10
// 006fdec4  53                   push ebx
// 006fdec5  56                   push esi
// 006fdec6  57                   push edi
// 006fdec7  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 006fdecc  33c5                 xor eax, ebp
// 006fdece  50                   push eax
// 006fdecf  8d45f4               lea eax, [ebp - 0xc]
// 006fded2  64a300000000         mov dword ptr fs:[0], eax
// 006fded8  8965f0               mov dword ptr [ebp - 0x10], esp
// 006fdedb  8b7510               mov esi, dword ptr [ebp + 0x10]
// 006fdede  85f6                 test esi, esi
// 006fdee0  7425                 je 0x6fdf07
// 006fdee2  0fb74508             movzx eax, word ptr [ebp + 8]
// 006fdee6  83c0fe               add eax, -2
// 006fdee9  83f863               cmp eax, 0x63
// 006fdeec  0f8729010000         ja 0x6fe01b
// 006fdef2  0fb6806ce06f00       movzx eax, byte ptr [eax + 0x6fe06c]
// 006fdef9  ff248534e06f00       jmp dword ptr [eax*4 + 0x6fe034]
// 006fdf00  8a0e                 mov cl, byte ptr [esi]
// 006fdf02  8b550c               mov edx, dword ptr [ebp + 0xc]
// 006fdf05  880a                 mov byte ptr [edx], cl
// 006fdf07  33c0                 xor eax, eax
// 006fdf09  85f6                 test esi, esi
// 006fdf0b  0f95c0               setne al
// 006fdf0e  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006fdf11  64890d00000000       mov dword ptr fs:[0], ecx
// 006fdf18  59                   pop ecx
// 006fdf19  5f                   pop edi
// 006fdf1a  5e                   pop esi
// 006fdf1b  5b                   pop ebx
// 006fdf1c  8be5                 mov esp, ebp
// 006fdf1e  5d                   pop ebp
// 006fdf1f  c20c00               ret 0xc
// 006fdf22  668b06               mov ax, word ptr [esi]
// 006fdf25  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 006fdf28  668901               mov word ptr [ecx], ax
// 006fdf2b  ebda                 jmp 0x6fdf07
// 006fdf2d  8b16                 mov edx, dword ptr [esi]
// 006fdf2f  8b450c               mov eax, dword ptr [ebp + 0xc]
// 006fdf32  8910                 mov dword ptr [eax], edx
// 006fdf34  ebd1                 jmp 0x6fdf07
// 006fdf36  8b0e                 mov ecx, dword ptr [esi]
// 006fdf38  8b550c               mov edx, dword ptr [ebp + 0xc]
// 006fdf3b  890a                 mov dword ptr [edx], ecx
// 006fdf3d  ebc8                 jmp 0x6fdf07
// 006fdf3f  56                   push esi
// 006fdf40  ff1500298000         call dword ptr [0x802900]
// 006fdf46  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 006fdf49  8901                 mov dword ptr [ecx], eax
// 006fdf4b  ebba                 jmp 0x6fdf07
// 006fdf4d  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 006fdf50  56                   push esi
// 006fdf51  ff15b83e8000         call dword ptr [0x803eb8]
// 006fdf57  ebae                 jmp 0x6fdf07
// 006fdf59  8b16                 mov edx, dword ptr [esi]
// 006fdf5b  8b450c               mov eax, dword ptr [ebp + 0xc]
// 006fdf5e  8910                 mov dword ptr [eax], edx
// 006fdf60  8b4e04               mov ecx, dword ptr [esi + 4]
// 006fdf63  894804               mov dword ptr [eax + 4], ecx
// 006fdf66  eb9f                 jmp 0x6fdf07
// 006fdf68  d906                 fld dword ptr [esi]
// 006fdf6a  8b550c               mov edx, dword ptr [ebp + 0xc]
// 006fdf6d  d91a                 fstp dword ptr [edx]
// 006fdf6f  eb96                 jmp 0x6fdf07
// 006fdf71  dd06                 fld qword ptr [esi]
// 006fdf73  8b450c               mov eax, dword ptr [ebp + 0xc]
// 006fdf76  dd18                 fstp qword ptr [eax]
// 006fdf78  eb8d                 jmp 0x6fdf07
// 006fdf7a  8b0e                 mov ecx, dword ptr [esi]
// 006fdf7c  8b450c               mov eax, dword ptr [ebp + 0xc]
// 006fdf7f  8908                 mov dword ptr [eax], ecx
// 006fdf81  8b5604               mov edx, dword ptr [esi + 4]
// 006fdf84  895004               mov dword ptr [eax + 4], edx
// 006fdf87  8b4e08               mov ecx, dword ptr [esi + 8]
// 006fdf8a  894808               mov dword ptr [eax + 8], ecx
// 006fdf8d  8b560c               mov edx, dword ptr [esi + 0xc]
// 006fdf90  89500c               mov dword ptr [eax + 0xc], edx
// 006fdf93  e96fffffff           jmp 0x6fdf07
// 006fdf98  8b0e                 mov ecx, dword ptr [esi]
// 006fdf9a  8b450c               mov eax, dword ptr [ebp + 0xc]
// 006fdf9d  8908                 mov dword ptr [eax], ecx
// 006fdf9f  8b5604               mov edx, dword ptr [esi + 4]
// 006fdfa2  895004               mov dword ptr [eax + 4], edx
// 006fdfa5  e95dffffff           jmp 0x6fdf07
// 006fdfaa  8b0e                 mov ecx, dword ptr [esi]
// 006fdfac  8b450c               mov eax, dword ptr [ebp + 0xc]
// 006fdfaf  8908                 mov dword ptr [eax], ecx
// 006fdfb1  8b5604               mov edx, dword ptr [esi + 4]
// 006fdfb4  895004               mov dword ptr [eax + 4], edx
// 006fdfb7  8b4e08               mov ecx, dword ptr [esi + 8]
// 006fdfba  894808               mov dword ptr [eax + 8], ecx
// 006fdfbd  e945ffffff           jmp 0x6fdf07
// 006fdfc2  8d4de4               lea ecx, [ebp - 0x1c]
// 006fdfc5  e848e10b00           call 0x7bc112
// 006fdfca  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 006fdfcd  c745fc00000000       mov dword ptr [ebp - 4], 0
// 006fdfd4  56                   push esi
// 006fdfd5  c645fc01             mov byte ptr [ebp - 4], 1
// 006fdfd9  e8c6e20b00           call 0x7bc2a4
// 006fdfde  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 006fdfe5  e816e10b00           call 0x7bc100
// 006fdfea  b801000000           mov eax, 1
// 006fdfef  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006fdff2  64890d00000000       mov dword ptr fs:[0], ecx
// 006fdff9  59                   pop ecx
// 006fdffa  5f                   pop edi
// 006fdffb  5e                   pop esi
// 006fdffc  5b                   pop ebx
// 006fdffd  8be5                 mov esp, ebp
// 006fdfff  5d                   pop ebp
// 006fe000  c20c00               ret 0xc
// 006fe003  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 006fe006  8955e8               mov dword ptr [ebp - 0x18], edx
// 006fe009  b80fe06f00           mov eax, 0x6fe00f
// 006fe00e  c3                   ret 
// 006fe00f  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 006fe016  e8e5e00b00           call 0x7bc100
// 006fe01b  33c0                 xor eax, eax
// 006fe01d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006fe020  64890d00000000       mov dword ptr fs:[0], ecx
// 006fe027  59                   pop ecx
// 006fe028  5f                   pop edi
// 006fe029  5e                   pop esi
// 006fe02a  5b                   pop ebx
// 006fe02b  8be5                 mov esp, ebp
// 006fe02d  5d                   pop ebp
// 006fe02e  c20c00               ret 0xc
// 006fe031  8d4900               lea ecx, [ecx]
// 006fe034  22df                 and bl, bh
// 006fe036  6f                   outsd dx, dword ptr [esi]
// 006fe037  002ddf6f0068         add byte ptr [0x68006fdf], ch
// 006fe03d  df6f00               fild qword ptr [edi]
// 006fe040  71df                 jno 0x6fe021
// 006fe042  6f                   outsd dx, dword ptr [esi]
// 006fe043  0059df               add byte ptr [ecx - 0x21], bl
// 006fe046  6f                   outsd dx, dword ptr [esi]
// 006fe047  00aadf6f003f         add byte ptr [edx + 0x3f006fdf], ch
// 006fe04d  df6f00               fild qword ptr [edi]
// 006fe050  36df6f00             fild qword ptr ss:[edi]
// 006fe054  c2df6f               ret 0x6fdf
// 006fe057  0000                 add byte ptr [eax], al
// 006fe059  df6f00               fild qword ptr [edi]
// 006fe05c  4d                   dec ebp
// 006fe05d  df6f00               fild qword ptr [edi]
// 006fe060  7adf                 jp 0x6fe041
// 006fe062  6f                   outsd dx, dword ptr [esi]
// 006fe063  0098df6f001b         add byte ptr [eax + 0x1b006fdf], bl
// 006fe069  e06f                 loopne 0x6fe0da
// 006fe06b  0000                 add byte ptr [eax], al
// 006fe06d  0102                 add dword ptr [edx], eax
// 006fe06f  030405060d0d07       add eax, dword ptr [eax + 0x70d0d06]
// 006fe076  080d0d0d0d09         or byte ptr [0x90d0d0d], cl
// 006fe07c  0d0d0d0d0d           or eax, 0xd0d0d0d
// 006fe081  0d0d0d0d0d           or eax, 0xd0d0d0d
// 006fe086  0d0d0a0d0d           or eax, 0xd0d0a0d
// 006fe08b  0d0d0d0d0d           or eax, 0xd0d0d0d
// 006fe090  0d0d0d0d0d           or eax, 0xd0d0d0d
// 006fe095  0d0d0d0d0d           or eax, 0xd0d0d0d
// 006fe09a  0d0d0d0d0d           or eax, 0xd0d0d0d
// 006fe09f  0d0d0d0d0d           or eax, 0xd0d0d0d
// 006fe0a4  0d0d0d0d0d           or eax, 0xd0d0d0d
// 006fe0a9  0d0d0d0d0d           or eax, 0xd0d0d0d
// 006fe0ae  0d0d0d0d0d           or eax, 0xd0d0d0d
// 006fe0b3  0d0d0d0d0d           or eax, 0xd0d0d0d
// 006fe0b8  0d0d0d0d0d           or eax, 0xd0d0d0d
// 006fe0bd  0d0d0d0d0d           or eax, 0xd0d0d0d
// 006fe0c2  0d0d0d0d0d           or eax, 0xd0d0d0d
// 006fe0c7  0d0d0d0d0d           or eax, 0xd0d0d0d

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPPropExchange.cpp
