// roc 2007-03 0060f7f0  unit: seg_00600000  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0060f7f0
//
// 0060f7f0  6aff                 push -1
// 0060f7f2  68f6d57500           push 0x75d5f6
// 0060f7f7  64a100000000         mov eax, dword ptr fs:[0]
// 0060f7fd  50                   push eax
// 0060f7fe  64892500000000       mov dword ptr fs:[0], esp
// 0060f805  83ec0c               sub esp, 0xc
// 0060f808  55                   push ebp
// 0060f809  56                   push esi
// 0060f80a  8bf1                 mov esi, ecx
// 0060f80c  33ed                 xor ebp, ebp
// 0060f80e  c706d41e7c00         mov dword ptr [esi], 0x7c1ed4
// 0060f814  896e04               mov dword ptr [esi + 4], ebp
// 0060f817  57                   push edi
// 0060f818  8974240c             mov dword ptr [esp + 0xc], esi
// 0060f81c  896e08               mov dword ptr [esi + 8], ebp
// 0060f81f  896e0c               mov dword ptr [esi + 0xc], ebp
// 0060f822  896c2420             mov dword ptr [esp + 0x20], ebp
// 0060f826  896e10               mov dword ptr [esi + 0x10], ebp
// 0060f829  8b442428             mov eax, dword ptr [esp + 0x28]
// 0060f82d  50                   push eax
// 0060f82e  c644242401           mov byte ptr [esp + 0x24], 1
// 0060f833  e8f8fee7ff           call 0x48f730
// 0060f838  50                   push eax
// 0060f839  8d4c2418             lea ecx, [esp + 0x18]
// 0060f83d  51                   push ecx
// 0060f83e  e85da6e2ff           call 0x439ea0
// 0060f843  83c40c               add esp, 0xc
// 0060f846  8b10                 mov edx, dword ptr [eax]
// 0060f848  83c004               add eax, 4
// 0060f84b  50                   push eax
// 0060f84c  8d4e08               lea ecx, [esi + 8]
// 0060f84f  c644242402           mov byte ptr [esp + 0x24], 2
// 0060f854  895604               mov dword ptr [esi + 4], edx
// 0060f857  e814e7dfff           call 0x40df70
// 0060f85c  8b442414             mov eax, dword ptr [esp + 0x14]
// 0060f860  3bc5                 cmp eax, ebp
// 0060f862  c644242001           mov byte ptr [esp + 0x20], 1
// 0060f867  742c                 je 0x60f895
// 0060f869  8bf8                 mov edi, eax
// 0060f86b  83c004               add eax, 4
// 0060f86e  83c9ff               or ecx, 0xffffffff
// 0060f871  f00fc108             lock xadd dword ptr [eax], ecx
// 0060f875  751e                 jne 0x60f895
// 0060f877  8b17                 mov edx, dword ptr [edi]
// 0060f879  8b4204               mov eax, dword ptr [edx + 4]
// 0060f87c  8bcf                 mov ecx, edi
// 0060f87e  ffd0                 call eax
// 0060f880  8d4f08               lea ecx, [edi + 8]
// 0060f883  83caff               or edx, 0xffffffff
// 0060f886  f00fc111             lock xadd dword ptr [ecx], edx
// 0060f88a  7509                 jne 0x60f895
// 0060f88c  8b07                 mov eax, dword ptr [edi]
// 0060f88e  8b5008               mov edx, dword ptr [eax + 8]
// 0060f891  8bcf                 mov ecx, edi
// 0060f893  ffd2                 call edx
// 0060f895  8b4604               mov eax, dword ptr [esi + 4]
// 0060f898  50                   push eax
// 0060f899  e86235f9ff           call 0x5a2e00
// 0060f89e  50                   push eax
// 0060f89f  8d442418             lea eax, [esp + 0x18]
// 0060f8a3  50                   push eax
// 0060f8a4  e807d6f7ff           call 0x58ceb0
// 0060f8a9  83c40c               add esp, 0xc
// 0060f8ac  8b08                 mov ecx, dword ptr [eax]
// 0060f8ae  83c004               add eax, 4
// 0060f8b1  894e0c               mov dword ptr [esi + 0xc], ecx
// 0060f8b4  50                   push eax
// 0060f8b5  8d4e10               lea ecx, [esi + 0x10]
// 0060f8b8  c644242403           mov byte ptr [esp + 0x24], 3
// 0060f8bd  e8aee6dfff           call 0x40df70
// 0060f8c2  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0060f8c6  3bfd                 cmp edi, ebp
// 0060f8c8  c644242001           mov byte ptr [esp + 0x20], 1
// 0060f8cd  742a                 je 0x60f8f9
// 0060f8cf  8d5704               lea edx, [edi + 4]
// 0060f8d2  83c8ff               or eax, 0xffffffff
// 0060f8d5  f00fc102             lock xadd dword ptr [edx], eax
// 0060f8d9  751e                 jne 0x60f8f9
// 0060f8db  8b17                 mov edx, dword ptr [edi]
// 0060f8dd  8b4204               mov eax, dword ptr [edx + 4]
// 0060f8e0  8bcf                 mov ecx, edi
// 0060f8e2  ffd0                 call eax
// 0060f8e4  8d4f08               lea ecx, [edi + 8]
// 0060f8e7  83caff               or edx, 0xffffffff
// 0060f8ea  f00fc111             lock xadd dword ptr [ecx], edx
// 0060f8ee  7509                 jne 0x60f8f9
// 0060f8f0  8b07                 mov eax, dword ptr [edi]
// 0060f8f2  8b5008               mov edx, dword ptr [eax + 8]
// 0060f8f5  8bcf                 mov ecx, edi
// 0060f8f7  ffd2                 call edx
// 0060f8f9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0060f8fd  5f                   pop edi
// 0060f8fe  8bc6                 mov eax, esi
// 0060f900  5e                   pop esi
// 0060f901  5d                   pop ebp
// 0060f902  64890d00000000       mov dword ptr fs:[0], ecx
// 0060f909  83c418               add esp, 0x18
// 0060f90c  c20400               ret 4
// library rbxgs/v8datamodel\Filters.cpp (function ??0PartByLocalCharacter@RBX@@QAE@PAVInstance@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Filters.cpp
