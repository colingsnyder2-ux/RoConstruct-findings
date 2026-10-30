// roc 2007-03 00519680  unit: seg_00510000  size: 291 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00519680
//
// 00519680  53                   push ebx
// 00519681  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00519685  8b4304               mov eax, dword ptr [ebx + 4]
// 00519688  55                   push ebp
// 00519689  56                   push esi
// 0051968a  57                   push edi
// 0051968b  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0051968f  81fff0c99a3b         cmp edi, 0x3b9ac9f0
// 00519695  89442414             mov dword ptr [esp + 0x14], eax
// 00519699  760c                 jbe 0x5196a7
// 0051969b  6a01                 push 1
// 0051969d  8bc3                 mov eax, ebx
// 0051969f  e8bcffffff           call 0x519660
// 005196a4  83c404               add esp, 4
// 005196a7  8bc7                 mov eax, edi
// 005196a9  83e007               and eax, 7
// 005196ac  760d                 jbe 0x5196bb
// 005196ae  b908000000           mov ecx, 8
// 005196b3  2bc8                 sub ecx, eax
// 005196b5  03f9                 add edi, ecx
// 005196b7  897c241c             mov dword ptr [esp + 0x1c], edi
// 005196bb  8b742418             mov esi, dword ptr [esp + 0x18]
// 005196bf  85f6                 test esi, esi
// 005196c1  7c05                 jl 0x5196c8
// 005196c3  83fe02               cmp esi, 2
// 005196c6  7c18                 jl 0x5196e0
// 005196c8  8b13                 mov edx, dword ptr [ebx]
// 005196ca  c742140e000000       mov dword ptr [edx + 0x14], 0xe
// 005196d1  8b03                 mov eax, dword ptr [ebx]
// 005196d3  897018               mov dword ptr [eax + 0x18], esi
// 005196d6  8b0b                 mov ecx, dword ptr [ebx]
// 005196d8  8b11                 mov edx, dword ptr [ecx]
// 005196da  53                   push ebx
// 005196db  ffd2                 call edx
// 005196dd  83c404               add esp, 4
// 005196e0  8b442414             mov eax, dword ptr [esp + 0x14]
// 005196e4  8b44b034             mov eax, dword ptr [eax + esi*4 + 0x34]
// 005196e8  33ed                 xor ebp, ebp
// 005196ea  85c0                 test eax, eax
// 005196ec  7413                 je 0x519701
// 005196ee  8bff                 mov edi, edi
// 005196f0  397808               cmp dword ptr [eax + 8], edi
// 005196f3  0f8394000000         jae 0x51978d
// 005196f9  8be8                 mov ebp, eax
// 005196fb  8b00                 mov eax, dword ptr [eax]
// 005196fd  85c0                 test eax, eax
// 005196ff  75ef                 jne 0x5196f0
// 00519701  83c710               add edi, 0x10
// 00519704  85ed                 test ebp, ebp
// 00519706  7509                 jne 0x519711
// 00519708  8b34b574357a00       mov esi, dword ptr [esi*4 + 0x7a3574]
// 0051970f  eb07                 jmp 0x519718
// 00519711  8b34b57c357a00       mov esi, dword ptr [esi*4 + 0x7a357c]
// 00519718  b800ca9a3b           mov eax, 0x3b9aca00
// 0051971d  2bc7                 sub eax, edi
// 0051971f  3bf0                 cmp esi, eax
// 00519721  7602                 jbe 0x519725
// 00519723  8bf0                 mov esi, eax
// 00519725  8d0c3e               lea ecx, [esi + edi]
// 00519728  51                   push ecx
// 00519729  53                   push ebx
// 0051972a  e8715a0000           call 0x51f1a0
// 0051972f  83c408               add esp, 8
// 00519732  85c0                 test eax, eax
// 00519734  7524                 jne 0x51975a
// 00519736  d1ee                 shr esi, 1
// 00519738  83fe32               cmp esi, 0x32
// 0051973b  730c                 jae 0x519749
// 0051973d  6a02                 push 2
// 0051973f  8bc3                 mov eax, ebx
// 00519741  e81affffff           call 0x519660
// 00519746  83c404               add esp, 4
// 00519749  8d143e               lea edx, [esi + edi]
// 0051974c  52                   push edx
// 0051974d  53                   push ebx
// 0051974e  e84d5a0000           call 0x51f1a0
// 00519753  83c408               add esp, 8
// 00519756  85c0                 test eax, eax
// 00519758  74dc                 je 0x519736
// 0051975a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0051975e  8d143e               lea edx, [esi + edi]
// 00519761  01514c               add dword ptr [ecx + 0x4c], edx
// 00519764  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00519768  03f2                 add esi, edx
// 0051976a  85ed                 test ebp, ebp
// 0051976c  c70000000000         mov dword ptr [eax], 0
// 00519772  c7400400000000       mov dword ptr [eax + 4], 0
// 00519779  897008               mov dword ptr [eax + 8], esi
// 0051977c  8bfa                 mov edi, edx
// 0051977e  750a                 jne 0x51978a
// 00519780  8b542418             mov edx, dword ptr [esp + 0x18]
// 00519784  89449134             mov dword ptr [ecx + edx*4 + 0x34], eax
// 00519788  eb03                 jmp 0x51978d
// 0051978a  894500               mov dword ptr [ebp], eax
// 0051978d  8b4804               mov ecx, dword ptr [eax + 4]
// 00519790  297808               sub dword ptr [eax + 8], edi
// 00519793  8d540110             lea edx, [ecx + eax + 0x10]
// 00519797  03cf                 add ecx, edi
// 00519799  5f                   pop edi
// 0051979a  5e                   pop esi
// 0051979b  5d                   pop ebp
// 0051979c  894804               mov dword ptr [eax + 4], ecx
// 0051979f  8bc2                 mov eax, edx
// 005197a1  5b                   pop ebx
// 005197a2  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _alloc_small)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
