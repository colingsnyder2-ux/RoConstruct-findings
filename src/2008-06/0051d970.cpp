// from server: 100% by colin
// roc 2008-06 0051d970  unit: seg_00510000  size: 309 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051d970
//
// 0051d970  51                   push ecx
// 0051d971  55                   push ebp
// 0051d972  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0051d976  85ed                 test ebp, ebp
// 0051d978  0f8424010000         je 0x51daa2
// 0051d97e  53                   push ebx
// 0051d97f  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0051d983  85db                 test ebx, ebx
// 0051d985  0f8416010000         je 0x51daa1
// 0051d98b  57                   push edi
// 0051d98c  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0051d990  85ff                 test edi, edi
// 0051d992  0f8408010000         je 0x51daa0
// 0051d998  8b83c0000000         mov eax, dword ptr [ebx + 0xc0]
// 0051d99e  03c7                 add eax, edi
// 0051d9a0  8d0480               lea eax, [eax + eax*4]
// 0051d9a3  03c0                 add eax, eax
// 0051d9a5  56                   push esi
// 0051d9a6  03c0                 add eax, eax
// 0051d9a8  50                   push eax
// 0051d9a9  55                   push ebp
// 0051d9aa  e881cb0000           call 0x52a530
// 0051d9af  8bf0                 mov esi, eax
// 0051d9b1  83c408               add esp, 8
// 0051d9b4  89742410             mov dword ptr [esp + 0x10], esi
// 0051d9b8  85f6                 test esi, esi
// 0051d9ba  7514                 jne 0x51d9d0
// 0051d9bc  6860938200           push 0x829360
// 0051d9c1  55                   push ebp
// 0051d9c2  e889c00000           call 0x529a50
// 0051d9c7  83c408               add esp, 8
// 0051d9ca  5e                   pop esi
// 0051d9cb  5f                   pop edi
// 0051d9cc  5b                   pop ebx
// 0051d9cd  5d                   pop ebp
// 0051d9ce  59                   pop ecx
// 0051d9cf  c3                   ret 
// 0051d9d0  8b83c0000000         mov eax, dword ptr [ebx + 0xc0]
// 0051d9d6  8b93bc000000         mov edx, dword ptr [ebx + 0xbc]
// 0051d9dc  8d0c80               lea ecx, [eax + eax*4]
// 0051d9df  03c9                 add ecx, ecx
// 0051d9e1  03c9                 add ecx, ecx
// 0051d9e3  51                   push ecx
// 0051d9e4  52                   push edx
// 0051d9e5  56                   push esi
// 0051d9e6  e8f53d1800           call 0x6a17e0
// 0051d9eb  8b83bc000000         mov eax, dword ptr [ebx + 0xbc]
// 0051d9f1  50                   push eax
// 0051d9f2  55                   push ebp
// 0051d9f3  e808cb0000           call 0x52a500
// 0051d9f8  33ed                 xor ebp, ebp
// 0051d9fa  83c414               add esp, 0x14
// 0051d9fd  3bfd                 cmp edi, ebp
// 0051d9ff  89abbc000000         mov dword ptr [ebx + 0xbc], ebp
// 0051da05  0f8e7e000000         jle 0x51da89
// 0051da0b  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0051da0f  83c70c               add edi, 0xc
// 0051da12  8b83c0000000         mov eax, dword ptr [ebx + 0xc0]
// 0051da18  03c5                 add eax, ebp
// 0051da1a  8d0c80               lea ecx, [eax + eax*4]
// 0051da1d  6a05                 push 5
// 0051da1f  8d57f4               lea edx, [edi - 0xc]
// 0051da22  8d348e               lea esi, [esi + ecx*4]
// 0051da25  52                   push edx
// 0051da26  56                   push esi
// 0051da27  ff1548288000         call dword ptr [0x802848]
// 0051da2d  8b07                 mov eax, dword ptr [edi]
// 0051da2f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0051da33  50                   push eax
// 0051da34  51                   push ecx
// 0051da35  e8f6ca0000           call 0x52a530
// 0051da3a  83c414               add esp, 0x14
// 0051da3d  894608               mov dword ptr [esi + 8], eax
// 0051da40  85c0                 test eax, eax
// 0051da42  7514                 jne 0x51da58
// 0051da44  8b542418             mov edx, dword ptr [esp + 0x18]
// 0051da48  6838938200           push 0x829338
// 0051da4d  52                   push edx
// 0051da4e  e8fdbf0000           call 0x529a50
// 0051da53  83c408               add esp, 8
// 0051da56  eb1f                 jmp 0x51da77
// 0051da58  8b0f                 mov ecx, dword ptr [edi]
// 0051da5a  8b57fc               mov edx, dword ptr [edi - 4]
// 0051da5d  51                   push ecx
// 0051da5e  52                   push edx
// 0051da5f  50                   push eax
// 0051da60  e87b3d1800           call 0x6a17e0
// 0051da65  8b07                 mov eax, dword ptr [edi]
// 0051da67  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0051da6b  89460c               mov dword ptr [esi + 0xc], eax
// 0051da6e  8a5168               mov dl, byte ptr [ecx + 0x68]
// 0051da71  83c40c               add esp, 0xc
// 0051da74  885610               mov byte ptr [esi + 0x10], dl
// 0051da77  8b742410             mov esi, dword ptr [esp + 0x10]
// 0051da7b  45                   inc ebp
// 0051da7c  83c714               add edi, 0x14
// 0051da7f  3b6c2424             cmp ebp, dword ptr [esp + 0x24]
// 0051da83  7c8d                 jl 0x51da12
// 0051da85  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0051da89  01bbc0000000         add dword ptr [ebx + 0xc0], edi
// 0051da8f  818bb800000000020000 or dword ptr [ebx + 0xb8], 0x200
// 0051da99  89b3bc000000         mov dword ptr [ebx + 0xbc], esi
// 0051da9f  5e                   pop esi
// 0051daa0  5f                   pop edi
// 0051daa1  5b                   pop ebx
// 0051daa2  5d                   pop ebp
// 0051daa3  59                   pop ecx
// 0051daa4  c3                   ret 
// library g3d-6.09-png-dll/pngset.c (function _png_set_unknown_chunks)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09-png-dll pngset.c
