// roc 2010-06 0077e560  unit: seg_00770000  size: 309 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077e560
//
// 0077e560  55                   push ebp
// 0077e561  8bec                 mov ebp, esp
// 0077e563  83e4f8               and esp, 0xfffffff8
// 0077e566  83ec14               sub esp, 0x14
// 0077e569  53                   push ebx
// 0077e56a  56                   push esi
// 0077e56b  8bf0                 mov esi, eax
// 0077e56d  837e1000             cmp dword ptr [esi + 0x10], 0
// 0077e571  8b4508               mov eax, dword ptr [ebp + 8]
// 0077e574  57                   push edi
// 0077e575  8b7828               mov edi, dword ptr [eax + 0x28]
// 0077e578  897c2414             mov dword ptr [esp + 0x14], edi
// 0077e57c  7519                 jne 0x77e597
// 0077e57e  8b4e08               mov ecx, dword ptr [esi + 8]
// 0077e581  8b06                 mov eax, dword ptr [esi]
// 0077e583  51                   push ecx
// 0077e584  8b4e04               mov ecx, dword ptr [esi + 4]
// 0077e587  6a04                 push 4
// 0077e589  8d54241c             lea edx, [esp + 0x1c]
// 0077e58d  52                   push edx
// 0077e58e  50                   push eax
// 0077e58f  ffd1                 call ecx
// 0077e591  83c410               add esp, 0x10
// 0077e594  894610               mov dword ptr [esi + 0x10], eax
// 0077e597  85ff                 test edi, edi
// 0077e599  0f8ea4000000         jle 0x77e643
// 0077e59f  33db                 xor ebx, ebx
// 0077e5a1  897c2414             mov dword ptr [esp + 0x14], edi
// 0077e5a5  8b5508               mov edx, dword ptr [ebp + 8]
// 0077e5a8  8b7a08               mov edi, dword ptr [edx + 8]
// 0077e5ab  8a441f08             mov al, byte ptr [edi + ebx + 8]
// 0077e5af  03fb                 add edi, ebx
// 0077e5b1  837e1000             cmp dword ptr [esi + 0x10], 0
// 0077e5b5  88442413             mov byte ptr [esp + 0x13], al
// 0077e5b9  7519                 jne 0x77e5d4
// 0077e5bb  8b4e08               mov ecx, dword ptr [esi + 8]
// 0077e5be  8b06                 mov eax, dword ptr [esi]
// 0077e5c0  51                   push ecx
// 0077e5c1  8b4e04               mov ecx, dword ptr [esi + 4]
// 0077e5c4  6a01                 push 1
// 0077e5c6  8d54241b             lea edx, [esp + 0x1b]
// 0077e5ca  52                   push edx
// 0077e5cb  50                   push eax
// 0077e5cc  ffd1                 call ecx
// 0077e5ce  83c410               add esp, 0x10
// 0077e5d1  894610               mov dword ptr [esi + 0x10], eax
// 0077e5d4  8b4708               mov eax, dword ptr [edi + 8]
// 0077e5d7  83e801               sub eax, 1
// 0077e5da  7434                 je 0x77e610
// 0077e5dc  83e802               sub eax, 2
// 0077e5df  740e                 je 0x77e5ef
// 0077e5e1  83e801               sub eax, 1
// 0077e5e4  754f                 jne 0x77e635
// 0077e5e6  8b07                 mov eax, dword ptr [edi]
// 0077e5e8  e8f3feffff           call 0x77e4e0
// 0077e5ed  eb46                 jmp 0x77e635
// 0077e5ef  837e1000             cmp dword ptr [esi + 0x10], 0
// 0077e5f3  dd07                 fld qword ptr [edi]
// 0077e5f5  dd5c2418             fstp qword ptr [esp + 0x18]
// 0077e5f9  753a                 jne 0x77e635
// 0077e5fb  8b5608               mov edx, dword ptr [esi + 8]
// 0077e5fe  8b0e                 mov ecx, dword ptr [esi]
// 0077e600  52                   push edx
// 0077e601  8b5604               mov edx, dword ptr [esi + 4]
// 0077e604  6a08                 push 8
// 0077e606  8d442420             lea eax, [esp + 0x20]
// 0077e60a  50                   push eax
// 0077e60b  51                   push ecx
// 0077e60c  ffd2                 call edx
// 0077e60e  eb1f                 jmp 0x77e62f
// 0077e610  837e1000             cmp dword ptr [esi + 0x10], 0
// 0077e614  8a07                 mov al, byte ptr [edi]
// 0077e616  88442413             mov byte ptr [esp + 0x13], al
// 0077e61a  7519                 jne 0x77e635
// 0077e61c  8b4e08               mov ecx, dword ptr [esi + 8]
// 0077e61f  8b06                 mov eax, dword ptr [esi]
// 0077e621  51                   push ecx
// 0077e622  8b4e04               mov ecx, dword ptr [esi + 4]
// 0077e625  6a01                 push 1
// 0077e627  8d54241b             lea edx, [esp + 0x1b]
// 0077e62b  52                   push edx
// 0077e62c  50                   push eax
// 0077e62d  ffd1                 call ecx
// 0077e62f  894610               mov dword ptr [esi + 0x10], eax
// 0077e632  83c410               add esp, 0x10
// 0077e635  83c310               add ebx, 0x10
// 0077e638  836c241401           sub dword ptr [esp + 0x14], 1
// 0077e63d  0f8562ffffff         jne 0x77e5a5
// 0077e643  837e1000             cmp dword ptr [esi + 0x10], 0
// 0077e647  8b5508               mov edx, dword ptr [ebp + 8]
// 0077e64a  8b5a34               mov ebx, dword ptr [edx + 0x34]
// 0077e64d  895c2414             mov dword ptr [esp + 0x14], ebx
// 0077e651  7519                 jne 0x77e66c
// 0077e653  8b4608               mov eax, dword ptr [esi + 8]
// 0077e656  8b16                 mov edx, dword ptr [esi]
// 0077e658  50                   push eax
// 0077e659  8b4604               mov eax, dword ptr [esi + 4]
// 0077e65c  6a04                 push 4
// 0077e65e  8d4c241c             lea ecx, [esp + 0x1c]
// 0077e662  51                   push ecx
// 0077e663  52                   push edx
// 0077e664  ffd0                 call eax
// 0077e666  83c410               add esp, 0x10
// 0077e669  894610               mov dword ptr [esi + 0x10], eax
// 0077e66c  33ff                 xor edi, edi
// 0077e66e  85db                 test ebx, ebx
// 0077e670  7e1c                 jle 0x77e68e
// 0077e672  8b4508               mov eax, dword ptr [ebp + 8]
// 0077e675  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0077e678  8b5010               mov edx, dword ptr [eax + 0x10]
// 0077e67b  8b04ba               mov eax, dword ptr [edx + edi*4]
// 0077e67e  56                   push esi
// 0077e67f  51                   push ecx
// 0077e680  50                   push eax
// 0077e681  e86a010000           call 0x77e7f0
// 0077e686  47                   inc edi
// 0077e687  83c40c               add esp, 0xc
// 0077e68a  3bfb                 cmp edi, ebx
// 0077e68c  7ce4                 jl 0x77e672
// 0077e68e  5f                   pop edi
// 0077e68f  5e                   pop esi
// 0077e690  5b                   pop ebx
// 0077e691  8be5                 mov esp, ebp
// 0077e693  5d                   pop ebp
// 0077e694  c3                   ret 
// library lua-5.1.4/ldump.c (function _DumpConstants)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldump.c
