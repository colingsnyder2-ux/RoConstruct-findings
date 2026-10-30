// from server: 100% by auto
// roc 2009-06 006ed2c0  unit: seg_006e0000  size: 309 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ed2c0
//
// 006ed2c0  55                   push ebp
// 006ed2c1  8bec                 mov ebp, esp
// 006ed2c3  83e4f8               and esp, 0xfffffff8
// 006ed2c6  83ec14               sub esp, 0x14
// 006ed2c9  53                   push ebx
// 006ed2ca  56                   push esi
// 006ed2cb  8bf0                 mov esi, eax
// 006ed2cd  837e1000             cmp dword ptr [esi + 0x10], 0
// 006ed2d1  8b4508               mov eax, dword ptr [ebp + 8]
// 006ed2d4  57                   push edi
// 006ed2d5  8b7828               mov edi, dword ptr [eax + 0x28]
// 006ed2d8  897c2414             mov dword ptr [esp + 0x14], edi
// 006ed2dc  7519                 jne 0x6ed2f7
// 006ed2de  8b4e08               mov ecx, dword ptr [esi + 8]
// 006ed2e1  8b06                 mov eax, dword ptr [esi]
// 006ed2e3  51                   push ecx
// 006ed2e4  8b4e04               mov ecx, dword ptr [esi + 4]
// 006ed2e7  6a04                 push 4
// 006ed2e9  8d54241c             lea edx, [esp + 0x1c]
// 006ed2ed  52                   push edx
// 006ed2ee  50                   push eax
// 006ed2ef  ffd1                 call ecx
// 006ed2f1  83c410               add esp, 0x10
// 006ed2f4  894610               mov dword ptr [esi + 0x10], eax
// 006ed2f7  85ff                 test edi, edi
// 006ed2f9  0f8ea4000000         jle 0x6ed3a3
// 006ed2ff  33db                 xor ebx, ebx
// 006ed301  897c2414             mov dword ptr [esp + 0x14], edi
// 006ed305  8b5508               mov edx, dword ptr [ebp + 8]
// 006ed308  8b7a08               mov edi, dword ptr [edx + 8]
// 006ed30b  8a441f08             mov al, byte ptr [edi + ebx + 8]
// 006ed30f  03fb                 add edi, ebx
// 006ed311  837e1000             cmp dword ptr [esi + 0x10], 0
// 006ed315  88442413             mov byte ptr [esp + 0x13], al
// 006ed319  7519                 jne 0x6ed334
// 006ed31b  8b4e08               mov ecx, dword ptr [esi + 8]
// 006ed31e  8b06                 mov eax, dword ptr [esi]
// 006ed320  51                   push ecx
// 006ed321  8b4e04               mov ecx, dword ptr [esi + 4]
// 006ed324  6a01                 push 1
// 006ed326  8d54241b             lea edx, [esp + 0x1b]
// 006ed32a  52                   push edx
// 006ed32b  50                   push eax
// 006ed32c  ffd1                 call ecx
// 006ed32e  83c410               add esp, 0x10
// 006ed331  894610               mov dword ptr [esi + 0x10], eax
// 006ed334  8b4708               mov eax, dword ptr [edi + 8]
// 006ed337  83e801               sub eax, 1
// 006ed33a  7434                 je 0x6ed370
// 006ed33c  83e802               sub eax, 2
// 006ed33f  740e                 je 0x6ed34f
// 006ed341  83e801               sub eax, 1
// 006ed344  754f                 jne 0x6ed395
// 006ed346  8b07                 mov eax, dword ptr [edi]
// 006ed348  e8f3feffff           call 0x6ed240
// 006ed34d  eb46                 jmp 0x6ed395
// 006ed34f  837e1000             cmp dword ptr [esi + 0x10], 0
// 006ed353  dd07                 fld qword ptr [edi]
// 006ed355  dd5c2418             fstp qword ptr [esp + 0x18]
// 006ed359  753a                 jne 0x6ed395
// 006ed35b  8b5608               mov edx, dword ptr [esi + 8]
// 006ed35e  8b0e                 mov ecx, dword ptr [esi]
// 006ed360  52                   push edx
// 006ed361  8b5604               mov edx, dword ptr [esi + 4]
// 006ed364  6a08                 push 8
// 006ed366  8d442420             lea eax, [esp + 0x20]
// 006ed36a  50                   push eax
// 006ed36b  51                   push ecx
// 006ed36c  ffd2                 call edx
// 006ed36e  eb1f                 jmp 0x6ed38f
// 006ed370  837e1000             cmp dword ptr [esi + 0x10], 0
// 006ed374  8a07                 mov al, byte ptr [edi]
// 006ed376  88442413             mov byte ptr [esp + 0x13], al
// 006ed37a  7519                 jne 0x6ed395
// 006ed37c  8b4e08               mov ecx, dword ptr [esi + 8]
// 006ed37f  8b06                 mov eax, dword ptr [esi]
// 006ed381  51                   push ecx
// 006ed382  8b4e04               mov ecx, dword ptr [esi + 4]
// 006ed385  6a01                 push 1
// 006ed387  8d54241b             lea edx, [esp + 0x1b]
// 006ed38b  52                   push edx
// 006ed38c  50                   push eax
// 006ed38d  ffd1                 call ecx
// 006ed38f  894610               mov dword ptr [esi + 0x10], eax
// 006ed392  83c410               add esp, 0x10
// 006ed395  83c310               add ebx, 0x10
// 006ed398  836c241401           sub dword ptr [esp + 0x14], 1
// 006ed39d  0f8562ffffff         jne 0x6ed305
// 006ed3a3  837e1000             cmp dword ptr [esi + 0x10], 0
// 006ed3a7  8b5508               mov edx, dword ptr [ebp + 8]
// 006ed3aa  8b5a34               mov ebx, dword ptr [edx + 0x34]
// 006ed3ad  895c2414             mov dword ptr [esp + 0x14], ebx
// 006ed3b1  7519                 jne 0x6ed3cc
// 006ed3b3  8b4608               mov eax, dword ptr [esi + 8]
// 006ed3b6  8b16                 mov edx, dword ptr [esi]
// 006ed3b8  50                   push eax
// 006ed3b9  8b4604               mov eax, dword ptr [esi + 4]
// 006ed3bc  6a04                 push 4
// 006ed3be  8d4c241c             lea ecx, [esp + 0x1c]
// 006ed3c2  51                   push ecx
// 006ed3c3  52                   push edx
// 006ed3c4  ffd0                 call eax
// 006ed3c6  83c410               add esp, 0x10
// 006ed3c9  894610               mov dword ptr [esi + 0x10], eax
// 006ed3cc  33ff                 xor edi, edi
// 006ed3ce  85db                 test ebx, ebx
// 006ed3d0  7e1c                 jle 0x6ed3ee
// 006ed3d2  8b4508               mov eax, dword ptr [ebp + 8]
// 006ed3d5  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006ed3d8  8b5010               mov edx, dword ptr [eax + 0x10]
// 006ed3db  8b04ba               mov eax, dword ptr [edx + edi*4]
// 006ed3de  56                   push esi
// 006ed3df  51                   push ecx
// 006ed3e0  50                   push eax
// 006ed3e1  e86a010000           call 0x6ed550
// 006ed3e6  47                   inc edi
// 006ed3e7  83c40c               add esp, 0xc
// 006ed3ea  3bfb                 cmp edi, ebx
// 006ed3ec  7ce4                 jl 0x6ed3d2
// 006ed3ee  5f                   pop edi
// 006ed3ef  5e                   pop esi
// 006ed3f0  5b                   pop ebx
// 006ed3f1  8be5                 mov esp, ebp
// 006ed3f3  5d                   pop ebp
// 006ed3f4  c3                   ret 
// library lua-5.1.4/ldump.c (function _DumpConstants)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldump.c
