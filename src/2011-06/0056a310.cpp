// roc 2011-06 0056a310  unit: seg_00560000  size: 347 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0056a310
//
// 0056a310  53                   push ebx
// 0056a311  55                   push ebp
// 0056a312  56                   push esi
// 0056a313  57                   push edi
// 0056a314  8bf0                 mov esi, eax
// 0056a316  68ee000000           push 0xee
// 0056a31b  e890f6ffff           call 0x5699b0
// 0056a320  83c404               add esp, 4
// 0056a323  bb0e000000           mov ebx, 0xe
// 0056a328  e8f3f6ffff           call 0x569a20
// 0056a32d  8b4618               mov eax, dword ptr [esi + 0x18]
// 0056a330  8b08                 mov ecx, dword ptr [eax]
// 0056a332  c60141               mov byte ptr [ecx], 0x41
// 0056a335  ff00                 inc dword ptr [eax]
// 0056a337  83cfff               or edi, 0xffffffff
// 0056a33a  017804               add dword ptr [eax + 4], edi
// 0056a33d  8d6b0a               lea ebp, [ebx + 0xa]
// 0056a340  751c                 jne 0x56a35e
// 0056a342  8b500c               mov edx, dword ptr [eax + 0xc]
// 0056a345  56                   push esi
// 0056a346  ffd2                 call edx
// 0056a348  83c404               add esp, 4
// 0056a34b  84c0                 test al, al
// 0056a34d  750f                 jne 0x56a35e
// 0056a34f  8b06                 mov eax, dword ptr [esi]
// 0056a351  896814               mov dword ptr [eax + 0x14], ebp
// 0056a354  8b0e                 mov ecx, dword ptr [esi]
// 0056a356  8b11                 mov edx, dword ptr [ecx]
// 0056a358  56                   push esi
// 0056a359  ffd2                 call edx
// 0056a35b  83c404               add esp, 4
// 0056a35e  8b4618               mov eax, dword ptr [esi + 0x18]
// 0056a361  8b08                 mov ecx, dword ptr [eax]
// 0056a363  c60164               mov byte ptr [ecx], 0x64
// 0056a366  ff00                 inc dword ptr [eax]
// 0056a368  017804               add dword ptr [eax + 4], edi
// 0056a36b  751c                 jne 0x56a389
// 0056a36d  8b500c               mov edx, dword ptr [eax + 0xc]
// 0056a370  56                   push esi
// 0056a371  ffd2                 call edx
// 0056a373  83c404               add esp, 4
// 0056a376  84c0                 test al, al
// 0056a378  750f                 jne 0x56a389
// 0056a37a  8b06                 mov eax, dword ptr [esi]
// 0056a37c  896814               mov dword ptr [eax + 0x14], ebp
// 0056a37f  8b0e                 mov ecx, dword ptr [esi]
// 0056a381  8b11                 mov edx, dword ptr [ecx]
// 0056a383  56                   push esi
// 0056a384  ffd2                 call edx
// 0056a386  83c404               add esp, 4
// 0056a389  8b4618               mov eax, dword ptr [esi + 0x18]
// 0056a38c  8b08                 mov ecx, dword ptr [eax]
// 0056a38e  c6016f               mov byte ptr [ecx], 0x6f
// 0056a391  ff00                 inc dword ptr [eax]
// 0056a393  017804               add dword ptr [eax + 4], edi
// 0056a396  751c                 jne 0x56a3b4
// 0056a398  8b500c               mov edx, dword ptr [eax + 0xc]
// 0056a39b  56                   push esi
// 0056a39c  ffd2                 call edx
// 0056a39e  83c404               add esp, 4
// 0056a3a1  84c0                 test al, al
// 0056a3a3  750f                 jne 0x56a3b4
// 0056a3a5  8b06                 mov eax, dword ptr [esi]
// 0056a3a7  896814               mov dword ptr [eax + 0x14], ebp
// 0056a3aa  8b0e                 mov ecx, dword ptr [esi]
// 0056a3ac  8b11                 mov edx, dword ptr [ecx]
// 0056a3ae  56                   push esi
// 0056a3af  ffd2                 call edx
// 0056a3b1  83c404               add esp, 4
// 0056a3b4  8b4618               mov eax, dword ptr [esi + 0x18]
// 0056a3b7  8b08                 mov ecx, dword ptr [eax]
// 0056a3b9  c60162               mov byte ptr [ecx], 0x62
// 0056a3bc  ff00                 inc dword ptr [eax]
// 0056a3be  017804               add dword ptr [eax + 4], edi
// 0056a3c1  751c                 jne 0x56a3df
// 0056a3c3  8b500c               mov edx, dword ptr [eax + 0xc]
// 0056a3c6  56                   push esi
// 0056a3c7  ffd2                 call edx
// 0056a3c9  83c404               add esp, 4
// 0056a3cc  84c0                 test al, al
// 0056a3ce  750f                 jne 0x56a3df
// 0056a3d0  8b06                 mov eax, dword ptr [esi]
// 0056a3d2  896814               mov dword ptr [eax + 0x14], ebp
// 0056a3d5  8b0e                 mov ecx, dword ptr [esi]
// 0056a3d7  8b11                 mov edx, dword ptr [ecx]
// 0056a3d9  56                   push esi
// 0056a3da  ffd2                 call edx
// 0056a3dc  83c404               add esp, 4
// 0056a3df  8b4618               mov eax, dword ptr [esi + 0x18]
// 0056a3e2  8b08                 mov ecx, dword ptr [eax]
// 0056a3e4  c60165               mov byte ptr [ecx], 0x65
// 0056a3e7  ff00                 inc dword ptr [eax]
// 0056a3e9  017804               add dword ptr [eax + 4], edi
// 0056a3ec  751c                 jne 0x56a40a
// 0056a3ee  8b500c               mov edx, dword ptr [eax + 0xc]
// 0056a3f1  56                   push esi
// 0056a3f2  ffd2                 call edx
// 0056a3f4  83c404               add esp, 4
// 0056a3f7  84c0                 test al, al
// 0056a3f9  750f                 jne 0x56a40a
// 0056a3fb  8b06                 mov eax, dword ptr [esi]
// 0056a3fd  896814               mov dword ptr [eax + 0x14], ebp
// 0056a400  8b0e                 mov ecx, dword ptr [esi]
// 0056a402  8b11                 mov edx, dword ptr [ecx]
// 0056a404  56                   push esi
// 0056a405  ffd2                 call edx
// 0056a407  83c404               add esp, 4
// 0056a40a  bb64000000           mov ebx, 0x64
// 0056a40f  e80cf6ffff           call 0x569a20
// 0056a414  33db                 xor ebx, ebx
// 0056a416  e805f6ffff           call 0x569a20
// 0056a41b  e800f6ffff           call 0x569a20
// 0056a420  8b4640               mov eax, dword ptr [esi + 0x40]
// 0056a423  83e803               sub eax, 3
// 0056a426  7413                 je 0x56a43b
// 0056a428  83e802               sub eax, 2
// 0056a42b  8b4618               mov eax, dword ptr [esi + 0x18]
// 0056a42e  8b08                 mov ecx, dword ptr [eax]
// 0056a430  7404                 je 0x56a436
// 0056a432  8819                 mov byte ptr [ecx], bl
// 0056a434  eb0d                 jmp 0x56a443
// 0056a436  c60102               mov byte ptr [ecx], 2
// 0056a439  eb08                 jmp 0x56a443
// 0056a43b  8b4618               mov eax, dword ptr [esi + 0x18]
// 0056a43e  8b08                 mov ecx, dword ptr [eax]
// 0056a440  c60101               mov byte ptr [ecx], 1
// 0056a443  ff00                 inc dword ptr [eax]
// 0056a445  017804               add dword ptr [eax + 4], edi
// 0056a448  751c                 jne 0x56a466
// 0056a44a  8b500c               mov edx, dword ptr [eax + 0xc]
// 0056a44d  56                   push esi
// 0056a44e  ffd2                 call edx
// 0056a450  83c404               add esp, 4
// 0056a453  84c0                 test al, al
// 0056a455  750f                 jne 0x56a466
// 0056a457  8b06                 mov eax, dword ptr [esi]
// 0056a459  896814               mov dword ptr [eax + 0x14], ebp
// 0056a45c  8b0e                 mov ecx, dword ptr [esi]
// 0056a45e  8b11                 mov edx, dword ptr [ecx]
// 0056a460  56                   push esi
// 0056a461  ffd2                 call edx
// 0056a463  83c404               add esp, 4
// 0056a466  5f                   pop edi
// 0056a467  5e                   pop esi
// 0056a468  5d                   pop ebp
// 0056a469  5b                   pop ebx
// 0056a46a  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_adobe_app14)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
