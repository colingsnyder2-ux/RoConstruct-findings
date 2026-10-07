// roc 2007-08 00471060  unit: G3D::Texture  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00471060
//
// 00471060  6aff                 push -1
// 00471062  68215f7400           push 0x745f21
// 00471067  64a100000000         mov eax, dword ptr fs:[0]
// 0047106d  50                   push eax
// 0047106e  83ec08               sub esp, 8
// 00471071  53                   push ebx
// 00471072  55                   push ebp
// 00471073  56                   push esi
// 00471074  57                   push edi
// 00471075  a188518b00           mov eax, dword ptr [0x8b5188]
// 0047107a  33c4                 xor eax, esp
// 0047107c  50                   push eax
// 0047107d  8d44241c             lea eax, [esp + 0x1c]
// 00471081  64a300000000         mov dword ptr fs:[0], eax
// 00471087  8bf9                 mov edi, ecx
// 00471089  8b4708               mov eax, dword ptr [edi + 8]
// 0047108c  8b2f                 mov ebp, dword ptr [edi]
// 0047108e  8d0440               lea eax, [eax + eax*2]
// 00471091  03c0                 add eax, eax
// 00471093  03c0                 add eax, eax
// 00471095  6a10                 push 0x10
// 00471097  50                   push eax
// 00471098  e8c3ef0800           call 0x500060
// 0047109d  8b4f08               mov ecx, dword ptr [edi + 8]
// 004710a0  8b542434             mov edx, dword ptr [esp + 0x34]
// 004710a4  83c408               add esp, 8
// 004710a7  3bd1                 cmp edx, ecx
// 004710a9  8907                 mov dword ptr [edi], eax
// 004710ab  7d02                 jge 0x4710af
// 004710ad  8bca                 mov ecx, edx
// 004710af  8d0c49               lea ecx, [ecx + ecx*2]
// 004710b2  8bf0                 mov esi, eax
// 004710b4  8d3c88               lea edi, [eax + ecx*4]
// 004710b7  3bf7                 cmp esi, edi
// 004710b9  8bdd                 mov ebx, ebp
// 004710bb  89742414             mov dword ptr [esp + 0x14], esi
// 004710bf  7332                 jae 0x4710f3
// 004710c1  89742418             mov dword ptr [esp + 0x18], esi
// 004710c5  85f6                 test esi, esi
// 004710c7  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004710cf  740c                 je 0x4710dd
// 004710d1  53                   push ebx
// 004710d2  8bce                 mov ecx, esi
// 004710d4  e827ffffff           call 0x471000
// 004710d9  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004710dd  83c60c               add esi, 0xc
// 004710e0  83c30c               add ebx, 0xc
// 004710e3  3bf7                 cmp esi, edi
// 004710e5  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 004710ed  89742414             mov dword ptr [esp + 0x14], esi
// 004710f1  72ce                 jb 0x4710c1
// 004710f3  8d1452               lea edx, [edx + edx*2]
// 004710f6  8d7c9500             lea edi, [ebp + edx*4]
// 004710fa  3bef                 cmp ebp, edi
// 004710fc  8bf5                 mov esi, ebp
// 004710fe  731c                 jae 0x47111c
// 00471100  8b06                 mov eax, dword ptr [esi]
// 00471102  50                   push eax
// 00471103  e808e70800           call 0x4ff810
// 00471108  33c0                 xor eax, eax
// 0047110a  8906                 mov dword ptr [esi], eax
// 0047110c  894604               mov dword ptr [esi + 4], eax
// 0047110f  894608               mov dword ptr [esi + 8], eax
// 00471112  83c60c               add esi, 0xc
// 00471115  83c404               add esp, 4
// 00471118  3bf7                 cmp esi, edi
// 0047111a  72e4                 jb 0x471100
// 0047111c  55                   push ebp
// 0047111d  e8eee60800           call 0x4ff810
// 00471122  83c404               add esp, 4
// 00471125  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00471129  64890d00000000       mov dword ptr fs:[0], ecx
// 00471130  59                   pop ecx
// 00471131  5f                   pop edi
// 00471132  5e                   pop esi
// 00471133  5d                   pop ebp
// 00471134  5b                   pop ebx
// 00471135  83c414               add esp, 0x14
// 00471138  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?realloc@?$Array@V?$Array@H@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
