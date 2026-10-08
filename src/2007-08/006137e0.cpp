// from server: 100% by auto
// roc 2007-08 006137e0  unit: seg_00610000  size: 358 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006137e0
//
// 006137e0  53                   push ebx
// 006137e1  55                   push ebp
// 006137e2  56                   push esi
// 006137e3  8b742418             mov esi, dword ptr [esp + 0x18]
// 006137e7  57                   push edi
// 006137e8  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006137ec  8b4720               mov eax, dword ptr [edi + 0x20]
// 006137ef  3b442418             cmp eax, dword ptr [esp + 0x18]
// 006137f3  7406                 je 0x6137fb
// 006137f5  837e0c00             cmp dword ptr [esi + 0xc], 0
// 006137f9  7402                 je 0x6137fd
// 006137fb  33c0                 xor eax, eax
// 006137fd  e8befcffff           call 0x6134c0
// 00613802  837e1000             cmp dword ptr [esi + 0x10], 0
// 00613806  8b473c               mov eax, dword ptr [edi + 0x3c]
// 00613809  89442414             mov dword ptr [esp + 0x14], eax
// 0061380d  7519                 jne 0x613828
// 0061380f  8b4e08               mov ecx, dword ptr [esi + 8]
// 00613812  8b06                 mov eax, dword ptr [esi]
// 00613814  51                   push ecx
// 00613815  8b4e04               mov ecx, dword ptr [esi + 4]
// 00613818  6a04                 push 4
// 0061381a  8d54241c             lea edx, [esp + 0x1c]
// 0061381e  52                   push edx
// 0061381f  50                   push eax
// 00613820  ffd1                 call ecx
// 00613822  83c410               add esp, 0x10
// 00613825  894610               mov dword ptr [esi + 0x10], eax
// 00613828  837e1000             cmp dword ptr [esi + 0x10], 0
// 0061382c  8b5740               mov edx, dword ptr [edi + 0x40]
// 0061382f  89542414             mov dword ptr [esp + 0x14], edx
// 00613833  7519                 jne 0x61384e
// 00613835  8b4608               mov eax, dword ptr [esi + 8]
// 00613838  8b16                 mov edx, dword ptr [esi]
// 0061383a  50                   push eax
// 0061383b  8b4604               mov eax, dword ptr [esi + 4]
// 0061383e  6a04                 push 4
// 00613840  8d4c241c             lea ecx, [esp + 0x1c]
// 00613844  51                   push ecx
// 00613845  52                   push edx
// 00613846  ffd0                 call eax
// 00613848  83c410               add esp, 0x10
// 0061384b  894610               mov dword ptr [esi + 0x10], eax
// 0061384e  837e1000             cmp dword ptr [esi + 0x10], 0
// 00613852  8a4f48               mov cl, byte ptr [edi + 0x48]
// 00613855  884c2414             mov byte ptr [esp + 0x14], cl
// 00613859  7519                 jne 0x613874
// 0061385b  8b5608               mov edx, dword ptr [esi + 8]
// 0061385e  8b0e                 mov ecx, dword ptr [esi]
// 00613860  52                   push edx
// 00613861  8b5604               mov edx, dword ptr [esi + 4]
// 00613864  6a01                 push 1
// 00613866  8d44241c             lea eax, [esp + 0x1c]
// 0061386a  50                   push eax
// 0061386b  51                   push ecx
// 0061386c  ffd2                 call edx
// 0061386e  83c410               add esp, 0x10
// 00613871  894610               mov dword ptr [esi + 0x10], eax
// 00613874  837e1000             cmp dword ptr [esi + 0x10], 0
// 00613878  8a4749               mov al, byte ptr [edi + 0x49]
// 0061387b  88442414             mov byte ptr [esp + 0x14], al
// 0061387f  7519                 jne 0x61389a
// 00613881  8b4e08               mov ecx, dword ptr [esi + 8]
// 00613884  8b06                 mov eax, dword ptr [esi]
// 00613886  51                   push ecx
// 00613887  8b4e04               mov ecx, dword ptr [esi + 4]
// 0061388a  6a01                 push 1
// 0061388c  8d54241c             lea edx, [esp + 0x1c]
// 00613890  52                   push edx
// 00613891  50                   push eax
// 00613892  ffd1                 call ecx
// 00613894  83c410               add esp, 0x10
// 00613897  894610               mov dword ptr [esi + 0x10], eax
// 0061389a  837e1000             cmp dword ptr [esi + 0x10], 0
// 0061389e  8a574a               mov dl, byte ptr [edi + 0x4a]
// 006138a1  88542414             mov byte ptr [esp + 0x14], dl
// 006138a5  7519                 jne 0x6138c0
// 006138a7  8b4608               mov eax, dword ptr [esi + 8]
// 006138aa  8b16                 mov edx, dword ptr [esi]
// 006138ac  50                   push eax
// 006138ad  8b4604               mov eax, dword ptr [esi + 4]
// 006138b0  6a01                 push 1
// 006138b2  8d4c241c             lea ecx, [esp + 0x1c]
// 006138b6  51                   push ecx
// 006138b7  52                   push edx
// 006138b8  ffd0                 call eax
// 006138ba  83c410               add esp, 0x10
// 006138bd  894610               mov dword ptr [esi + 0x10], eax
// 006138c0  837e1000             cmp dword ptr [esi + 0x10], 0
// 006138c4  8a4f4b               mov cl, byte ptr [edi + 0x4b]
// 006138c7  884c2414             mov byte ptr [esp + 0x14], cl
// 006138cb  7519                 jne 0x6138e6
// 006138cd  8b5608               mov edx, dword ptr [esi + 8]
// 006138d0  8b0e                 mov ecx, dword ptr [esi]
// 006138d2  52                   push edx
// 006138d3  8b5604               mov edx, dword ptr [esi + 4]
// 006138d6  6a01                 push 1
// 006138d8  8d44241c             lea eax, [esp + 0x1c]
// 006138dc  50                   push eax
// 006138dd  51                   push ecx
// 006138de  ffd2                 call edx
// 006138e0  83c410               add esp, 0x10
// 006138e3  894610               mov dword ptr [esi + 0x10], eax
// 006138e6  837e1000             cmp dword ptr [esi + 0x10], 0
// 006138ea  8b5f2c               mov ebx, dword ptr [edi + 0x2c]
// 006138ed  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 006138f0  895c2414             mov dword ptr [esp + 0x14], ebx
// 006138f4  7538                 jne 0x61392e
// 006138f6  8b4608               mov eax, dword ptr [esi + 8]
// 006138f9  8b16                 mov edx, dword ptr [esi]
// 006138fb  50                   push eax
// 006138fc  8b4604               mov eax, dword ptr [esi + 4]
// 006138ff  6a04                 push 4
// 00613901  8d4c241c             lea ecx, [esp + 0x1c]
// 00613905  51                   push ecx
// 00613906  52                   push edx
// 00613907  ffd0                 call eax
// 00613909  83c410               add esp, 0x10
// 0061390c  85c0                 test eax, eax
// 0061390e  894610               mov dword ptr [esi + 0x10], eax
// 00613911  751b                 jne 0x61392e
// 00613913  8b4e08               mov ecx, dword ptr [esi + 8]
// 00613916  8b06                 mov eax, dword ptr [esi]
// 00613918  51                   push ecx
// 00613919  8b4e04               mov ecx, dword ptr [esi + 4]
// 0061391c  8d149d00000000       lea edx, [ebx*4]
// 00613923  52                   push edx
// 00613924  55                   push ebp
// 00613925  50                   push eax
// 00613926  ffd1                 call ecx
// 00613928  83c410               add esp, 0x10
// 0061392b  894610               mov dword ptr [esi + 0x10], eax
// 0061392e  57                   push edi
// 0061392f  8bc6                 mov eax, esi
// 00613931  e81afcffff           call 0x613550
// 00613936  57                   push edi
// 00613937  8bc6                 mov eax, esi
// 00613939  e852fdffff           call 0x613690
// 0061393e  83c408               add esp, 8
// 00613941  5f                   pop edi
// 00613942  5e                   pop esi
// 00613943  5d                   pop ebp
// 00613944  5b                   pop ebx
// 00613945  c3                   ret 
// library lua-5.1.4/ldump.c (function _DumpFunction)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldump.c
