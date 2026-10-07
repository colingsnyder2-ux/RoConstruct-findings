// roc 2007-08 00504e40  unit: G3D::Log  size: 1230 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00504e40
//
// 00504e40  6aff                 push -1
// 00504e42  686bf67400           push 0x74f66b
// 00504e47  64a100000000         mov eax, dword ptr fs:[0]
// 00504e4d  50                   push eax
// 00504e4e  83ec5c               sub esp, 0x5c
// 00504e51  a188518b00           mov eax, dword ptr [0x8b5188]
// 00504e56  33c4                 xor eax, esp
// 00504e58  89442458             mov dword ptr [esp + 0x58], eax
// 00504e5c  53                   push ebx
// 00504e5d  55                   push ebp
// 00504e5e  56                   push esi
// 00504e5f  57                   push edi
// 00504e60  a188518b00           mov eax, dword ptr [0x8b5188]
// 00504e65  33c4                 xor eax, esp
// 00504e67  50                   push eax
// 00504e68  8d442470             lea eax, [esp + 0x70]
// 00504e6c  64a300000000         mov dword ptr fs:[0], eax
// 00504e72  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 00504e79  83f808               cmp eax, 8
// 00504e7c  8bbc2484000000       mov edi, dword ptr [esp + 0x84]
// 00504e83  8bb42480000000       mov esi, dword ptr [esp + 0x80]
// 00504e8a  897c2414             mov dword ptr [esp + 0x14], edi
// 00504e8e  0f855b040000         jne 0x5052ef
// 00504e94  8d4c2450             lea ecx, [esp + 0x50]
// 00504e98  ff15a4e67700         call dword ptr [0x77e6a4]
// 00504e9e  8b4614               mov eax, dword ptr [esi + 0x14]
// 00504ea1  83f805               cmp eax, 5
// 00504ea4  c744247800000000     mov dword ptr [esp + 0x78], 0
// 00504eac  0f82b3000000         jb 0x504f65
// 00504eb2  83c0ff               add eax, -1
// 00504eb5  83f805               cmp eax, 5
// 00504eb8  8bd8                 mov ebx, eax
// 00504eba  7d05                 jge 0x504ec1
// 00504ebc  bb05000000           mov ebx, 5
// 00504ec1  bd01000000           mov ebp, 1
// 00504ec6  3bdd                 cmp ebx, ebp
// 00504ec8  0f8c97000000         jl 0x504f65
// 00504ece  8bff                 mov edi, edi
// 00504ed0  8b4614               mov eax, dword ptr [esi + 0x14]
// 00504ed3  8bf8                 mov edi, eax
// 00504ed5  2bfd                 sub edi, ebp
// 00504ed7  3bf8                 cmp edi, eax
// 00504ed9  7606                 jbe 0x504ee1
// 00504edb  ff15d8e67700         call dword ptr [0x77e6d8]
// 00504ee1  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 00504ee5  7205                 jb 0x504eec
// 00504ee7  8b4604               mov eax, dword ptr [esi + 4]
// 00504eea  eb03                 jmp 0x504eef
// 00504eec  8d4604               lea eax, [esi + 4]
// 00504eef  803c382e             cmp byte ptr [eax + edi], 0x2e
// 00504ef3  7409                 je 0x504efe
// 00504ef5  83c501               add ebp, 1
// 00504ef8  3beb                 cmp ebp, ebx
// 00504efa  7ed4                 jle 0x504ed0
// 00504efc  eb63                 jmp 0x504f61
// 00504efe  8b0d3ce67700         mov ecx, dword ptr [0x77e63c]
// 00504f04  8b4614               mov eax, dword ptr [esi + 0x14]
// 00504f07  8b11                 mov edx, dword ptr [ecx]
// 00504f09  2bc5                 sub eax, ebp
// 00504f0b  52                   push edx
// 00504f0c  83c001               add eax, 1
// 00504f0f  50                   push eax
// 00504f10  8d442420             lea eax, [esp + 0x20]
// 00504f14  50                   push eax
// 00504f15  8bce                 mov ecx, esi
// 00504f17  ff1538e67700         call dword ptr [0x77e638]
// 00504f1d  50                   push eax
// 00504f1e  8d4c2438             lea ecx, [esp + 0x38]
// 00504f22  51                   push ecx
// 00504f23  c684248000000001     mov byte ptr [esp + 0x80], 1
// 00504f2b  e8f0360000           call 0x508620
// 00504f30  83c408               add esp, 8
// 00504f33  50                   push eax
// 00504f34  8d4c2454             lea ecx, [esp + 0x54]
// 00504f38  c644247c02           mov byte ptr [esp + 0x7c], 2
// 00504f3d  ff1590e67700         call dword ptr [0x77e690]
// 00504f43  8d4c2434             lea ecx, [esp + 0x34]
// 00504f47  c644247801           mov byte ptr [esp + 0x78], 1
// 00504f4c  ff15ace67700         call dword ptr [0x77e6ac]
// 00504f52  8d4c2418             lea ecx, [esp + 0x18]
// 00504f56  c644247800           mov byte ptr [esp + 0x78], 0
// 00504f5b  ff15ace67700         call dword ptr [0x77e6ac]
// 00504f61  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00504f65  8d542450             lea edx, [esp + 0x50]
// 00504f69  6840047a00           push 0x7a0440
// 00504f6e  52                   push edx
// 00504f6f  ff15f8e57700         call dword ptr [0x77e5f8]
// 00504f75  8b9c2490000000       mov ebx, dword ptr [esp + 0x90]
// 00504f7c  83c408               add esp, 8
// 00504f7f  84c0                 test al, al
// 00504f81  744a                 je 0x504fcd
// 00504f83  83fb03               cmp ebx, 3
// 00504f86  7e45                 jle 0x504fcd
// 00504f88  0fb607               movzx eax, byte ptr [edi]
// 00504f8b  83e850               sub eax, 0x50
// 00504f8e  baffffffff           mov edx, 0xffffffff
// 00504f93  7509                 jne 0x504f9e
// 00504f95  0fb64701             movzx eax, byte ptr [edi + 1]
// 00504f99  83e836               sub eax, 0x36
// 00504f9c  740d                 je 0x504fab
// 00504f9e  85c0                 test eax, eax
// 00504fa0  b901000000           mov ecx, 1
// 00504fa5  7f06                 jg 0x504fad
// 00504fa7  8bca                 mov ecx, edx
// 00504fa9  eb02                 jmp 0x504fad
// 00504fab  33c9                 xor ecx, ecx
// 00504fad  85c9                 test ecx, ecx
// 00504faf  89542478             mov dword ptr [esp + 0x78], edx
// 00504fb3  8d4c2450             lea ecx, [esp + 0x50]
// 00504fb7  0f85c2000000         jne 0x50507f
// 00504fbd  ff15ace67700         call dword ptr [0x77e6ac]
// 00504fc3  b807000000           mov eax, 7
// 00504fc8  e922030000           jmp 0x5052ef
// 00504fcd  8d442450             lea eax, [esp + 0x50]
// 00504fd1  50                   push eax
// 00504fd2  e8b9f6ffff           call 0x504690
// 00504fd7  8bf0                 mov esi, eax
// 00504fd9  83c404               add esp, 4
// 00504fdc  83fe08               cmp esi, 8
// 00504fdf  741e                 je 0x504fff
// 00504fe1  83fe09               cmp esi, 9
// 00504fe4  7419                 je 0x504fff
// 00504fe6  8d4c2450             lea ecx, [esp + 0x50]
// 00504fea  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 00504ff2  ff15ace67700         call dword ptr [0x77e6ac]
// 00504ff8  8bc6                 mov eax, esi
// 00504ffa  e9f0020000           jmp 0x5052ef
// 00504fff  83ceff               or esi, 0xffffffff
// 00505002  83fb03               cmp ebx, 3
// 00505005  0f8ec0000000         jle 0x5050cb
// 0050500b  0fb607               movzx eax, byte ptr [edi]
// 0050500e  83e850               sub eax, 0x50
// 00505011  7509                 jne 0x50501c
// 00505013  0fb64701             movzx eax, byte ptr [edi + 1]
// 00505017  83e833               sub eax, 0x33
// 0050501a  740d                 je 0x505029
// 0050501c  85c0                 test eax, eax
// 0050501e  b901000000           mov ecx, 1
// 00505023  7f06                 jg 0x50502b
// 00505025  8bce                 mov ecx, esi
// 00505027  eb02                 jmp 0x50502b
// 00505029  33c9                 xor ecx, ecx
// 0050502b  85c9                 test ecx, ecx
// 0050502d  7448                 je 0x505077
// 0050502f  0fb607               movzx eax, byte ptr [edi]
// 00505032  83e850               sub eax, 0x50
// 00505035  7509                 jne 0x505040
// 00505037  0fb64701             movzx eax, byte ptr [edi + 1]
// 0050503b  83e832               sub eax, 0x32
// 0050503e  740d                 je 0x50504d
// 00505040  85c0                 test eax, eax
// 00505042  b901000000           mov ecx, 1
// 00505047  7f06                 jg 0x50504f
// 00505049  8bce                 mov ecx, esi
// 0050504b  eb02                 jmp 0x50504f
// 0050504d  33c9                 xor ecx, ecx
// 0050504f  85c9                 test ecx, ecx
// 00505051  7424                 je 0x505077
// 00505053  0fb607               movzx eax, byte ptr [edi]
// 00505056  83e850               sub eax, 0x50
// 00505059  7509                 jne 0x505064
// 0050505b  0fb64701             movzx eax, byte ptr [edi + 1]
// 0050505f  83e831               sub eax, 0x31
// 00505062  740d                 je 0x505071
// 00505064  85c0                 test eax, eax
// 00505066  b901000000           mov ecx, 1
// 0050506b  7f06                 jg 0x505073
// 0050506d  8bce                 mov ecx, esi
// 0050506f  eb02                 jmp 0x505073
// 00505071  33c9                 xor ecx, ecx
// 00505073  85c9                 test ecx, ecx
// 00505075  7518                 jne 0x50508f
// 00505077  89742478             mov dword ptr [esp + 0x78], esi
// 0050507b  8d4c2450             lea ecx, [esp + 0x50]
// 0050507f  ff15ace67700         call dword ptr [0x77e6ac]
// 00505085  b806000000           mov eax, 6
// 0050508a  e960020000           jmp 0x5052ef
// 0050508f  0fb607               movzx eax, byte ptr [edi]
// 00505092  83e850               sub eax, 0x50
// 00505095  7509                 jne 0x5050a0
// 00505097  0fb64701             movzx eax, byte ptr [edi + 1]
// 0050509b  83e836               sub eax, 0x36
// 0050509e  740d                 je 0x5050ad
// 005050a0  85c0                 test eax, eax
// 005050a2  b901000000           mov ecx, 1
// 005050a7  7f06                 jg 0x5050af
// 005050a9  8bce                 mov ecx, esi
// 005050ab  eb02                 jmp 0x5050af
// 005050ad  33c9                 xor ecx, ecx
// 005050af  85c9                 test ecx, ecx
// 005050b1  7518                 jne 0x5050cb
// 005050b3  8d4c2450             lea ecx, [esp + 0x50]
// 005050b7  89742478             mov dword ptr [esp + 0x78], esi
// 005050bb  ff15ace67700         call dword ptr [0x77e6ac]
// 005050c1  b807000000           mov eax, 7
// 005050c6  e924020000           jmp 0x5052ef
// 005050cb  83fb08               cmp ebx, 8
// 005050ce  7e29                 jle 0x5050f9
// 005050d0  6a08                 push 8
// 005050d2  6a00                 push 0
// 005050d4  57                   push edi
// 005050d5  e836fc0000           call 0x514d10
// 005050da  83c40c               add esp, 0xc
// 005050dd  85c0                 test eax, eax
// 005050df  7518                 jne 0x5050f9
// 005050e1  8d4c2450             lea ecx, [esp + 0x50]
// 005050e5  89742478             mov dword ptr [esp + 0x78], esi
// 005050e9  ff15ace67700         call dword ptr [0x77e6ac]
// 005050ef  b805000000           mov eax, 5
// 005050f4  e9f6010000           jmp 0x5052ef
// 005050f9  85db                 test ebx, ebx
// 005050fb  7e1d                 jle 0x50511a
// 005050fd  803f42               cmp byte ptr [edi], 0x42
// 00505100  7518                 jne 0x50511a
// 00505102  8d4c2450             lea ecx, [esp + 0x50]
// 00505106  89742478             mov dword ptr [esp + 0x78], esi
// 0050510a  ff15ace67700         call dword ptr [0x77e6ac]
// 00505110  b801000000           mov eax, 1
// 00505115  e9d5010000           jmp 0x5052ef
// 0050511a  83fb0a               cmp ebx, 0xa
// 0050511d  0f8eb9000000         jle 0x5051dc
// 00505123  83fb0b               cmp ebx, 0xb
// 00505126  0f8eb0000000         jle 0x5051dc
// 0050512c  803fff               cmp byte ptr [edi], 0xff
// 0050512f  0f85a7000000         jne 0x5051dc
// 00505135  b804000000           mov eax, 4
// 0050513a  b944057a00           mov ecx, 0x7a0544
// 0050513f  8d5706               lea edx, [edi + 6]
// 00505142  8b2a                 mov ebp, dword ptr [edx]
// 00505144  3b29                 cmp ebp, dword ptr [ecx]
// 00505146  7512                 jne 0x50515a
// 00505148  83e804               sub eax, 4
// 0050514b  83c104               add ecx, 4
// 0050514e  83c204               add edx, 4
// 00505151  83f804               cmp eax, 4
// 00505154  73ec                 jae 0x505142
// 00505156  85c0                 test eax, eax
// 00505158  7462                 je 0x5051bc
// 0050515a  0fb629               movzx ebp, byte ptr [ecx]
// 0050515d  0fb632               movzx esi, byte ptr [edx]
// 00505160  2bf5                 sub esi, ebp
// 00505162  7545                 jne 0x5051a9
// 00505164  83e801               sub eax, 1
// 00505167  83c101               add ecx, 1
// 0050516a  83c201               add edx, 1
// 0050516d  85c0                 test eax, eax
// 0050516f  7448                 je 0x5051b9
// 00505171  0fb629               movzx ebp, byte ptr [ecx]
// 00505174  0fb632               movzx esi, byte ptr [edx]
// 00505177  2bf5                 sub esi, ebp
// 00505179  752e                 jne 0x5051a9
// 0050517b  83e801               sub eax, 1
// 0050517e  83c101               add ecx, 1
// 00505181  83c201               add edx, 1
// 00505184  85c0                 test eax, eax
// 00505186  7431                 je 0x5051b9
// 00505188  0fb629               movzx ebp, byte ptr [ecx]
// 0050518b  0fb632               movzx esi, byte ptr [edx]
// 0050518e  2bf5                 sub esi, ebp
// 00505190  7517                 jne 0x5051a9
// 00505192  83e801               sub eax, 1
// 00505195  83c101               add ecx, 1
// 00505198  83c201               add edx, 1
// 0050519b  85c0                 test eax, eax
// 0050519d  741a                 je 0x5051b9
// 0050519f  0fb609               movzx ecx, byte ptr [ecx]
// 005051a2  0fb632               movzx esi, byte ptr [edx]
// 005051a5  2bf1                 sub esi, ecx
// 005051a7  7410                 je 0x5051b9
// 005051a9  85f6                 test esi, esi
// 005051ab  b801000000           mov eax, 1
// 005051b0  7f0e                 jg 0x5051c0
// 005051b2  83ceff               or esi, 0xffffffff
// 005051b5  8bc6                 mov eax, esi
// 005051b7  eb0a                 jmp 0x5051c3
// 005051b9  83ceff               or esi, 0xffffffff
// 005051bc  33c0                 xor eax, eax
// 005051be  eb03                 jmp 0x5051c3
// 005051c0  83ceff               or esi, 0xffffffff
// 005051c3  85c0                 test eax, eax
// 005051c5  7515                 jne 0x5051dc
// 005051c7  8d4c2450             lea ecx, [esp + 0x50]
// 005051cb  89742478             mov dword ptr [esp + 0x78], esi
// 005051cf  ff15ace67700         call dword ptr [0x77e6ac]
// 005051d5  33c0                 xor eax, eax
// 005051d7  e913010000           jmp 0x5052ef
// 005051dc  83fb28               cmp ebx, 0x28
// 005051df  0f8ea8000000         jle 0x50528d
// 005051e5  b810000000           mov eax, 0x10
// 005051ea  b908037a00           mov ecx, 0x7a0308
// 005051ef  8d541fee             lea edx, [edi + ebx - 0x12]
// 005051f3  8b2a                 mov ebp, dword ptr [edx]
// 005051f5  3b29                 cmp ebp, dword ptr [ecx]
// 005051f7  7512                 jne 0x50520b
// 005051f9  83e804               sub eax, 4
// 005051fc  83c104               add ecx, 4
// 005051ff  83c204               add edx, 4
// 00505202  83f804               cmp eax, 4
// 00505205  73ec                 jae 0x5051f3
// 00505207  85c0                 test eax, eax
// 00505209  7462                 je 0x50526d
// 0050520b  0fb632               movzx esi, byte ptr [edx]
// 0050520e  0fb629               movzx ebp, byte ptr [ecx]
// 00505211  2bf5                 sub esi, ebp
// 00505213  7545                 jne 0x50525a
// 00505215  83e801               sub eax, 1
// 00505218  83c101               add ecx, 1
// 0050521b  83c201               add edx, 1
// 0050521e  85c0                 test eax, eax
// 00505220  7448                 je 0x50526a
// 00505222  0fb632               movzx esi, byte ptr [edx]
// 00505225  0fb629               movzx ebp, byte ptr [ecx]
// 00505228  2bf5                 sub esi, ebp
// 0050522a  752e                 jne 0x50525a
// 0050522c  83e801               sub eax, 1
// 0050522f  83c101               add ecx, 1
// 00505232  83c201               add edx, 1
// 00505235  85c0                 test eax, eax
// 00505237  7431                 je 0x50526a
// 00505239  0fb632               movzx esi, byte ptr [edx]
// 0050523c  0fb629               movzx ebp, byte ptr [ecx]
// 0050523f  2bf5                 sub esi, ebp
// 00505241  7517                 jne 0x50525a
// 00505243  83e801               sub eax, 1
// 00505246  83c101               add ecx, 1
// 00505249  83c201               add edx, 1
// 0050524c  85c0                 test eax, eax
// 0050524e  741a                 je 0x50526a
// 00505250  0fb632               movzx esi, byte ptr [edx]
// 00505253  0fb611               movzx edx, byte ptr [ecx]
// 00505256  2bf2                 sub esi, edx
// 00505258  7410                 je 0x50526a
// 0050525a  85f6                 test esi, esi
// 0050525c  b801000000           mov eax, 1
// 00505261  7f0e                 jg 0x505271
// 00505263  83ceff               or esi, 0xffffffff
// 00505266  8bc6                 mov eax, esi
// 00505268  eb0a                 jmp 0x505274
// 0050526a  83ceff               or esi, 0xffffffff
// 0050526d  33c0                 xor eax, eax
// 0050526f  eb03                 jmp 0x505274
// 00505271  83ceff               or esi, 0xffffffff
// 00505274  85c0                 test eax, eax
// 00505276  7515                 jne 0x50528d
// 00505278  8d4c2450             lea ecx, [esp + 0x50]
// 0050527c  89742478             mov dword ptr [esp + 0x78], esi
// 00505280  ff15ace67700         call dword ptr [0x77e6ac]
// 00505286  b802000000           mov eax, 2
// 0050528b  eb62                 jmp 0x5052ef
// 0050528d  83fb04               cmp ebx, 4
// 00505290  7e2c                 jle 0x5052be
// 00505292  803f00               cmp byte ptr [edi], 0
// 00505295  7527                 jne 0x5052be
// 00505297  807f0100             cmp byte ptr [edi + 1], 0
// 0050529b  7521                 jne 0x5052be
// 0050529d  807f0200             cmp byte ptr [edi + 2], 0
// 005052a1  751b                 jne 0x5052be
// 005052a3  807f0301             cmp byte ptr [edi + 3], 1
// 005052a7  7515                 jne 0x5052be
// 005052a9  8d4c2450             lea ecx, [esp + 0x50]
// 005052ad  89742478             mov dword ptr [esp + 0x78], esi
// 005052b1  ff15ace67700         call dword ptr [0x77e6ac]
// 005052b7  b804000000           mov eax, 4
// 005052bc  eb31                 jmp 0x5052ef
// 005052be  85db                 test ebx, ebx
// 005052c0  7e1a                 jle 0x5052dc
// 005052c2  803f0a               cmp byte ptr [edi], 0xa
// 005052c5  7515                 jne 0x5052dc
// 005052c7  8d4c2450             lea ecx, [esp + 0x50]
// 005052cb  89742478             mov dword ptr [esp + 0x78], esi
// 005052cf  ff15ace67700         call dword ptr [0x77e6ac]
// 005052d5  b803000000           mov eax, 3
// 005052da  eb13                 jmp 0x5052ef
// 005052dc  8d4c2450             lea ecx, [esp + 0x50]
// 005052e0  89742478             mov dword ptr [esp + 0x78], esi
// 005052e4  ff15ace67700         call dword ptr [0x77e6ac]
// 005052ea  b809000000           mov eax, 9
// 005052ef  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 005052f3  64890d00000000       mov dword ptr fs:[0], ecx
// 005052fa  59                   pop ecx
// 005052fb  5f                   pop edi
// 005052fc  5e                   pop esi
// 005052fd  5d                   pop ebp
// 005052fe  5b                   pop ebx
// 005052ff  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00505303  33cc                 xor ecx, esp
// 00505305  e814b71200           call 0x630a1e
// 0050530a  83c468               add esp, 0x68
// 0050530d  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage.cpp (function ?resolveFormat@GImage@G3D@@CA?AW4Format@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBEHW4312@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
