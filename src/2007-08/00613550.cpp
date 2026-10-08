// from server: 100% by auto
// roc 2007-08 00613550  unit: seg_00610000  size: 311 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00613550
//
// 00613550  55                   push ebp
// 00613551  8bec                 mov ebp, esp
// 00613553  83e4f8               and esp, 0xfffffff8
// 00613556  83ec14               sub esp, 0x14
// 00613559  53                   push ebx
// 0061355a  56                   push esi
// 0061355b  8bf0                 mov esi, eax
// 0061355d  837e1000             cmp dword ptr [esi + 0x10], 0
// 00613561  8b4508               mov eax, dword ptr [ebp + 8]
// 00613564  57                   push edi
// 00613565  8b7828               mov edi, dword ptr [eax + 0x28]
// 00613568  897c2414             mov dword ptr [esp + 0x14], edi
// 0061356c  7519                 jne 0x613587
// 0061356e  8b4e08               mov ecx, dword ptr [esi + 8]
// 00613571  8b06                 mov eax, dword ptr [esi]
// 00613573  51                   push ecx
// 00613574  8b4e04               mov ecx, dword ptr [esi + 4]
// 00613577  6a04                 push 4
// 00613579  8d54241c             lea edx, [esp + 0x1c]
// 0061357d  52                   push edx
// 0061357e  50                   push eax
// 0061357f  ffd1                 call ecx
// 00613581  83c410               add esp, 0x10
// 00613584  894610               mov dword ptr [esi + 0x10], eax
// 00613587  85ff                 test edi, edi
// 00613589  0f8ea4000000         jle 0x613633
// 0061358f  33db                 xor ebx, ebx
// 00613591  897c2414             mov dword ptr [esp + 0x14], edi
// 00613595  8b5508               mov edx, dword ptr [ebp + 8]
// 00613598  8b7a08               mov edi, dword ptr [edx + 8]
// 0061359b  8a441f08             mov al, byte ptr [edi + ebx + 8]
// 0061359f  03fb                 add edi, ebx
// 006135a1  837e1000             cmp dword ptr [esi + 0x10], 0
// 006135a5  88442413             mov byte ptr [esp + 0x13], al
// 006135a9  7519                 jne 0x6135c4
// 006135ab  8b4e08               mov ecx, dword ptr [esi + 8]
// 006135ae  8b06                 mov eax, dword ptr [esi]
// 006135b0  51                   push ecx
// 006135b1  8b4e04               mov ecx, dword ptr [esi + 4]
// 006135b4  6a01                 push 1
// 006135b6  8d54241b             lea edx, [esp + 0x1b]
// 006135ba  52                   push edx
// 006135bb  50                   push eax
// 006135bc  ffd1                 call ecx
// 006135be  83c410               add esp, 0x10
// 006135c1  894610               mov dword ptr [esi + 0x10], eax
// 006135c4  8b4708               mov eax, dword ptr [edi + 8]
// 006135c7  83e801               sub eax, 1
// 006135ca  7434                 je 0x613600
// 006135cc  83e802               sub eax, 2
// 006135cf  740e                 je 0x6135df
// 006135d1  83e801               sub eax, 1
// 006135d4  754f                 jne 0x613625
// 006135d6  8b07                 mov eax, dword ptr [edi]
// 006135d8  e8e3feffff           call 0x6134c0
// 006135dd  eb46                 jmp 0x613625
// 006135df  837e1000             cmp dword ptr [esi + 0x10], 0
// 006135e3  dd07                 fld qword ptr [edi]
// 006135e5  dd5c2418             fstp qword ptr [esp + 0x18]
// 006135e9  753a                 jne 0x613625
// 006135eb  8b5608               mov edx, dword ptr [esi + 8]
// 006135ee  8b0e                 mov ecx, dword ptr [esi]
// 006135f0  52                   push edx
// 006135f1  8b5604               mov edx, dword ptr [esi + 4]
// 006135f4  6a08                 push 8
// 006135f6  8d442420             lea eax, [esp + 0x20]
// 006135fa  50                   push eax
// 006135fb  51                   push ecx
// 006135fc  ffd2                 call edx
// 006135fe  eb1f                 jmp 0x61361f
// 00613600  837e1000             cmp dword ptr [esi + 0x10], 0
// 00613604  8a07                 mov al, byte ptr [edi]
// 00613606  88442413             mov byte ptr [esp + 0x13], al
// 0061360a  7519                 jne 0x613625
// 0061360c  8b4e08               mov ecx, dword ptr [esi + 8]
// 0061360f  8b06                 mov eax, dword ptr [esi]
// 00613611  51                   push ecx
// 00613612  8b4e04               mov ecx, dword ptr [esi + 4]
// 00613615  6a01                 push 1
// 00613617  8d54241b             lea edx, [esp + 0x1b]
// 0061361b  52                   push edx
// 0061361c  50                   push eax
// 0061361d  ffd1                 call ecx
// 0061361f  894610               mov dword ptr [esi + 0x10], eax
// 00613622  83c410               add esp, 0x10
// 00613625  83c310               add ebx, 0x10
// 00613628  836c241401           sub dword ptr [esp + 0x14], 1
// 0061362d  0f8562ffffff         jne 0x613595
// 00613633  837e1000             cmp dword ptr [esi + 0x10], 0
// 00613637  8b5508               mov edx, dword ptr [ebp + 8]
// 0061363a  8b5a34               mov ebx, dword ptr [edx + 0x34]
// 0061363d  895c2414             mov dword ptr [esp + 0x14], ebx
// 00613641  7519                 jne 0x61365c
// 00613643  8b4608               mov eax, dword ptr [esi + 8]
// 00613646  8b16                 mov edx, dword ptr [esi]
// 00613648  50                   push eax
// 00613649  8b4604               mov eax, dword ptr [esi + 4]
// 0061364c  6a04                 push 4
// 0061364e  8d4c241c             lea ecx, [esp + 0x1c]
// 00613652  51                   push ecx
// 00613653  52                   push edx
// 00613654  ffd0                 call eax
// 00613656  83c410               add esp, 0x10
// 00613659  894610               mov dword ptr [esi + 0x10], eax
// 0061365c  33ff                 xor edi, edi
// 0061365e  85db                 test ebx, ebx
// 00613660  7e1e                 jle 0x613680
// 00613662  8b4508               mov eax, dword ptr [ebp + 8]
// 00613665  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00613668  8b5010               mov edx, dword ptr [eax + 0x10]
// 0061366b  8b04ba               mov eax, dword ptr [edx + edi*4]
// 0061366e  56                   push esi
// 0061366f  51                   push ecx
// 00613670  50                   push eax
// 00613671  e86a010000           call 0x6137e0
// 00613676  83c701               add edi, 1
// 00613679  83c40c               add esp, 0xc
// 0061367c  3bfb                 cmp edi, ebx
// 0061367e  7ce2                 jl 0x613662
// 00613680  5f                   pop edi
// 00613681  5e                   pop esi
// 00613682  5b                   pop ebx
// 00613683  8be5                 mov esp, ebp
// 00613685  5d                   pop ebp
// 00613686  c3                   ret 
// library lua-5.1.4/ldump.c (function _DumpConstants)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldump.c
