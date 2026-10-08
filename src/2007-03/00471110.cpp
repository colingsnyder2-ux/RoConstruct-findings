// roc 2007-03 00471110  unit: seg_00470000  size: 385 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00471110
//
// 00471110  6aff                 push -1
// 00471112  68496d7400           push 0x746d49
// 00471117  64a100000000         mov eax, dword ptr fs:[0]
// 0047111d  50                   push eax
// 0047111e  83ec10               sub esp, 0x10
// 00471121  53                   push ebx
// 00471122  55                   push ebp
// 00471123  56                   push esi
// 00471124  57                   push edi
// 00471125  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0047112a  33c4                 xor eax, esp
// 0047112c  50                   push eax
// 0047112d  8d442424             lea eax, [esp + 0x24]
// 00471131  64a300000000         mov dword ptr fs:[0], eax
// 00471137  8bf9                 mov edi, ecx
// 00471139  8b5f04               mov ebx, dword ptr [edi + 4]
// 0047113c  8b442434             mov eax, dword ptr [esp + 0x34]
// 00471140  3bc3                 cmp eax, ebx
// 00471142  895c2420             mov dword ptr [esp + 0x20], ebx
// 00471146  894704               mov dword ptr [edi + 4], eax
// 00471149  7d33                 jge 0x47117e
// 0047114b  8d2c40               lea ebp, [eax + eax*2]
// 0047114e  03ed                 add ebp, ebp
// 00471150  03ed                 add ebp, ebp
// 00471152  2bd8                 sub ebx, eax
// 00471154  8b37                 mov esi, dword ptr [edi]
// 00471156  8b042e               mov eax, dword ptr [esi + ebp]
// 00471159  03f5                 add esi, ebp
// 0047115b  50                   push eax
// 0047115c  e81f220800           call 0x4f3380
// 00471161  33c0                 xor eax, eax
// 00471163  83c404               add esp, 4
// 00471166  83c50c               add ebp, 0xc
// 00471169  83eb01               sub ebx, 1
// 0047116c  8906                 mov dword ptr [esi], eax
// 0047116e  894604               mov dword ptr [esi + 4], eax
// 00471171  894608               mov dword ptr [esi + 8], eax
// 00471174  75de                 jne 0x471154
// 00471176  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0047117a  8b442434             mov eax, dword ptr [esp + 0x34]
// 0047117e  f60570778b0001       test byte ptr [0x8b7770], 1
// 00471185  7514                 jne 0x47119b
// 00471187  830d70778b0001       or dword ptr [0x8b7770], 1
// 0047118e  bd0a000000           mov ebp, 0xa
// 00471193  892d6c778b00         mov dword ptr [0x8b776c], ebp
// 00471199  eb06                 jmp 0x4711a1
// 0047119b  8b2d6c778b00         mov ebp, dword ptr [0x8b776c]
// 004711a1  8b7704               mov esi, dword ptr [edi + 4]
// 004711a4  8b4f08               mov ecx, dword ptr [edi + 8]
// 004711a7  3bf1                 cmp esi, ecx
// 004711a9  7e77                 jle 0x471222
// 004711ab  85c9                 test ecx, ecx
// 004711ad  7509                 jne 0x4711b8
// 004711af  894708               mov dword ptr [edi + 8], eax
// 004711b2  53                   push ebx
// 004711b3  e98e000000           jmp 0x471246
// 004711b8  3bf5                 cmp esi, ebp
// 004711ba  7d09                 jge 0x4711c5
// 004711bc  896f08               mov dword ptr [edi + 8], ebp
// 004711bf  53                   push ebx
// 004711c0  e981000000           jmp 0x471246
// 004711c5  d905104c7900         fld dword ptr [0x794c10]
// 004711cb  8bc1                 mov eax, ecx
// 004711cd  8d0440               lea eax, [eax + eax*2]
// 004711d0  d95c2438             fstp dword ptr [esp + 0x38]
// 004711d4  03c0                 add eax, eax
// 004711d6  03c0                 add eax, eax
// 004711d8  3d801a0600           cmp eax, 0x61a80
// 004711dd  7608                 jbe 0x4711e7
// 004711df  d9050c4c7900         fld dword ptr [0x794c0c]
// 004711e5  eb0d                 jmp 0x4711f4
// 004711e7  3d00fa0000           cmp eax, 0xfa00
// 004711ec  760a                 jbe 0x4711f8
// 004711ee  d905084c7900         fld dword ptr [0x794c08]
// 004711f4  d95c2438             fstp dword ptr [esp + 0x38]
// 004711f8  8be9                 mov ebp, ecx
// 004711fa  896c2434             mov dword ptr [esp + 0x34], ebp
// 004711fe  db442434             fild dword ptr [esp + 0x34]
// 00471202  d84c2438             fmul dword ptr [esp + 0x38]
// 00471206  e8f5df1a00           call 0x61f200
// 0047120b  2bc5                 sub eax, ebp
// 0047120d  03c6                 add eax, esi
// 0047120f  894708               mov dword ptr [edi + 8], eax
// 00471212  8b0d6c778b00         mov ecx, dword ptr [0x8b776c]
// 00471218  3bc1                 cmp eax, ecx
// 0047121a  7d03                 jge 0x47121f
// 0047121c  894f08               mov dword ptr [edi + 8], ecx
// 0047121f  53                   push ebx
// 00471220  eb24                 jmp 0x471246
// 00471222  b856555555           mov eax, 0x55555556
// 00471227  f7e9                 imul ecx
// 00471229  8bca                 mov ecx, edx
// 0047122b  c1e91f               shr ecx, 0x1f
// 0047122e  03ca                 add ecx, edx
// 00471230  3bf1                 cmp esi, ecx
// 00471232  7f19                 jg 0x47124d
// 00471234  807c243800           cmp byte ptr [esp + 0x38], 0
// 00471239  7412                 je 0x47124d
// 0047123b  3bf5                 cmp esi, ebp
// 0047123d  7e0e                 jle 0x47124d
// 0047123f  3bf3                 cmp esi, ebx
// 00471241  7c02                 jl 0x471245
// 00471243  8bf3                 mov esi, ebx
// 00471245  56                   push esi
// 00471246  8bcf                 mov ecx, edi
// 00471248  e8e3fdffff           call 0x471030
// 0047124d  3b5f04               cmp ebx, dword ptr [edi + 4]
// 00471250  8bd3                 mov edx, ebx
// 00471252  7d27                 jge 0x47127b
// 00471254  8d0c5b               lea ecx, [ebx + ebx*2]
// 00471257  03c9                 add ecx, ecx
// 00471259  03c9                 add ecx, ecx
// 0047125b  eb03                 jmp 0x471260
// 0047125d  8d4900               lea ecx, [ecx]
// 00471260  8b07                 mov eax, dword ptr [edi]
// 00471262  03c1                 add eax, ecx
// 00471264  740a                 je 0x471270
// 00471266  33f6                 xor esi, esi
// 00471268  897004               mov dword ptr [eax + 4], esi
// 0047126b  897008               mov dword ptr [eax + 8], esi
// 0047126e  8930                 mov dword ptr [eax], esi
// 00471270  83c201               add edx, 1
// 00471273  83c10c               add ecx, 0xc
// 00471276  3b5704               cmp edx, dword ptr [edi + 4]
// 00471279  7ce5                 jl 0x471260
// 0047127b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0047127f  64890d00000000       mov dword ptr fs:[0], ecx
// 00471286  59                   pop ecx
// 00471287  5f                   pop edi
// 00471288  5e                   pop esi
// 00471289  5d                   pop ebp
// 0047128a  5b                   pop ebx
// 0047128b  83c41c               add esp, 0x1c
// 0047128e  c20800               ret 8
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?resize@?$Array@V?$Array@H@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
