// roc 2008-06 0052ff60  unit: seg_00520000  size: 347 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052ff60
//
// 0052ff60  53                   push ebx
// 0052ff61  55                   push ebp
// 0052ff62  56                   push esi
// 0052ff63  57                   push edi
// 0052ff64  8bf0                 mov esi, eax
// 0052ff66  68ee000000           push 0xee
// 0052ff6b  e890f6ffff           call 0x52f600
// 0052ff70  83c404               add esp, 4
// 0052ff73  bb0e000000           mov ebx, 0xe
// 0052ff78  e8f3f6ffff           call 0x52f670
// 0052ff7d  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052ff80  8b08                 mov ecx, dword ptr [eax]
// 0052ff82  c60141               mov byte ptr [ecx], 0x41
// 0052ff85  ff00                 inc dword ptr [eax]
// 0052ff87  83cfff               or edi, 0xffffffff
// 0052ff8a  017804               add dword ptr [eax + 4], edi
// 0052ff8d  8d6b0a               lea ebp, [ebx + 0xa]
// 0052ff90  751c                 jne 0x52ffae
// 0052ff92  8b500c               mov edx, dword ptr [eax + 0xc]
// 0052ff95  56                   push esi
// 0052ff96  ffd2                 call edx
// 0052ff98  83c404               add esp, 4
// 0052ff9b  84c0                 test al, al
// 0052ff9d  750f                 jne 0x52ffae
// 0052ff9f  8b06                 mov eax, dword ptr [esi]
// 0052ffa1  896814               mov dword ptr [eax + 0x14], ebp
// 0052ffa4  8b0e                 mov ecx, dword ptr [esi]
// 0052ffa6  8b11                 mov edx, dword ptr [ecx]
// 0052ffa8  56                   push esi
// 0052ffa9  ffd2                 call edx
// 0052ffab  83c404               add esp, 4
// 0052ffae  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052ffb1  8b08                 mov ecx, dword ptr [eax]
// 0052ffb3  c60164               mov byte ptr [ecx], 0x64
// 0052ffb6  ff00                 inc dword ptr [eax]
// 0052ffb8  017804               add dword ptr [eax + 4], edi
// 0052ffbb  751c                 jne 0x52ffd9
// 0052ffbd  8b500c               mov edx, dword ptr [eax + 0xc]
// 0052ffc0  56                   push esi
// 0052ffc1  ffd2                 call edx
// 0052ffc3  83c404               add esp, 4
// 0052ffc6  84c0                 test al, al
// 0052ffc8  750f                 jne 0x52ffd9
// 0052ffca  8b06                 mov eax, dword ptr [esi]
// 0052ffcc  896814               mov dword ptr [eax + 0x14], ebp
// 0052ffcf  8b0e                 mov ecx, dword ptr [esi]
// 0052ffd1  8b11                 mov edx, dword ptr [ecx]
// 0052ffd3  56                   push esi
// 0052ffd4  ffd2                 call edx
// 0052ffd6  83c404               add esp, 4
// 0052ffd9  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052ffdc  8b08                 mov ecx, dword ptr [eax]
// 0052ffde  c6016f               mov byte ptr [ecx], 0x6f
// 0052ffe1  ff00                 inc dword ptr [eax]
// 0052ffe3  017804               add dword ptr [eax + 4], edi
// 0052ffe6  751c                 jne 0x530004
// 0052ffe8  8b500c               mov edx, dword ptr [eax + 0xc]
// 0052ffeb  56                   push esi
// 0052ffec  ffd2                 call edx
// 0052ffee  83c404               add esp, 4
// 0052fff1  84c0                 test al, al
// 0052fff3  750f                 jne 0x530004
// 0052fff5  8b06                 mov eax, dword ptr [esi]
// 0052fff7  896814               mov dword ptr [eax + 0x14], ebp
// 0052fffa  8b0e                 mov ecx, dword ptr [esi]
// 0052fffc  8b11                 mov edx, dword ptr [ecx]
// 0052fffe  56                   push esi
// 0052ffff  ffd2                 call edx
// 00530001  83c404               add esp, 4
// 00530004  8b4618               mov eax, dword ptr [esi + 0x18]
// 00530007  8b08                 mov ecx, dword ptr [eax]
// 00530009  c60162               mov byte ptr [ecx], 0x62
// 0053000c  ff00                 inc dword ptr [eax]
// 0053000e  017804               add dword ptr [eax + 4], edi
// 00530011  751c                 jne 0x53002f
// 00530013  8b500c               mov edx, dword ptr [eax + 0xc]
// 00530016  56                   push esi
// 00530017  ffd2                 call edx
// 00530019  83c404               add esp, 4
// 0053001c  84c0                 test al, al
// 0053001e  750f                 jne 0x53002f
// 00530020  8b06                 mov eax, dword ptr [esi]
// 00530022  896814               mov dword ptr [eax + 0x14], ebp
// 00530025  8b0e                 mov ecx, dword ptr [esi]
// 00530027  8b11                 mov edx, dword ptr [ecx]
// 00530029  56                   push esi
// 0053002a  ffd2                 call edx
// 0053002c  83c404               add esp, 4
// 0053002f  8b4618               mov eax, dword ptr [esi + 0x18]
// 00530032  8b08                 mov ecx, dword ptr [eax]
// 00530034  c60165               mov byte ptr [ecx], 0x65
// 00530037  ff00                 inc dword ptr [eax]
// 00530039  017804               add dword ptr [eax + 4], edi
// 0053003c  751c                 jne 0x53005a
// 0053003e  8b500c               mov edx, dword ptr [eax + 0xc]
// 00530041  56                   push esi
// 00530042  ffd2                 call edx
// 00530044  83c404               add esp, 4
// 00530047  84c0                 test al, al
// 00530049  750f                 jne 0x53005a
// 0053004b  8b06                 mov eax, dword ptr [esi]
// 0053004d  896814               mov dword ptr [eax + 0x14], ebp
// 00530050  8b0e                 mov ecx, dword ptr [esi]
// 00530052  8b11                 mov edx, dword ptr [ecx]
// 00530054  56                   push esi
// 00530055  ffd2                 call edx
// 00530057  83c404               add esp, 4
// 0053005a  bb64000000           mov ebx, 0x64
// 0053005f  e80cf6ffff           call 0x52f670
// 00530064  33db                 xor ebx, ebx
// 00530066  e805f6ffff           call 0x52f670
// 0053006b  e800f6ffff           call 0x52f670
// 00530070  8b4640               mov eax, dword ptr [esi + 0x40]
// 00530073  83e803               sub eax, 3
// 00530076  7413                 je 0x53008b
// 00530078  83e802               sub eax, 2
// 0053007b  8b4618               mov eax, dword ptr [esi + 0x18]
// 0053007e  8b08                 mov ecx, dword ptr [eax]
// 00530080  7404                 je 0x530086
// 00530082  8819                 mov byte ptr [ecx], bl
// 00530084  eb0d                 jmp 0x530093
// 00530086  c60102               mov byte ptr [ecx], 2
// 00530089  eb08                 jmp 0x530093
// 0053008b  8b4618               mov eax, dword ptr [esi + 0x18]
// 0053008e  8b08                 mov ecx, dword ptr [eax]
// 00530090  c60101               mov byte ptr [ecx], 1
// 00530093  ff00                 inc dword ptr [eax]
// 00530095  017804               add dword ptr [eax + 4], edi
// 00530098  751c                 jne 0x5300b6
// 0053009a  8b500c               mov edx, dword ptr [eax + 0xc]
// 0053009d  56                   push esi
// 0053009e  ffd2                 call edx
// 005300a0  83c404               add esp, 4
// 005300a3  84c0                 test al, al
// 005300a5  750f                 jne 0x5300b6
// 005300a7  8b06                 mov eax, dword ptr [esi]
// 005300a9  896814               mov dword ptr [eax + 0x14], ebp
// 005300ac  8b0e                 mov ecx, dword ptr [esi]
// 005300ae  8b11                 mov edx, dword ptr [ecx]
// 005300b0  56                   push esi
// 005300b1  ffd2                 call edx
// 005300b3  83c404               add esp, 4
// 005300b6  5f                   pop edi
// 005300b7  5e                   pop esi
// 005300b8  5d                   pop ebp
// 005300b9  5b                   pop ebx
// 005300ba  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_adobe_app14)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
