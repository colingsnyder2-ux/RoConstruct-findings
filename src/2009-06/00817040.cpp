// roc 2009-06 00817040  unit: CXTPRibbonSystemPopupBar  size: 541 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00817040
//
// 00817040  6aff                 push -1
// 00817042  6838288800           push 0x882838
// 00817047  64a100000000         mov eax, dword ptr fs:[0]
// 0081704d  50                   push eax
// 0081704e  83ec48               sub esp, 0x48
// 00817051  53                   push ebx
// 00817052  55                   push ebp
// 00817053  56                   push esi
// 00817054  57                   push edi
// 00817055  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0081705a  33c4                 xor eax, esp
// 0081705c  50                   push eax
// 0081705d  8d44245c             lea eax, [esp + 0x5c]
// 00817061  64a300000000         mov dword ptr fs:[0], eax
// 00817067  8bd9                 mov ebx, ecx
// 00817069  8d4c2434             lea ecx, [esp + 0x34]
// 0081706d  e8fea0f0ff           call 0x721170
// 00817072  8bcb                 mov ecx, ebx
// 00817074  c744246400000000     mov dword ptr [esp + 0x64], 0
// 0081707c  33ff                 xor edi, edi
// 0081707e  e88d70f1ff           call 0x72e110
// 00817083  85c0                 test eax, eax
// 00817085  7e50                 jle 0x8170d7
// 00817087  57                   push edi
// 00817088  8bcb                 mov ecx, ebx
// 0081708a  e89170f1ff           call 0x72e120
// 0081708f  8bf0                 mov esi, eax
// 00817091  85f6                 test esi, esi
// 00817093  7436                 je 0x8170cb
// 00817095  e8d6edffff           call 0x815e70
// 0081709a  50                   push eax
// 0081709b  8bce                 mov ecx, esi
// 0081709d  e8121ff0ff           call 0x718fb4
// 008170a2  85c0                 test eax, eax
// 008170a4  7425                 je 0x8170cb
// 008170a6  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008170aa  56                   push esi
// 008170ab  50                   push eax
// 008170ac  8d4c243c             lea ecx, [esp + 0x3c]
// 008170b0  e86bb6f3ff           call 0x752720
// 008170b5  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 008170bb  8b16                 mov edx, dword ptr [esi]
// 008170bd  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 008170c3  83c804               or eax, 4
// 008170c6  50                   push eax
// 008170c7  8bce                 mov ecx, esi
// 008170c9  ffd2                 call edx
// 008170cb  8bcb                 mov ecx, ebx
// 008170cd  47                   inc edi
// 008170ce  e83d70f1ff           call 0x72e110
// 008170d3  3bf8                 cmp edi, eax
// 008170d5  7cb0                 jl 0x817087
// 008170d7  8b442474             mov eax, dword ptr [esp + 0x74]
// 008170db  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008170df  50                   push eax
// 008170e0  51                   push ecx
// 008170e1  8d54241c             lea edx, [esp + 0x1c]
// 008170e5  52                   push edx
// 008170e6  8bcb                 mov ecx, ebx
// 008170e8  e8f307f5ff           call 0x7678e0
// 008170ed  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 008170f1  85f6                 test esi, esi
// 008170f3  7513                 jne 0x817108
// 008170f5  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 008170f9  8b442414             mov eax, dword ptr [esp + 0x14]
// 008170fd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00817101  8906                 mov dword ptr [esi], eax
// 00817103  894e04               mov dword ptr [esi + 4], ecx
// 00817106  eb78                 jmp 0x817180
// 00817108  53                   push ebx
// 00817109  8d4c244c             lea ecx, [esp + 0x4c]
// 0081710d  e89027f0ff           call 0x7198a2
// 00817112  8bcb                 mov ecx, ebx
// 00817114  c644246401           mov byte ptr [esp + 0x64], 1
// 00817119  e83263f1ff           call 0x72d450
// 0081711e  8b10                 mov edx, dword ptr [eax]
// 00817120  6a00                 push 0
// 00817122  8bc8                 mov ecx, eax
// 00817124  8b82e0000000         mov eax, dword ptr [edx + 0xe0]
// 0081712a  53                   push ebx
// 0081712b  ffd0                 call eax
// 0081712d  50                   push eax
// 0081712e  8d4c244c             lea ecx, [esp + 0x4c]
// 00817132  51                   push ecx
// 00817133  8d4c242c             lea ecx, [esp + 0x2c]
// 00817137  e82497f5ff           call 0x770860
// 0081713c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00817140  2bbb08020000         sub edi, dword ptr [ebx + 0x208]
// 00817146  8d6eff               lea ebp, [esi - 1]
// 00817149  47                   inc edi
// 0081714a  c644246402           mov byte ptr [esp + 0x64], 2
// 0081714f  85ed                 test ebp, ebp
// 00817151  7d61                 jge 0x8171b4
// 00817153  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 00817157  8b542414             mov edx, dword ptr [esp + 0x14]
// 0081715b  8b442418             mov eax, dword ptr [esp + 0x18]
// 0081715f  8d4c2424             lea ecx, [esp + 0x24]
// 00817163  8916                 mov dword ptr [esi], edx
// 00817165  894604               mov dword ptr [esi + 4], eax
// 00817168  c644246401           mov byte ptr [esp + 0x64], 1
// 0081716d  e86e97f5ff           call 0x7708e0
// 00817172  8d4c2448             lea ecx, [esp + 0x48]
// 00817176  c644246400           mov byte ptr [esp + 0x64], 0
// 0081717b  e81c27f0ff           call 0x71989c
// 00817180  8d4c2434             lea ecx, [esp + 0x34]
// 00817184  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 0081718c  e8ff9ff0ff           call 0x721190
// 00817191  8bc6                 mov eax, esi
// 00817193  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00817197  64890d00000000       mov dword ptr fs:[0], ecx
// 0081719e  59                   pop ecx
// 0081719f  5f                   pop edi
// 008171a0  5e                   pop esi
// 008171a1  5d                   pop ebp
// 008171a2  5b                   pop ebx
// 008171a3  83c454               add esp, 0x54
// 008171a6  c20c00               ret 0xc
// 008171a9  8da42400000000       lea esp, [esp]
// 008171b0  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 008171b4  85ed                 test ebp, ebp
// 008171b6  0f8c9c000000         jl 0x817258
// 008171bc  3bee                 cmp ebp, esi
// 008171be  0f8d94000000         jge 0x817258
// 008171c4  8b542438             mov edx, dword ptr [esp + 0x38]
// 008171c8  8b34aa               mov esi, dword ptr [edx + ebp*4]
// 008171cb  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 008171d1  8b06                 mov eax, dword ptr [esi]
// 008171d3  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 008171d9  83e1fb               and ecx, 0xfffffffb
// 008171dc  51                   push ecx
// 008171dd  8bce                 mov ecx, esi
// 008171df  ffd2                 call edx
// 008171e1  8b06                 mov eax, dword ptr [esi]
// 008171e3  8b809c000000         mov eax, dword ptr [eax + 0x9c]
// 008171e9  8d4c2448             lea ecx, [esp + 0x48]
// 008171ed  51                   push ecx
// 008171ee  8d542420             lea edx, [esp + 0x20]
// 008171f2  52                   push edx
// 008171f3  8bce                 mov ecx, esi
// 008171f5  ffd0                 call eax
// 008171f7  8b442418             mov eax, dword ptr [esp + 0x18]
// 008171fb  8d48fd               lea ecx, [eax - 3]
// 008171fe  2b830c020000         sub eax, dword ptr [ebx + 0x20c]
// 00817204  894c2470             mov dword ptr [esp + 0x70], ecx
// 00817208  83c004               add eax, 4
// 0081720b  8bd7                 mov edx, edi
// 0081720d  2b54241c             sub edx, dword ptr [esp + 0x1c]
// 00817211  83ec10               sub esp, 0x10
// 00817214  8bcc                 mov ecx, esp
// 00817216  8911                 mov dword ptr [ecx], edx
// 00817218  89842484000000       mov dword ptr [esp + 0x84], eax
// 0081721f  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 00817226  8b06                 mov eax, dword ptr [esi]
// 00817228  8b407c               mov eax, dword ptr [eax + 0x7c]
// 0081722b  895104               mov dword ptr [ecx + 4], edx
// 0081722e  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 00817235  897908               mov dword ptr [ecx + 8], edi
// 00817238  89510c               mov dword ptr [ecx + 0xc], edx
// 0081723b  8bce                 mov ecx, esi
// 0081723d  ffd0                 call eax
// 0081723f  b9faffffff           mov ecx, 0xfffffffa
// 00817244  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 00817248  03f9                 add edi, ecx
// 0081724a  83ed01               sub ebp, 1
// 0081724d  0f895dffffff         jns 0x8171b0
// 00817253  e9fbfeffff           jmp 0x817153
// 00817258  e8871af0ff           call 0x718ce4
// copied from an identical function in another client (function ?CalcDynamicLayout@CXTPRibbonSystemPopupBar@@UAE?AVCSize@@HK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonSystemButton.cpp