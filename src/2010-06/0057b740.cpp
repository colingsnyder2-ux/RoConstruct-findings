// from server: 100% by auto
// roc 2010-06 0057b740  unit: seg_00570000  size: 347 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057b740
//
// 0057b740  53                   push ebx
// 0057b741  55                   push ebp
// 0057b742  56                   push esi
// 0057b743  57                   push edi
// 0057b744  8bf0                 mov esi, eax
// 0057b746  68ee000000           push 0xee
// 0057b74b  e890f6ffff           call 0x57ade0
// 0057b750  83c404               add esp, 4
// 0057b753  bb0e000000           mov ebx, 0xe
// 0057b758  e8f3f6ffff           call 0x57ae50
// 0057b75d  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057b760  8b08                 mov ecx, dword ptr [eax]
// 0057b762  c60141               mov byte ptr [ecx], 0x41
// 0057b765  ff00                 inc dword ptr [eax]
// 0057b767  83cfff               or edi, 0xffffffff
// 0057b76a  017804               add dword ptr [eax + 4], edi
// 0057b76d  8d6b0a               lea ebp, [ebx + 0xa]
// 0057b770  751c                 jne 0x57b78e
// 0057b772  8b500c               mov edx, dword ptr [eax + 0xc]
// 0057b775  56                   push esi
// 0057b776  ffd2                 call edx
// 0057b778  83c404               add esp, 4
// 0057b77b  84c0                 test al, al
// 0057b77d  750f                 jne 0x57b78e
// 0057b77f  8b06                 mov eax, dword ptr [esi]
// 0057b781  896814               mov dword ptr [eax + 0x14], ebp
// 0057b784  8b0e                 mov ecx, dword ptr [esi]
// 0057b786  8b11                 mov edx, dword ptr [ecx]
// 0057b788  56                   push esi
// 0057b789  ffd2                 call edx
// 0057b78b  83c404               add esp, 4
// 0057b78e  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057b791  8b08                 mov ecx, dword ptr [eax]
// 0057b793  c60164               mov byte ptr [ecx], 0x64
// 0057b796  ff00                 inc dword ptr [eax]
// 0057b798  017804               add dword ptr [eax + 4], edi
// 0057b79b  751c                 jne 0x57b7b9
// 0057b79d  8b500c               mov edx, dword ptr [eax + 0xc]
// 0057b7a0  56                   push esi
// 0057b7a1  ffd2                 call edx
// 0057b7a3  83c404               add esp, 4
// 0057b7a6  84c0                 test al, al
// 0057b7a8  750f                 jne 0x57b7b9
// 0057b7aa  8b06                 mov eax, dword ptr [esi]
// 0057b7ac  896814               mov dword ptr [eax + 0x14], ebp
// 0057b7af  8b0e                 mov ecx, dword ptr [esi]
// 0057b7b1  8b11                 mov edx, dword ptr [ecx]
// 0057b7b3  56                   push esi
// 0057b7b4  ffd2                 call edx
// 0057b7b6  83c404               add esp, 4
// 0057b7b9  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057b7bc  8b08                 mov ecx, dword ptr [eax]
// 0057b7be  c6016f               mov byte ptr [ecx], 0x6f
// 0057b7c1  ff00                 inc dword ptr [eax]
// 0057b7c3  017804               add dword ptr [eax + 4], edi
// 0057b7c6  751c                 jne 0x57b7e4
// 0057b7c8  8b500c               mov edx, dword ptr [eax + 0xc]
// 0057b7cb  56                   push esi
// 0057b7cc  ffd2                 call edx
// 0057b7ce  83c404               add esp, 4
// 0057b7d1  84c0                 test al, al
// 0057b7d3  750f                 jne 0x57b7e4
// 0057b7d5  8b06                 mov eax, dword ptr [esi]
// 0057b7d7  896814               mov dword ptr [eax + 0x14], ebp
// 0057b7da  8b0e                 mov ecx, dword ptr [esi]
// 0057b7dc  8b11                 mov edx, dword ptr [ecx]
// 0057b7de  56                   push esi
// 0057b7df  ffd2                 call edx
// 0057b7e1  83c404               add esp, 4
// 0057b7e4  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057b7e7  8b08                 mov ecx, dword ptr [eax]
// 0057b7e9  c60162               mov byte ptr [ecx], 0x62
// 0057b7ec  ff00                 inc dword ptr [eax]
// 0057b7ee  017804               add dword ptr [eax + 4], edi
// 0057b7f1  751c                 jne 0x57b80f
// 0057b7f3  8b500c               mov edx, dword ptr [eax + 0xc]
// 0057b7f6  56                   push esi
// 0057b7f7  ffd2                 call edx
// 0057b7f9  83c404               add esp, 4
// 0057b7fc  84c0                 test al, al
// 0057b7fe  750f                 jne 0x57b80f
// 0057b800  8b06                 mov eax, dword ptr [esi]
// 0057b802  896814               mov dword ptr [eax + 0x14], ebp
// 0057b805  8b0e                 mov ecx, dword ptr [esi]
// 0057b807  8b11                 mov edx, dword ptr [ecx]
// 0057b809  56                   push esi
// 0057b80a  ffd2                 call edx
// 0057b80c  83c404               add esp, 4
// 0057b80f  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057b812  8b08                 mov ecx, dword ptr [eax]
// 0057b814  c60165               mov byte ptr [ecx], 0x65
// 0057b817  ff00                 inc dword ptr [eax]
// 0057b819  017804               add dword ptr [eax + 4], edi
// 0057b81c  751c                 jne 0x57b83a
// 0057b81e  8b500c               mov edx, dword ptr [eax + 0xc]
// 0057b821  56                   push esi
// 0057b822  ffd2                 call edx
// 0057b824  83c404               add esp, 4
// 0057b827  84c0                 test al, al
// 0057b829  750f                 jne 0x57b83a
// 0057b82b  8b06                 mov eax, dword ptr [esi]
// 0057b82d  896814               mov dword ptr [eax + 0x14], ebp
// 0057b830  8b0e                 mov ecx, dword ptr [esi]
// 0057b832  8b11                 mov edx, dword ptr [ecx]
// 0057b834  56                   push esi
// 0057b835  ffd2                 call edx
// 0057b837  83c404               add esp, 4
// 0057b83a  bb64000000           mov ebx, 0x64
// 0057b83f  e80cf6ffff           call 0x57ae50
// 0057b844  33db                 xor ebx, ebx
// 0057b846  e805f6ffff           call 0x57ae50
// 0057b84b  e800f6ffff           call 0x57ae50
// 0057b850  8b4640               mov eax, dword ptr [esi + 0x40]
// 0057b853  83e803               sub eax, 3
// 0057b856  7413                 je 0x57b86b
// 0057b858  83e802               sub eax, 2
// 0057b85b  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057b85e  8b08                 mov ecx, dword ptr [eax]
// 0057b860  7404                 je 0x57b866
// 0057b862  8819                 mov byte ptr [ecx], bl
// 0057b864  eb0d                 jmp 0x57b873
// 0057b866  c60102               mov byte ptr [ecx], 2
// 0057b869  eb08                 jmp 0x57b873
// 0057b86b  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057b86e  8b08                 mov ecx, dword ptr [eax]
// 0057b870  c60101               mov byte ptr [ecx], 1
// 0057b873  ff00                 inc dword ptr [eax]
// 0057b875  017804               add dword ptr [eax + 4], edi
// 0057b878  751c                 jne 0x57b896
// 0057b87a  8b500c               mov edx, dword ptr [eax + 0xc]
// 0057b87d  56                   push esi
// 0057b87e  ffd2                 call edx
// 0057b880  83c404               add esp, 4
// 0057b883  84c0                 test al, al
// 0057b885  750f                 jne 0x57b896
// 0057b887  8b06                 mov eax, dword ptr [esi]
// 0057b889  896814               mov dword ptr [eax + 0x14], ebp
// 0057b88c  8b0e                 mov ecx, dword ptr [esi]
// 0057b88e  8b11                 mov edx, dword ptr [ecx]
// 0057b890  56                   push esi
// 0057b891  ffd2                 call edx
// 0057b893  83c404               add esp, 4
// 0057b896  5f                   pop edi
// 0057b897  5e                   pop esi
// 0057b898  5d                   pop ebp
// 0057b899  5b                   pop ebx
// 0057b89a  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_adobe_app14)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
