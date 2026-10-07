// roc 2009-06 00592730  unit: seg_00590000  size: 323 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00592730
//
// 00592730  53                   push ebx
// 00592731  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00592735  55                   push ebp
// 00592736  56                   push esi
// 00592737  57                   push edi
// 00592738  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0059273c  8b4704               mov eax, dword ptr [edi + 4]
// 0059273f  89442414             mov dword ptr [esp + 0x14], eax
// 00592743  81fbf0c99a3b         cmp ebx, 0x3b9ac9f0
// 00592749  761c                 jbe 0x592767
// 0059274b  8b0f                 mov ecx, dword ptr [edi]
// 0059274d  c7411436000000       mov dword ptr [ecx + 0x14], 0x36
// 00592754  8b17                 mov edx, dword ptr [edi]
// 00592756  c7421801000000       mov dword ptr [edx + 0x18], 1
// 0059275d  8b07                 mov eax, dword ptr [edi]
// 0059275f  8b08                 mov ecx, dword ptr [eax]
// 00592761  57                   push edi
// 00592762  ffd1                 call ecx
// 00592764  83c404               add esp, 4
// 00592767  8bc3                 mov eax, ebx
// 00592769  83e007               and eax, 7
// 0059276c  760d                 jbe 0x59277b
// 0059276e  ba08000000           mov edx, 8
// 00592773  2bd0                 sub edx, eax
// 00592775  03da                 add ebx, edx
// 00592777  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0059277b  8b742418             mov esi, dword ptr [esp + 0x18]
// 0059277f  85f6                 test esi, esi
// 00592781  7c05                 jl 0x592788
// 00592783  83fe02               cmp esi, 2
// 00592786  7c18                 jl 0x5927a0
// 00592788  8b07                 mov eax, dword ptr [edi]
// 0059278a  c740140e000000       mov dword ptr [eax + 0x14], 0xe
// 00592791  8b0f                 mov ecx, dword ptr [edi]
// 00592793  897118               mov dword ptr [ecx + 0x18], esi
// 00592796  8b17                 mov edx, dword ptr [edi]
// 00592798  8b02                 mov eax, dword ptr [edx]
// 0059279a  57                   push edi
// 0059279b  ffd0                 call eax
// 0059279d  83c404               add esp, 4
// 005927a0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005927a4  8b44b134             mov eax, dword ptr [ecx + esi*4 + 0x34]
// 005927a8  33ed                 xor ebp, ebp
// 005927aa  85c0                 test eax, eax
// 005927ac  7413                 je 0x5927c1
// 005927ae  8bff                 mov edi, edi
// 005927b0  395808               cmp dword ptr [eax + 8], ebx
// 005927b3  0f83a4000000         jae 0x59285d
// 005927b9  8be8                 mov ebp, eax
// 005927bb  8b00                 mov eax, dword ptr [eax]
// 005927bd  85c0                 test eax, eax
// 005927bf  75ef                 jne 0x5927b0
// 005927c1  83c310               add ebx, 0x10
// 005927c4  85ed                 test ebp, ebp
// 005927c6  7509                 jne 0x5927d1
// 005927c8  8b34b5081f8d00       mov esi, dword ptr [esi*4 + 0x8d1f08]
// 005927cf  eb07                 jmp 0x5927d8
// 005927d1  8b34b5101f8d00       mov esi, dword ptr [esi*4 + 0x8d1f10]
// 005927d8  b800ca9a3b           mov eax, 0x3b9aca00
// 005927dd  2bc3                 sub eax, ebx
// 005927df  3bf0                 cmp esi, eax
// 005927e1  7602                 jbe 0x5927e5
// 005927e3  8bf0                 mov esi, eax
// 005927e5  8d141e               lea edx, [esi + ebx]
// 005927e8  52                   push edx
// 005927e9  57                   push edi
// 005927ea  e851820000           call 0x59aa40
// 005927ef  83c408               add esp, 8
// 005927f2  85c0                 test eax, eax
// 005927f4  7534                 jne 0x59282a
// 005927f6  d1ee                 shr esi, 1
// 005927f8  83fe32               cmp esi, 0x32
// 005927fb  731c                 jae 0x592819
// 005927fd  8b07                 mov eax, dword ptr [edi]
// 005927ff  c7401436000000       mov dword ptr [eax + 0x14], 0x36
// 00592806  8b0f                 mov ecx, dword ptr [edi]
// 00592808  c7411802000000       mov dword ptr [ecx + 0x18], 2
// 0059280f  8b17                 mov edx, dword ptr [edi]
// 00592811  8b02                 mov eax, dword ptr [edx]
// 00592813  57                   push edi
// 00592814  ffd0                 call eax
// 00592816  83c404               add esp, 4
// 00592819  8d0c1e               lea ecx, [esi + ebx]
// 0059281c  51                   push ecx
// 0059281d  57                   push edi
// 0059281e  e81d820000           call 0x59aa40
// 00592823  83c408               add esp, 8
// 00592826  85c0                 test eax, eax
// 00592828  74cc                 je 0x5927f6
// 0059282a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0059282e  8d141e               lea edx, [esi + ebx]
// 00592831  01514c               add dword ptr [ecx + 0x4c], edx
// 00592834  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00592838  03f2                 add esi, edx
// 0059283a  c70000000000         mov dword ptr [eax], 0
// 00592840  c7400400000000       mov dword ptr [eax + 4], 0
// 00592847  897008               mov dword ptr [eax + 8], esi
// 0059284a  8bda                 mov ebx, edx
// 0059284c  85ed                 test ebp, ebp
// 0059284e  750a                 jne 0x59285a
// 00592850  8b542418             mov edx, dword ptr [esp + 0x18]
// 00592854  89449134             mov dword ptr [ecx + edx*4 + 0x34], eax
// 00592858  eb03                 jmp 0x59285d
// 0059285a  894500               mov dword ptr [ebp], eax
// 0059285d  8b4804               mov ecx, dword ptr [eax + 4]
// 00592860  295808               sub dword ptr [eax + 8], ebx
// 00592863  5f                   pop edi
// 00592864  8d540110             lea edx, [ecx + eax + 0x10]
// 00592868  5e                   pop esi
// 00592869  03cb                 add ecx, ebx
// 0059286b  5d                   pop ebp
// 0059286c  894804               mov dword ptr [eax + 4], ecx
// 0059286f  8bc2                 mov eax, edx
// 00592871  5b                   pop ebx
// 00592872  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _alloc_small)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
