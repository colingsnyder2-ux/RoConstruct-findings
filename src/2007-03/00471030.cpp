// roc 2007-03 00471030  unit: seg_00470000  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00471030
//
// 00471030  6aff                 push -1
// 00471032  68f1f37400           push 0x74f3f1
// 00471037  64a100000000         mov eax, dword ptr fs:[0]
// 0047103d  50                   push eax
// 0047103e  83ec08               sub esp, 8
// 00471041  53                   push ebx
// 00471042  55                   push ebp
// 00471043  56                   push esi
// 00471044  57                   push edi
// 00471045  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0047104a  33c4                 xor eax, esp
// 0047104c  50                   push eax
// 0047104d  8d44241c             lea eax, [esp + 0x1c]
// 00471051  64a300000000         mov dword ptr fs:[0], eax
// 00471057  8bf9                 mov edi, ecx
// 00471059  8b4708               mov eax, dword ptr [edi + 8]
// 0047105c  8b2f                 mov ebp, dword ptr [edi]
// 0047105e  8d0440               lea eax, [eax + eax*2]
// 00471061  03c0                 add eax, eax
// 00471063  03c0                 add eax, eax
// 00471065  6a10                 push 0x10
// 00471067  50                   push eax
// 00471068  e8632b0800           call 0x4f3bd0
// 0047106d  8b4f08               mov ecx, dword ptr [edi + 8]
// 00471070  8b542434             mov edx, dword ptr [esp + 0x34]
// 00471074  83c408               add esp, 8
// 00471077  3bd1                 cmp edx, ecx
// 00471079  8907                 mov dword ptr [edi], eax
// 0047107b  7d02                 jge 0x47107f
// 0047107d  8bca                 mov ecx, edx
// 0047107f  8d0c49               lea ecx, [ecx + ecx*2]
// 00471082  8bf0                 mov esi, eax
// 00471084  8d3c88               lea edi, [eax + ecx*4]
// 00471087  3bf7                 cmp esi, edi
// 00471089  8bdd                 mov ebx, ebp
// 0047108b  89742414             mov dword ptr [esp + 0x14], esi
// 0047108f  7332                 jae 0x4710c3
// 00471091  89742418             mov dword ptr [esp + 0x18], esi
// 00471095  85f6                 test esi, esi
// 00471097  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0047109f  740c                 je 0x4710ad
// 004710a1  53                   push ebx
// 004710a2  8bce                 mov ecx, esi
// 004710a4  e827ffffff           call 0x470fd0
// 004710a9  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004710ad  83c60c               add esi, 0xc
// 004710b0  83c30c               add ebx, 0xc
// 004710b3  3bf7                 cmp esi, edi
// 004710b5  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 004710bd  89742414             mov dword ptr [esp + 0x14], esi
// 004710c1  72ce                 jb 0x471091
// 004710c3  8d1452               lea edx, [edx + edx*2]
// 004710c6  8d7c9500             lea edi, [ebp + edx*4]
// 004710ca  3bef                 cmp ebp, edi
// 004710cc  8bf5                 mov esi, ebp
// 004710ce  731c                 jae 0x4710ec
// 004710d0  8b06                 mov eax, dword ptr [esi]
// 004710d2  50                   push eax
// 004710d3  e8a8220800           call 0x4f3380
// 004710d8  33c0                 xor eax, eax
// 004710da  8906                 mov dword ptr [esi], eax
// 004710dc  894604               mov dword ptr [esi + 4], eax
// 004710df  894608               mov dword ptr [esi + 8], eax
// 004710e2  83c60c               add esi, 0xc
// 004710e5  83c404               add esp, 4
// 004710e8  3bf7                 cmp esi, edi
// 004710ea  72e4                 jb 0x4710d0
// 004710ec  55                   push ebp
// 004710ed  e88e220800           call 0x4f3380
// 004710f2  83c404               add esp, 4
// 004710f5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004710f9  64890d00000000       mov dword ptr fs:[0], ecx
// 00471100  59                   pop ecx
// 00471101  5f                   pop edi
// 00471102  5e                   pop esi
// 00471103  5d                   pop ebp
// 00471104  5b                   pop ebx
// 00471105  83c414               add esp, 0x14
// 00471108  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?realloc@?$Array@V?$Array@H@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
