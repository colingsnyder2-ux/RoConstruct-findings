// roc 2008-06 00661280  unit: RBX::FilterStairs  size: 621 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00661280
//
// 00661280  83ec30               sub esp, 0x30
// 00661283  53                   push ebx
// 00661284  55                   push ebp
// 00661285  56                   push esi
// 00661286  57                   push edi
// 00661287  33ff                 xor edi, edi
// 00661289  57                   push edi
// 0066128a  57                   push edi
// 0066128b  8bd9                 mov ebx, ecx
// 0066128d  8b6b30               mov ebp, dword ptr [ebx + 0x30]
// 00661290  57                   push edi
// 00661291  8bf0                 mov esi, eax
// 00661293  8b4304               mov eax, dword ptr [ebx + 4]
// 00661296  6a0a                 push 0xa
// 00661298  55                   push ebp
// 00661299  89442424             mov dword ptr [esp + 0x24], eax
// 0066129d  e88e9f0000           call 0x66b230
// 006612a2  8bc8                 mov ecx, eax
// 006612a4  83c8ff               or eax, 0xffffffff
// 006612a7  894c2428             mov dword ptr [esp + 0x28], ecx
// 006612ab  894610               mov dword ptr [esi + 0x10], eax
// 006612ae  894614               mov dword ptr [esi + 0x14], eax
// 006612b1  c7060b000000         mov dword ptr [esi], 0xb
// 006612b7  894e08               mov dword ptr [esi + 8], ecx
// 006612ba  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 006612bd  56                   push esi
// 006612be  51                   push ecx
// 006612bf  897c2458             mov dword ptr [esp + 0x58], edi
// 006612c3  897c2450             mov dword ptr [esp + 0x50], edi
// 006612c7  897c2454             mov dword ptr [esp + 0x54], edi
// 006612cb  8974244c             mov dword ptr [esp + 0x4c], esi
// 006612cf  89442444             mov dword ptr [esp + 0x44], eax
// 006612d3  89442448             mov dword ptr [esp + 0x48], eax
// 006612d7  897c2434             mov dword ptr [esp + 0x34], edi
// 006612db  897c243c             mov dword ptr [esp + 0x3c], edi
// 006612df  e84ca50000           call 0x66b830
// 006612e4  83c41c               add esp, 0x1c
// 006612e7  837b107b             cmp dword ptr [ebx + 0x10], 0x7b
// 006612eb  7421                 je 0x66130e
// 006612ed  6a7b                 push 0x7b
// 006612ef  53                   push ebx
// 006612f0  e81b2e0000           call 0x664110
// 006612f5  8b5334               mov edx, dword ptr [ebx + 0x34]
// 006612f8  50                   push eax
// 006612f9  68c0c48400           push 0x84c4c0
// 006612fe  52                   push edx
// 006612ff  e8bc17fcff           call 0x622ac0
// 00661304  50                   push eax
// 00661305  53                   push ebx
// 00661306  e8052f0000           call 0x664210
// 0066130b  83c41c               add esp, 0x1c
// 0066130e  53                   push ebx
// 0066130f  e8ec420000           call 0x665600
// 00661314  83c404               add esp, 4
// 00661317  837b107d             cmp dword ptr [ebx + 0x10], 0x7d
// 0066131b  0f845f010000         je 0x661480
// 00661321  397c2418             cmp dword ptr [esp + 0x18], edi
// 00661325  7435                 je 0x66135c
// 00661327  8d442418             lea eax, [esp + 0x18]
// 0066132b  50                   push eax
// 0066132c  55                   push ebp
// 0066132d  e8fea40000           call 0x66b830
// 00661332  83c408               add esp, 8
// 00661335  837c243c32           cmp dword ptr [esp + 0x3c], 0x32
// 0066133a  897c2418             mov dword ptr [esp + 0x18], edi
// 0066133e  751c                 jne 0x66135c
// 00661340  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00661344  8b542430             mov edx, dword ptr [esp + 0x30]
// 00661348  8b4208               mov eax, dword ptr [edx + 8]
// 0066134b  6a32                 push 0x32
// 0066134d  51                   push ecx
// 0066134e  50                   push eax
// 0066134f  55                   push ebp
// 00661350  e83b9f0000           call 0x66b290
// 00661355  83c410               add esp, 0x10
// 00661358  897c243c             mov dword ptr [esp + 0x3c], edi
// 0066135c  8b4310               mov eax, dword ptr [ebx + 0x10]
// 0066135f  83f85b               cmp eax, 0x5b
// 00661362  0f84f6000000         je 0x66145e
// 00661368  3d1d010000           cmp eax, 0x11d
// 0066136d  7474                 je 0x6613e3
// 0066136f  57                   push edi
// 00661370  8d4c241c             lea ecx, [esp + 0x1c]
// 00661374  51                   push ecx
// 00661375  53                   push ebx
// 00661376  e8750c0000           call 0x661ff0
// 0066137b  83c40c               add esp, 0xc
// 0066137e  817c2438ffff0300     cmp dword ptr [esp + 0x38], 0x3ffff
// 00661386  7e49                 jle 0x6613d1
// 00661388  8b7330               mov esi, dword ptr [ebx + 0x30]
// 0066138b  8b16                 mov edx, dword ptr [esi]
// 0066138d  8b423c               mov eax, dword ptr [edx + 0x3c]
// 00661390  68bcc58400           push 0x84c5bc
// 00661395  68ffff0300           push 0x3ffff
// 0066139a  3bc7                 cmp eax, edi
// 0066139c  7513                 jne 0x6613b1
// 0066139e  8b4610               mov eax, dword ptr [esi + 0x10]
// 006613a1  68f8c48400           push 0x84c4f8
// 006613a6  50                   push eax
// 006613a7  e81417fcff           call 0x622ac0
// 006613ac  83c410               add esp, 0x10
// 006613af  eb12                 jmp 0x6613c3
// 006613b1  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006613b4  50                   push eax
// 006613b5  68d0c48400           push 0x84c4d0
// 006613ba  51                   push ecx
// 006613bb  e80017fcff           call 0x622ac0
// 006613c0  83c414               add esp, 0x14
// 006613c3  8b560c               mov edx, dword ptr [esi + 0xc]
// 006613c6  57                   push edi
// 006613c7  50                   push eax
// 006613c8  52                   push edx
// 006613c9  e8a22d0000           call 0x664170
// 006613ce  83c40c               add esp, 0xc
// 006613d1  b801000000           mov eax, 1
// 006613d6  01442438             add dword ptr [esp + 0x38], eax
// 006613da  0144243c             add dword ptr [esp + 0x3c], eax
// 006613de  e988000000           jmp 0x66146b
// 006613e3  53                   push ebx
// 006613e4  e867420000           call 0x665650
// 006613e9  83c404               add esp, 4
// 006613ec  837b203d             cmp dword ptr [ebx + 0x20], 0x3d
// 006613f0  7465                 je 0x661457
// 006613f2  57                   push edi
// 006613f3  8d44241c             lea eax, [esp + 0x1c]
// 006613f7  50                   push eax
// 006613f8  53                   push ebx
// 006613f9  e8f20b0000           call 0x661ff0
// 006613fe  83c40c               add esp, 0xc
// 00661401  817c2438ffff0300     cmp dword ptr [esp + 0x38], 0x3ffff
// 00661409  7ec6                 jle 0x6613d1
// 0066140b  8b7330               mov esi, dword ptr [ebx + 0x30]
// 0066140e  8b0e                 mov ecx, dword ptr [esi]
// 00661410  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 00661413  68bcc58400           push 0x84c5bc
// 00661418  68ffff0300           push 0x3ffff
// 0066141d  3bc7                 cmp eax, edi
// 0066141f  7519                 jne 0x66143a
// 00661421  8b5610               mov edx, dword ptr [esi + 0x10]
// 00661424  68f8c48400           push 0x84c4f8
// 00661429  52                   push edx
// 0066142a  e89116fcff           call 0x622ac0
// 0066142f  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00661432  83c410               add esp, 0x10
// 00661435  57                   push edi
// 00661436  50                   push eax
// 00661437  51                   push ecx
// 00661438  eb8f                 jmp 0x6613c9
// 0066143a  50                   push eax
// 0066143b  8b4610               mov eax, dword ptr [esi + 0x10]
// 0066143e  68d0c48400           push 0x84c4d0
// 00661443  50                   push eax
// 00661444  e87716fcff           call 0x622ac0
// 00661449  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0066144c  83c414               add esp, 0x14
// 0066144f  57                   push edi
// 00661450  50                   push eax
// 00661451  51                   push ecx
// 00661452  e972ffffff           jmp 0x6613c9
// 00661457  8d542418             lea edx, [esp + 0x18]
// 0066145b  52                   push edx
// 0066145c  eb05                 jmp 0x661463
// 0066145e  8d442418             lea eax, [esp + 0x18]
// 00661462  50                   push eax
// 00661463  e8e8fcffff           call 0x661150
// 00661468  83c404               add esp, 4
// 0066146b  8b4310               mov eax, dword ptr [ebx + 0x10]
// 0066146e  83f82c               cmp eax, 0x2c
// 00661471  0f8497feffff         je 0x66130e
// 00661477  83f83b               cmp eax, 0x3b
// 0066147a  0f848efeffff         je 0x66130e
// 00661480  8b442410             mov eax, dword ptr [esp + 0x10]
// 00661484  6a7b                 push 0x7b
// 00661486  bf7d000000           mov edi, 0x7d
// 0066148b  8bf3                 mov esi, ebx
// 0066148d  e88ef3ffff           call 0x660820
// 00661492  8d74241c             lea esi, [esp + 0x1c]
// 00661496  8bfd                 mov edi, ebp
// 00661498  e883fdffff           call 0x661220
// 0066149d  8b4d00               mov ecx, dword ptr [ebp]
// 006614a0  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 006614a4  8b510c               mov edx, dword ptr [ecx + 0xc]
// 006614a7  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006614ab  50                   push eax
// 006614ac  8d34ba               lea esi, [edx + edi*4]
// 006614af  e83c11fcff           call 0x6225f0
// 006614b4  8b0e                 mov ecx, dword ptr [esi]
// 006614b6  c1e017               shl eax, 0x17
// 006614b9  81e1ffff7f00         and ecx, 0x7fffff
// 006614bf  0bc1                 or eax, ecx
// 006614c1  8906                 mov dword ptr [esi], eax
// 006614c3  8b5500               mov edx, dword ptr [ebp]
// 006614c6  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 006614ca  8b420c               mov eax, dword ptr [edx + 0xc]
// 006614cd  51                   push ecx
// 006614ce  8d34b8               lea esi, [eax + edi*4]
// 006614d1  e81a11fcff           call 0x6225f0
// 006614d6  c1e00e               shl eax, 0xe
// 006614d9  3306                 xor eax, dword ptr [esi]
// 006614db  83c40c               add esp, 0xc
// 006614de  5f                   pop edi
// 006614df  2500c07f00           and eax, 0x7fc000
// 006614e4  3106                 xor dword ptr [esi], eax
// 006614e6  5e                   pop esi
// 006614e7  5d                   pop ebp
// 006614e8  5b                   pop ebx
// 006614e9  83c430               add esp, 0x30
// 006614ec  c3                   ret 
// library lua-5.1.1/lparser.c (function _constructor)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.1 lparser.c
