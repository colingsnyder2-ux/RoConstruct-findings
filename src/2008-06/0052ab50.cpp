// roc 2008-06 0052ab50  unit: seg_00520000  size: 323 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052ab50
//
// 0052ab50  53                   push ebx
// 0052ab51  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0052ab55  55                   push ebp
// 0052ab56  56                   push esi
// 0052ab57  57                   push edi
// 0052ab58  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0052ab5c  8b4704               mov eax, dword ptr [edi + 4]
// 0052ab5f  89442414             mov dword ptr [esp + 0x14], eax
// 0052ab63  81fbf0c99a3b         cmp ebx, 0x3b9ac9f0
// 0052ab69  761c                 jbe 0x52ab87
// 0052ab6b  8b0f                 mov ecx, dword ptr [edi]
// 0052ab6d  c7411436000000       mov dword ptr [ecx + 0x14], 0x36
// 0052ab74  8b17                 mov edx, dword ptr [edi]
// 0052ab76  c7421801000000       mov dword ptr [edx + 0x18], 1
// 0052ab7d  8b07                 mov eax, dword ptr [edi]
// 0052ab7f  8b08                 mov ecx, dword ptr [eax]
// 0052ab81  57                   push edi
// 0052ab82  ffd1                 call ecx
// 0052ab84  83c404               add esp, 4
// 0052ab87  8bc3                 mov eax, ebx
// 0052ab89  83e007               and eax, 7
// 0052ab8c  760d                 jbe 0x52ab9b
// 0052ab8e  ba08000000           mov edx, 8
// 0052ab93  2bd0                 sub edx, eax
// 0052ab95  03da                 add ebx, edx
// 0052ab97  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0052ab9b  8b742418             mov esi, dword ptr [esp + 0x18]
// 0052ab9f  85f6                 test esi, esi
// 0052aba1  7c05                 jl 0x52aba8
// 0052aba3  83fe02               cmp esi, 2
// 0052aba6  7c18                 jl 0x52abc0
// 0052aba8  8b07                 mov eax, dword ptr [edi]
// 0052abaa  c740140e000000       mov dword ptr [eax + 0x14], 0xe
// 0052abb1  8b0f                 mov ecx, dword ptr [edi]
// 0052abb3  897118               mov dword ptr [ecx + 0x18], esi
// 0052abb6  8b17                 mov edx, dword ptr [edi]
// 0052abb8  8b02                 mov eax, dword ptr [edx]
// 0052abba  57                   push edi
// 0052abbb  ffd0                 call eax
// 0052abbd  83c404               add esp, 4
// 0052abc0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0052abc4  8b44b134             mov eax, dword ptr [ecx + esi*4 + 0x34]
// 0052abc8  33ed                 xor ebp, ebp
// 0052abca  85c0                 test eax, eax
// 0052abcc  7413                 je 0x52abe1
// 0052abce  8bff                 mov edi, edi
// 0052abd0  395808               cmp dword ptr [eax + 8], ebx
// 0052abd3  0f83a4000000         jae 0x52ac7d
// 0052abd9  8be8                 mov ebp, eax
// 0052abdb  8b00                 mov eax, dword ptr [eax]
// 0052abdd  85c0                 test eax, eax
// 0052abdf  75ef                 jne 0x52abd0
// 0052abe1  83c310               add ebx, 0x10
// 0052abe4  85ed                 test ebp, ebp
// 0052abe6  7509                 jne 0x52abf1
// 0052abe8  8b34b554bb8200       mov esi, dword ptr [esi*4 + 0x82bb54]
// 0052abef  eb07                 jmp 0x52abf8
// 0052abf1  8b34b55cbb8200       mov esi, dword ptr [esi*4 + 0x82bb5c]
// 0052abf8  b800ca9a3b           mov eax, 0x3b9aca00
// 0052abfd  2bc3                 sub eax, ebx
// 0052abff  3bf0                 cmp esi, eax
// 0052ac01  7602                 jbe 0x52ac05
// 0052ac03  8bf0                 mov esi, eax
// 0052ac05  8d141e               lea edx, [esi + ebx]
// 0052ac08  52                   push edx
// 0052ac09  57                   push edi
// 0052ac0a  e8515b0000           call 0x530760
// 0052ac0f  83c408               add esp, 8
// 0052ac12  85c0                 test eax, eax
// 0052ac14  7534                 jne 0x52ac4a
// 0052ac16  d1ee                 shr esi, 1
// 0052ac18  83fe32               cmp esi, 0x32
// 0052ac1b  731c                 jae 0x52ac39
// 0052ac1d  8b07                 mov eax, dword ptr [edi]
// 0052ac1f  c7401436000000       mov dword ptr [eax + 0x14], 0x36
// 0052ac26  8b0f                 mov ecx, dword ptr [edi]
// 0052ac28  c7411802000000       mov dword ptr [ecx + 0x18], 2
// 0052ac2f  8b17                 mov edx, dword ptr [edi]
// 0052ac31  8b02                 mov eax, dword ptr [edx]
// 0052ac33  57                   push edi
// 0052ac34  ffd0                 call eax
// 0052ac36  83c404               add esp, 4
// 0052ac39  8d0c1e               lea ecx, [esi + ebx]
// 0052ac3c  51                   push ecx
// 0052ac3d  57                   push edi
// 0052ac3e  e81d5b0000           call 0x530760
// 0052ac43  83c408               add esp, 8
// 0052ac46  85c0                 test eax, eax
// 0052ac48  74cc                 je 0x52ac16
// 0052ac4a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0052ac4e  8d141e               lea edx, [esi + ebx]
// 0052ac51  01514c               add dword ptr [ecx + 0x4c], edx
// 0052ac54  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0052ac58  03f2                 add esi, edx
// 0052ac5a  c70000000000         mov dword ptr [eax], 0
// 0052ac60  c7400400000000       mov dword ptr [eax + 4], 0
// 0052ac67  897008               mov dword ptr [eax + 8], esi
// 0052ac6a  8bda                 mov ebx, edx
// 0052ac6c  85ed                 test ebp, ebp
// 0052ac6e  750a                 jne 0x52ac7a
// 0052ac70  8b542418             mov edx, dword ptr [esp + 0x18]
// 0052ac74  89449134             mov dword ptr [ecx + edx*4 + 0x34], eax
// 0052ac78  eb03                 jmp 0x52ac7d
// 0052ac7a  894500               mov dword ptr [ebp], eax
// 0052ac7d  8b4804               mov ecx, dword ptr [eax + 4]
// 0052ac80  295808               sub dword ptr [eax + 8], ebx
// 0052ac83  5f                   pop edi
// 0052ac84  8d540110             lea edx, [ecx + eax + 0x10]
// 0052ac88  5e                   pop esi
// 0052ac89  03cb                 add ecx, ebx
// 0052ac8b  5d                   pop ebp
// 0052ac8c  894804               mov dword ptr [eax + 4], ecx
// 0052ac8f  8bc2                 mov eax, edx
// 0052ac91  5b                   pop ebx
// 0052ac92  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _alloc_small)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
