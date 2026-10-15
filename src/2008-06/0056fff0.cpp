// roc 2008-06 0056fff0  unit: RBX::W4NormalId::?$EnumDesc  size: 931 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056fff0
//
// 0056fff0  6aff                 push -1
// 0056fff2  6850007d00           push 0x7d0050
// 0056fff7  64a100000000         mov eax, dword ptr fs:[0]
// 0056fffd  50                   push eax
// 0056fffe  64892500000000       mov dword ptr fs:[0], esp
// 00570005  83ec10               sub esp, 0x10
// 00570008  53                   push ebx
// 00570009  55                   push ebp
// 0057000a  56                   push esi
// 0057000b  57                   push edi
// 0057000c  8bf1                 mov esi, ecx
// 0057000e  e81dfeffff           call 0x56fe30
// 00570013  8bc8                 mov ecx, eax
// 00570015  89442418             mov dword ptr [esp + 0x18], eax
// 00570019  e87230ffff           call 0x563090
// 0057001e  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00570023  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 00570026  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0057002e  396e0c               cmp dword ptr [esi + 0xc], ebp
// 00570031  7606                 jbe 0x570039
// 00570033  ff1590288000         call dword ptr [0x802890]
// 00570039  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0057003c  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 0057003f  7606                 jbe 0x570047
// 00570041  ff1590288000         call dword ptr [0x802890]
// 00570047  8b1e                 mov ebx, dword ptr [esi]
// 00570049  6a00                 push 0
// 0057004b  6800b55600           push 0x56b500
// 00570050  8d442438             lea eax, [esp + 0x38]
// 00570054  50                   push eax
// 00570055  55                   push ebp
// 00570056  57                   push edi
// 00570057  897c2428             mov dword ptr [esp + 0x28], edi
// 0057005b  e830feffff           call 0x56fe90
// 00570060  8b7e10               mov edi, dword ptr [esi + 0x10]
// 00570063  83c414               add esp, 0x14
// 00570066  8be8                 mov ebp, eax
// 00570068  397e0c               cmp dword ptr [esi + 0xc], edi
// 0057006b  7606                 jbe 0x570073
// 0057006d  ff1590288000         call dword ptr [0x802890]
// 00570073  8b06                 mov eax, dword ptr [esi]
// 00570075  85db                 test ebx, ebx
// 00570077  7404                 je 0x57007d
// 00570079  3bd8                 cmp ebx, eax
// 0057007b  7406                 je 0x570083
// 0057007d  ff1590288000         call dword ptr [0x802890]
// 00570083  3bef                 cmp ebp, edi
// 00570085  7424                 je 0x5700ab
// 00570087  85db                 test ebx, ebx
// 00570089  0f8599000000         jne 0x570128
// 0057008f  ff1590288000         call dword ptr [0x802890]
// 00570095  33c0                 xor eax, eax
// 00570097  3b6810               cmp ebp, dword ptr [eax + 0x10]
// 0057009a  7206                 jb 0x5700a2
// 0057009c  ff1590288000         call dword ptr [0x802890]
// 005700a2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005700a6  394d00               cmp dword ptr [ebp], ecx
// 005700a9  7413                 je 0x5700be
// 005700ab  8d542430             lea edx, [esp + 0x30]
// 005700af  52                   push edx
// 005700b0  55                   push ebp
// 005700b1  53                   push ebx
// 005700b2  8d44241c             lea eax, [esp + 0x1c]
// 005700b6  50                   push eax
// 005700b7  8bce                 mov ecx, esi
// 005700b9  e8a27bf5ff           call 0x4c7c60
// 005700be  8b5e24               mov ebx, dword ptr [esi + 0x24]
// 005700c1  3b5e28               cmp ebx, dword ptr [esi + 0x28]
// 005700c4  7606                 jbe 0x5700cc
// 005700c6  ff1590288000         call dword ptr [0x802890]
// 005700cc  8b7e18               mov edi, dword ptr [esi + 0x18]
// 005700cf  90                   nop 
// 005700d0  8b6e28               mov ebp, dword ptr [esi + 0x28]
// 005700d3  396e24               cmp dword ptr [esi + 0x24], ebp
// 005700d6  7606                 jbe 0x5700de
// 005700d8  ff1590288000         call dword ptr [0x802890]
// 005700de  8b4618               mov eax, dword ptr [esi + 0x18]
// 005700e1  85ff                 test edi, edi
// 005700e3  7404                 je 0x5700e9
// 005700e5  3bf8                 cmp edi, eax
// 005700e7  7406                 je 0x5700ef
// 005700e9  ff1590288000         call dword ptr [0x802890]
// 005700ef  3bdd                 cmp ebx, ebp
// 005700f1  7444                 je 0x570137
// 005700f3  8b2d90288000         mov ebp, dword ptr [0x802890]
// 005700f9  85ff                 test edi, edi
// 005700fb  7532                 jne 0x57012f
// 005700fd  ffd5                 call ebp
// 005700ff  33c0                 xor eax, eax
// 00570101  3b5810               cmp ebx, dword ptr [eax + 0x10]
// 00570104  7202                 jb 0x570108
// 00570106  ffd5                 call ebp
// 00570108  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0057010c  51                   push ecx
// 0057010d  8b0b                 mov ecx, dword ptr [ebx]
// 0057010f  e8dcfeffff           call 0x56fff0
// 00570114  85ff                 test edi, edi
// 00570116  751b                 jne 0x570133
// 00570118  ffd5                 call ebp
// 0057011a  33c0                 xor eax, eax
// 0057011c  3b5810               cmp ebx, dword ptr [eax + 0x10]
// 0057011f  7202                 jb 0x570123
// 00570121  ffd5                 call ebp
// 00570123  83c304               add ebx, 4
// 00570126  eba8                 jmp 0x5700d0
// 00570128  8b03                 mov eax, dword ptr [ebx]
// 0057012a  e968ffffff           jmp 0x570097
// 0057012f  8b07                 mov eax, dword ptr [edi]
// 00570131  ebce                 jmp 0x570101
// 00570133  8b07                 mov eax, dword ptr [edi]
// 00570135  ebe5                 jmp 0x57011c
// 00570137  68d44c9700           push 0x974cd4
// 0057013c  68e0ff5600           push 0x56ffe0
// 00570141  e8ea71feff           call 0x557330
// 00570146  83c408               add esp, 8
// 00570149  f605d04c970001       test byte ptr [0x974cd0], 1
// 00570150  7551                 jne 0x5701a3
// 00570152  830dd04c970001       or dword ptr [0x974cd0], 1
// 00570159  6a04                 push 4
// 0057015b  c644242c01           mov byte ptr [esp + 0x2c], 1
// 00570160  e8bb071300           call 0x6a0920
// 00570165  33ed                 xor ebp, ebp
// 00570167  83c404               add esp, 4
// 0057016a  3bc5                 cmp eax, ebp
// 0057016c  7408                 je 0x570176
// 0057016e  c700b84c9700         mov dword ptr [eax], 0x974cb8
// 00570174  eb02                 jmp 0x570178
// 00570176  33c0                 xor eax, eax
// 00570178  a3b84c9700           mov dword ptr [0x974cb8], eax
// 0057017d  6850d37f00           push 0x7fd350
// 00570182  892dc44c9700         mov dword ptr [0x974cc4], ebp
// 00570188  892dc84c9700         mov dword ptr [0x974cc8], ebp
// 0057018e  892dcc4c9700         mov dword ptr [0x974ccc], ebp
// 00570194  e816161300           call 0x6a17af
// 00570199  83c404               add esp, 4
// 0057019c  c644242800           mov byte ptr [esp + 0x28], 0
// 005701a1  eb02                 jmp 0x5701a5
// 005701a3  33ed                 xor ebp, ebp
// 005701a5  8b35c44c9700         mov esi, dword ptr [0x974cc4]
// 005701ab  3b35c84c9700         cmp esi, dword ptr [0x974cc8]
// 005701b1  7606                 jbe 0x5701b9
// 005701b3  ff1590288000         call dword ptr [0x802890]
// 005701b9  8b3db84c9700         mov edi, dword ptr [0x974cb8]
// 005701bf  897c2410             mov dword ptr [esp + 0x10], edi
// 005701c3  8bde                 mov ebx, esi
// 005701c5  eb09                 jmp 0x5701d0
// 005701c7  8da42400000000       lea esp, [esp]
// 005701ce  8bff                 mov edi, edi
// 005701d0  68d44c9700           push 0x974cd4
// 005701d5  68e0ff5600           push 0x56ffe0
// 005701da  e85171feff           call 0x557330
// 005701df  83c408               add esp, 8
// 005701e2  f605d04c970001       test byte ptr [0x974cd0], 1
// 005701e9  754d                 jne 0x570238
// 005701eb  830dd04c970001       or dword ptr [0x974cd0], 1
// 005701f2  6a04                 push 4
// 005701f4  c644242c03           mov byte ptr [esp + 0x2c], 3
// 005701f9  e822071300           call 0x6a0920
// 005701fe  83c404               add esp, 4
// 00570201  3bc5                 cmp eax, ebp
// 00570203  7408                 je 0x57020d
// 00570205  c700b84c9700         mov dword ptr [eax], 0x974cb8
// 0057020b  eb02                 jmp 0x57020f
// 0057020d  33c0                 xor eax, eax
// 0057020f  a3b84c9700           mov dword ptr [0x974cb8], eax
// 00570214  6850d37f00           push 0x7fd350
// 00570219  892dc44c9700         mov dword ptr [0x974cc4], ebp
// 0057021f  892dc84c9700         mov dword ptr [0x974cc8], ebp
// 00570225  892dcc4c9700         mov dword ptr [0x974ccc], ebp
// 0057022b  e87f151300           call 0x6a17af
// 00570230  83c404               add esp, 4
// 00570233  c644242800           mov byte ptr [esp + 0x28], 0
// 00570238  a1c84c9700           mov eax, dword ptr [0x974cc8]
// 0057023d  8bf0                 mov esi, eax
// 0057023f  3905c44c9700         cmp dword ptr [0x974cc4], eax
// 00570245  7606                 jbe 0x57024d
// 00570247  ff1590288000         call dword ptr [0x802890]
// 0057024d  3bfd                 cmp edi, ebp
// 0057024f  7408                 je 0x570259
// 00570251  3b3db84c9700         cmp edi, dword ptr [0x974cb8]
// 00570257  7406                 je 0x57025f
// 00570259  ff1590288000         call dword ptr [0x802890]
// 0057025f  3bde                 cmp ebx, esi
// 00570261  0f8488000000         je 0x5702ef
// 00570267  3bfd                 cmp edi, ebp
// 00570269  7578                 jne 0x5702e3
// 0057026b  ff1590288000         call dword ptr [0x802890]
// 00570271  33c0                 xor eax, eax
// 00570273  3b5810               cmp ebx, dword ptr [eax + 0x10]
// 00570276  7206                 jb 0x57027e
// 00570278  ff1590288000         call dword ptr [0x802890]
// 0057027e  8b33                 mov esi, dword ptr [ebx]
// 00570280  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00570284  3bf7                 cmp esi, edi
// 00570286  0f84e1000000         je 0x57036d
// 0057028c  8b5604               mov edx, dword ptr [esi + 4]
// 0057028f  8b4704               mov eax, dword ptr [edi + 4]
// 00570292  52                   push edx
// 00570293  50                   push eax
// 00570294  e807f8eaff           call 0x41faa0
// 00570299  83c408               add esp, 8
// 0057029c  3bc5                 cmp eax, ebp
// 0057029e  7c4b                 jl 0x5702eb
// 005702a0  751a                 jne 0x5702bc
// 005702a2  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005702a5  8b5104               mov edx, dword ptr [ecx + 4]
// 005702a8  8b470c               mov eax, dword ptr [edi + 0xc]
// 005702ab  8b4804               mov ecx, dword ptr [eax + 4]
// 005702ae  52                   push edx
// 005702af  51                   push ecx
// 005702b0  e8ebf7eaff           call 0x41faa0
// 005702b5  83c408               add esp, 8
// 005702b8  3bc5                 cmp eax, ebp
// 005702ba  7c2f                 jl 0x5702eb
// 005702bc  8b442410             mov eax, dword ptr [esp + 0x10]
// 005702c0  3bc5                 cmp eax, ebp
// 005702c2  7523                 jne 0x5702e7
// 005702c4  ff1590288000         call dword ptr [0x802890]
// 005702ca  33c0                 xor eax, eax
// 005702cc  3b5810               cmp ebx, dword ptr [eax + 0x10]
// 005702cf  7206                 jb 0x5702d7
// 005702d1  ff1590288000         call dword ptr [0x802890]
// 005702d7  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005702db  83c304               add ebx, 4
// 005702de  e9edfeffff           jmp 0x5701d0
// 005702e3  8b07                 mov eax, dword ptr [edi]
// 005702e5  eb8c                 jmp 0x570273
// 005702e7  8b00                 mov eax, dword ptr [eax]
// 005702e9  ebe1                 jmp 0x5702cc
// 005702eb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005702ef  68d44c9700           push 0x974cd4
// 005702f4  68e0ff5600           push 0x56ffe0
// 005702f9  e83270feff           call 0x557330
// 005702fe  83c408               add esp, 8
// 00570301  f605d04c970001       test byte ptr [0x974cd0], 1
// 00570308  754d                 jne 0x570357
// 0057030a  830dd04c970001       or dword ptr [0x974cd0], 1
// 00570311  6a04                 push 4
// 00570313  c644242c05           mov byte ptr [esp + 0x2c], 5
// 00570318  e803061300           call 0x6a0920
// 0057031d  83c404               add esp, 4
// 00570320  3bc5                 cmp eax, ebp
// 00570322  7408                 je 0x57032c
// 00570324  c700b84c9700         mov dword ptr [eax], 0x974cb8
// 0057032a  eb02                 jmp 0x57032e
// 0057032c  33c0                 xor eax, eax
// 0057032e  a3b84c9700           mov dword ptr [0x974cb8], eax
// 00570333  6850d37f00           push 0x7fd350
// 00570338  892dc44c9700         mov dword ptr [0x974cc4], ebp
// 0057033e  892dc84c9700         mov dword ptr [0x974cc8], ebp
// 00570344  892dcc4c9700         mov dword ptr [0x974ccc], ebp
// 0057034a  e860141300           call 0x6a17af
// 0057034f  83c404               add esp, 4
// 00570352  c644242800           mov byte ptr [esp + 0x28], 0
// 00570357  8d542430             lea edx, [esp + 0x30]
// 0057035b  52                   push edx
// 0057035c  53                   push ebx
// 0057035d  57                   push edi
// 0057035e  8d44241c             lea eax, [esp + 0x1c]
// 00570362  50                   push eax
// 00570363  b9b84c9700           mov ecx, 0x974cb8
// 00570368  e8f378f5ff           call 0x4c7c60
// 0057036d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00570371  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00570379  e8622dffff           call 0x5630e0
// 0057037e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00570382  5f                   pop edi
// 00570383  5e                   pop esi
// 00570384  5d                   pop ebp
// 00570385  5b                   pop ebx
// 00570386  64890d00000000       mov dword ptr fs:[0], ecx
// 0057038d  83c41c               add esp, 0x1c
// 00570390  c20400               ret 4
// library rbxgs/roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp (function ?declare@?$MemberDescriptorContainer@VPropertyDescriptor@Reflection@RBX@@@Reflection@RBX@@QAEXPAVPropertyDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp
