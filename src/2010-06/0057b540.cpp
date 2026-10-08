// from server: 100% by auto
// roc 2010-06 0057b540  unit: seg_00570000  size: 509 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057b540
//
// 0057b540  53                   push ebx
// 0057b541  55                   push ebp
// 0057b542  56                   push esi
// 0057b543  57                   push edi
// 0057b544  8bf0                 mov esi, eax
// 0057b546  68e0000000           push 0xe0
// 0057b54b  e890f8ffff           call 0x57ade0
// 0057b550  83c404               add esp, 4
// 0057b553  bb10000000           mov ebx, 0x10
// 0057b558  e8f3f8ffff           call 0x57ae50
// 0057b55d  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057b560  8b08                 mov ecx, dword ptr [eax]
// 0057b562  c6014a               mov byte ptr [ecx], 0x4a
// 0057b565  ff00                 inc dword ptr [eax]
// 0057b567  83cfff               or edi, 0xffffffff
// 0057b56a  017804               add dword ptr [eax + 4], edi
// 0057b56d  8d6b08               lea ebp, [ebx + 8]
// 0057b570  751c                 jne 0x57b58e
// 0057b572  8b500c               mov edx, dword ptr [eax + 0xc]
// 0057b575  56                   push esi
// 0057b576  ffd2                 call edx
// 0057b578  83c404               add esp, 4
// 0057b57b  84c0                 test al, al
// 0057b57d  750f                 jne 0x57b58e
// 0057b57f  8b06                 mov eax, dword ptr [esi]
// 0057b581  896814               mov dword ptr [eax + 0x14], ebp
// 0057b584  8b0e                 mov ecx, dword ptr [esi]
// 0057b586  8b11                 mov edx, dword ptr [ecx]
// 0057b588  56                   push esi
// 0057b589  ffd2                 call edx
// 0057b58b  83c404               add esp, 4
// 0057b58e  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057b591  8b08                 mov ecx, dword ptr [eax]
// 0057b593  c60146               mov byte ptr [ecx], 0x46
// 0057b596  ff00                 inc dword ptr [eax]
// 0057b598  017804               add dword ptr [eax + 4], edi
// 0057b59b  751c                 jne 0x57b5b9
// 0057b59d  8b500c               mov edx, dword ptr [eax + 0xc]
// 0057b5a0  56                   push esi
// 0057b5a1  ffd2                 call edx
// 0057b5a3  83c404               add esp, 4
// 0057b5a6  84c0                 test al, al
// 0057b5a8  750f                 jne 0x57b5b9
// 0057b5aa  8b06                 mov eax, dword ptr [esi]
// 0057b5ac  896814               mov dword ptr [eax + 0x14], ebp
// 0057b5af  8b0e                 mov ecx, dword ptr [esi]
// 0057b5b1  8b11                 mov edx, dword ptr [ecx]
// 0057b5b3  56                   push esi
// 0057b5b4  ffd2                 call edx
// 0057b5b6  83c404               add esp, 4
// 0057b5b9  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057b5bc  8b08                 mov ecx, dword ptr [eax]
// 0057b5be  c60149               mov byte ptr [ecx], 0x49
// 0057b5c1  ff00                 inc dword ptr [eax]
// 0057b5c3  017804               add dword ptr [eax + 4], edi
// 0057b5c6  751c                 jne 0x57b5e4
// 0057b5c8  8b500c               mov edx, dword ptr [eax + 0xc]
// 0057b5cb  56                   push esi
// 0057b5cc  ffd2                 call edx
// 0057b5ce  83c404               add esp, 4
// 0057b5d1  84c0                 test al, al
// 0057b5d3  750f                 jne 0x57b5e4
// 0057b5d5  8b06                 mov eax, dword ptr [esi]
// 0057b5d7  896814               mov dword ptr [eax + 0x14], ebp
// 0057b5da  8b0e                 mov ecx, dword ptr [esi]
// 0057b5dc  8b11                 mov edx, dword ptr [ecx]
// 0057b5de  56                   push esi
// 0057b5df  ffd2                 call edx
// 0057b5e1  83c404               add esp, 4
// 0057b5e4  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057b5e7  8b08                 mov ecx, dword ptr [eax]
// 0057b5e9  c60146               mov byte ptr [ecx], 0x46
// 0057b5ec  ff00                 inc dword ptr [eax]
// 0057b5ee  017804               add dword ptr [eax + 4], edi
// 0057b5f1  751c                 jne 0x57b60f
// 0057b5f3  8b500c               mov edx, dword ptr [eax + 0xc]
// 0057b5f6  56                   push esi
// 0057b5f7  ffd2                 call edx
// 0057b5f9  83c404               add esp, 4
// 0057b5fc  84c0                 test al, al
// 0057b5fe  750f                 jne 0x57b60f
// 0057b600  8b06                 mov eax, dword ptr [esi]
// 0057b602  896814               mov dword ptr [eax + 0x14], ebp
// 0057b605  8b0e                 mov ecx, dword ptr [esi]
// 0057b607  8b11                 mov edx, dword ptr [ecx]
// 0057b609  56                   push esi
// 0057b60a  ffd2                 call edx
// 0057b60c  83c404               add esp, 4
// 0057b60f  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057b612  8b08                 mov ecx, dword ptr [eax]
// 0057b614  c60100               mov byte ptr [ecx], 0
// 0057b617  ff00                 inc dword ptr [eax]
// 0057b619  017804               add dword ptr [eax + 4], edi
// 0057b61c  751c                 jne 0x57b63a
// 0057b61e  8b500c               mov edx, dword ptr [eax + 0xc]
// 0057b621  56                   push esi
// 0057b622  ffd2                 call edx
// 0057b624  83c404               add esp, 4
// 0057b627  84c0                 test al, al
// 0057b629  750f                 jne 0x57b63a
// 0057b62b  8b06                 mov eax, dword ptr [esi]
// 0057b62d  896814               mov dword ptr [eax + 0x14], ebp
// 0057b630  8b0e                 mov ecx, dword ptr [esi]
// 0057b632  8b11                 mov edx, dword ptr [ecx]
// 0057b634  56                   push esi
// 0057b635  ffd2                 call edx
// 0057b637  83c404               add esp, 4
// 0057b63a  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057b63d  8a96c5000000         mov dl, byte ptr [esi + 0xc5]
// 0057b643  8b08                 mov ecx, dword ptr [eax]
// 0057b645  8811                 mov byte ptr [ecx], dl
// 0057b647  ff00                 inc dword ptr [eax]
// 0057b649  017804               add dword ptr [eax + 4], edi
// 0057b64c  751c                 jne 0x57b66a
// 0057b64e  8b400c               mov eax, dword ptr [eax + 0xc]
// 0057b651  56                   push esi
// 0057b652  ffd0                 call eax
// 0057b654  83c404               add esp, 4
// 0057b657  84c0                 test al, al
// 0057b659  750f                 jne 0x57b66a
// 0057b65b  8b0e                 mov ecx, dword ptr [esi]
// 0057b65d  896914               mov dword ptr [ecx + 0x14], ebp
// 0057b660  8b16                 mov edx, dword ptr [esi]
// 0057b662  8b02                 mov eax, dword ptr [edx]
// 0057b664  56                   push esi
// 0057b665  ffd0                 call eax
// 0057b667  83c404               add esp, 4
// 0057b66a  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057b66d  8a96c6000000         mov dl, byte ptr [esi + 0xc6]
// 0057b673  8b08                 mov ecx, dword ptr [eax]
// 0057b675  8811                 mov byte ptr [ecx], dl
// 0057b677  ff00                 inc dword ptr [eax]
// 0057b679  017804               add dword ptr [eax + 4], edi
// 0057b67c  751c                 jne 0x57b69a
// 0057b67e  8b400c               mov eax, dword ptr [eax + 0xc]
// 0057b681  56                   push esi
// 0057b682  ffd0                 call eax
// 0057b684  83c404               add esp, 4
// 0057b687  84c0                 test al, al
// 0057b689  750f                 jne 0x57b69a
// 0057b68b  8b0e                 mov ecx, dword ptr [esi]
// 0057b68d  896914               mov dword ptr [ecx + 0x14], ebp
// 0057b690  8b16                 mov edx, dword ptr [esi]
// 0057b692  8b02                 mov eax, dword ptr [edx]
// 0057b694  56                   push esi
// 0057b695  ffd0                 call eax
// 0057b697  83c404               add esp, 4
// 0057b69a  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057b69d  8a96c7000000         mov dl, byte ptr [esi + 0xc7]
// 0057b6a3  8b08                 mov ecx, dword ptr [eax]
// 0057b6a5  8811                 mov byte ptr [ecx], dl
// 0057b6a7  ff00                 inc dword ptr [eax]
// 0057b6a9  017804               add dword ptr [eax + 4], edi
// 0057b6ac  751c                 jne 0x57b6ca
// 0057b6ae  8b400c               mov eax, dword ptr [eax + 0xc]
// 0057b6b1  56                   push esi
// 0057b6b2  ffd0                 call eax
// 0057b6b4  83c404               add esp, 4
// 0057b6b7  84c0                 test al, al
// 0057b6b9  750f                 jne 0x57b6ca
// 0057b6bb  8b0e                 mov ecx, dword ptr [esi]
// 0057b6bd  896914               mov dword ptr [ecx + 0x14], ebp
// 0057b6c0  8b16                 mov edx, dword ptr [esi]
// 0057b6c2  8b02                 mov eax, dword ptr [edx]
// 0057b6c4  56                   push esi
// 0057b6c5  ffd0                 call eax
// 0057b6c7  83c404               add esp, 4
// 0057b6ca  0fb79ec8000000       movzx ebx, word ptr [esi + 0xc8]
// 0057b6d1  e87af7ffff           call 0x57ae50
// 0057b6d6  0fb79eca000000       movzx ebx, word ptr [esi + 0xca]
// 0057b6dd  e86ef7ffff           call 0x57ae50
// 0057b6e2  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057b6e5  8b08                 mov ecx, dword ptr [eax]
// 0057b6e7  c60100               mov byte ptr [ecx], 0
// 0057b6ea  ff00                 inc dword ptr [eax]
// 0057b6ec  017804               add dword ptr [eax + 4], edi
// 0057b6ef  751c                 jne 0x57b70d
// 0057b6f1  8b500c               mov edx, dword ptr [eax + 0xc]
// 0057b6f4  56                   push esi
// 0057b6f5  ffd2                 call edx
// 0057b6f7  83c404               add esp, 4
// 0057b6fa  84c0                 test al, al
// 0057b6fc  750f                 jne 0x57b70d
// 0057b6fe  8b06                 mov eax, dword ptr [esi]
// 0057b700  896814               mov dword ptr [eax + 0x14], ebp
// 0057b703  8b0e                 mov ecx, dword ptr [esi]
// 0057b705  8b11                 mov edx, dword ptr [ecx]
// 0057b707  56                   push esi
// 0057b708  ffd2                 call edx
// 0057b70a  83c404               add esp, 4
// 0057b70d  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057b710  8b08                 mov ecx, dword ptr [eax]
// 0057b712  c60100               mov byte ptr [ecx], 0
// 0057b715  ff00                 inc dword ptr [eax]
// 0057b717  017804               add dword ptr [eax + 4], edi
// 0057b71a  751c                 jne 0x57b738
// 0057b71c  8b500c               mov edx, dword ptr [eax + 0xc]
// 0057b71f  56                   push esi
// 0057b720  ffd2                 call edx
// 0057b722  83c404               add esp, 4
// 0057b725  84c0                 test al, al
// 0057b727  750f                 jne 0x57b738
// 0057b729  8b06                 mov eax, dword ptr [esi]
// 0057b72b  896814               mov dword ptr [eax + 0x14], ebp
// 0057b72e  8b0e                 mov ecx, dword ptr [esi]
// 0057b730  8b11                 mov edx, dword ptr [ecx]
// 0057b732  56                   push esi
// 0057b733  ffd2                 call edx
// 0057b735  83c404               add esp, 4
// 0057b738  5f                   pop edi
// 0057b739  5e                   pop esi
// 0057b73a  5d                   pop ebp
// 0057b73b  5b                   pop ebx
// 0057b73c  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_jfif_app0)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
