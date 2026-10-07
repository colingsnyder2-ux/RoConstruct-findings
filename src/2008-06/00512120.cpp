// roc 2008-06 00512120  unit: G3D::GCamera  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00512120
//
// 00512120  6aff                 push -1
// 00512122  681cb37c00           push 0x7cb31c
// 00512127  64a100000000         mov eax, dword ptr fs:[0]
// 0051212d  50                   push eax
// 0051212e  64892500000000       mov dword ptr fs:[0], esp
// 00512135  83ec3c               sub esp, 0x3c
// 00512138  53                   push ebx
// 00512139  55                   push ebp
// 0051213a  56                   push esi
// 0051213b  33ed                 xor ebp, ebp
// 0051213d  57                   push edi
// 0051213e  8d4c2414             lea ecx, [esp + 0x14]
// 00512142  896c2410             mov dword ptr [esp + 0x10], ebp
// 00512146  ff1560248000         call dword ptr [0x802460]
// 0051214c  8b742460             mov esi, dword ptr [esp + 0x60]
// 00512150  8b4604               mov eax, dword ptr [esi + 4]
// 00512153  48                   dec eax
// 00512154  bb01000000           mov ebx, 1
// 00512159  33ff                 xor edi, edi
// 0051215b  895c2454             mov dword ptr [esp + 0x54], ebx
// 0051215f  85c0                 test eax, eax
// 00512161  7e48                 jle 0x5121ab
// 00512163  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 00512167  8b06                 mov eax, dword ptr [esi]
// 00512169  03c5                 add eax, ebp
// 0051216b  53                   push ebx
// 0051216c  50                   push eax
// 0051216d  8d442438             lea eax, [esp + 0x38]
// 00512171  50                   push eax
// 00512172  ff15d0248000         call dword ptr [0x8024d0]
// 00512178  83c40c               add esp, 0xc
// 0051217b  50                   push eax
// 0051217c  8d4c2418             lea ecx, [esp + 0x18]
// 00512180  c644245802           mov byte ptr [esp + 0x58], 2
// 00512185  ff1550248000         call dword ptr [0x802450]
// 0051218b  8d4c2430             lea ecx, [esp + 0x30]
// 0051218f  c644245401           mov byte ptr [esp + 0x54], 1
// 00512194  ff1568248000         call dword ptr [0x802468]
// 0051219a  8b4604               mov eax, dword ptr [esi + 4]
// 0051219d  47                   inc edi
// 0051219e  48                   dec eax
// 0051219f  83c51c               add ebp, 0x1c
// 005121a2  3bf8                 cmp edi, eax
// 005121a4  7cc1                 jl 0x512167
// 005121a6  bb01000000           mov ebx, 1
// 005121ab  8b4604               mov eax, dword ptr [esi + 4]
// 005121ae  85c0                 test eax, eax
// 005121b0  7e25                 jle 0x5121d7
// 005121b2  8b16                 mov edx, dword ptr [esi]
// 005121b4  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 005121b8  8d0cc500000000       lea ecx, [eax*8]
// 005121bf  2bc8                 sub ecx, eax
// 005121c1  8d448ae4             lea eax, [edx + ecx*4 - 0x1c]
// 005121c5  50                   push eax
// 005121c6  8d442418             lea eax, [esp + 0x18]
// 005121ca  50                   push eax
// 005121cb  56                   push esi
// 005121cc  ff15a8248000         call dword ptr [0x8024a8]
// 005121d2  83c40c               add esp, 0xc
// 005121d5  eb11                 jmp 0x5121e8
// 005121d7  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 005121db  8d4c2414             lea ecx, [esp + 0x14]
// 005121df  51                   push ecx
// 005121e0  8bce                 mov ecx, esi
// 005121e2  ff155c248000         call dword ptr [0x80245c]
// 005121e8  8d4c2414             lea ecx, [esp + 0x14]
// 005121ec  895c2410             mov dword ptr [esp + 0x10], ebx
// 005121f0  c644245400           mov byte ptr [esp + 0x54], 0
// 005121f5  ff1568248000         call dword ptr [0x802468]
// 005121fb  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 005121ff  5f                   pop edi
// 00512200  8bc6                 mov eax, esi
// 00512202  5e                   pop esi
// 00512203  5d                   pop ebp
// 00512204  5b                   pop ebx
// 00512205  64890d00000000       mov dword ptr fs:[0], ecx
// 0051220c  83c448               add esp, 0x48
// 0051220f  c3                   ret 
// library g3d-6.09/G3Dcpp\stringutils.cpp (function ?stringJoin@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV?$Array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/stringutils.cpp
