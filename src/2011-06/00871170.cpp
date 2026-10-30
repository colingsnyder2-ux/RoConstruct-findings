// roc 2011-06 00871170  unit: CXTColorDialog  size: 355 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00871170
//
// 00871170  6aff                 push -1
// 00871172  68d177a000           push 0xa077d1
// 00871177  64a100000000         mov eax, dword ptr fs:[0]
// 0087117d  50                   push eax
// 0087117e  83ec14               sub esp, 0x14
// 00871181  53                   push ebx
// 00871182  56                   push esi
// 00871183  57                   push edi
// 00871184  a12058c900           mov eax, dword ptr [0xc95820]
// 00871189  33c4                 xor eax, esp
// 0087118b  50                   push eax
// 0087118c  8d442424             lea eax, [esp + 0x24]
// 00871190  64a300000000         mov dword ptr fs:[0], eax
// 00871196  8bf1                 mov esi, ecx
// 00871198  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0087119b  8b442434             mov eax, dword ptr [esp + 0x34]
// 0087119f  51                   push ecx
// 008711a0  898624010000         mov dword ptr [esi + 0x124], eax
// 008711a6  ff15201ca400         call dword ptr [0xa41c20]
// 008711ac  85c0                 test eax, eax
// 008711ae  747a                 je 0x87122a
// 008711b0  56                   push esi
// 008711b1  8d4c2414             lea ecx, [esp + 0x14]
// 008711b5  e86e9df9ff           call 0x80af28
// 008711ba  8b9624010000         mov edx, dword ptr [esi + 0x124]
// 008711c0  52                   push edx
// 008711c1  8d8604010000         lea eax, [esi + 0x104]
// 008711c7  50                   push eax
// 008711c8  8d4c2418             lea ecx, [esp + 0x18]
// 008711cc  c744243400000000     mov dword ptr [esp + 0x34], 0
// 008711d4  e8479cf9ff           call 0x80ae20
// 008711d9  f686ac00000020       test byte ptr [esi + 0xac], 0x20
// 008711e0  7437                 je 0x871219
// 008711e2  8b8e24010000         mov ecx, dword ptr [esi + 0x124]
// 008711e8  51                   push ecx
// 008711e9  8d542438             lea edx, [esp + 0x38]
// 008711ed  52                   push edx
// 008711ee  e88df6ffff           call 0x870880
// 008711f3  83c408               add esp, 8
// 008711f6  8bc8                 mov ecx, eax
// 008711f8  c644242c01           mov byte ptr [esp + 0x2c], 1
// 008711fd  ff15c82da400         call dword ptr [0xa42dc8]
// 00871203  50                   push eax
// 00871204  8d8eb0000000         lea ecx, [esi + 0xb0]
// 0087120a  e80392f9ff           call 0x80a412
// 0087120f  8d4c2434             lea ecx, [esp + 0x34]
// 00871213  ff15082ea400         call dword ptr [0xa42e08]
// 00871219  8d4c2410             lea ecx, [esp + 0x10]
// 0087121d  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 00871225  e8f89cf9ff           call 0x80af22
// 0087122a  837c243800           cmp dword ptr [esp + 0x38], 0
// 0087122f  0f8484000000         je 0x8712b9
// 00871235  8b4620               mov eax, dword ptr [esi + 0x20]
// 00871238  8b1dc019a400         mov ebx, dword ptr [0xa419c0]
// 0087123e  6a00                 push 0
// 00871240  6a00                 push 0
// 00871242  6874040000           push 0x474
// 00871247  50                   push eax
// 00871248  ffd3                 call ebx
// 0087124a  50                   push eax
// 0087124b  e8d890f9ff           call 0x80a328
// 00871250  85c0                 test eax, eax
// 00871252  7465                 je 0x8712b9
// 00871254  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00871257  6a00                 push 0
// 00871259  6a00                 push 0
// 0087125b  6874040000           push 0x474
// 00871260  51                   push ecx
// 00871261  ffd3                 call ebx
// 00871263  50                   push eax
// 00871264  e8bf90f9ff           call 0x80a328
// 00871269  85c0                 test eax, eax
// 0087126b  744c                 je 0x8712b9
// 0087126d  83782000             cmp dword ptr [eax + 0x20], 0
// 00871271  7446                 je 0x8712b9
// 00871273  8bce                 mov ecx, esi
// 00871275  33ff                 xor edi, edi
// 00871277  e8d8b91500           call 0x9ccc54
// 0087127c  85c0                 test eax, eax
// 0087127e  7e39                 jle 0x8712b9
// 00871280  85ff                 test edi, edi
// 00871282  7c4a                 jl 0x8712ce
// 00871284  3bbe90000000         cmp edi, dword ptr [esi + 0x90]
// 0087128a  7d42                 jge 0x8712ce
// 0087128c  8b968c000000         mov edx, dword ptr [esi + 0x8c]
// 00871292  8b04ba               mov eax, dword ptr [edx + edi*4]
// 00871295  85c0                 test eax, eax
// 00871297  7435                 je 0x8712ce
// 00871299  8b8e24010000         mov ecx, dword ptr [esi + 0x124]
// 0087129f  8b5020               mov edx, dword ptr [eax + 0x20]
// 008712a2  6a00                 push 0
// 008712a4  51                   push ecx
// 008712a5  6842270000           push 0x2742
// 008712aa  52                   push edx
// 008712ab  ffd3                 call ebx
// 008712ad  8bce                 mov ecx, esi
// 008712af  47                   inc edi
// 008712b0  e89fb91500           call 0x9ccc54
// 008712b5  3bf8                 cmp edi, eax
// 008712b7  7cc7                 jl 0x871280
// 008712b9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008712bd  64890d00000000       mov dword ptr fs:[0], ecx
// 008712c4  59                   pop ecx
// 008712c5  5f                   pop edi
// 008712c6  5e                   pop esi
// 008712c7  5b                   pop ebx
// 008712c8  83c420               add esp, 0x20
// 008712cb  c20800               ret 8
// 008712ce  e83790f9ff           call 0x80a30a
// copied from an identical function in another client (function ?SetNewColor@CXTColorDialog@@QAEXKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorDialog.cpp