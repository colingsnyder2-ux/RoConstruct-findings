// from server: 100% by auto
// roc 2011-06 005687e0  unit: seg_00560000  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005687e0
//
// 005687e0  53                   push ebx
// 005687e1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005687e5  55                   push ebp
// 005687e6  56                   push esi
// 005687e7  57                   push edi
// 005687e8  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005687ec  8b6f04               mov ebp, dword ptr [edi + 4]
// 005687ef  81fbf0c99a3b         cmp ebx, 0x3b9ac9f0
// 005687f5  761c                 jbe 0x568813
// 005687f7  8b07                 mov eax, dword ptr [edi]
// 005687f9  c7401436000000       mov dword ptr [eax + 0x14], 0x36
// 00568800  8b0f                 mov ecx, dword ptr [edi]
// 00568802  c7411803000000       mov dword ptr [ecx + 0x18], 3
// 00568809  8b17                 mov edx, dword ptr [edi]
// 0056880b  8b02                 mov eax, dword ptr [edx]
// 0056880d  57                   push edi
// 0056880e  ffd0                 call eax
// 00568810  83c404               add esp, 4
// 00568813  8bc3                 mov eax, ebx
// 00568815  83e007               and eax, 7
// 00568818  7609                 jbe 0x568823
// 0056881a  b908000000           mov ecx, 8
// 0056881f  2bc8                 sub ecx, eax
// 00568821  03d9                 add ebx, ecx
// 00568823  8b442418             mov eax, dword ptr [esp + 0x18]
// 00568827  85c0                 test eax, eax
// 00568829  7c05                 jl 0x568830
// 0056882b  83f802               cmp eax, 2
// 0056882e  7c18                 jl 0x568848
// 00568830  8b17                 mov edx, dword ptr [edi]
// 00568832  c742140e000000       mov dword ptr [edx + 0x14], 0xe
// 00568839  8b0f                 mov ecx, dword ptr [edi]
// 0056883b  894118               mov dword ptr [ecx + 0x18], eax
// 0056883e  8b17                 mov edx, dword ptr [edi]
// 00568840  8b02                 mov eax, dword ptr [edx]
// 00568842  57                   push edi
// 00568843  ffd0                 call eax
// 00568845  83c404               add esp, 4
// 00568848  8d4b10               lea ecx, [ebx + 0x10]
// 0056884b  51                   push ecx
// 0056884c  57                   push edi
// 0056884d  e83ec00000           call 0x574890
// 00568852  8bf0                 mov esi, eax
// 00568854  83c408               add esp, 8
// 00568857  85f6                 test esi, esi
// 00568859  751c                 jne 0x568877
// 0056885b  8b17                 mov edx, dword ptr [edi]
// 0056885d  c7421436000000       mov dword ptr [edx + 0x14], 0x36
// 00568864  8b07                 mov eax, dword ptr [edi]
// 00568866  c7401804000000       mov dword ptr [eax + 0x18], 4
// 0056886d  8b0f                 mov ecx, dword ptr [edi]
// 0056886f  8b11                 mov edx, dword ptr [ecx]
// 00568871  57                   push edi
// 00568872  ffd2                 call edx
// 00568874  83c404               add esp, 4
// 00568877  8d4310               lea eax, [ebx + 0x10]
// 0056887a  01454c               add dword ptr [ebp + 0x4c], eax
// 0056887d  8b442418             mov eax, dword ptr [esp + 0x18]
// 00568881  8b4c853c             mov ecx, dword ptr [ebp + eax*4 + 0x3c]
// 00568885  895e04               mov dword ptr [esi + 4], ebx
// 00568888  890e                 mov dword ptr [esi], ecx
// 0056888a  c7460800000000       mov dword ptr [esi + 8], 0
// 00568891  8974853c             mov dword ptr [ebp + eax*4 + 0x3c], esi
// 00568895  5f                   pop edi
// 00568896  8d4610               lea eax, [esi + 0x10]
// 00568899  5e                   pop esi
// 0056889a  5d                   pop ebp
// 0056889b  5b                   pop ebx
// 0056889c  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _alloc_large)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
