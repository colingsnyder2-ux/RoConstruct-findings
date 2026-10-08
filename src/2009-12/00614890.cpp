// roc 2009-12 00614890  unit: seg_00610000  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00614890
//
// 00614890  53                   push ebx
// 00614891  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00614895  55                   push ebp
// 00614896  56                   push esi
// 00614897  57                   push edi
// 00614898  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0061489c  8b6f04               mov ebp, dword ptr [edi + 4]
// 0061489f  81fbf0c99a3b         cmp ebx, 0x3b9ac9f0
// 006148a5  761c                 jbe 0x6148c3
// 006148a7  8b07                 mov eax, dword ptr [edi]
// 006148a9  c7401436000000       mov dword ptr [eax + 0x14], 0x36
// 006148b0  8b0f                 mov ecx, dword ptr [edi]
// 006148b2  c7411803000000       mov dword ptr [ecx + 0x18], 3
// 006148b9  8b17                 mov edx, dword ptr [edi]
// 006148bb  8b02                 mov eax, dword ptr [edx]
// 006148bd  57                   push edi
// 006148be  ffd0                 call eax
// 006148c0  83c404               add esp, 4
// 006148c3  8bc3                 mov eax, ebx
// 006148c5  83e007               and eax, 7
// 006148c8  7609                 jbe 0x6148d3
// 006148ca  b908000000           mov ecx, 8
// 006148cf  2bc8                 sub ecx, eax
// 006148d1  03d9                 add ebx, ecx
// 006148d3  8b442418             mov eax, dword ptr [esp + 0x18]
// 006148d7  85c0                 test eax, eax
// 006148d9  7c05                 jl 0x6148e0
// 006148db  83f802               cmp eax, 2
// 006148de  7c18                 jl 0x6148f8
// 006148e0  8b17                 mov edx, dword ptr [edi]
// 006148e2  c742140e000000       mov dword ptr [edx + 0x14], 0xe
// 006148e9  8b0f                 mov ecx, dword ptr [edi]
// 006148eb  894118               mov dword ptr [ecx + 0x18], eax
// 006148ee  8b17                 mov edx, dword ptr [edi]
// 006148f0  8b02                 mov eax, dword ptr [edx]
// 006148f2  57                   push edi
// 006148f3  ffd0                 call eax
// 006148f5  83c404               add esp, 4
// 006148f8  8d4b10               lea ecx, [ebx + 0x10]
// 006148fb  51                   push ecx
// 006148fc  57                   push edi
// 006148fd  e86e810000           call 0x61ca70
// 00614902  8bf0                 mov esi, eax
// 00614904  83c408               add esp, 8
// 00614907  85f6                 test esi, esi
// 00614909  751c                 jne 0x614927
// 0061490b  8b17                 mov edx, dword ptr [edi]
// 0061490d  c7421436000000       mov dword ptr [edx + 0x14], 0x36
// 00614914  8b07                 mov eax, dword ptr [edi]
// 00614916  c7401804000000       mov dword ptr [eax + 0x18], 4
// 0061491d  8b0f                 mov ecx, dword ptr [edi]
// 0061491f  8b11                 mov edx, dword ptr [ecx]
// 00614921  57                   push edi
// 00614922  ffd2                 call edx
// 00614924  83c404               add esp, 4
// 00614927  8d4310               lea eax, [ebx + 0x10]
// 0061492a  01454c               add dword ptr [ebp + 0x4c], eax
// 0061492d  8b442418             mov eax, dword ptr [esp + 0x18]
// 00614931  8b4c853c             mov ecx, dword ptr [ebp + eax*4 + 0x3c]
// 00614935  895e04               mov dword ptr [esi + 4], ebx
// 00614938  890e                 mov dword ptr [esi], ecx
// 0061493a  c7460800000000       mov dword ptr [esi + 8], 0
// 00614941  8974853c             mov dword ptr [ebp + eax*4 + 0x3c], esi
// 00614945  5f                   pop edi
// 00614946  8d4610               lea eax, [esi + 0x10]
// 00614949  5e                   pop esi
// 0061494a  5d                   pop ebp
// 0061494b  5b                   pop ebx
// 0061494c  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _alloc_large)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
