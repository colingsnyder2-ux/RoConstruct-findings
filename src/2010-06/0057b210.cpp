// roc 2010-06 0057b210  unit: seg_00570000  size: 367 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057b210
//
// 0057b210  53                   push ebx
// 0057b211  55                   push ebp
// 0057b212  56                   push esi
// 0057b213  57                   push edi
// 0057b214  8bf1                 mov esi, ecx
// 0057b216  50                   push eax
// 0057b217  e8c4fbffff           call 0x57ade0
// 0057b21c  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0057b21f  83c404               add esp, 4
// 0057b222  8d5c4008             lea ebx, [eax + eax*2 + 8]
// 0057b226  e825fcffff           call 0x57ae50
// 0057b22b  b8ffff0000           mov eax, 0xffff
// 0057b230  394620               cmp dword ptr [esi + 0x20], eax
// 0057b233  7f05                 jg 0x57b23a
// 0057b235  39461c               cmp dword ptr [esi + 0x1c], eax
// 0057b238  7e18                 jle 0x57b252
// 0057b23a  8b0e                 mov ecx, dword ptr [esi]
// 0057b23c  c7411429000000       mov dword ptr [ecx + 0x14], 0x29
// 0057b243  8b16                 mov edx, dword ptr [esi]
// 0057b245  894218               mov dword ptr [edx + 0x18], eax
// 0057b248  8b06                 mov eax, dword ptr [esi]
// 0057b24a  8b08                 mov ecx, dword ptr [eax]
// 0057b24c  56                   push esi
// 0057b24d  ffd1                 call ecx
// 0057b24f  83c404               add esp, 4
// 0057b252  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057b255  8a4e38               mov cl, byte ptr [esi + 0x38]
// 0057b258  8b10                 mov edx, dword ptr [eax]
// 0057b25a  880a                 mov byte ptr [edx], cl
// 0057b25c  ff00                 inc dword ptr [eax]
// 0057b25e  83cdff               or ebp, 0xffffffff
// 0057b261  016804               add dword ptr [eax + 4], ebp
// 0057b264  7520                 jne 0x57b286
// 0057b266  8b500c               mov edx, dword ptr [eax + 0xc]
// 0057b269  56                   push esi
// 0057b26a  ffd2                 call edx
// 0057b26c  83c404               add esp, 4
// 0057b26f  84c0                 test al, al
// 0057b271  7513                 jne 0x57b286
// 0057b273  8b06                 mov eax, dword ptr [esi]
// 0057b275  c7401418000000       mov dword ptr [eax + 0x14], 0x18
// 0057b27c  8b0e                 mov ecx, dword ptr [esi]
// 0057b27e  8b11                 mov edx, dword ptr [ecx]
// 0057b280  56                   push esi
// 0057b281  ffd2                 call edx
// 0057b283  83c404               add esp, 4
// 0057b286  8b5e20               mov ebx, dword ptr [esi + 0x20]
// 0057b289  e8c2fbffff           call 0x57ae50
// 0057b28e  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 0057b291  e8bafbffff           call 0x57ae50
// 0057b296  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057b299  8a563c               mov dl, byte ptr [esi + 0x3c]
// 0057b29c  8b08                 mov ecx, dword ptr [eax]
// 0057b29e  8811                 mov byte ptr [ecx], dl
// 0057b2a0  ff00                 inc dword ptr [eax]
// 0057b2a2  016804               add dword ptr [eax + 4], ebp
// 0057b2a5  7520                 jne 0x57b2c7
// 0057b2a7  8b400c               mov eax, dword ptr [eax + 0xc]
// 0057b2aa  56                   push esi
// 0057b2ab  ffd0                 call eax
// 0057b2ad  83c404               add esp, 4
// 0057b2b0  84c0                 test al, al
// 0057b2b2  7513                 jne 0x57b2c7
// 0057b2b4  8b0e                 mov ecx, dword ptr [esi]
// 0057b2b6  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0057b2bd  8b16                 mov edx, dword ptr [esi]
// 0057b2bf  8b02                 mov eax, dword ptr [edx]
// 0057b2c1  56                   push esi
// 0057b2c2  ffd0                 call eax
// 0057b2c4  83c404               add esp, 4
// 0057b2c7  8b7e44               mov edi, dword ptr [esi + 0x44]
// 0057b2ca  33db                 xor ebx, ebx
// 0057b2cc  395e3c               cmp dword ptr [esi + 0x3c], ebx
// 0057b2cf  0f8ea5000000         jle 0x57b37a
// 0057b2d5  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057b2d8  8a17                 mov dl, byte ptr [edi]
// 0057b2da  8b08                 mov ecx, dword ptr [eax]
// 0057b2dc  8811                 mov byte ptr [ecx], dl
// 0057b2de  ff00                 inc dword ptr [eax]
// 0057b2e0  016804               add dword ptr [eax + 4], ebp
// 0057b2e3  7520                 jne 0x57b305
// 0057b2e5  8b400c               mov eax, dword ptr [eax + 0xc]
// 0057b2e8  56                   push esi
// 0057b2e9  ffd0                 call eax
// 0057b2eb  83c404               add esp, 4
// 0057b2ee  84c0                 test al, al
// 0057b2f0  7513                 jne 0x57b305
// 0057b2f2  8b0e                 mov ecx, dword ptr [esi]
// 0057b2f4  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0057b2fb  8b16                 mov edx, dword ptr [esi]
// 0057b2fd  8b02                 mov eax, dword ptr [edx]
// 0057b2ff  56                   push esi
// 0057b300  ffd0                 call eax
// 0057b302  83c404               add esp, 4
// 0057b305  8a4f08               mov cl, byte ptr [edi + 8]
// 0057b308  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057b30b  8b10                 mov edx, dword ptr [eax]
// 0057b30d  c0e104               shl cl, 4
// 0057b310  024f0c               add cl, byte ptr [edi + 0xc]
// 0057b313  880a                 mov byte ptr [edx], cl
// 0057b315  ff00                 inc dword ptr [eax]
// 0057b317  016804               add dword ptr [eax + 4], ebp
// 0057b31a  7520                 jne 0x57b33c
// 0057b31c  8b400c               mov eax, dword ptr [eax + 0xc]
// 0057b31f  56                   push esi
// 0057b320  ffd0                 call eax
// 0057b322  83c404               add esp, 4
// 0057b325  84c0                 test al, al
// 0057b327  7513                 jne 0x57b33c
// 0057b329  8b0e                 mov ecx, dword ptr [esi]
// 0057b32b  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0057b332  8b16                 mov edx, dword ptr [esi]
// 0057b334  8b02                 mov eax, dword ptr [edx]
// 0057b336  56                   push esi
// 0057b337  ffd0                 call eax
// 0057b339  83c404               add esp, 4
// 0057b33c  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057b33f  8a5710               mov dl, byte ptr [edi + 0x10]
// 0057b342  8b08                 mov ecx, dword ptr [eax]
// 0057b344  8811                 mov byte ptr [ecx], dl
// 0057b346  ff00                 inc dword ptr [eax]
// 0057b348  016804               add dword ptr [eax + 4], ebp
// 0057b34b  7520                 jne 0x57b36d
// 0057b34d  8b400c               mov eax, dword ptr [eax + 0xc]
// 0057b350  56                   push esi
// 0057b351  ffd0                 call eax
// 0057b353  83c404               add esp, 4
// 0057b356  84c0                 test al, al
// 0057b358  7513                 jne 0x57b36d
// 0057b35a  8b0e                 mov ecx, dword ptr [esi]
// 0057b35c  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0057b363  8b16                 mov edx, dword ptr [esi]
// 0057b365  8b02                 mov eax, dword ptr [edx]
// 0057b367  56                   push esi
// 0057b368  ffd0                 call eax
// 0057b36a  83c404               add esp, 4
// 0057b36d  43                   inc ebx
// 0057b36e  83c754               add edi, 0x54
// 0057b371  3b5e3c               cmp ebx, dword ptr [esi + 0x3c]
// 0057b374  0f8c5bffffff         jl 0x57b2d5
// 0057b37a  5f                   pop edi
// 0057b37b  5e                   pop esi
// 0057b37c  5d                   pop ebp
// 0057b37d  5b                   pop ebx
// 0057b37e  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_sof)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
