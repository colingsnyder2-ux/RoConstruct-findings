// from server: 100% by auto
// roc 2008-06 0065fa70  unit: seg_00650000  size: 309 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065fa70
//
// 0065fa70  55                   push ebp
// 0065fa71  8bec                 mov ebp, esp
// 0065fa73  83e4f8               and esp, 0xfffffff8
// 0065fa76  83ec14               sub esp, 0x14
// 0065fa79  53                   push ebx
// 0065fa7a  56                   push esi
// 0065fa7b  8bf0                 mov esi, eax
// 0065fa7d  837e1000             cmp dword ptr [esi + 0x10], 0
// 0065fa81  8b4508               mov eax, dword ptr [ebp + 8]
// 0065fa84  57                   push edi
// 0065fa85  8b7828               mov edi, dword ptr [eax + 0x28]
// 0065fa88  897c2414             mov dword ptr [esp + 0x14], edi
// 0065fa8c  7519                 jne 0x65faa7
// 0065fa8e  8b4e08               mov ecx, dword ptr [esi + 8]
// 0065fa91  8b06                 mov eax, dword ptr [esi]
// 0065fa93  51                   push ecx
// 0065fa94  8b4e04               mov ecx, dword ptr [esi + 4]
// 0065fa97  6a04                 push 4
// 0065fa99  8d54241c             lea edx, [esp + 0x1c]
// 0065fa9d  52                   push edx
// 0065fa9e  50                   push eax
// 0065fa9f  ffd1                 call ecx
// 0065faa1  83c410               add esp, 0x10
// 0065faa4  894610               mov dword ptr [esi + 0x10], eax
// 0065faa7  85ff                 test edi, edi
// 0065faa9  0f8ea4000000         jle 0x65fb53
// 0065faaf  33db                 xor ebx, ebx
// 0065fab1  897c2414             mov dword ptr [esp + 0x14], edi
// 0065fab5  8b5508               mov edx, dword ptr [ebp + 8]
// 0065fab8  8b7a08               mov edi, dword ptr [edx + 8]
// 0065fabb  8a441f08             mov al, byte ptr [edi + ebx + 8]
// 0065fabf  03fb                 add edi, ebx
// 0065fac1  837e1000             cmp dword ptr [esi + 0x10], 0
// 0065fac5  88442413             mov byte ptr [esp + 0x13], al
// 0065fac9  7519                 jne 0x65fae4
// 0065facb  8b4e08               mov ecx, dword ptr [esi + 8]
// 0065face  8b06                 mov eax, dword ptr [esi]
// 0065fad0  51                   push ecx
// 0065fad1  8b4e04               mov ecx, dword ptr [esi + 4]
// 0065fad4  6a01                 push 1
// 0065fad6  8d54241b             lea edx, [esp + 0x1b]
// 0065fada  52                   push edx
// 0065fadb  50                   push eax
// 0065fadc  ffd1                 call ecx
// 0065fade  83c410               add esp, 0x10
// 0065fae1  894610               mov dword ptr [esi + 0x10], eax
// 0065fae4  8b4708               mov eax, dword ptr [edi + 8]
// 0065fae7  83e801               sub eax, 1
// 0065faea  7434                 je 0x65fb20
// 0065faec  83e802               sub eax, 2
// 0065faef  740e                 je 0x65faff
// 0065faf1  83e801               sub eax, 1
// 0065faf4  754f                 jne 0x65fb45
// 0065faf6  8b07                 mov eax, dword ptr [edi]
// 0065faf8  e8f3feffff           call 0x65f9f0
// 0065fafd  eb46                 jmp 0x65fb45
// 0065faff  837e1000             cmp dword ptr [esi + 0x10], 0
// 0065fb03  dd07                 fld qword ptr [edi]
// 0065fb05  dd5c2418             fstp qword ptr [esp + 0x18]
// 0065fb09  753a                 jne 0x65fb45
// 0065fb0b  8b5608               mov edx, dword ptr [esi + 8]
// 0065fb0e  8b0e                 mov ecx, dword ptr [esi]
// 0065fb10  52                   push edx
// 0065fb11  8b5604               mov edx, dword ptr [esi + 4]
// 0065fb14  6a08                 push 8
// 0065fb16  8d442420             lea eax, [esp + 0x20]
// 0065fb1a  50                   push eax
// 0065fb1b  51                   push ecx
// 0065fb1c  ffd2                 call edx
// 0065fb1e  eb1f                 jmp 0x65fb3f
// 0065fb20  837e1000             cmp dword ptr [esi + 0x10], 0
// 0065fb24  8a07                 mov al, byte ptr [edi]
// 0065fb26  88442413             mov byte ptr [esp + 0x13], al
// 0065fb2a  7519                 jne 0x65fb45
// 0065fb2c  8b4e08               mov ecx, dword ptr [esi + 8]
// 0065fb2f  8b06                 mov eax, dword ptr [esi]
// 0065fb31  51                   push ecx
// 0065fb32  8b4e04               mov ecx, dword ptr [esi + 4]
// 0065fb35  6a01                 push 1
// 0065fb37  8d54241b             lea edx, [esp + 0x1b]
// 0065fb3b  52                   push edx
// 0065fb3c  50                   push eax
// 0065fb3d  ffd1                 call ecx
// 0065fb3f  894610               mov dword ptr [esi + 0x10], eax
// 0065fb42  83c410               add esp, 0x10
// 0065fb45  83c310               add ebx, 0x10
// 0065fb48  836c241401           sub dword ptr [esp + 0x14], 1
// 0065fb4d  0f8562ffffff         jne 0x65fab5
// 0065fb53  837e1000             cmp dword ptr [esi + 0x10], 0
// 0065fb57  8b5508               mov edx, dword ptr [ebp + 8]
// 0065fb5a  8b5a34               mov ebx, dword ptr [edx + 0x34]
// 0065fb5d  895c2414             mov dword ptr [esp + 0x14], ebx
// 0065fb61  7519                 jne 0x65fb7c
// 0065fb63  8b4608               mov eax, dword ptr [esi + 8]
// 0065fb66  8b16                 mov edx, dword ptr [esi]
// 0065fb68  50                   push eax
// 0065fb69  8b4604               mov eax, dword ptr [esi + 4]
// 0065fb6c  6a04                 push 4
// 0065fb6e  8d4c241c             lea ecx, [esp + 0x1c]
// 0065fb72  51                   push ecx
// 0065fb73  52                   push edx
// 0065fb74  ffd0                 call eax
// 0065fb76  83c410               add esp, 0x10
// 0065fb79  894610               mov dword ptr [esi + 0x10], eax
// 0065fb7c  33ff                 xor edi, edi
// 0065fb7e  85db                 test ebx, ebx
// 0065fb80  7e1c                 jle 0x65fb9e
// 0065fb82  8b4508               mov eax, dword ptr [ebp + 8]
// 0065fb85  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0065fb88  8b5010               mov edx, dword ptr [eax + 0x10]
// 0065fb8b  8b04ba               mov eax, dword ptr [edx + edi*4]
// 0065fb8e  56                   push esi
// 0065fb8f  51                   push ecx
// 0065fb90  50                   push eax
// 0065fb91  e86a010000           call 0x65fd00
// 0065fb96  47                   inc edi
// 0065fb97  83c40c               add esp, 0xc
// 0065fb9a  3bfb                 cmp edi, ebx
// 0065fb9c  7ce4                 jl 0x65fb82
// 0065fb9e  5f                   pop edi
// 0065fb9f  5e                   pop esi
// 0065fba0  5b                   pop ebx
// 0065fba1  8be5                 mov esp, ebp
// 0065fba3  5d                   pop ebp
// 0065fba4  c3                   ret 
// library lua-5.1.4/ldump.c (function _DumpConstants)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldump.c
