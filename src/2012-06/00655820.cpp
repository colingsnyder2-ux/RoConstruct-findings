// from server: 100% by auto
// roc 2012-06 00655820  unit: seg_00650000  size: 509 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00655820
//
// 00655820  53                   push ebx
// 00655821  55                   push ebp
// 00655822  56                   push esi
// 00655823  57                   push edi
// 00655824  8bf0                 mov esi, eax
// 00655826  68e0000000           push 0xe0
// 0065582b  e890f8ffff           call 0x6550c0
// 00655830  83c404               add esp, 4
// 00655833  bb10000000           mov ebx, 0x10
// 00655838  e8f3f8ffff           call 0x655130
// 0065583d  8b4618               mov eax, dword ptr [esi + 0x18]
// 00655840  8b08                 mov ecx, dword ptr [eax]
// 00655842  c6014a               mov byte ptr [ecx], 0x4a
// 00655845  ff00                 inc dword ptr [eax]
// 00655847  83cfff               or edi, 0xffffffff
// 0065584a  017804               add dword ptr [eax + 4], edi
// 0065584d  8d6b08               lea ebp, [ebx + 8]
// 00655850  751c                 jne 0x65586e
// 00655852  8b500c               mov edx, dword ptr [eax + 0xc]
// 00655855  56                   push esi
// 00655856  ffd2                 call edx
// 00655858  83c404               add esp, 4
// 0065585b  84c0                 test al, al
// 0065585d  750f                 jne 0x65586e
// 0065585f  8b06                 mov eax, dword ptr [esi]
// 00655861  896814               mov dword ptr [eax + 0x14], ebp
// 00655864  8b0e                 mov ecx, dword ptr [esi]
// 00655866  8b11                 mov edx, dword ptr [ecx]
// 00655868  56                   push esi
// 00655869  ffd2                 call edx
// 0065586b  83c404               add esp, 4
// 0065586e  8b4618               mov eax, dword ptr [esi + 0x18]
// 00655871  8b08                 mov ecx, dword ptr [eax]
// 00655873  c60146               mov byte ptr [ecx], 0x46
// 00655876  ff00                 inc dword ptr [eax]
// 00655878  017804               add dword ptr [eax + 4], edi
// 0065587b  751c                 jne 0x655899
// 0065587d  8b500c               mov edx, dword ptr [eax + 0xc]
// 00655880  56                   push esi
// 00655881  ffd2                 call edx
// 00655883  83c404               add esp, 4
// 00655886  84c0                 test al, al
// 00655888  750f                 jne 0x655899
// 0065588a  8b06                 mov eax, dword ptr [esi]
// 0065588c  896814               mov dword ptr [eax + 0x14], ebp
// 0065588f  8b0e                 mov ecx, dword ptr [esi]
// 00655891  8b11                 mov edx, dword ptr [ecx]
// 00655893  56                   push esi
// 00655894  ffd2                 call edx
// 00655896  83c404               add esp, 4
// 00655899  8b4618               mov eax, dword ptr [esi + 0x18]
// 0065589c  8b08                 mov ecx, dword ptr [eax]
// 0065589e  c60149               mov byte ptr [ecx], 0x49
// 006558a1  ff00                 inc dword ptr [eax]
// 006558a3  017804               add dword ptr [eax + 4], edi
// 006558a6  751c                 jne 0x6558c4
// 006558a8  8b500c               mov edx, dword ptr [eax + 0xc]
// 006558ab  56                   push esi
// 006558ac  ffd2                 call edx
// 006558ae  83c404               add esp, 4
// 006558b1  84c0                 test al, al
// 006558b3  750f                 jne 0x6558c4
// 006558b5  8b06                 mov eax, dword ptr [esi]
// 006558b7  896814               mov dword ptr [eax + 0x14], ebp
// 006558ba  8b0e                 mov ecx, dword ptr [esi]
// 006558bc  8b11                 mov edx, dword ptr [ecx]
// 006558be  56                   push esi
// 006558bf  ffd2                 call edx
// 006558c1  83c404               add esp, 4
// 006558c4  8b4618               mov eax, dword ptr [esi + 0x18]
// 006558c7  8b08                 mov ecx, dword ptr [eax]
// 006558c9  c60146               mov byte ptr [ecx], 0x46
// 006558cc  ff00                 inc dword ptr [eax]
// 006558ce  017804               add dword ptr [eax + 4], edi
// 006558d1  751c                 jne 0x6558ef
// 006558d3  8b500c               mov edx, dword ptr [eax + 0xc]
// 006558d6  56                   push esi
// 006558d7  ffd2                 call edx
// 006558d9  83c404               add esp, 4
// 006558dc  84c0                 test al, al
// 006558de  750f                 jne 0x6558ef
// 006558e0  8b06                 mov eax, dword ptr [esi]
// 006558e2  896814               mov dword ptr [eax + 0x14], ebp
// 006558e5  8b0e                 mov ecx, dword ptr [esi]
// 006558e7  8b11                 mov edx, dword ptr [ecx]
// 006558e9  56                   push esi
// 006558ea  ffd2                 call edx
// 006558ec  83c404               add esp, 4
// 006558ef  8b4618               mov eax, dword ptr [esi + 0x18]
// 006558f2  8b08                 mov ecx, dword ptr [eax]
// 006558f4  c60100               mov byte ptr [ecx], 0
// 006558f7  ff00                 inc dword ptr [eax]
// 006558f9  017804               add dword ptr [eax + 4], edi
// 006558fc  751c                 jne 0x65591a
// 006558fe  8b500c               mov edx, dword ptr [eax + 0xc]
// 00655901  56                   push esi
// 00655902  ffd2                 call edx
// 00655904  83c404               add esp, 4
// 00655907  84c0                 test al, al
// 00655909  750f                 jne 0x65591a
// 0065590b  8b06                 mov eax, dword ptr [esi]
// 0065590d  896814               mov dword ptr [eax + 0x14], ebp
// 00655910  8b0e                 mov ecx, dword ptr [esi]
// 00655912  8b11                 mov edx, dword ptr [ecx]
// 00655914  56                   push esi
// 00655915  ffd2                 call edx
// 00655917  83c404               add esp, 4
// 0065591a  8b4618               mov eax, dword ptr [esi + 0x18]
// 0065591d  8a96c5000000         mov dl, byte ptr [esi + 0xc5]
// 00655923  8b08                 mov ecx, dword ptr [eax]
// 00655925  8811                 mov byte ptr [ecx], dl
// 00655927  ff00                 inc dword ptr [eax]
// 00655929  017804               add dword ptr [eax + 4], edi
// 0065592c  751c                 jne 0x65594a
// 0065592e  8b400c               mov eax, dword ptr [eax + 0xc]
// 00655931  56                   push esi
// 00655932  ffd0                 call eax
// 00655934  83c404               add esp, 4
// 00655937  84c0                 test al, al
// 00655939  750f                 jne 0x65594a
// 0065593b  8b0e                 mov ecx, dword ptr [esi]
// 0065593d  896914               mov dword ptr [ecx + 0x14], ebp
// 00655940  8b16                 mov edx, dword ptr [esi]
// 00655942  8b02                 mov eax, dword ptr [edx]
// 00655944  56                   push esi
// 00655945  ffd0                 call eax
// 00655947  83c404               add esp, 4
// 0065594a  8b4618               mov eax, dword ptr [esi + 0x18]
// 0065594d  8a96c6000000         mov dl, byte ptr [esi + 0xc6]
// 00655953  8b08                 mov ecx, dword ptr [eax]
// 00655955  8811                 mov byte ptr [ecx], dl
// 00655957  ff00                 inc dword ptr [eax]
// 00655959  017804               add dword ptr [eax + 4], edi
// 0065595c  751c                 jne 0x65597a
// 0065595e  8b400c               mov eax, dword ptr [eax + 0xc]
// 00655961  56                   push esi
// 00655962  ffd0                 call eax
// 00655964  83c404               add esp, 4
// 00655967  84c0                 test al, al
// 00655969  750f                 jne 0x65597a
// 0065596b  8b0e                 mov ecx, dword ptr [esi]
// 0065596d  896914               mov dword ptr [ecx + 0x14], ebp
// 00655970  8b16                 mov edx, dword ptr [esi]
// 00655972  8b02                 mov eax, dword ptr [edx]
// 00655974  56                   push esi
// 00655975  ffd0                 call eax
// 00655977  83c404               add esp, 4
// 0065597a  8b4618               mov eax, dword ptr [esi + 0x18]
// 0065597d  8a96c7000000         mov dl, byte ptr [esi + 0xc7]
// 00655983  8b08                 mov ecx, dword ptr [eax]
// 00655985  8811                 mov byte ptr [ecx], dl
// 00655987  ff00                 inc dword ptr [eax]
// 00655989  017804               add dword ptr [eax + 4], edi
// 0065598c  751c                 jne 0x6559aa
// 0065598e  8b400c               mov eax, dword ptr [eax + 0xc]
// 00655991  56                   push esi
// 00655992  ffd0                 call eax
// 00655994  83c404               add esp, 4
// 00655997  84c0                 test al, al
// 00655999  750f                 jne 0x6559aa
// 0065599b  8b0e                 mov ecx, dword ptr [esi]
// 0065599d  896914               mov dword ptr [ecx + 0x14], ebp
// 006559a0  8b16                 mov edx, dword ptr [esi]
// 006559a2  8b02                 mov eax, dword ptr [edx]
// 006559a4  56                   push esi
// 006559a5  ffd0                 call eax
// 006559a7  83c404               add esp, 4
// 006559aa  0fb79ec8000000       movzx ebx, word ptr [esi + 0xc8]
// 006559b1  e87af7ffff           call 0x655130
// 006559b6  0fb79eca000000       movzx ebx, word ptr [esi + 0xca]
// 006559bd  e86ef7ffff           call 0x655130
// 006559c2  8b4618               mov eax, dword ptr [esi + 0x18]
// 006559c5  8b08                 mov ecx, dword ptr [eax]
// 006559c7  c60100               mov byte ptr [ecx], 0
// 006559ca  ff00                 inc dword ptr [eax]
// 006559cc  017804               add dword ptr [eax + 4], edi
// 006559cf  751c                 jne 0x6559ed
// 006559d1  8b500c               mov edx, dword ptr [eax + 0xc]
// 006559d4  56                   push esi
// 006559d5  ffd2                 call edx
// 006559d7  83c404               add esp, 4
// 006559da  84c0                 test al, al
// 006559dc  750f                 jne 0x6559ed
// 006559de  8b06                 mov eax, dword ptr [esi]
// 006559e0  896814               mov dword ptr [eax + 0x14], ebp
// 006559e3  8b0e                 mov ecx, dword ptr [esi]
// 006559e5  8b11                 mov edx, dword ptr [ecx]
// 006559e7  56                   push esi
// 006559e8  ffd2                 call edx
// 006559ea  83c404               add esp, 4
// 006559ed  8b4618               mov eax, dword ptr [esi + 0x18]
// 006559f0  8b08                 mov ecx, dword ptr [eax]
// 006559f2  c60100               mov byte ptr [ecx], 0
// 006559f5  ff00                 inc dword ptr [eax]
// 006559f7  017804               add dword ptr [eax + 4], edi
// 006559fa  751c                 jne 0x655a18
// 006559fc  8b500c               mov edx, dword ptr [eax + 0xc]
// 006559ff  56                   push esi
// 00655a00  ffd2                 call edx
// 00655a02  83c404               add esp, 4
// 00655a05  84c0                 test al, al
// 00655a07  750f                 jne 0x655a18
// 00655a09  8b06                 mov eax, dword ptr [esi]
// 00655a0b  896814               mov dword ptr [eax + 0x14], ebp
// 00655a0e  8b0e                 mov ecx, dword ptr [esi]
// 00655a10  8b11                 mov edx, dword ptr [ecx]
// 00655a12  56                   push esi
// 00655a13  ffd2                 call edx
// 00655a15  83c404               add esp, 4
// 00655a18  5f                   pop edi
// 00655a19  5e                   pop esi
// 00655a1a  5d                   pop ebp
// 00655a1b  5b                   pop ebx
// 00655a1c  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_jfif_app0)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
