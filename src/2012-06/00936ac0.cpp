// roc 2012-06 00936ac0  unit: seg_00930000  size: 309 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00936ac0
//
// 00936ac0  55                   push ebp
// 00936ac1  8bec                 mov ebp, esp
// 00936ac3  83e4f8               and esp, 0xfffffff8
// 00936ac6  83ec14               sub esp, 0x14
// 00936ac9  53                   push ebx
// 00936aca  56                   push esi
// 00936acb  8bf0                 mov esi, eax
// 00936acd  837e1000             cmp dword ptr [esi + 0x10], 0
// 00936ad1  8b4508               mov eax, dword ptr [ebp + 8]
// 00936ad4  57                   push edi
// 00936ad5  8b7828               mov edi, dword ptr [eax + 0x28]
// 00936ad8  897c2414             mov dword ptr [esp + 0x14], edi
// 00936adc  7519                 jne 0x936af7
// 00936ade  8b4e08               mov ecx, dword ptr [esi + 8]
// 00936ae1  8b06                 mov eax, dword ptr [esi]
// 00936ae3  51                   push ecx
// 00936ae4  8b4e04               mov ecx, dword ptr [esi + 4]
// 00936ae7  6a04                 push 4
// 00936ae9  8d54241c             lea edx, [esp + 0x1c]
// 00936aed  52                   push edx
// 00936aee  50                   push eax
// 00936aef  ffd1                 call ecx
// 00936af1  83c410               add esp, 0x10
// 00936af4  894610               mov dword ptr [esi + 0x10], eax
// 00936af7  85ff                 test edi, edi
// 00936af9  0f8ea4000000         jle 0x936ba3
// 00936aff  33db                 xor ebx, ebx
// 00936b01  897c2414             mov dword ptr [esp + 0x14], edi
// 00936b05  8b5508               mov edx, dword ptr [ebp + 8]
// 00936b08  8b7a08               mov edi, dword ptr [edx + 8]
// 00936b0b  8a441f08             mov al, byte ptr [edi + ebx + 8]
// 00936b0f  03fb                 add edi, ebx
// 00936b11  837e1000             cmp dword ptr [esi + 0x10], 0
// 00936b15  88442413             mov byte ptr [esp + 0x13], al
// 00936b19  7519                 jne 0x936b34
// 00936b1b  8b4e08               mov ecx, dword ptr [esi + 8]
// 00936b1e  8b06                 mov eax, dword ptr [esi]
// 00936b20  51                   push ecx
// 00936b21  8b4e04               mov ecx, dword ptr [esi + 4]
// 00936b24  6a01                 push 1
// 00936b26  8d54241b             lea edx, [esp + 0x1b]
// 00936b2a  52                   push edx
// 00936b2b  50                   push eax
// 00936b2c  ffd1                 call ecx
// 00936b2e  83c410               add esp, 0x10
// 00936b31  894610               mov dword ptr [esi + 0x10], eax
// 00936b34  8b4708               mov eax, dword ptr [edi + 8]
// 00936b37  83e801               sub eax, 1
// 00936b3a  7434                 je 0x936b70
// 00936b3c  83e802               sub eax, 2
// 00936b3f  740e                 je 0x936b4f
// 00936b41  83e801               sub eax, 1
// 00936b44  754f                 jne 0x936b95
// 00936b46  8b07                 mov eax, dword ptr [edi]
// 00936b48  e8f3feffff           call 0x936a40
// 00936b4d  eb46                 jmp 0x936b95
// 00936b4f  837e1000             cmp dword ptr [esi + 0x10], 0
// 00936b53  dd07                 fld qword ptr [edi]
// 00936b55  dd5c2418             fstp qword ptr [esp + 0x18]
// 00936b59  753a                 jne 0x936b95
// 00936b5b  8b5608               mov edx, dword ptr [esi + 8]
// 00936b5e  8b0e                 mov ecx, dword ptr [esi]
// 00936b60  52                   push edx
// 00936b61  8b5604               mov edx, dword ptr [esi + 4]
// 00936b64  6a08                 push 8
// 00936b66  8d442420             lea eax, [esp + 0x20]
// 00936b6a  50                   push eax
// 00936b6b  51                   push ecx
// 00936b6c  ffd2                 call edx
// 00936b6e  eb1f                 jmp 0x936b8f
// 00936b70  837e1000             cmp dword ptr [esi + 0x10], 0
// 00936b74  8a07                 mov al, byte ptr [edi]
// 00936b76  88442413             mov byte ptr [esp + 0x13], al
// 00936b7a  7519                 jne 0x936b95
// 00936b7c  8b4e08               mov ecx, dword ptr [esi + 8]
// 00936b7f  8b06                 mov eax, dword ptr [esi]
// 00936b81  51                   push ecx
// 00936b82  8b4e04               mov ecx, dword ptr [esi + 4]
// 00936b85  6a01                 push 1
// 00936b87  8d54241b             lea edx, [esp + 0x1b]
// 00936b8b  52                   push edx
// 00936b8c  50                   push eax
// 00936b8d  ffd1                 call ecx
// 00936b8f  894610               mov dword ptr [esi + 0x10], eax
// 00936b92  83c410               add esp, 0x10
// 00936b95  83c310               add ebx, 0x10
// 00936b98  836c241401           sub dword ptr [esp + 0x14], 1
// 00936b9d  0f8562ffffff         jne 0x936b05
// 00936ba3  837e1000             cmp dword ptr [esi + 0x10], 0
// 00936ba7  8b5508               mov edx, dword ptr [ebp + 8]
// 00936baa  8b5a34               mov ebx, dword ptr [edx + 0x34]
// 00936bad  895c2414             mov dword ptr [esp + 0x14], ebx
// 00936bb1  7519                 jne 0x936bcc
// 00936bb3  8b4608               mov eax, dword ptr [esi + 8]
// 00936bb6  8b16                 mov edx, dword ptr [esi]
// 00936bb8  50                   push eax
// 00936bb9  8b4604               mov eax, dword ptr [esi + 4]
// 00936bbc  6a04                 push 4
// 00936bbe  8d4c241c             lea ecx, [esp + 0x1c]
// 00936bc2  51                   push ecx
// 00936bc3  52                   push edx
// 00936bc4  ffd0                 call eax
// 00936bc6  83c410               add esp, 0x10
// 00936bc9  894610               mov dword ptr [esi + 0x10], eax
// 00936bcc  33ff                 xor edi, edi
// 00936bce  85db                 test ebx, ebx
// 00936bd0  7e1c                 jle 0x936bee
// 00936bd2  8b4508               mov eax, dword ptr [ebp + 8]
// 00936bd5  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00936bd8  8b5010               mov edx, dword ptr [eax + 0x10]
// 00936bdb  8b04ba               mov eax, dword ptr [edx + edi*4]
// 00936bde  56                   push esi
// 00936bdf  51                   push ecx
// 00936be0  50                   push eax
// 00936be1  e86a010000           call 0x936d50
// 00936be6  47                   inc edi
// 00936be7  83c40c               add esp, 0xc
// 00936bea  3bfb                 cmp edi, ebx
// 00936bec  7ce4                 jl 0x936bd2
// 00936bee  5f                   pop edi
// 00936bef  5e                   pop esi
// 00936bf0  5b                   pop ebx
// 00936bf1  8be5                 mov esp, ebp
// 00936bf3  5d                   pop ebp
// 00936bf4  c3                   ret 
// library lua-5.1.4/ldump.c (function _DumpConstants)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldump.c
