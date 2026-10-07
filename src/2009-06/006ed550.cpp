// roc 2009-06 006ed550  unit: seg_006e0000  size: 358 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ed550
//
// 006ed550  53                   push ebx
// 006ed551  55                   push ebp
// 006ed552  56                   push esi
// 006ed553  8b742418             mov esi, dword ptr [esp + 0x18]
// 006ed557  57                   push edi
// 006ed558  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006ed55c  8b4720               mov eax, dword ptr [edi + 0x20]
// 006ed55f  3b442418             cmp eax, dword ptr [esp + 0x18]
// 006ed563  7406                 je 0x6ed56b
// 006ed565  837e0c00             cmp dword ptr [esi + 0xc], 0
// 006ed569  7402                 je 0x6ed56d
// 006ed56b  33c0                 xor eax, eax
// 006ed56d  e8cefcffff           call 0x6ed240
// 006ed572  837e1000             cmp dword ptr [esi + 0x10], 0
// 006ed576  8b473c               mov eax, dword ptr [edi + 0x3c]
// 006ed579  89442414             mov dword ptr [esp + 0x14], eax
// 006ed57d  7519                 jne 0x6ed598
// 006ed57f  8b4e08               mov ecx, dword ptr [esi + 8]
// 006ed582  8b06                 mov eax, dword ptr [esi]
// 006ed584  51                   push ecx
// 006ed585  8b4e04               mov ecx, dword ptr [esi + 4]
// 006ed588  6a04                 push 4
// 006ed58a  8d54241c             lea edx, [esp + 0x1c]
// 006ed58e  52                   push edx
// 006ed58f  50                   push eax
// 006ed590  ffd1                 call ecx
// 006ed592  83c410               add esp, 0x10
// 006ed595  894610               mov dword ptr [esi + 0x10], eax
// 006ed598  837e1000             cmp dword ptr [esi + 0x10], 0
// 006ed59c  8b5740               mov edx, dword ptr [edi + 0x40]
// 006ed59f  89542414             mov dword ptr [esp + 0x14], edx
// 006ed5a3  7519                 jne 0x6ed5be
// 006ed5a5  8b4608               mov eax, dword ptr [esi + 8]
// 006ed5a8  8b16                 mov edx, dword ptr [esi]
// 006ed5aa  50                   push eax
// 006ed5ab  8b4604               mov eax, dword ptr [esi + 4]
// 006ed5ae  6a04                 push 4
// 006ed5b0  8d4c241c             lea ecx, [esp + 0x1c]
// 006ed5b4  51                   push ecx
// 006ed5b5  52                   push edx
// 006ed5b6  ffd0                 call eax
// 006ed5b8  83c410               add esp, 0x10
// 006ed5bb  894610               mov dword ptr [esi + 0x10], eax
// 006ed5be  837e1000             cmp dword ptr [esi + 0x10], 0
// 006ed5c2  8a4f48               mov cl, byte ptr [edi + 0x48]
// 006ed5c5  884c2414             mov byte ptr [esp + 0x14], cl
// 006ed5c9  7519                 jne 0x6ed5e4
// 006ed5cb  8b5608               mov edx, dword ptr [esi + 8]
// 006ed5ce  8b0e                 mov ecx, dword ptr [esi]
// 006ed5d0  52                   push edx
// 006ed5d1  8b5604               mov edx, dword ptr [esi + 4]
// 006ed5d4  6a01                 push 1
// 006ed5d6  8d44241c             lea eax, [esp + 0x1c]
// 006ed5da  50                   push eax
// 006ed5db  51                   push ecx
// 006ed5dc  ffd2                 call edx
// 006ed5de  83c410               add esp, 0x10
// 006ed5e1  894610               mov dword ptr [esi + 0x10], eax
// 006ed5e4  837e1000             cmp dword ptr [esi + 0x10], 0
// 006ed5e8  8a4749               mov al, byte ptr [edi + 0x49]
// 006ed5eb  88442414             mov byte ptr [esp + 0x14], al
// 006ed5ef  7519                 jne 0x6ed60a
// 006ed5f1  8b4e08               mov ecx, dword ptr [esi + 8]
// 006ed5f4  8b06                 mov eax, dword ptr [esi]
// 006ed5f6  51                   push ecx
// 006ed5f7  8b4e04               mov ecx, dword ptr [esi + 4]
// 006ed5fa  6a01                 push 1
// 006ed5fc  8d54241c             lea edx, [esp + 0x1c]
// 006ed600  52                   push edx
// 006ed601  50                   push eax
// 006ed602  ffd1                 call ecx
// 006ed604  83c410               add esp, 0x10
// 006ed607  894610               mov dword ptr [esi + 0x10], eax
// 006ed60a  837e1000             cmp dword ptr [esi + 0x10], 0
// 006ed60e  8a574a               mov dl, byte ptr [edi + 0x4a]
// 006ed611  88542414             mov byte ptr [esp + 0x14], dl
// 006ed615  7519                 jne 0x6ed630
// 006ed617  8b4608               mov eax, dword ptr [esi + 8]
// 006ed61a  8b16                 mov edx, dword ptr [esi]
// 006ed61c  50                   push eax
// 006ed61d  8b4604               mov eax, dword ptr [esi + 4]
// 006ed620  6a01                 push 1
// 006ed622  8d4c241c             lea ecx, [esp + 0x1c]
// 006ed626  51                   push ecx
// 006ed627  52                   push edx
// 006ed628  ffd0                 call eax
// 006ed62a  83c410               add esp, 0x10
// 006ed62d  894610               mov dword ptr [esi + 0x10], eax
// 006ed630  837e1000             cmp dword ptr [esi + 0x10], 0
// 006ed634  8a4f4b               mov cl, byte ptr [edi + 0x4b]
// 006ed637  884c2414             mov byte ptr [esp + 0x14], cl
// 006ed63b  7519                 jne 0x6ed656
// 006ed63d  8b5608               mov edx, dword ptr [esi + 8]
// 006ed640  8b0e                 mov ecx, dword ptr [esi]
// 006ed642  52                   push edx
// 006ed643  8b5604               mov edx, dword ptr [esi + 4]
// 006ed646  6a01                 push 1
// 006ed648  8d44241c             lea eax, [esp + 0x1c]
// 006ed64c  50                   push eax
// 006ed64d  51                   push ecx
// 006ed64e  ffd2                 call edx
// 006ed650  83c410               add esp, 0x10
// 006ed653  894610               mov dword ptr [esi + 0x10], eax
// 006ed656  837e1000             cmp dword ptr [esi + 0x10], 0
// 006ed65a  8b5f2c               mov ebx, dword ptr [edi + 0x2c]
// 006ed65d  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 006ed660  895c2414             mov dword ptr [esp + 0x14], ebx
// 006ed664  7538                 jne 0x6ed69e
// 006ed666  8b4608               mov eax, dword ptr [esi + 8]
// 006ed669  8b16                 mov edx, dword ptr [esi]
// 006ed66b  50                   push eax
// 006ed66c  8b4604               mov eax, dword ptr [esi + 4]
// 006ed66f  6a04                 push 4
// 006ed671  8d4c241c             lea ecx, [esp + 0x1c]
// 006ed675  51                   push ecx
// 006ed676  52                   push edx
// 006ed677  ffd0                 call eax
// 006ed679  83c410               add esp, 0x10
// 006ed67c  894610               mov dword ptr [esi + 0x10], eax
// 006ed67f  85c0                 test eax, eax
// 006ed681  751b                 jne 0x6ed69e
// 006ed683  8b4e08               mov ecx, dword ptr [esi + 8]
// 006ed686  8b06                 mov eax, dword ptr [esi]
// 006ed688  51                   push ecx
// 006ed689  8b4e04               mov ecx, dword ptr [esi + 4]
// 006ed68c  8d149d00000000       lea edx, [ebx*4]
// 006ed693  52                   push edx
// 006ed694  55                   push ebp
// 006ed695  50                   push eax
// 006ed696  ffd1                 call ecx
// 006ed698  83c410               add esp, 0x10
// 006ed69b  894610               mov dword ptr [esi + 0x10], eax
// 006ed69e  57                   push edi
// 006ed69f  8bc6                 mov eax, esi
// 006ed6a1  e81afcffff           call 0x6ed2c0
// 006ed6a6  57                   push edi
// 006ed6a7  8bc6                 mov eax, esi
// 006ed6a9  e852fdffff           call 0x6ed400
// 006ed6ae  83c408               add esp, 8
// 006ed6b1  5f                   pop edi
// 006ed6b2  5e                   pop esi
// 006ed6b3  5d                   pop ebp
// 006ed6b4  5b                   pop ebx
// 006ed6b5  c3                   ret 
// library lua-5.1.4/ldump.c (function _DumpFunction)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldump.c
