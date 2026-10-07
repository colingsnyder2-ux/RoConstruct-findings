// roc 2007-08 00471140  unit: G3D::Texture  size: 385 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00471140
//
// 00471140  6aff                 push -1
// 00471142  6809497400           push 0x744909
// 00471147  64a100000000         mov eax, dword ptr fs:[0]
// 0047114d  50                   push eax
// 0047114e  83ec10               sub esp, 0x10
// 00471151  53                   push ebx
// 00471152  55                   push ebp
// 00471153  56                   push esi
// 00471154  57                   push edi
// 00471155  a188518b00           mov eax, dword ptr [0x8b5188]
// 0047115a  33c4                 xor eax, esp
// 0047115c  50                   push eax
// 0047115d  8d442424             lea eax, [esp + 0x24]
// 00471161  64a300000000         mov dword ptr fs:[0], eax
// 00471167  8bf9                 mov edi, ecx
// 00471169  8b5f04               mov ebx, dword ptr [edi + 4]
// 0047116c  8b442434             mov eax, dword ptr [esp + 0x34]
// 00471170  3bc3                 cmp eax, ebx
// 00471172  895c2420             mov dword ptr [esp + 0x20], ebx
// 00471176  894704               mov dword ptr [edi + 4], eax
// 00471179  7d33                 jge 0x4711ae
// 0047117b  8d2c40               lea ebp, [eax + eax*2]
// 0047117e  03ed                 add ebp, ebp
// 00471180  03ed                 add ebp, ebp
// 00471182  2bd8                 sub ebx, eax
// 00471184  8b37                 mov esi, dword ptr [edi]
// 00471186  8b042e               mov eax, dword ptr [esi + ebp]
// 00471189  03f5                 add esi, ebp
// 0047118b  50                   push eax
// 0047118c  e87fe60800           call 0x4ff810
// 00471191  33c0                 xor eax, eax
// 00471193  83c404               add esp, 4
// 00471196  83c50c               add ebp, 0xc
// 00471199  83eb01               sub ebx, 1
// 0047119c  8906                 mov dword ptr [esi], eax
// 0047119e  894604               mov dword ptr [esi + 4], eax
// 004711a1  894608               mov dword ptr [esi + 8], eax
// 004711a4  75de                 jne 0x471184
// 004711a6  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 004711aa  8b442434             mov eax, dword ptr [esp + 0x34]
// 004711ae  f605a8d08b0001       test byte ptr [0x8bd0a8], 1
// 004711b5  7514                 jne 0x4711cb
// 004711b7  830da8d08b0001       or dword ptr [0x8bd0a8], 1
// 004711be  bd0a000000           mov ebp, 0xa
// 004711c3  892da4d08b00         mov dword ptr [0x8bd0a4], ebp
// 004711c9  eb06                 jmp 0x4711d1
// 004711cb  8b2da4d08b00         mov ebp, dword ptr [0x8bd0a4]
// 004711d1  8b7704               mov esi, dword ptr [edi + 4]
// 004711d4  8b4f08               mov ecx, dword ptr [edi + 8]
// 004711d7  3bf1                 cmp esi, ecx
// 004711d9  7e77                 jle 0x471252
// 004711db  85c9                 test ecx, ecx
// 004711dd  7509                 jne 0x4711e8
// 004711df  894708               mov dword ptr [edi + 8], eax
// 004711e2  53                   push ebx
// 004711e3  e98e000000           jmp 0x471276
// 004711e8  3bf5                 cmp esi, ebp
// 004711ea  7d09                 jge 0x4711f5
// 004711ec  896f08               mov dword ptr [edi + 8], ebp
// 004711ef  53                   push ebx
// 004711f0  e981000000           jmp 0x471276
// 004711f5  d905387b7900         fld dword ptr [0x797b38]
// 004711fb  8bc1                 mov eax, ecx
// 004711fd  8d0440               lea eax, [eax + eax*2]
// 00471200  d95c2438             fstp dword ptr [esp + 0x38]
// 00471204  03c0                 add eax, eax
// 00471206  03c0                 add eax, eax
// 00471208  3d801a0600           cmp eax, 0x61a80
// 0047120d  7608                 jbe 0x471217
// 0047120f  d905347b7900         fld dword ptr [0x797b34]
// 00471215  eb0d                 jmp 0x471224
// 00471217  3d00fa0000           cmp eax, 0xfa00
// 0047121c  760a                 jbe 0x471228
// 0047121e  d90588797900         fld dword ptr [0x797988]
// 00471224  d95c2438             fstp dword ptr [esp + 0x38]
// 00471228  8be9                 mov ebp, ecx
// 0047122a  896c2434             mov dword ptr [esp + 0x34], ebp
// 0047122e  db442434             fild dword ptr [esp + 0x34]
// 00471232  d84c2438             fmul dword ptr [esp + 0x38]
// 00471236  e825fb1b00           call 0x630d60
// 0047123b  2bc5                 sub eax, ebp
// 0047123d  03c6                 add eax, esi
// 0047123f  894708               mov dword ptr [edi + 8], eax
// 00471242  8b0da4d08b00         mov ecx, dword ptr [0x8bd0a4]
// 00471248  3bc1                 cmp eax, ecx
// 0047124a  7d03                 jge 0x47124f
// 0047124c  894f08               mov dword ptr [edi + 8], ecx
// 0047124f  53                   push ebx
// 00471250  eb24                 jmp 0x471276
// 00471252  b856555555           mov eax, 0x55555556
// 00471257  f7e9                 imul ecx
// 00471259  8bca                 mov ecx, edx
// 0047125b  c1e91f               shr ecx, 0x1f
// 0047125e  03ca                 add ecx, edx
// 00471260  3bf1                 cmp esi, ecx
// 00471262  7f19                 jg 0x47127d
// 00471264  807c243800           cmp byte ptr [esp + 0x38], 0
// 00471269  7412                 je 0x47127d
// 0047126b  3bf5                 cmp esi, ebp
// 0047126d  7e0e                 jle 0x47127d
// 0047126f  3bf3                 cmp esi, ebx
// 00471271  7c02                 jl 0x471275
// 00471273  8bf3                 mov esi, ebx
// 00471275  56                   push esi
// 00471276  8bcf                 mov ecx, edi
// 00471278  e8e3fdffff           call 0x471060
// 0047127d  3b5f04               cmp ebx, dword ptr [edi + 4]
// 00471280  8bd3                 mov edx, ebx
// 00471282  7d27                 jge 0x4712ab
// 00471284  8d0c5b               lea ecx, [ebx + ebx*2]
// 00471287  03c9                 add ecx, ecx
// 00471289  03c9                 add ecx, ecx
// 0047128b  eb03                 jmp 0x471290
// 0047128d  8d4900               lea ecx, [ecx]
// 00471290  8b07                 mov eax, dword ptr [edi]
// 00471292  03c1                 add eax, ecx
// 00471294  740a                 je 0x4712a0
// 00471296  33f6                 xor esi, esi
// 00471298  897004               mov dword ptr [eax + 4], esi
// 0047129b  897008               mov dword ptr [eax + 8], esi
// 0047129e  8930                 mov dword ptr [eax], esi
// 004712a0  83c201               add edx, 1
// 004712a3  83c10c               add ecx, 0xc
// 004712a6  3b5704               cmp edx, dword ptr [edi + 4]
// 004712a9  7ce5                 jl 0x471290
// 004712ab  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004712af  64890d00000000       mov dword ptr fs:[0], ecx
// 004712b6  59                   pop ecx
// 004712b7  5f                   pop edi
// 004712b8  5e                   pop esi
// 004712b9  5d                   pop ebp
// 004712ba  5b                   pop ebx
// 004712bb  83c41c               add esp, 0x1c
// 004712be  c20800               ret 8
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?resize@?$Array@V?$Array@H@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
