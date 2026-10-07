// roc 2011-06 00569f50  unit: seg_00560000  size: 446 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00569f50
//
// 00569f50  53                   push ebx
// 00569f51  56                   push esi
// 00569f52  57                   push edi
// 00569f53  8bf0                 mov esi, eax
// 00569f55  68da000000           push 0xda
// 00569f5a  e851faffff           call 0x5699b0
// 00569f5f  8b9ee4000000         mov ebx, dword ptr [esi + 0xe4]
// 00569f65  83c404               add esp, 4
// 00569f68  8d5c1b06             lea ebx, [ebx + ebx + 6]
// 00569f6c  e8affaffff           call 0x569a20
// 00569f71  8b4618               mov eax, dword ptr [esi + 0x18]
// 00569f74  8a96e4000000         mov dl, byte ptr [esi + 0xe4]
// 00569f7a  8b08                 mov ecx, dword ptr [eax]
// 00569f7c  8811                 mov byte ptr [ecx], dl
// 00569f7e  ff00                 inc dword ptr [eax]
// 00569f80  83cfff               or edi, 0xffffffff
// 00569f83  017804               add dword ptr [eax + 4], edi
// 00569f86  7523                 jne 0x569fab
// 00569f88  8b400c               mov eax, dword ptr [eax + 0xc]
// 00569f8b  56                   push esi
// 00569f8c  ffd0                 call eax
// 00569f8e  83c404               add esp, 4
// 00569f91  84c0                 test al, al
// 00569f93  7516                 jne 0x569fab
// 00569f95  8b0e                 mov ecx, dword ptr [esi]
// 00569f97  bb18000000           mov ebx, 0x18
// 00569f9c  895914               mov dword ptr [ecx + 0x14], ebx
// 00569f9f  8b16                 mov edx, dword ptr [esi]
// 00569fa1  8b02                 mov eax, dword ptr [edx]
// 00569fa3  56                   push esi
// 00569fa4  ffd0                 call eax
// 00569fa6  83c404               add esp, 4
// 00569fa9  eb05                 jmp 0x569fb0
// 00569fab  bb18000000           mov ebx, 0x18
// 00569fb0  55                   push ebp
// 00569fb1  33ed                 xor ebp, ebp
// 00569fb3  39aee4000000         cmp dword ptr [esi + 0xe4], ebp
// 00569fb9  0f8eb1000000         jle 0x56a070
// 00569fbf  8d9ee8000000         lea ebx, [esi + 0xe8]
// 00569fc5  8b3b                 mov edi, dword ptr [ebx]
// 00569fc7  8b4618               mov eax, dword ptr [esi + 0x18]
// 00569fca  8a17                 mov dl, byte ptr [edi]
// 00569fcc  8b08                 mov ecx, dword ptr [eax]
// 00569fce  8811                 mov byte ptr [ecx], dl
// 00569fd0  ff00                 inc dword ptr [eax]
// 00569fd2  834004ff             add dword ptr [eax + 4], -1
// 00569fd6  7520                 jne 0x569ff8
// 00569fd8  8b400c               mov eax, dword ptr [eax + 0xc]
// 00569fdb  56                   push esi
// 00569fdc  ffd0                 call eax
// 00569fde  83c404               add esp, 4
// 00569fe1  84c0                 test al, al
// 00569fe3  7513                 jne 0x569ff8
// 00569fe5  8b0e                 mov ecx, dword ptr [esi]
// 00569fe7  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 00569fee  8b16                 mov edx, dword ptr [esi]
// 00569ff0  8b02                 mov eax, dword ptr [edx]
// 00569ff2  56                   push esi
// 00569ff3  ffd0                 call eax
// 00569ff5  83c404               add esp, 4
// 00569ff8  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 00569fff  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 0056a002  8b5718               mov edx, dword ptr [edi + 0x18]
// 0056a005  741d                 je 0x56a024
// 0056a007  83be2c01000000       cmp dword ptr [esi + 0x12c], 0
// 0056a00e  7512                 jne 0x56a022
// 0056a010  33d2                 xor edx, edx
// 0056a012  399634010000         cmp dword ptr [esi + 0x134], edx
// 0056a018  740a                 je 0x56a024
// 0056a01a  3896b1000000         cmp byte ptr [esi + 0xb1], dl
// 0056a020  7502                 jne 0x56a024
// 0056a022  33c9                 xor ecx, ecx
// 0056a024  8b4618               mov eax, dword ptr [esi + 0x18]
// 0056a027  c0e104               shl cl, 4
// 0056a02a  02ca                 add cl, dl
// 0056a02c  8b10                 mov edx, dword ptr [eax]
// 0056a02e  880a                 mov byte ptr [edx], cl
// 0056a030  ff00                 inc dword ptr [eax]
// 0056a032  834004ff             add dword ptr [eax + 4], -1
// 0056a036  7520                 jne 0x56a058
// 0056a038  8b400c               mov eax, dword ptr [eax + 0xc]
// 0056a03b  56                   push esi
// 0056a03c  ffd0                 call eax
// 0056a03e  83c404               add esp, 4
// 0056a041  84c0                 test al, al
// 0056a043  7513                 jne 0x56a058
// 0056a045  8b0e                 mov ecx, dword ptr [esi]
// 0056a047  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0056a04e  8b16                 mov edx, dword ptr [esi]
// 0056a050  8b02                 mov eax, dword ptr [edx]
// 0056a052  56                   push esi
// 0056a053  ffd0                 call eax
// 0056a055  83c404               add esp, 4
// 0056a058  45                   inc ebp
// 0056a059  83c304               add ebx, 4
// 0056a05c  3baee4000000         cmp ebp, dword ptr [esi + 0xe4]
// 0056a062  0f8c5dffffff         jl 0x569fc5
// 0056a068  bb18000000           mov ebx, 0x18
// 0056a06d  83cfff               or edi, 0xffffffff
// 0056a070  8b4618               mov eax, dword ptr [esi + 0x18]
// 0056a073  8a962c010000         mov dl, byte ptr [esi + 0x12c]
// 0056a079  8b08                 mov ecx, dword ptr [eax]
// 0056a07b  8811                 mov byte ptr [ecx], dl
// 0056a07d  ff00                 inc dword ptr [eax]
// 0056a07f  017804               add dword ptr [eax + 4], edi
// 0056a082  5d                   pop ebp
// 0056a083  751c                 jne 0x56a0a1
// 0056a085  8b400c               mov eax, dword ptr [eax + 0xc]
// 0056a088  56                   push esi
// 0056a089  ffd0                 call eax
// 0056a08b  83c404               add esp, 4
// 0056a08e  84c0                 test al, al
// 0056a090  750f                 jne 0x56a0a1
// 0056a092  8b0e                 mov ecx, dword ptr [esi]
// 0056a094  895914               mov dword ptr [ecx + 0x14], ebx
// 0056a097  8b16                 mov edx, dword ptr [esi]
// 0056a099  8b02                 mov eax, dword ptr [edx]
// 0056a09b  56                   push esi
// 0056a09c  ffd0                 call eax
// 0056a09e  83c404               add esp, 4
// 0056a0a1  8b4618               mov eax, dword ptr [esi + 0x18]
// 0056a0a4  8a9630010000         mov dl, byte ptr [esi + 0x130]
// 0056a0aa  8b08                 mov ecx, dword ptr [eax]
// 0056a0ac  8811                 mov byte ptr [ecx], dl
// 0056a0ae  ff00                 inc dword ptr [eax]
// 0056a0b0  017804               add dword ptr [eax + 4], edi
// 0056a0b3  751c                 jne 0x56a0d1
// 0056a0b5  8b400c               mov eax, dword ptr [eax + 0xc]
// 0056a0b8  56                   push esi
// 0056a0b9  ffd0                 call eax
// 0056a0bb  83c404               add esp, 4
// 0056a0be  84c0                 test al, al
// 0056a0c0  750f                 jne 0x56a0d1
// 0056a0c2  8b0e                 mov ecx, dword ptr [esi]
// 0056a0c4  895914               mov dword ptr [ecx + 0x14], ebx
// 0056a0c7  8b16                 mov edx, dword ptr [esi]
// 0056a0c9  8b02                 mov eax, dword ptr [edx]
// 0056a0cb  56                   push esi
// 0056a0cc  ffd0                 call eax
// 0056a0ce  83c404               add esp, 4
// 0056a0d1  8a8e34010000         mov cl, byte ptr [esi + 0x134]
// 0056a0d7  8b4618               mov eax, dword ptr [esi + 0x18]
// 0056a0da  8b10                 mov edx, dword ptr [eax]
// 0056a0dc  c0e104               shl cl, 4
// 0056a0df  028e38010000         add cl, byte ptr [esi + 0x138]
// 0056a0e5  880a                 mov byte ptr [edx], cl
// 0056a0e7  ff00                 inc dword ptr [eax]
// 0056a0e9  017804               add dword ptr [eax + 4], edi
// 0056a0ec  751c                 jne 0x56a10a
// 0056a0ee  8b400c               mov eax, dword ptr [eax + 0xc]
// 0056a0f1  56                   push esi
// 0056a0f2  ffd0                 call eax
// 0056a0f4  83c404               add esp, 4
// 0056a0f7  84c0                 test al, al
// 0056a0f9  750f                 jne 0x56a10a
// 0056a0fb  8b0e                 mov ecx, dword ptr [esi]
// 0056a0fd  895914               mov dword ptr [ecx + 0x14], ebx
// 0056a100  8b16                 mov edx, dword ptr [esi]
// 0056a102  8b02                 mov eax, dword ptr [edx]
// 0056a104  56                   push esi
// 0056a105  ffd0                 call eax
// 0056a107  83c404               add esp, 4
// 0056a10a  5f                   pop edi
// 0056a10b  5e                   pop esi
// 0056a10c  5b                   pop ebx
// 0056a10d  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_sos)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
