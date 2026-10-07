// roc 2012-06 00639530  unit: G3D::_internal::DialogTemplate  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00639530
//
// 00639530  6aff                 push -1
// 00639532  689c4fab00           push 0xab4f9c
// 00639537  64a100000000         mov eax, dword ptr fs:[0]
// 0063953d  50                   push eax
// 0063953e  64892500000000       mov dword ptr fs:[0], esp
// 00639545  83ec3c               sub esp, 0x3c
// 00639548  53                   push ebx
// 00639549  55                   push ebp
// 0063954a  56                   push esi
// 0063954b  33ed                 xor ebp, ebp
// 0063954d  57                   push edi
// 0063954e  8d4c2414             lea ecx, [esp + 0x14]
// 00639552  896c2410             mov dword ptr [esp + 0x10], ebp
// 00639556  ff155426b200         call dword ptr [0xb22654]
// 0063955c  8b742460             mov esi, dword ptr [esp + 0x60]
// 00639560  8b4604               mov eax, dword ptr [esi + 4]
// 00639563  48                   dec eax
// 00639564  bb01000000           mov ebx, 1
// 00639569  33ff                 xor edi, edi
// 0063956b  895c2454             mov dword ptr [esp + 0x54], ebx
// 0063956f  85c0                 test eax, eax
// 00639571  7e48                 jle 0x6395bb
// 00639573  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 00639577  8b06                 mov eax, dword ptr [esi]
// 00639579  03c5                 add eax, ebp
// 0063957b  53                   push ebx
// 0063957c  50                   push eax
// 0063957d  8d442438             lea eax, [esp + 0x38]
// 00639581  50                   push eax
// 00639582  ff154025b200         call dword ptr [0xb22540]
// 00639588  83c40c               add esp, 0xc
// 0063958b  50                   push eax
// 0063958c  8d4c2418             lea ecx, [esp + 0x18]
// 00639590  c644245802           mov byte ptr [esp + 0x58], 2
// 00639595  ff15e026b200         call dword ptr [0xb226e0]
// 0063959b  8d4c2430             lea ecx, [esp + 0x30]
// 0063959f  c644245401           mov byte ptr [esp + 0x54], 1
// 006395a4  ff153c26b200         call dword ptr [0xb2263c]
// 006395aa  8b4604               mov eax, dword ptr [esi + 4]
// 006395ad  47                   inc edi
// 006395ae  48                   dec eax
// 006395af  83c51c               add ebp, 0x1c
// 006395b2  3bf8                 cmp edi, eax
// 006395b4  7cc1                 jl 0x639577
// 006395b6  bb01000000           mov ebx, 1
// 006395bb  8b4604               mov eax, dword ptr [esi + 4]
// 006395be  85c0                 test eax, eax
// 006395c0  7e25                 jle 0x6395e7
// 006395c2  8b16                 mov edx, dword ptr [esi]
// 006395c4  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 006395c8  8d0cc500000000       lea ecx, [eax*8]
// 006395cf  2bc8                 sub ecx, eax
// 006395d1  8d448ae4             lea eax, [edx + ecx*4 - 0x1c]
// 006395d5  50                   push eax
// 006395d6  8d442418             lea eax, [esp + 0x18]
// 006395da  50                   push eax
// 006395db  56                   push esi
// 006395dc  ff15c026b200         call dword ptr [0xb226c0]
// 006395e2  83c40c               add esp, 0xc
// 006395e5  eb11                 jmp 0x6395f8
// 006395e7  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 006395eb  8d4c2414             lea ecx, [esp + 0x14]
// 006395ef  51                   push ecx
// 006395f0  8bce                 mov ecx, esi
// 006395f2  ff154426b200         call dword ptr [0xb22644]
// 006395f8  8d4c2414             lea ecx, [esp + 0x14]
// 006395fc  895c2410             mov dword ptr [esp + 0x10], ebx
// 00639600  c644245400           mov byte ptr [esp + 0x54], 0
// 00639605  ff153c26b200         call dword ptr [0xb2263c]
// 0063960b  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0063960f  5f                   pop edi
// 00639610  8bc6                 mov eax, esi
// 00639612  5e                   pop esi
// 00639613  5d                   pop ebp
// 00639614  5b                   pop ebx
// 00639615  64890d00000000       mov dword ptr fs:[0], ecx
// 0063961c  83c448               add esp, 0x48
// 0063961f  c3                   ret 
// library g3d-6.09/G3Dcpp\stringutils.cpp (function ?stringJoin@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV?$Array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/stringutils.cpp
