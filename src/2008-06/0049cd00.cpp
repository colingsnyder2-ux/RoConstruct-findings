// roc 2008-06 0049cd00  unit: RBX::Network::VPlayers::?$BoundFuncDesc  size: 448 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049cd00
//
// 0049cd00  6aff                 push -1
// 0049cd02  6810737c00           push 0x7c7310
// 0049cd07  64a100000000         mov eax, dword ptr fs:[0]
// 0049cd0d  50                   push eax
// 0049cd0e  64892500000000       mov dword ptr fs:[0], esp
// 0049cd15  83ec1c               sub esp, 0x1c
// 0049cd18  53                   push ebx
// 0049cd19  55                   push ebp
// 0049cd1a  56                   push esi
// 0049cd1b  57                   push edi
// 0049cd1c  8bf1                 mov esi, ecx
// 0049cd1e  33db                 xor ebx, ebx
// 0049cd20  56                   push esi
// 0049cd21  8d4c2428             lea ecx, [esp + 0x28]
// 0049cd25  895c2438             mov dword ptr [esp + 0x38], ebx
// 0049cd29  e832da0c00           call 0x56a760
// 0049cd2e  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0049cd32  83ec08               sub esp, 8
// 0049cd35  8bc4                 mov eax, esp
// 0049cd37  8908                 mov dword ptr [eax], ecx
// 0049cd39  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0049cd3d  895004               mov dword ptr [eax + 4], edx
// 0049cd40  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0049cd44  c644243c01           mov byte ptr [esp + 0x3c], 1
// 0049cd49  8964241c             mov dword ptr [esp + 0x1c], esp
// 0049cd4d  3bc3                 cmp eax, ebx
// 0049cd4f  740c                 je 0x49cd5d
// 0049cd51  83c004               add eax, 4
// 0049cd54  b901000000           mov ecx, 1
// 0049cd59  f00fc108             lock xadd dword ptr [eax], ecx
// 0049cd5d  8d4c2424             lea ecx, [esp + 0x24]
// 0049cd61  e8aa7a0b00           call 0x554810
// 0049cd66  885c2410             mov byte ptr [esp + 0x10], bl
// 0049cd6a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0049cd6e  8b36                 mov esi, dword ptr [esi]
// 0049cd70  8b7e58               mov edi, dword ptr [esi + 0x58]
// 0049cd73  83ec40               sub esp, 0x40
// 0049cd76  89642458             mov dword ptr [esp + 0x58], esp
// 0049cd7a  8bdc                 mov ebx, esp
// 0049cd7c  8d542450             lea edx, [esp + 0x50]
// 0049cd80  52                   push edx
// 0049cd81  8be8                 mov ebp, eax
// 0049cd83  8d442460             lea eax, [esp + 0x60]
// 0049cd87  50                   push eax
// 0049cd88  83ec1c               sub esp, 0x1c
// 0049cd8b  8bcc                 mov ecx, esp
// 0049cd8d  8964247c             mov dword ptr [esp + 0x7c], esp
// 0049cd91  51                   push ecx
// 0049cd92  8d4e08               lea ecx, [esi + 8]
// 0049cd95  c684249c00000003     mov byte ptr [esp + 0x9c], 3
// 0049cd9d  83c704               add edi, 4
// 0049cda0  e80b460d00           call 0x5713b0
// 0049cda5  83ec1c               sub esp, 0x1c
// 0049cda8  8bd4                 mov edx, esp
// 0049cdaa  89a42498000000       mov dword ptr [esp + 0x98], esp
// 0049cdb1  52                   push edx
// 0049cdb2  8d4d08               lea ecx, [ebp + 8]
// 0049cdb5  e8f6450d00           call 0x5713b0
// 0049cdba  8bcb                 mov ecx, ebx
// 0049cdbc  e8df3affff           call 0x4908a0
// 0049cdc1  83ec40               sub esp, 0x40
// 0049cdc4  89a42498000000       mov dword ptr [esp + 0x98], esp
// 0049cdcb  8bdc                 mov ebx, esp
// 0049cdcd  8d842490000000       lea eax, [esp + 0x90]
// 0049cdd4  50                   push eax
// 0049cdd5  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 0049cddc  51                   push ecx
// 0049cddd  83ec1c               sub esp, 0x1c
// 0049cde0  8bd4                 mov edx, esp
// 0049cde2  89a424bc000000       mov dword ptr [esp + 0xbc], esp
// 0049cde9  52                   push edx
// 0049cdea  8d4e08               lea ecx, [esi + 8]
// 0049cded  e8be450d00           call 0x5713b0
// 0049cdf2  83ec1c               sub esp, 0x1c
// 0049cdf5  8bc4                 mov eax, esp
// 0049cdf7  89a424d8000000       mov dword ptr [esp + 0xd8], esp
// 0049cdfe  8bcd                 mov ecx, ebp
// 0049ce00  50                   push eax
// 0049ce01  83c108               add ecx, 8
// 0049ce04  e877450d00           call 0x571380
// 0049ce09  8bcb                 mov ecx, ebx
// 0049ce0b  e8903affff           call 0x4908a0
// 0049ce10  8bac24bc000000       mov ebp, dword ptr [esp + 0xbc]
// 0049ce17  55                   push ebp
// 0049ce18  8bcf                 mov ecx, edi
// 0049ce1a  e8d1f6ffff           call 0x49c4f0
// 0049ce1f  33db                 xor ebx, ebx
// 0049ce21  385c2410             cmp byte ptr [esp + 0x10], bl
// 0049ce25  7404                 je 0x49ce2b
// 0049ce27  885c2410             mov byte ptr [esp + 0x10], bl
// 0049ce2b  8b742420             mov esi, dword ptr [esp + 0x20]
// 0049ce2f  c644243401           mov byte ptr [esp + 0x34], 1
// 0049ce34  3bf3                 cmp esi, ebx
// 0049ce36  742a                 je 0x49ce62
// 0049ce38  8d4e04               lea ecx, [esi + 4]
// 0049ce3b  83caff               or edx, 0xffffffff
// 0049ce3e  f00fc111             lock xadd dword ptr [ecx], edx
// 0049ce42  751e                 jne 0x49ce62
// 0049ce44  8b06                 mov eax, dword ptr [esi]
// 0049ce46  8b5004               mov edx, dword ptr [eax + 4]
// 0049ce49  8bce                 mov ecx, esi
// 0049ce4b  ffd2                 call edx
// 0049ce4d  8d4608               lea eax, [esi + 8]
// 0049ce50  83c9ff               or ecx, 0xffffffff
// 0049ce53  f00fc108             lock xadd dword ptr [eax], ecx
// 0049ce57  7509                 jne 0x49ce62
// 0049ce59  8b16                 mov edx, dword ptr [esi]
// 0049ce5b  8b4208               mov eax, dword ptr [edx + 8]
// 0049ce5e  8bce                 mov ecx, esi
// 0049ce60  ffd0                 call eax
// 0049ce62  8d4c2424             lea ecx, [esp + 0x24]
// 0049ce66  885c2434             mov byte ptr [esp + 0x34], bl
// 0049ce6a  e8e1d70c00           call 0x56a650
// 0049ce6f  8b742444             mov esi, dword ptr [esp + 0x44]
// 0049ce73  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0049ce7b  3bf3                 cmp esi, ebx
// 0049ce7d  742a                 je 0x49cea9
// 0049ce7f  8d4e04               lea ecx, [esi + 4]
// 0049ce82  83caff               or edx, 0xffffffff
// 0049ce85  f00fc111             lock xadd dword ptr [ecx], edx
// 0049ce89  751e                 jne 0x49cea9
// 0049ce8b  8b06                 mov eax, dword ptr [esi]
// 0049ce8d  8b5004               mov edx, dword ptr [eax + 4]
// 0049ce90  8bce                 mov ecx, esi
// 0049ce92  ffd2                 call edx
// 0049ce94  8d4608               lea eax, [esi + 8]
// 0049ce97  83c9ff               or ecx, 0xffffffff
// 0049ce9a  f00fc108             lock xadd dword ptr [eax], ecx
// 0049ce9e  7509                 jne 0x49cea9
// 0049cea0  8b16                 mov edx, dword ptr [esi]
// 0049cea2  8b4208               mov eax, dword ptr [edx + 8]
// 0049cea5  8bce                 mov ecx, esi
// 0049cea7  ffd0                 call eax
// 0049cea9  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0049cead  5f                   pop edi
// 0049ceae  5e                   pop esi
// 0049ceaf  8bc5                 mov eax, ebp
// 0049ceb1  5d                   pop ebp
// 0049ceb2  64890d00000000       mov dword ptr fs:[0], ecx
// 0049ceb9  5b                   pop ebx
// 0049ceba  83c428               add esp, 0x28
// 0049cebd  c20c00               ret 0xc
// library rbxgs/v8tree\Instance.cpp (function ??R?$signal1@XV?$shared_ptr@VInstance@RBX@@@boost@@U?$last_value@X@2@HU?$less@H@std@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@boost@@QAE?AUunusable@?$last_value@X@1@V?$shared_ptr@VInstance@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
