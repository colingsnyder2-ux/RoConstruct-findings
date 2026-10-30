// from server: 100% by auto
// roc 2007-08 0051f360  unit: seg_00510000  size: 291 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051f360
//
// 0051f360  53                   push ebx
// 0051f361  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0051f365  8b4304               mov eax, dword ptr [ebx + 4]
// 0051f368  55                   push ebp
// 0051f369  56                   push esi
// 0051f36a  57                   push edi
// 0051f36b  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0051f36f  81fff0c99a3b         cmp edi, 0x3b9ac9f0
// 0051f375  89442414             mov dword ptr [esp + 0x14], eax
// 0051f379  760c                 jbe 0x51f387
// 0051f37b  6a01                 push 1
// 0051f37d  8bc3                 mov eax, ebx
// 0051f37f  e8bcffffff           call 0x51f340
// 0051f384  83c404               add esp, 4
// 0051f387  8bc7                 mov eax, edi
// 0051f389  83e007               and eax, 7
// 0051f38c  760d                 jbe 0x51f39b
// 0051f38e  b908000000           mov ecx, 8
// 0051f393  2bc8                 sub ecx, eax
// 0051f395  03f9                 add edi, ecx
// 0051f397  897c241c             mov dword ptr [esp + 0x1c], edi
// 0051f39b  8b742418             mov esi, dword ptr [esp + 0x18]
// 0051f39f  85f6                 test esi, esi
// 0051f3a1  7c05                 jl 0x51f3a8
// 0051f3a3  83fe02               cmp esi, 2
// 0051f3a6  7c18                 jl 0x51f3c0
// 0051f3a8  8b13                 mov edx, dword ptr [ebx]
// 0051f3aa  c742140e000000       mov dword ptr [edx + 0x14], 0xe
// 0051f3b1  8b03                 mov eax, dword ptr [ebx]
// 0051f3b3  897018               mov dword ptr [eax + 0x18], esi
// 0051f3b6  8b0b                 mov ecx, dword ptr [ebx]
// 0051f3b8  8b11                 mov edx, dword ptr [ecx]
// 0051f3ba  53                   push ebx
// 0051f3bb  ffd2                 call edx
// 0051f3bd  83c404               add esp, 4
// 0051f3c0  8b442414             mov eax, dword ptr [esp + 0x14]
// 0051f3c4  8b44b034             mov eax, dword ptr [eax + esi*4 + 0x34]
// 0051f3c8  33ed                 xor ebp, ebp
// 0051f3ca  85c0                 test eax, eax
// 0051f3cc  7413                 je 0x51f3e1
// 0051f3ce  8bff                 mov edi, edi
// 0051f3d0  397808               cmp dword ptr [eax + 8], edi
// 0051f3d3  0f8394000000         jae 0x51f46d
// 0051f3d9  8be8                 mov ebp, eax
// 0051f3db  8b00                 mov eax, dword ptr [eax]
// 0051f3dd  85c0                 test eax, eax
// 0051f3df  75ef                 jne 0x51f3d0
// 0051f3e1  83c710               add edi, 0x10
// 0051f3e4  85ed                 test ebp, ebp
// 0051f3e6  7509                 jne 0x51f3f1
// 0051f3e8  8b34b588357a00       mov esi, dword ptr [esi*4 + 0x7a3588]
// 0051f3ef  eb07                 jmp 0x51f3f8
// 0051f3f1  8b34b590357a00       mov esi, dword ptr [esi*4 + 0x7a3590]
// 0051f3f8  b800ca9a3b           mov eax, 0x3b9aca00
// 0051f3fd  2bc7                 sub eax, edi
// 0051f3ff  3bf0                 cmp esi, eax
// 0051f401  7602                 jbe 0x51f405
// 0051f403  8bf0                 mov esi, eax
// 0051f405  8d0c3e               lea ecx, [esi + edi]
// 0051f408  51                   push ecx
// 0051f409  53                   push ebx
// 0051f40a  e8b1500000           call 0x5244c0
// 0051f40f  83c408               add esp, 8
// 0051f412  85c0                 test eax, eax
// 0051f414  7524                 jne 0x51f43a
// 0051f416  d1ee                 shr esi, 1
// 0051f418  83fe32               cmp esi, 0x32
// 0051f41b  730c                 jae 0x51f429
// 0051f41d  6a02                 push 2
// 0051f41f  8bc3                 mov eax, ebx
// 0051f421  e81affffff           call 0x51f340
// 0051f426  83c404               add esp, 4
// 0051f429  8d143e               lea edx, [esi + edi]
// 0051f42c  52                   push edx
// 0051f42d  53                   push ebx
// 0051f42e  e88d500000           call 0x5244c0
// 0051f433  83c408               add esp, 8
// 0051f436  85c0                 test eax, eax
// 0051f438  74dc                 je 0x51f416
// 0051f43a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0051f43e  8d143e               lea edx, [esi + edi]
// 0051f441  01514c               add dword ptr [ecx + 0x4c], edx
// 0051f444  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0051f448  03f2                 add esi, edx
// 0051f44a  85ed                 test ebp, ebp
// 0051f44c  c70000000000         mov dword ptr [eax], 0
// 0051f452  c7400400000000       mov dword ptr [eax + 4], 0
// 0051f459  897008               mov dword ptr [eax + 8], esi
// 0051f45c  8bfa                 mov edi, edx
// 0051f45e  750a                 jne 0x51f46a
// 0051f460  8b542418             mov edx, dword ptr [esp + 0x18]
// 0051f464  89449134             mov dword ptr [ecx + edx*4 + 0x34], eax
// 0051f468  eb03                 jmp 0x51f46d
// 0051f46a  894500               mov dword ptr [ebp], eax
// 0051f46d  8b4804               mov ecx, dword ptr [eax + 4]
// 0051f470  297808               sub dword ptr [eax + 8], edi
// 0051f473  8d540110             lea edx, [ecx + eax + 0x10]
// 0051f477  03cf                 add ecx, edi
// 0051f479  5f                   pop edi
// 0051f47a  5e                   pop esi
// 0051f47b  5d                   pop ebp
// 0051f47c  894804               mov dword ptr [eax + 4], ecx
// 0051f47f  8bc2                 mov eax, edx
// 0051f481  5b                   pop ebx
// 0051f482  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _alloc_small)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
